/* Generated code for Python module 'urllib3$util$url'
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



/* The "module_urllib3$util$url" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$url;
PyDictObject *moduledict_urllib3$util$url;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_str_plain___new__;
PyObject *const_str_plain_host;
PyObject *const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c;
PyObject *const_str_plain_query;
PyObject *const_str_chr_63;
PyObject *const_str_digest_eee64e928d1d5bb591f23189f7760b5c;
PyObject *const_str_plain_auth;
PyObject *const_str_plain_netloc;
PyObject *const_str_chr_64;
PyObject *const_str_digest_56b417e840320c395c08a9bd42671139;
PyObject *const_str_plain_port;
PyObject *const_str_chr_58;
PyObject *const_str_digest_236a74b8daaa75962e98c9f2472ef238;
PyObject *const_str_digest_a05fa8f67e9c342eb59afe566750507b;
PyObject *const_str_chr_35;
PyObject *const_str_digest_0f499271aa73f3caa920de9d2cacaaba;
PyObject *const_str_plain_url;
PyObject *const_str_plain_to_str;
PyObject *const_str_plain__PERCENT_RE;
PyObject *const_str_plain_subn;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_35bba484bbb408557a5ead2b7cb211b4;
PyObject *const_str_plain_encode;
PyObject *const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple;
PyObject *const_str_plain_count;
PyObject *const_tuple_bytes_chr_37_tuple;
PyObject *const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e;
PyObject *const_bytes_chr_37;
PyObject *const_int_pos_128;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_encoded_component;
PyObject *const_str_plain_extend;
PyObject *const_slice_int_pos_2_none_none;
PyObject *const_str_plain_zfill;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_str_plain_upper;
PyObject *const_str_digest_e04463182c8587d07b7e2ce9414a6cd0;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_digest_7b79a8950d64155a442741f6cc8c809b;
PyObject *const_str_plain_output;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple;
PyObject *const_str_plain_append;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_str_plain__NORMALIZABLE_SCHEMES;
PyObject *const_str_plain__IPV6_ADDRZ_RE;
PyObject *const_str_plain_match;
PyObject *const_str_plain__ZONE_ID_RE;
PyObject *const_str_plain_search;
PyObject *const_str_plain_span;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple;
PyObject *const_str_digest_d4d95c263c86f9556159c4b2ca5d6780;
PyObject *const_slice_int_pos_3_none_none;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain__encode_invalid_chars;
PyObject *const_str_plain__UNRESERVED_CHARS;
PyObject *const_str_chr_37;
PyObject *const_str_plain__IPV4_RE;
PyObject *const_bytes_chr_46;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain__idna_encode;
PyObject *const_str_plain_isascii;
PyObject *const_str_plain_idna;
PyObject *const_str_plain_LocationParseError;
PyObject *const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple;
PyObject *const_tuple_true_true_tuple;
PyObject *const_tuple_str_plain_strict_str_plain_std3_rules_tuple;
PyObject *const_str_plain_IDNAError;
PyObject *const_str_digest_009752e9d152fbf271544e78e7a8bee3;
PyObject *const_str_digest_bc152e222111272c162bcf54ff1ba047;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain__TARGET_RE;
PyObject *const_str_digest_217c0a18bc835487db24f97e53da5076;
PyObject *const_str_plain_groups;
PyObject *const_str_plain__PATH_CHARS;
PyObject *const_str_plain__QUERY_CHARS;
PyObject *const_str_digest_2bae53c8854d1d341b4773faec15848e;
PyObject *const_str_plain_Url;
PyObject *const_str_plain__SCHEME_RE;
PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
PyObject *const_str_plain__URI_RE;
PyObject *const_str_plain_rpartition;
PyObject *const_tuple_str_chr_64_tuple;
PyObject *const_str_plain__HOST_PORT_RE;
PyObject *const_str_plain__USERINFO_CHARS;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_int_pos_65535;
PyObject *const_str_plain__normalize_host;
PyObject *const_str_plain_scheme;
PyObject *const_str_plain__remove_path_dot_segments;
PyObject *const_str_plain__FRAGMENT_CHARS;
PyObject *const_tuple_type_ValueError_type_AttributeError_tuple;
PyObject *const_str_plain_port_int;
PyObject *const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple;
PyObject *const_str_digest_dceaaf054c60480723cf0dca67040848;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_re;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_LocationParseError_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_util;
PyObject *const_tuple_str_plain_to_str_tuple;
PyObject *const_tuple_str_plain_http_str_plain_https_none_tuple;
PyObject *const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple;
PyObject *const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple;
PyObject *const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e;
PyObject *const_str_plain_UNICODE;
PyObject *const_str_plain_DOTALL;
PyObject *const_str_digest_1826b28c6860a07db9041706aee97be0;
PyObject *const_str_plain__IPV4_PAT;
PyObject *const_str_digest_f56592be3c4b72ed57ac76571250b6e0;
PyObject *const_str_plain__HEX_PAT;
PyObject *const_str_digest_5c6a13c7a87c0f009723bae63b328c57;
PyObject *const_tuple_str_plain_hex_str_plain_ipv4_tuple;
PyObject *const_str_plain__LS32_PAT;
PyObject *const_str_plain_hex;
PyObject *const_str_plain_ls32;
PyObject *const_str_plain__subs;
PyObject *const_list_ae218dac465ffd29a1590e54ba0330fa_list;
PyObject *const_str_plain__variations;
PyObject *const_str_digest_5392fbc9acf6cf66badba51f368ac5a7;
PyObject *const_str_plain__UNRESERVED_PAT;
PyObject *const_str_digest_c64595dbb448219932b659de56da4f30;
PyObject *const_str_chr_124;
PyObject *const_str_chr_41;
PyObject *const_str_plain__IPV6_PAT;
PyObject *const_str_digest_1a37f630533acb99bcd4d2571342c253;
PyObject *const_str_digest_893fe2b0635ac22bae10876914286bf9;
PyObject *const_str_plain__ZONE_ID_PAT;
PyObject *const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3;
PyObject *const_str_digest_c412f93a6e1f91caf77c0a410b265bf2;
PyObject *const_str_plain__IPV6_ADDRZ_PAT;
PyObject *const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f;
PyObject *const_str_plain__REG_NAME_PAT;
PyObject *const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple;
PyObject *const_str_chr_94;
PyObject *const_str_chr_36;
PyObject *const_str_plain__IPV6_RE;
PyObject *const_slice_int_pos_2_int_neg_2_none;
PyObject *const_str_plain__BRACELESS_IPV6_ADDRZ_RE;
PyObject *const_str_chr_40;
PyObject *const_str_digest_d7d843a06233e3f568e27f38bb8d7b08;
PyObject *const_str_digest_c61e7bf435c0f29154c94faf76a898d9;
PyObject *const_str_plain__HOST_PORT_PAT;
PyObject *const_set_53c45e97258f633aa3f886c742860f33;
PyObject *const_set_5a2bee9af70a72b54f166fa336f500da;
PyObject *const_str_plain__SUB_DELIM_CHARS;
PyObject *const_set_bcce24f0c8d079704fc70e247346cc7b;
PyObject *const_set_c7ff68bd4b749917aca63d91185114e2;
PyObject *const_set_ce2337c37dea2cd674cc672020e00412;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_fragment;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608;
PyObject *const_str_digest_6832311759b3e442c157edeb3453516f;
PyObject *const_int_pos_80;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
PyObject *const_dict_141b4456da149c4e2b447d2981b7e875;
PyObject *const_str_digest_d059371e62041157c75568892a4792b2;
PyObject *const_str_plain_property;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_plain_hostname;
PyObject *const_str_digest_d503b56d297494d3676c16d8414f11cd;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain_request_uri;
PyObject *const_str_digest_b8db79b9d0912cab551b32203f01865e;
PyObject *const_str_plain_authority;
PyObject *const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a;
PyObject *const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98;
PyObject *const_str_digest_67a7add68e3824f4c255c17aad8377c0;
PyObject *const_str_plain___str__;
PyObject *const_str_digest_ba44c1ca6ead3bd22179c5b60b235495;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_overload;
PyObject *const_dict_e76054befe70e533528a2eb21f09d07a;
PyObject *const_dict_ee4b4b0ecc14f28f472dcd420a909d2d;
PyObject *const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936;
PyObject *const_dict_22cacb1771d5ae388aa90a755d3c3678;
PyObject *const_dict_01380e6fa1b133bf639b03144c44354f;
PyObject *const_dict_e4a8086e5367b0bb6fd855de17493b98;
PyObject *const_dict_ecc03db4bb21f8563243a456a7033fb7;
PyObject *const_dict_22aeb36c3603aeb0781b2ad0d66736ef;
PyObject *const_dict_dd3e931f637f4cf6833fd2791b55e5e3;
PyObject *const_str_plain__encode_target;
PyObject *const_dict_e1d9687ff149fd9dc32e97c9b705edce;
PyObject *const_str_plain_parse_url;
PyObject *const_str_digest_dd838215e36fed4c181b0929ebe2299a;
PyObject *const_tuple_str_plain_match_tuple;
PyObject *const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_component_str_plain_allowed_chars_tuple;
PyObject *const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple;
PyObject *const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple;
PyObject *const_tuple_str_plain_name_str_plain_idna_tuple;
PyObject *const_tuple_str_plain_host_str_plain_scheme_tuple;
PyObject *const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple;
PyObject *const_tuple_979cd277397414b24e2c33e96d8690de_tuple;
PyObject *const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple;
PyObject *const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple;
PyObject *const_tuple_str_plain_self_str_plain_uri_tuple;
PyObject *const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[216];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.url"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 216) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 216 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.url"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_slash_tuple", mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___new__", mod_consts.const_str_plain___new__);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c", mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_query", mod_consts.const_str_plain_query);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_query);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_63", mod_consts.const_str_chr_63);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c", mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auth", mod_consts.const_str_plain_auth);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_netloc", mod_consts.const_str_plain_netloc);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_netloc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_64", mod_consts.const_str_chr_64);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_chr_64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139", mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238", mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b", mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_35", mod_consts.const_str_chr_35);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_chr_35);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba", mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_str", mod_consts.const_str_plain_to_str);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_str);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PERCENT_RE", mod_consts.const_str_plain__PERCENT_RE);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__PERCENT_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subn", mod_consts.const_str_plain_subn);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_subn);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4", mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple", mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_count", mod_consts.const_str_plain_count);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_chr_37_tuple", mod_consts.const_tuple_bytes_chr_37_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_37_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e", mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_37", mod_consts.const_bytes_chr_37);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_37);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoded_component", mod_consts.const_str_plain_encoded_component);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoded_component);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extend", mod_consts.const_str_plain_extend);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_extend);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_2_none_none", mod_consts.const_slice_int_pos_2_none_none);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_zfill", mod_consts.const_str_plain_zfill);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_zfill);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0", mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group", mod_consts.const_str_plain_group);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b", mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_output", mod_consts.const_str_plain_output);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_output);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_endswith", mod_consts.const_str_plain_endswith);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple", mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_empty_tuple", mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NORMALIZABLE_SCHEMES", mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_ADDRZ_RE", mod_consts.const_str_plain__IPV6_ADDRZ_RE);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_ADDRZ_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ZONE_ID_RE", mod_consts.const_str_plain__ZONE_ID_RE);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__ZONE_ID_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_search", mod_consts.const_str_plain_search);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_span", mod_consts.const_str_plain_span);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_span);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple", mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780", mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_3_none_none", mod_consts.const_slice_int_pos_3_none_none);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_3_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encode_invalid_chars", mod_consts.const_str_plain__encode_invalid_chars);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_invalid_chars);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNRESERVED_CHARS", mod_consts.const_str_plain__UNRESERVED_CHARS);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__UNRESERVED_CHARS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_37", mod_consts.const_str_chr_37);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_chr_37);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV4_RE", mod_consts.const_str_plain__IPV4_RE);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__IPV4_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_46", mod_consts.const_bytes_chr_46);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__idna_encode", mod_consts.const_str_plain__idna_encode);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__idna_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isascii", mod_consts.const_str_plain_isascii);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_isascii);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_idna", mod_consts.const_str_plain_idna);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_idna);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocationParseError", mod_consts.const_str_plain_LocationParseError);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocationParseError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple", mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_true_tuple", mod_consts.const_tuple_true_true_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple", mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IDNAError", mod_consts.const_str_plain_IDNAError);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_IDNAError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3", mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047", mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TARGET_RE", mod_consts.const_str_plain__TARGET_RE);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain__TARGET_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076", mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_groups", mod_consts.const_str_plain_groups);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_groups);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PATH_CHARS", mod_consts.const_str_plain__PATH_CHARS);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__PATH_CHARS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__QUERY_CHARS", mod_consts.const_str_plain__QUERY_CHARS);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__QUERY_CHARS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e", mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Url", mod_consts.const_str_plain_Url);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_Url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SCHEME_RE", mod_consts.const_str_plain__SCHEME_RE);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__SCHEME_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360", mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__URI_RE", mod_consts.const_str_plain__URI_RE);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__URI_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rpartition", mod_consts.const_str_plain_rpartition);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_64_tuple", mod_consts.const_tuple_str_chr_64_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_64_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOST_PORT_RE", mod_consts.const_str_plain__HOST_PORT_RE);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__HOST_PORT_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__USERINFO_CHARS", mod_consts.const_str_plain__USERINFO_CHARS);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__USERINFO_CHARS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65535", mod_consts.const_int_pos_65535);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_pos_65535);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__normalize_host", mod_consts.const_str_plain__normalize_host);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__normalize_host);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scheme", mod_consts.const_str_plain_scheme);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_scheme);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__remove_path_dot_segments", mod_consts.const_str_plain__remove_path_dot_segments);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__remove_path_dot_segments);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FRAGMENT_CHARS", mod_consts.const_str_plain__FRAGMENT_CHARS);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__FRAGMENT_CHARS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple", mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port_int", mod_consts.const_str_plain_port_int);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_port_int);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple", mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848", mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LocationParseError_tuple", mod_consts.const_tuple_str_plain_LocationParseError_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LocationParseError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_util);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_str_tuple", mod_consts.const_tuple_str_plain_to_str_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_str_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple", mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple", mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple", mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e", mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE", mod_consts.const_str_plain_UNICODE);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOTALL", mod_consts.const_str_plain_DOTALL);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0", mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV4_PAT", mod_consts.const_str_plain__IPV4_PAT);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__IPV4_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0", mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HEX_PAT", mod_consts.const_str_plain__HEX_PAT);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain__HEX_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57", mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple", mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LS32_PAT", mod_consts.const_str_plain__LS32_PAT);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain__LS32_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_hex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ls32", mod_consts.const_str_plain_ls32);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_ls32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__subs", mod_consts.const_str_plain__subs);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain__subs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list", mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__variations", mod_consts.const_str_plain__variations);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain__variations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7", mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNRESERVED_PAT", mod_consts.const_str_plain__UNRESERVED_PAT);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__UNRESERVED_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30", mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_124", mod_consts.const_str_chr_124);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_chr_124);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_PAT", mod_consts.const_str_plain__IPV6_PAT);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253", mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9", mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ZONE_ID_PAT", mod_consts.const_str_plain__ZONE_ID_PAT);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain__ZONE_ID_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3", mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2", mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_ADDRZ_PAT", mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f", mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__REG_NAME_PAT", mod_consts.const_str_plain__REG_NAME_PAT);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__REG_NAME_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple", mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_94", mod_consts.const_str_chr_94);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_chr_94);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_36", mod_consts.const_str_chr_36);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_chr_36);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_RE", mod_consts.const_str_plain__IPV6_RE);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_2_int_neg_2_none", mod_consts.const_slice_int_pos_2_int_neg_2_none);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_int_neg_2_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE", mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_40", mod_consts.const_str_chr_40);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_chr_40);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08", mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9", mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOST_PORT_PAT", mod_consts.const_str_plain__HOST_PORT_PAT);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain__HOST_PORT_PAT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_53c45e97258f633aa3f886c742860f33", mod_consts.const_set_53c45e97258f633aa3f886c742860f33);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_set_53c45e97258f633aa3f886c742860f33);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da", mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SUB_DELIM_CHARS", mod_consts.const_str_plain__SUB_DELIM_CHARS);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain__SUB_DELIM_CHARS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b", mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2", mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_ce2337c37dea2cd674cc672020e00412", mod_consts.const_set_ce2337c37dea2cd674cc672020e00412);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_set_ce2337c37dea2cd674cc672020e00412);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Optional", mod_consts.const_str_plain_Optional);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fragment", mod_consts.const_str_plain_fragment);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_fragment);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608", mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f", mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_80", mod_consts.const_int_pos_80);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_80);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_none_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875", mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d059371e62041157c75568892a4792b2", mod_consts.const_str_digest_d059371e62041157c75568892a4792b2);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_d059371e62041157c75568892a4792b2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071", mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hostname", mod_consts.const_str_plain_hostname);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd", mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_uri", mod_consts.const_str_plain_request_uri);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_uri);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e", mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_authority", mod_consts.const_str_plain_authority);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_authority);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a", mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98", mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0", mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain___str__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495", mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a", mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d", mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936", mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678", mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f", mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98", mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7", mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef", mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3", mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encode_target", mod_consts.const_str_plain__encode_target);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_target);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce", mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_url", mod_consts.const_str_plain_parse_url);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a", mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_match_tuple", mod_consts.const_tuple_str_plain_match_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_match_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819", mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple", mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple", mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple", mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple", mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple", mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple", mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple", mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple", mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple", mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple", mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple", mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple", mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple);
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
void checkModuleConstants_urllib3$util$url(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_slash_tuple", mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple) && "mod_consts.const_tuple_str_slash_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___new__", mod_consts.const_str_plain___new__);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__) && "mod_consts.const_str_plain___new__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_host", mod_consts.const_str_plain_host);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_host) && "mod_consts.const_str_plain_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c", mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c) && "mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_query", mod_consts.const_str_plain_query);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_query) && "mod_consts.const_str_plain_query");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_63", mod_consts.const_str_chr_63);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_chr_63) && "mod_consts.const_str_chr_63");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c", mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c) && "mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auth", mod_consts.const_str_plain_auth);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth) && "mod_consts.const_str_plain_auth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_netloc", mod_consts.const_str_plain_netloc);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_netloc) && "mod_consts.const_str_plain_netloc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_64", mod_consts.const_str_chr_64);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_chr_64) && "mod_consts.const_str_chr_64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139", mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139) && "mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port", mod_consts.const_str_plain_port);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_port) && "mod_consts.const_str_plain_port");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_58", mod_consts.const_str_chr_58);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_chr_58) && "mod_consts.const_str_chr_58");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238", mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238) && "mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b", mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b) && "mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_35", mod_consts.const_str_chr_35);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_chr_35) && "mod_consts.const_str_chr_35");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba", mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba) && "mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_url", mod_consts.const_str_plain_url);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_url) && "mod_consts.const_str_plain_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_str", mod_consts.const_str_plain_to_str);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_str) && "mod_consts.const_str_plain_to_str");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PERCENT_RE", mod_consts.const_str_plain__PERCENT_RE);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__PERCENT_RE) && "mod_consts.const_str_plain__PERCENT_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_subn", mod_consts.const_str_plain_subn);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_subn) && "mod_consts.const_str_plain_subn");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4", mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4) && "mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple", mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple) && "mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_count", mod_consts.const_str_plain_count);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_count) && "mod_consts.const_str_plain_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bytes_chr_37_tuple", mod_consts.const_tuple_bytes_chr_37_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_37_tuple) && "mod_consts.const_tuple_bytes_chr_37_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e", mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e) && "mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_37", mod_consts.const_bytes_chr_37);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_37) && "mod_consts.const_bytes_chr_37");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_128) && "mod_consts.const_int_pos_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoded_component", mod_consts.const_str_plain_encoded_component);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoded_component) && "mod_consts.const_str_plain_encoded_component");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extend", mod_consts.const_str_plain_extend);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_extend) && "mod_consts.const_str_plain_extend");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_2_none_none", mod_consts.const_slice_int_pos_2_none_none);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_none_none) && "mod_consts.const_slice_int_pos_2_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_zfill", mod_consts.const_str_plain_zfill);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_zfill) && "mod_consts.const_str_plain_zfill");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple) && "mod_consts.const_tuple_int_pos_2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0", mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0) && "mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group", mod_consts.const_str_plain_group);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_group) && "mod_consts.const_str_plain_group");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b", mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b) && "mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_output", mod_consts.const_str_plain_output);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_output) && "mod_consts.const_str_plain_output");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_endswith", mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith) && "mod_consts.const_str_plain_endswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple", mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple) && "mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_empty_tuple", mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple) && "mod_consts.const_tuple_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__NORMALIZABLE_SCHEMES", mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__NORMALIZABLE_SCHEMES) && "mod_consts.const_str_plain__NORMALIZABLE_SCHEMES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_ADDRZ_RE", mod_consts.const_str_plain__IPV6_ADDRZ_RE);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_ADDRZ_RE) && "mod_consts.const_str_plain__IPV6_ADDRZ_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_match", mod_consts.const_str_plain_match);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_match) && "mod_consts.const_str_plain_match");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ZONE_ID_RE", mod_consts.const_str_plain__ZONE_ID_RE);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__ZONE_ID_RE) && "mod_consts.const_str_plain__ZONE_ID_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_search", mod_consts.const_str_plain_search);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_search) && "mod_consts.const_str_plain_search");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_span", mod_consts.const_str_plain_span);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_span) && "mod_consts.const_str_plain_span");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_tuple", mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple) && "mod_consts.const_tuple_int_pos_1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple", mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple) && "mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780", mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780) && "mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_3_none_none", mod_consts.const_slice_int_pos_3_none_none);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_3_none_none) && "mod_consts.const_slice_int_pos_3_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none) && "mod_consts.const_slice_int_pos_1_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encode_invalid_chars", mod_consts.const_str_plain__encode_invalid_chars);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_invalid_chars) && "mod_consts.const_str_plain__encode_invalid_chars");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNRESERVED_CHARS", mod_consts.const_str_plain__UNRESERVED_CHARS);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__UNRESERVED_CHARS) && "mod_consts.const_str_plain__UNRESERVED_CHARS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_37", mod_consts.const_str_chr_37);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_chr_37) && "mod_consts.const_str_chr_37");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV4_RE", mod_consts.const_str_plain__IPV4_RE);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__IPV4_RE) && "mod_consts.const_str_plain__IPV4_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_46", mod_consts.const_bytes_chr_46);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_46) && "mod_consts.const_bytes_chr_46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_dot_tuple", mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple) && "mod_consts.const_tuple_str_dot_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__idna_encode", mod_consts.const_str_plain__idna_encode);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__idna_encode) && "mod_consts.const_str_plain__idna_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isascii", mod_consts.const_str_plain_isascii);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_isascii) && "mod_consts.const_str_plain_isascii");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_idna", mod_consts.const_str_plain_idna);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_idna) && "mod_consts.const_str_plain_idna");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocationParseError", mod_consts.const_str_plain_LocationParseError);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocationParseError) && "mod_consts.const_str_plain_LocationParseError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple", mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple) && "mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_true_tuple", mod_consts.const_tuple_true_true_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_true_true_tuple) && "mod_consts.const_tuple_true_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple", mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple) && "mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IDNAError", mod_consts.const_str_plain_IDNAError);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_IDNAError) && "mod_consts.const_str_plain_IDNAError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3", mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3) && "mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047", mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047) && "mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple) && "mod_consts.const_tuple_str_plain_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TARGET_RE", mod_consts.const_str_plain__TARGET_RE);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain__TARGET_RE) && "mod_consts.const_str_plain__TARGET_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076", mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076) && "mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_groups", mod_consts.const_str_plain_groups);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_groups) && "mod_consts.const_str_plain_groups");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PATH_CHARS", mod_consts.const_str_plain__PATH_CHARS);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__PATH_CHARS) && "mod_consts.const_str_plain__PATH_CHARS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__QUERY_CHARS", mod_consts.const_str_plain__QUERY_CHARS);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__QUERY_CHARS) && "mod_consts.const_str_plain__QUERY_CHARS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e", mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e) && "mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Url", mod_consts.const_str_plain_Url);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_Url) && "mod_consts.const_str_plain_Url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SCHEME_RE", mod_consts.const_str_plain__SCHEME_RE);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__SCHEME_RE) && "mod_consts.const_str_plain__SCHEME_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360", mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360) && "mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__URI_RE", mod_consts.const_str_plain__URI_RE);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__URI_RE) && "mod_consts.const_str_plain__URI_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rpartition", mod_consts.const_str_plain_rpartition);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_rpartition) && "mod_consts.const_str_plain_rpartition");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_64_tuple", mod_consts.const_tuple_str_chr_64_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_64_tuple) && "mod_consts.const_tuple_str_chr_64_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOST_PORT_RE", mod_consts.const_str_plain__HOST_PORT_RE);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__HOST_PORT_RE) && "mod_consts.const_str_plain__HOST_PORT_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__USERINFO_CHARS", mod_consts.const_str_plain__USERINFO_CHARS);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__USERINFO_CHARS) && "mod_consts.const_str_plain__USERINFO_CHARS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65535", mod_consts.const_int_pos_65535);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_pos_65535) && "mod_consts.const_int_pos_65535");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__normalize_host", mod_consts.const_str_plain__normalize_host);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__normalize_host) && "mod_consts.const_str_plain__normalize_host");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scheme", mod_consts.const_str_plain_scheme);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_scheme) && "mod_consts.const_str_plain_scheme");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__remove_path_dot_segments", mod_consts.const_str_plain__remove_path_dot_segments);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__remove_path_dot_segments) && "mod_consts.const_str_plain__remove_path_dot_segments");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FRAGMENT_CHARS", mod_consts.const_str_plain__FRAGMENT_CHARS);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__FRAGMENT_CHARS) && "mod_consts.const_str_plain__FRAGMENT_CHARS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple", mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple) && "mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_port_int", mod_consts.const_str_plain_port_int);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_port_int) && "mod_consts.const_str_plain_port_int");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple", mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple) && "mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848", mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848) && "mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_LocationParseError_tuple", mod_consts.const_tuple_str_plain_LocationParseError_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LocationParseError_tuple) && "mod_consts.const_tuple_str_plain_LocationParseError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_util) && "mod_consts.const_str_plain_util");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_str_tuple", mod_consts.const_tuple_str_plain_to_str_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_str_tuple) && "mod_consts.const_tuple_str_plain_to_str_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple", mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple) && "mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple", mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple) && "mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple", mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple) && "mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e", mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e) && "mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE", mod_consts.const_str_plain_UNICODE);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE) && "mod_consts.const_str_plain_UNICODE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DOTALL", mod_consts.const_str_plain_DOTALL);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_DOTALL) && "mod_consts.const_str_plain_DOTALL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0", mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0) && "mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV4_PAT", mod_consts.const_str_plain__IPV4_PAT);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__IPV4_PAT) && "mod_consts.const_str_plain__IPV4_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0", mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0) && "mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HEX_PAT", mod_consts.const_str_plain__HEX_PAT);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain__HEX_PAT) && "mod_consts.const_str_plain__HEX_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57", mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57) && "mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple", mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple) && "mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LS32_PAT", mod_consts.const_str_plain__LS32_PAT);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain__LS32_PAT) && "mod_consts.const_str_plain__LS32_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_hex) && "mod_consts.const_str_plain_hex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ls32", mod_consts.const_str_plain_ls32);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_ls32) && "mod_consts.const_str_plain_ls32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__subs", mod_consts.const_str_plain__subs);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain__subs) && "mod_consts.const_str_plain__subs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list", mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list) && "mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__variations", mod_consts.const_str_plain__variations);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain__variations) && "mod_consts.const_str_plain__variations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7", mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7) && "mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNRESERVED_PAT", mod_consts.const_str_plain__UNRESERVED_PAT);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__UNRESERVED_PAT) && "mod_consts.const_str_plain__UNRESERVED_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30", mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30) && "mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_124", mod_consts.const_str_chr_124);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_chr_124) && "mod_consts.const_str_chr_124");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_41", mod_consts.const_str_chr_41);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_chr_41) && "mod_consts.const_str_chr_41");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_PAT", mod_consts.const_str_plain__IPV6_PAT);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_PAT) && "mod_consts.const_str_plain__IPV6_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253", mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253) && "mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9", mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9) && "mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ZONE_ID_PAT", mod_consts.const_str_plain__ZONE_ID_PAT);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain__ZONE_ID_PAT) && "mod_consts.const_str_plain__ZONE_ID_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3", mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3) && "mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2", mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2) && "mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_ADDRZ_PAT", mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_ADDRZ_PAT) && "mod_consts.const_str_plain__IPV6_ADDRZ_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f", mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f) && "mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__REG_NAME_PAT", mod_consts.const_str_plain__REG_NAME_PAT);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__REG_NAME_PAT) && "mod_consts.const_str_plain__REG_NAME_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple", mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple) && "mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_94", mod_consts.const_str_chr_94);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_chr_94) && "mod_consts.const_str_chr_94");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_36", mod_consts.const_str_chr_36);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_chr_36) && "mod_consts.const_str_chr_36");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__IPV6_RE", mod_consts.const_str_plain__IPV6_RE);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain__IPV6_RE) && "mod_consts.const_str_plain__IPV6_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_2_int_neg_2_none", mod_consts.const_slice_int_pos_2_int_neg_2_none);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_2_int_neg_2_none) && "mod_consts.const_slice_int_pos_2_int_neg_2_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE", mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE) && "mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_40", mod_consts.const_str_chr_40);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_chr_40) && "mod_consts.const_str_chr_40");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08", mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08) && "mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9", mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9) && "mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HOST_PORT_PAT", mod_consts.const_str_plain__HOST_PORT_PAT);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain__HOST_PORT_PAT) && "mod_consts.const_str_plain__HOST_PORT_PAT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_53c45e97258f633aa3f886c742860f33", mod_consts.const_set_53c45e97258f633aa3f886c742860f33);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_set_53c45e97258f633aa3f886c742860f33) && "mod_consts.const_set_53c45e97258f633aa3f886c742860f33");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da", mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da) && "mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SUB_DELIM_CHARS", mod_consts.const_str_plain__SUB_DELIM_CHARS);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain__SUB_DELIM_CHARS) && "mod_consts.const_str_plain__SUB_DELIM_CHARS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b", mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b) && "mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2", mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2) && "mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_ce2337c37dea2cd674cc672020e00412", mod_consts.const_set_ce2337c37dea2cd674cc672020e00412);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_set_ce2337c37dea2cd674cc672020e00412) && "mod_consts.const_set_ce2337c37dea2cd674cc672020e00412");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple) && "mod_consts.const_str_plain_NamedTuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Optional", mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional) && "mod_consts.const_str_plain_Optional");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fragment", mod_consts.const_str_plain_fragment);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_fragment) && "mod_consts.const_str_plain_fragment");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608", mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608) && "mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f", mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f) && "mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_80", mod_consts.const_int_pos_80);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_80) && "mod_consts.const_int_pos_80");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_none_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_none_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875", mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875) && "mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d059371e62041157c75568892a4792b2", mod_consts.const_str_digest_d059371e62041157c75568892a4792b2);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_d059371e62041157c75568892a4792b2) && "mod_consts.const_str_digest_d059371e62041157c75568892a4792b2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_property) && "mod_consts.const_str_plain_property");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071", mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071) && "mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hostname", mod_consts.const_str_plain_hostname);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname) && "mod_consts.const_str_plain_hostname");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd", mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd) && "mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b) && "mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_uri", mod_consts.const_str_plain_request_uri);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_uri) && "mod_consts.const_str_plain_request_uri");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e", mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e) && "mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_authority", mod_consts.const_str_plain_authority);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_authority) && "mod_consts.const_str_plain_authority");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a", mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a) && "mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98", mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98) && "mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0", mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0) && "mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___str__", mod_consts.const_str_plain___str__);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain___str__) && "mod_consts.const_str_plain___str__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495", mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495) && "mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_overload", mod_consts.const_str_plain_overload);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload) && "mod_consts.const_str_plain_overload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a", mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a) && "mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d", mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d) && "mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936", mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936) && "mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678", mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678) && "mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f", mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f) && "mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98", mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98) && "mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7", mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7) && "mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef", mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef) && "mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3", mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3) && "mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encode_target", mod_consts.const_str_plain__encode_target);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_target) && "mod_consts.const_str_plain__encode_target");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce", mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce) && "mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_parse_url", mod_consts.const_str_plain_parse_url);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_url) && "mod_consts.const_str_plain_parse_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a", mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a) && "mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_match_tuple", mod_consts.const_tuple_str_plain_match_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_match_tuple) && "mod_consts.const_tuple_str_plain_match_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819", mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819) && "mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple", mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple) && "mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple", mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple) && "mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple", mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple) && "mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple", mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple) && "mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple", mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple) && "mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple", mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple) && "mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple", mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple) && "mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple", mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple) && "mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple", mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple", mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple) && "mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple", mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple", mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple) && "mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple");
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
static PyObject *module_var_accessor_urllib3$util$url$LocationParseError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$Url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_Url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_Url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_Url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Url);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_FRAGMENT_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__FRAGMENT_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FRAGMENT_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FRAGMENT_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FRAGMENT_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FRAGMENT_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__FRAGMENT_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__FRAGMENT_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FRAGMENT_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_HEX_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HEX_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEX_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEX_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEX_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEX_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HEX_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HEX_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HEX_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_HOST_PORT_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HOST_PORT_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HOST_PORT_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HOST_PORT_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HOST_PORT_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_HOST_PORT_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HOST_PORT_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HOST_PORT_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HOST_PORT_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HOST_PORT_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_IPV4_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV4_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV4_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV4_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV4_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_IPV4_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_IPV6_ADDRZ_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV6_ADDRZ_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV6_ADDRZ_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_IPV6_ADDRZ_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV6_ADDRZ_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV6_ADDRZ_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV6_ADDRZ_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV6_ADDRZ_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_IPV6_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV6_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV6_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__IPV6_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__IPV6_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_LS32_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__LS32_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LS32_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LS32_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LS32_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LS32_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__LS32_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__LS32_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LS32_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_NORMALIZABLE_SCHEMES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NORMALIZABLE_SCHEMES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NORMALIZABLE_SCHEMES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_PATH_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PATH_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PATH_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PATH_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PATH_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PATH_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PATH_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PATH_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PATH_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_PERCENT_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PERCENT_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PERCENT_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PERCENT_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PERCENT_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PERCENT_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PERCENT_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PERCENT_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PERCENT_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_QUERY_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__QUERY_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__QUERY_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__QUERY_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__QUERY_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__QUERY_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__QUERY_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__QUERY_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__QUERY_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_REG_NAME_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__REG_NAME_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REG_NAME_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REG_NAME_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__REG_NAME_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__REG_NAME_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__REG_NAME_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__REG_NAME_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__REG_NAME_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_SCHEME_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SCHEME_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SCHEME_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SCHEME_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SCHEME_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SCHEME_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SCHEME_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SCHEME_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SCHEME_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_SUB_DELIM_CHARS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SUB_DELIM_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SUB_DELIM_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SUB_DELIM_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SUB_DELIM_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SUB_DELIM_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SUB_DELIM_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SUB_DELIM_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SUB_DELIM_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_TARGET_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__TARGET_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TARGET_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TARGET_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TARGET_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TARGET_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__TARGET_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__TARGET_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TARGET_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_UNRESERVED_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNRESERVED_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNRESERVED_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNRESERVED_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNRESERVED_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_UNRESERVED_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNRESERVED_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNRESERVED_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNRESERVED_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNRESERVED_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_URI_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__URI_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__URI_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__URI_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__URI_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__URI_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__URI_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__URI_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__URI_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_USERINFO_CHARS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__USERINFO_CHARS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__USERINFO_CHARS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__USERINFO_CHARS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__USERINFO_CHARS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__USERINFO_CHARS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__USERINFO_CHARS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__USERINFO_CHARS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__USERINFO_CHARS);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_ZONE_ID_PAT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_PAT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ZONE_ID_PAT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ZONE_ID_PAT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ZONE_ID_PAT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ZONE_ID_PAT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_PAT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_PAT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_PAT);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_ZONE_ID_RE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_RE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ZONE_ID_RE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ZONE_ID_RE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ZONE_ID_RE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ZONE_ID_RE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_RE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_RE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_RE);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_encode_invalid_chars(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_invalid_chars);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__encode_invalid_chars);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__encode_invalid_chars, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__encode_invalid_chars);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__encode_invalid_chars, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_invalid_chars);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_invalid_chars);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_invalid_chars);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_idna_encode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__idna_encode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__idna_encode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__idna_encode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__idna_encode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__idna_encode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__idna_encode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__idna_encode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__idna_encode);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_normalize_host(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_host);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__normalize_host);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__normalize_host, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__normalize_host);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__normalize_host, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_host);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_host);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_host);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_remove_path_dot_segments(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_path_dot_segments);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__remove_path_dot_segments);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__remove_path_dot_segments, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__remove_path_dot_segments);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__remove_path_dot_segments, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_path_dot_segments);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_path_dot_segments);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_path_dot_segments);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_subs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__subs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__subs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__subs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__subs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__subs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__subs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__subs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__subs);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$_variations(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__variations);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__variations);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__variations, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__variations);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__variations, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__variations);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__variations);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__variations);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$re(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$url$to_str(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_to_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_to_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_to_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_str);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e1e15555e48706a5f6cdc00447aef224;
static PyCodeObject *code_objects_bbad885364f1a1ee8389133297c4a9fe;
static PyCodeObject *code_objects_07bf04305d6a00e02d7b646401461bd8;
static PyCodeObject *code_objects_e6b52bd8d03ff531332780a102e4caf3;
static PyCodeObject *code_objects_dec4e83062a40961698298ce1e26ea01;
static PyCodeObject *code_objects_bc495fdace6dd0f279cd825f3452be87;
static PyCodeObject *code_objects_e7231919cb5616d7d3a91b2c2ad82b57;
static PyCodeObject *code_objects_6027d03785e8522e58e8f49be38c3c93;
static PyCodeObject *code_objects_c4e14527f3020b305c1cbf0c0da93712;
static PyCodeObject *code_objects_22968d50e44b1b76a6fcaf8d0447a848;
static PyCodeObject *code_objects_11ddae64d02d791d99d96dbbcbf87cf1;
static PyCodeObject *code_objects_3acfc4b3deb9591f4dfb93100feba93a;
static PyCodeObject *code_objects_faa6ab7ac43f22b11d01eac57e48f4b9;
static PyCodeObject *code_objects_ce00dfd55d24c4d7b655fcd09bfcf3a5;
static PyCodeObject *code_objects_4573eba5641e2c0eb5532965e5c24972;
static PyCodeObject *code_objects_95e78ae9a3a80ae111e0ed47b3eab53d;
static PyCodeObject *code_objects_bc6072cff8b4eb309f1b0119a918611a;
static PyCodeObject *code_objects_c095dbe127b902b73e17d1723acea4c9;
static PyCodeObject *code_objects_faa8f2febe82b2f4b5e3bf53a20fb510;
static PyCodeObject *code_objects_3acc7d10c3b94a436a1bd69754068269;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dd838215e36fed4c181b0929ebe2299a); CHECK_OBJECT(module_filename_obj);
code_objects_e1e15555e48706a5f6cdc00447aef224 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4, mod_consts.const_tuple_str_plain_match_tuple, NULL, 1, 0, 0);
code_objects_bbad885364f1a1ee8389133297c4a9fe = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819, mod_consts.const_str_digest_8bedf24b0b7ebbf0d2d5d14d176c4819, NULL, NULL, 0, 0, 0);
code_objects_07bf04305d6a00e02d7b646401461bd8 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Url, mod_consts.const_str_plain_Url, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e6b52bd8d03ff531332780a102e4caf3 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___new__, mod_consts.const_str_digest_d059371e62041157c75568892a4792b2, mod_consts.const_tuple_a1d8d21a12c116634123e87ca50e0273_tuple, mod_consts.const_tuple_str_plain___class___tuple, 8, 0, 0);
code_objects_dec4e83062a40961698298ce1e26ea01 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___str__, mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bc495fdace6dd0f279cd825f3452be87 = MAKE_CODE_OBJECT(module_filename_obj, 214, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_invalid_chars, mod_consts.const_str_plain__encode_invalid_chars, mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple, NULL, 2, 0, 0);
code_objects_e7231919cb5616d7d3a91b2c2ad82b57 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_invalid_chars, mod_consts.const_str_plain__encode_invalid_chars, mod_consts.const_tuple_str_plain_component_str_plain_allowed_chars_tuple, NULL, 2, 0, 0);
code_objects_6027d03785e8522e58e8f49be38c3c93 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_invalid_chars, mod_consts.const_str_plain__encode_invalid_chars, mod_consts.const_tuple_e14d1dcffc10918775804d50f5dfebac_tuple, NULL, 2, 0, 0);
code_objects_c4e14527f3020b305c1cbf0c0da93712 = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encode_target, mod_consts.const_str_plain__encode_target, mod_consts.const_tuple_a0d9e441b7b28aba65ab79b1eae3f750_tuple, NULL, 1, 0, 0);
code_objects_22968d50e44b1b76a6fcaf8d0447a848 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__idna_encode, mod_consts.const_str_plain__idna_encode, mod_consts.const_tuple_str_plain_name_str_plain_idna_tuple, NULL, 1, 0, 0);
code_objects_11ddae64d02d791d99d96dbbcbf87cf1 = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__normalize_host, mod_consts.const_str_plain__normalize_host, mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple, NULL, 2, 0, 0);
code_objects_3acfc4b3deb9591f4dfb93100feba93a = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__normalize_host, mod_consts.const_str_plain__normalize_host, mod_consts.const_tuple_str_plain_host_str_plain_scheme_tuple, NULL, 2, 0, 0);
code_objects_faa6ab7ac43f22b11d01eac57e48f4b9 = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__normalize_host, mod_consts.const_str_plain__normalize_host, mod_consts.const_tuple_164b1be36b0caf21de1166ccd0ee2910_tuple, NULL, 2, 0, 0);
code_objects_ce00dfd55d24c4d7b655fcd09bfcf3a5 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__remove_path_dot_segments, mod_consts.const_str_plain__remove_path_dot_segments, mod_consts.const_tuple_979cd277397414b24e2c33e96d8690de_tuple, NULL, 1, 0, 0);
code_objects_4573eba5641e2c0eb5532965e5c24972 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_authority, mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a, mod_consts.const_tuple_str_plain_self_str_plain_userinfo_str_plain_netloc_tuple, NULL, 1, 0, 0);
code_objects_95e78ae9a3a80ae111e0ed47b3eab53d = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_hostname, mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bc6072cff8b4eb309f1b0119a918611a = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_netloc, mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c095dbe127b902b73e17d1723acea4c9 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_url, mod_consts.const_str_plain_parse_url, mod_consts.const_tuple_a7b1e83761a2ad1ec0916af9d2dd99a3_tuple, NULL, 1, 0, 0);
code_objects_faa8f2febe82b2f4b5e3bf53a20fb510 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request_uri, mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e, mod_consts.const_tuple_str_plain_self_str_plain_uri_tuple, NULL, 1, 0, 0);
code_objects_3acc7d10c3b94a436a1bd69754068269 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_url, mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0, mod_consts.const_tuple_90cea16c23d7b6fcb99d121c43520905_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__10__encode_invalid_chars(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__11__remove_path_dot_segments(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__12__normalize_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__13__normalize_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__14__normalize_host(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__15__idna_encode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__16__encode_target(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__17_parse_url(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__1___new__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__2_hostname(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__3_request_uri(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__4_authority(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__5_netloc(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__6_url(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__7___str__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__8__encode_invalid_chars(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__9__encode_invalid_chars(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$url$$$function__1___new__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_scheme = python_pars[1];
PyObject *par_auth = python_pars[2];
PyObject *par_host = python_pars[3];
PyObject *par_port = python_pars[4];
PyObject *par_path = python_pars[5];
PyObject *par_query = python_pars[6];
PyObject *par_fragment = python_pars[7];
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__1___new__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__1___new__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__1___new__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__1___new__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__1___new__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__1___new__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e6b52bd8d03ff531332780a102e4caf3, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__1___new__->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__1___new__ = cache_frame_frame_urllib3$util$url$$$function__1___new__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__1___new__);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__1___new__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_path);
tmp_truth_name_1 = CHECK_IF_TRUE(par_path);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_path);
tmp_expression_value_1 = par_path;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__1___new__->m_frame.f_lineno = 110;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooc";
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = const_str_slash;
CHECK_OBJECT(par_path);
tmp_add_expr_right_1 = par_path;
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_path;
    assert(old != NULL);
    par_path = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_scheme);
tmp_cmp_expr_left_1 = par_scheme;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_scheme);
tmp_expression_value_2 = par_scheme;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__1___new__->m_frame.f_lineno = 113;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_scheme;
    assert(old != NULL);
    par_scheme = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_cls);
tmp_object_arg_value_1 = par_cls;
tmp_expression_value_3 = BUILTIN_SUPER0(tstate, moduledict_urllib3$util$url, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___new__);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
CHECK_OBJECT(par_scheme);
tmp_args_element_value_2 = par_scheme;
CHECK_OBJECT(par_auth);
tmp_args_element_value_3 = par_auth;
CHECK_OBJECT(par_host);
tmp_args_element_value_4 = par_host;
CHECK_OBJECT(par_port);
tmp_args_element_value_5 = par_port;
if (par_path == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "ooooooooc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = par_path;
CHECK_OBJECT(par_query);
tmp_args_element_value_7 = par_query;
CHECK_OBJECT(par_fragment);
tmp_args_element_value_8 = par_fragment;
frame_frame_urllib3$util$url$$$function__1___new__->m_frame.f_lineno = 114;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__1___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__1___new__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__1___new__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__1___new__,
    type_description_1,
    par_cls,
    par_scheme,
    par_auth,
    par_host,
    par_port,
    par_path,
    par_query,
    par_fragment,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__1___new__ == cache_frame_frame_urllib3$util$url$$$function__1___new__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__1___new__);
    cache_frame_frame_urllib3$util$url$$$function__1___new__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__1___new__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_scheme);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
par_scheme = NULL;
Py_XDECREF(par_path);
par_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_scheme);
par_scheme = NULL;
Py_XDECREF(par_path);
par_path = NULL;
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
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
CHECK_OBJECT(par_fragment);
Py_DECREF(par_fragment);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_auth);
Py_DECREF(par_auth);
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_port);
Py_DECREF(par_port);
CHECK_OBJECT(par_query);
Py_DECREF(par_query);
CHECK_OBJECT(par_fragment);
Py_DECREF(par_fragment);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$url$$$function__2_hostname(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__2_hostname;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__2_hostname = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__2_hostname)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__2_hostname);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__2_hostname == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__2_hostname = MAKE_FUNCTION_FRAME(tstate, code_objects_95e78ae9a3a80ae111e0ed47b3eab53d, module_urllib3$util$url, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__2_hostname->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__2_hostname = cache_frame_frame_urllib3$util$url$$$function__2_hostname;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__2_hostname);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__2_hostname) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_host);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__2_hostname, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__2_hostname->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__2_hostname, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__2_hostname,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__2_hostname == cache_frame_frame_urllib3$util$url$$$function__2_hostname) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__2_hostname);
    cache_frame_frame_urllib3$util$url$$$function__2_hostname = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__2_hostname);

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


static PyObject *impl_urllib3$util$url$$$function__3_request_uri(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_uri = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__3_request_uri;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__3_request_uri = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__3_request_uri)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__3_request_uri);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__3_request_uri == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__3_request_uri = MAKE_FUNCTION_FRAME(tstate, code_objects_faa8f2febe82b2f4b5e3bf53a20fb510, module_urllib3$util$url, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__3_request_uri->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__3_request_uri = cache_frame_frame_urllib3$util$url$$$function__3_request_uri;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__3_request_uri);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__3_request_uri) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_path);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 124;
type_description_1 = "oo";
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
tmp_or_right_value_1 = const_str_slash;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = var_uri;
    var_uri = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_query);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_uri);
tmp_iadd_expr_left_1 = var_uri;
tmp_add_expr_left_1 = mod_consts.const_str_chr_63;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_query);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
var_uri = tmp_assign_source_2;

}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__3_request_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__3_request_uri->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__3_request_uri, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__3_request_uri,
    type_description_1,
    par_self,
    var_uri
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__3_request_uri == cache_frame_frame_urllib3$util$url$$$function__3_request_uri) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__3_request_uri);
    cache_frame_frame_urllib3$util$url$$$function__3_request_uri = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__3_request_uri);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_uri);
tmp_return_value = var_uri;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_uri);
CHECK_OBJECT(var_uri);
Py_DECREF(var_uri);
var_uri = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_uri);
var_uri = NULL;
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


static PyObject *impl_urllib3$util$url$$$function__4_authority(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_userinfo = NULL;
PyObject *var_netloc = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__4_authority;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__4_authority = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__4_authority)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__4_authority);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__4_authority == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__4_authority = MAKE_FUNCTION_FRAME(tstate, code_objects_4573eba5641e2c0eb5532965e5c24972, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__4_authority->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__4_authority = cache_frame_frame_urllib3$util$url$$$function__4_authority;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__4_authority);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__4_authority) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_auth);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_userinfo;
    var_userinfo = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_netloc);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_netloc;
    var_netloc = tmp_assign_source_2;
    Py_XDECREF(old);
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
CHECK_OBJECT(var_netloc);
tmp_cmp_expr_left_1 = var_netloc;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_userinfo);
tmp_cmp_expr_left_2 = var_userinfo;
tmp_cmp_expr_right_2 = Py_None;
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
CHECK_OBJECT(var_netloc);
tmp_return_value = var_netloc;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_userinfo);
tmp_format_value_1 = var_userinfo;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_64;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_netloc);
tmp_format_value_2 = var_netloc;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooo";
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
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__4_authority, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__4_authority->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__4_authority, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__4_authority,
    type_description_1,
    par_self,
    var_userinfo,
    var_netloc
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__4_authority == cache_frame_frame_urllib3$util$url$$$function__4_authority) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__4_authority);
    cache_frame_frame_urllib3$util$url$$$function__4_authority = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__4_authority);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_userinfo);
CHECK_OBJECT(var_userinfo);
Py_DECREF(var_userinfo);
var_userinfo = NULL;
CHECK_OBJECT(var_netloc);
CHECK_OBJECT(var_netloc);
Py_DECREF(var_netloc);
var_netloc = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_userinfo);
var_userinfo = NULL;
Py_XDECREF(var_netloc);
var_netloc = NULL;
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


static PyObject *impl_urllib3$util$url$$$function__5_netloc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__5_netloc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__5_netloc = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__5_netloc)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__5_netloc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__5_netloc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__5_netloc = MAKE_FUNCTION_FRAME(tstate, code_objects_bc6072cff8b4eb309f1b0119a918611a, module_urllib3$util$url, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__5_netloc->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__5_netloc = cache_frame_frame_urllib3$util$url$$$function__5_netloc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__5_netloc);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__5_netloc) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_host);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_port);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 157;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_host);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
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


exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_port);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
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


exception_lineno = 158;
type_description_1 = "o";
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
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_host);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__5_netloc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__5_netloc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__5_netloc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__5_netloc,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__5_netloc == cache_frame_frame_urllib3$util$url$$$function__5_netloc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__5_netloc);
    cache_frame_frame_urllib3$util$url$$$function__5_netloc = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__5_netloc);

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


static PyObject *impl_urllib3$util$url$$$function__6_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_scheme = NULL;
PyObject *var_auth = NULL;
PyObject *var_host = NULL;
PyObject *var_port = NULL;
PyObject *var_path = NULL;
PyObject *var_query = NULL;
PyObject *var_fragment = NULL;
PyObject *var_url = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__element_6 = NULL;
PyObject *tmp_tuple_unpack_1__element_7 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__6_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__6_url = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__6_url)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__6_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__6_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__6_url = MAKE_FUNCTION_FRAME(tstate, code_objects_3acc7d10c3b94a436a1bd69754068269, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__6_url->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__6_url = cache_frame_frame_urllib3$util$url$$$function__6_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__6_url);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__6_url) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooo";
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
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 7);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 7);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 7);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_4;
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 7);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_5;
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 5, 7);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_6;
    tmp_tuple_unpack_1__element_6 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 6, 7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_7;
    tmp_tuple_unpack_1__element_7 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 7);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_scheme;
    var_scheme = tmp_assign_source_9;
    Py_INCREF(var_scheme);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_auth;
    var_auth = tmp_assign_source_10;
    Py_INCREF(var_auth);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_host;
    var_host = tmp_assign_source_11;
    Py_INCREF(var_host);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var_port;
    var_port = tmp_assign_source_12;
    Py_INCREF(var_port);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_13;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_6);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_6;
{
    PyObject *old = var_query;
    var_query = tmp_assign_source_14;
    Py_INCREF(var_query);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_6);
tmp_tuple_unpack_1__element_6 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_7);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_7;
{
    PyObject *old = var_fragment;
    var_fragment = tmp_assign_source_15;
    Py_INCREF(var_fragment);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_7);
tmp_tuple_unpack_1__element_7 = NULL;

{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = const_str_empty;
{
    PyObject *old = var_url;
    var_url = tmp_assign_source_16;
    Py_INCREF(var_url);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_scheme);
tmp_cmp_expr_left_1 = var_scheme;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_url);
tmp_iadd_expr_left_1 = var_url;
CHECK_OBJECT(var_scheme);
tmp_add_expr_left_1 = var_scheme;
tmp_add_expr_right_1 = mod_consts.const_str_digest_a05fa8f67e9c342eb59afe566750507b;
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = tmp_iadd_expr_left_1;
var_url = tmp_assign_source_17;

}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_auth);
tmp_cmp_expr_left_2 = var_auth;
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
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_url);
tmp_iadd_expr_left_2 = var_url;
CHECK_OBJECT(var_auth);
tmp_add_expr_left_2 = var_auth;
tmp_add_expr_right_2 = mod_consts.const_str_chr_64;
tmp_iadd_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = tmp_iadd_expr_left_2;
var_url = tmp_assign_source_18;

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_host);
tmp_cmp_expr_left_3 = var_host;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
CHECK_OBJECT(var_url);
tmp_iadd_expr_left_3 = var_url;
CHECK_OBJECT(var_host);
tmp_iadd_expr_right_3 = var_host;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = tmp_iadd_expr_left_3;
var_url = tmp_assign_source_19;

}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_port);
tmp_cmp_expr_left_4 = var_port;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_url);
tmp_iadd_expr_left_4 = var_url;
tmp_add_expr_left_3 = mod_consts.const_str_chr_58;
CHECK_OBJECT(var_port);
tmp_unicode_arg_1 = var_port;
tmp_add_expr_right_3 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_iadd_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
CHECK_OBJECT(tmp_iadd_expr_right_4);
Py_DECREF(tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = tmp_iadd_expr_left_4;
var_url = tmp_assign_source_20;

}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_path);
tmp_cmp_expr_left_5 = var_path;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
CHECK_OBJECT(var_url);
tmp_iadd_expr_left_5 = var_url;
CHECK_OBJECT(var_path);
tmp_iadd_expr_right_5 = var_path;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_21 = tmp_iadd_expr_left_5;
var_url = tmp_assign_source_21;

}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_query);
tmp_cmp_expr_left_6 = var_query;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
CHECK_OBJECT(var_url);
tmp_iadd_expr_left_6 = var_url;
tmp_add_expr_left_4 = mod_consts.const_str_chr_63;
CHECK_OBJECT(var_query);
tmp_add_expr_right_4 = var_query;
tmp_iadd_expr_right_6 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_iadd_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
CHECK_OBJECT(tmp_iadd_expr_right_6);
Py_DECREF(tmp_iadd_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = tmp_iadd_expr_left_6;
var_url = tmp_assign_source_22;

}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_fragment);
tmp_cmp_expr_left_7 = var_fragment;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iadd_expr_left_7;
PyObject *tmp_iadd_expr_right_7;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
CHECK_OBJECT(var_url);
tmp_iadd_expr_left_7 = var_url;
tmp_add_expr_left_5 = mod_consts.const_str_chr_35;
CHECK_OBJECT(var_fragment);
tmp_add_expr_right_5 = var_fragment;
tmp_iadd_expr_right_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_iadd_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
CHECK_OBJECT(tmp_iadd_expr_right_7);
Py_DECREF(tmp_iadd_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = tmp_iadd_expr_left_7;
var_url = tmp_assign_source_23;

}
branch_no_7:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__6_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__6_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__6_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__6_url,
    type_description_1,
    par_self,
    var_scheme,
    var_auth,
    var_host,
    var_port,
    var_path,
    var_query,
    var_fragment,
    var_url
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__6_url == cache_frame_frame_urllib3$util$url$$$function__6_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__6_url);
    cache_frame_frame_urllib3$util$url$$$function__6_url = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__6_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_url);
tmp_return_value = var_url;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_scheme);
CHECK_OBJECT(var_scheme);
Py_DECREF(var_scheme);
var_scheme = NULL;
CHECK_OBJECT(var_auth);
CHECK_OBJECT(var_auth);
Py_DECREF(var_auth);
var_auth = NULL;
CHECK_OBJECT(var_host);
CHECK_OBJECT(var_host);
Py_DECREF(var_host);
var_host = NULL;
CHECK_OBJECT(var_port);
CHECK_OBJECT(var_port);
Py_DECREF(var_port);
var_port = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_query);
CHECK_OBJECT(var_query);
Py_DECREF(var_query);
var_query = NULL;
CHECK_OBJECT(var_fragment);
CHECK_OBJECT(var_fragment);
Py_DECREF(var_fragment);
var_fragment = NULL;
CHECK_OBJECT(var_url);
CHECK_OBJECT(var_url);
Py_DECREF(var_url);
var_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_auth);
var_auth = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query);
var_query = NULL;
Py_XDECREF(var_fragment);
var_fragment = NULL;
Py_XDECREF(var_url);
var_url = NULL;
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


static PyObject *impl_urllib3$util$url$$$function__7___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__7___str__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__7___str__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__7___str__)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__7___str__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__7___str__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__7___str__ = MAKE_FUNCTION_FRAME(tstate, code_objects_dec4e83062a40961698298ce1e26ea01, module_urllib3$util$url, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__7___str__->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__7___str__ = cache_frame_frame_urllib3$util$url$$$function__7___str__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__7___str__);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__7___str__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_url);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__7___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__7___str__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__7___str__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__7___str__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__7___str__ == cache_frame_frame_urllib3$util$url$$$function__7___str__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__7___str__);
    cache_frame_frame_urllib3$util$url$$$function__7___str__ = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__7___str__);

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


static PyObject *impl_urllib3$util$url$$$function__10__encode_invalid_chars(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_component = python_pars[0];
PyObject *par_allowed_chars = python_pars[1];
PyObject *var_percent_encodings = NULL;
PyObject *var_uri_bytes = NULL;
PyObject *var_is_percent_encoded = NULL;
PyObject *var_encoded_component = NULL;
PyObject *var_i = NULL;
PyObject *var_byte = NULL;
PyObject *var_byte_ord = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_component);
tmp_cmp_expr_left_1 = par_component;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_component);
tmp_return_value = par_component;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars = MAKE_FUNCTION_FRAME(tstate, code_objects_6027d03785e8522e58e8f49be38c3c93, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars = cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$url$to_str(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_str);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_component);
tmp_args_element_value_1 = par_component;
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 236;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_component;
    assert(old != NULL);
    par_component = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_1 = module_var_accessor_urllib3$util$url$_PERCENT_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PERCENT_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = MAKE_FUNCTION_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda(tstate);

CHECK_OBJECT(par_component);
tmp_args_element_value_3 = par_component;
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_subn,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



exception_lineno = 241;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_component;
    assert(old != NULL);
    par_component = tmp_assign_source_5;
    Py_INCREF(par_component);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_percent_encodings;
    var_percent_encodings = tmp_assign_source_6;
    Py_INCREF(var_percent_encodings);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_component);
tmp_expression_value_1 = par_component;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 245;
tmp_assign_source_7 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_454dd4757ce1ca9c3c31ceba21393e6a_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_uri_bytes;
    var_uri_bytes = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_percent_encodings);
tmp_cmp_expr_left_2 = var_percent_encodings;
CHECK_OBJECT(var_uri_bytes);
tmp_expression_value_2 = var_uri_bytes;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_count);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 246;
tmp_cmp_expr_right_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_bytes_chr_37_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_percent_encoded;
    var_is_percent_encoded = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = BYTEARRAY_COPY(tstate, mod_consts.const_bytearray_72cdf64f605ef12d57287fc4b61c2b5e);
{
    PyObject *old = var_encoded_component;
    var_encoded_component = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_len_arg_1;
tmp_xrange_low_1 = const_int_0;
CHECK_OBJECT(var_uri_bytes);
tmp_len_arg_1 = var_uri_bytes;
tmp_xrange_high_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_2 = BUILTIN_XRANGE2(tstate, tmp_xrange_low_1, tmp_xrange_high_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 249;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_12 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_i;
    var_i = tmp_assign_source_12;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_uri_bytes);
tmp_expression_value_3 = var_uri_bytes;
CHECK_OBJECT(var_i);
tmp_start_value_1 = var_i;
CHECK_OBJECT(var_i);
tmp_add_expr_left_1 = var_i;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_byte;
    var_byte = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_ord_arg_1;
CHECK_OBJECT(var_byte);
tmp_ord_arg_1 = var_byte;
tmp_assign_source_14 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_byte_ord;
    var_byte_ord = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_is_percent_encoded);
tmp_truth_name_1 = CHECK_IF_TRUE(var_is_percent_encoded);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_byte);
tmp_cmp_expr_left_3 = var_byte;
tmp_cmp_expr_right_3 = mod_consts.const_bytes_chr_37;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_or_left_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_left_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_byte_ord);
tmp_cmp_expr_left_4 = var_byte_ord;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_128;
tmp_and_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_byte);
tmp_expression_value_4 = var_byte;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 254;
tmp_cmp_expr_left_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_allowed_chars);
tmp_cmp_expr_right_5 = par_allowed_chars;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_encoded_component == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoded_component);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_iadd_expr_left_1 = var_encoded_component;
CHECK_OBJECT(var_byte);
tmp_iadd_expr_right_1 = var_byte;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_15 = tmp_iadd_expr_left_1;
var_encoded_component = tmp_assign_source_15;

}
goto loop_start_1;
branch_no_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_hex_arg_1;
PyObject *tmp_subscript_value_2;
if (var_encoded_component == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoded_component);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_5 = var_encoded_component;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_extend);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_add_expr_left_2 = mod_consts.const_bytes_chr_37;
CHECK_OBJECT(var_byte_ord);
tmp_hex_arg_1 = var_byte_ord;
tmp_expression_value_9 = BUILTIN_HEX(tstate, tmp_hex_arg_1);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_2_none_none;
tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 258;
tmp_expression_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_zfill);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 258;
tmp_expression_value_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_int_pos_2_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_upper);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 258;
tmp_add_expr_right_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 258;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_10;
if (var_encoded_component == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoded_component);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = var_encoded_component;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_decode);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame.f_lineno = 260;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars,
    type_description_1,
    par_component,
    par_allowed_chars,
    var_percent_encodings,
    var_uri_bytes,
    var_is_percent_encoded,
    var_encoded_component,
    var_i,
    var_byte,
    var_byte_ord
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars == cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars);
    cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_component);
par_component = NULL;
Py_XDECREF(var_percent_encodings);
var_percent_encodings = NULL;
Py_XDECREF(var_uri_bytes);
var_uri_bytes = NULL;
Py_XDECREF(var_is_percent_encoded);
var_is_percent_encoded = NULL;
Py_XDECREF(var_encoded_component);
var_encoded_component = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_byte);
var_byte = NULL;
Py_XDECREF(var_byte_ord);
var_byte_ord = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_component);
par_component = NULL;
Py_XDECREF(var_percent_encodings);
var_percent_encodings = NULL;
Py_XDECREF(var_uri_bytes);
var_uri_bytes = NULL;
Py_XDECREF(var_is_percent_encoded);
var_is_percent_encoded = NULL;
Py_XDECREF(var_encoded_component);
var_encoded_component = NULL;
Py_XDECREF(var_i);
var_i = NULL;
Py_XDECREF(var_byte);
var_byte = NULL;
Py_XDECREF(var_byte_ord);
var_byte_ord = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_allowed_chars);
Py_DECREF(par_allowed_chars);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_allowed_chars);
Py_DECREF(par_allowed_chars);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_match = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_e1e15555e48706a5f6cdc00447aef224, module_urllib3$util$url, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda = cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_match);
tmp_called_instance_1 = par_match;
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda->m_frame.f_lineno = 242;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_upper);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda->m_frame.f_lineno = 242;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda,
    type_description_1,
    par_match
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda == cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda);
    cache_frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_match);
Py_DECREF(par_match);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_match);
Py_DECREF(par_match);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$url$$$function__11__remove_path_dot_segments(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *var_segments = NULL;
PyObject *var_output = NULL;
PyObject *var_segment = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments = MAKE_FUNCTION_FRAME(tstate, code_objects_ce00dfd55d24c4d7b655fcd09bfcf3a5, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments = cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_path);
tmp_expression_value_1 = par_path;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments->m_frame.f_lineno = 265;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_segments;
    var_segments = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_output;
    var_output = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_segments);
tmp_iter_arg_1 = var_segments;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 268;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_5 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_segment;
    var_segment = tmp_assign_source_5;
    Py_INCREF(var_segment);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_segment);
tmp_cmp_expr_left_1 = var_segment;
tmp_cmp_expr_right_1 = const_str_dot;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_start_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_segment);
tmp_cmp_expr_left_2 = var_segment;
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_7b79a8950d64155a442741f6cc8c809b;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_output;
CHECK_OBJECT(var_segment);
tmp_item_value_1 = var_segment;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_truth_name_1 = CHECK_IF_TRUE(var_output);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_list_arg_value_2;
PyObject *tmp_capi_result_1;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_output;
tmp_capi_result_1 = LIST_POP1(tstate, tmp_list_arg_value_2);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
branch_no_3:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooo";
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_result_1;
int tmp_truth_name_3;
CHECK_OBJECT(par_path);
tmp_expression_value_2 = par_path;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments->m_frame.f_lineno = 282;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = var_output;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = var_output;
tmp_subscript_value_1 = const_int_0;
tmp_subscript_result_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_subscript_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_subscript_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_subscript_result_1);

exception_lineno = 282;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_subscript_result_1);
Py_DECREF(tmp_subscript_result_1);
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_2;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 283;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_3 = var_output;
tmp_item_value_2 = const_str_empty;
LIST_INSERT_CONST(tmp_list_arg_value_3, 0, tmp_item_value_2);
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
int tmp_truth_name_4;
CHECK_OBJECT(par_path);
tmp_expression_value_4 = par_path;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_endswith);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments->m_frame.f_lineno = 287;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_tuple_57485aa9c6c9162c3ed375306f387210_tuple_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 288;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = var_output;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments->m_frame.f_lineno = 288;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_5:;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_slash;
if (var_output == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_output);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_output;
tmp_return_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments,
    type_description_1,
    par_path,
    var_segments,
    var_output,
    var_segment
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments == cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments);
    cache_frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__11__remove_path_dot_segments);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_segments);
CHECK_OBJECT(var_segments);
Py_DECREF(var_segments);
var_segments = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_segment);
var_segment = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_segments);
var_segments = NULL;
Py_XDECREF(var_output);
var_output = NULL;
Py_XDECREF(var_segment);
var_segment = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$url$$$function__14__normalize_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_host = python_pars[0];
PyObject *par_scheme = python_pars[1];
PyObject *var_is_ipv6 = NULL;
PyObject *var_match = NULL;
PyObject *var_start = NULL;
PyObject *var_end = NULL;
PyObject *var_zone_id = NULL;
PyObject *outline_0_var_label = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__14__normalize_host;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__14__normalize_host = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__14__normalize_host)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__14__normalize_host);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__14__normalize_host == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__14__normalize_host = MAKE_FUNCTION_FRAME(tstate, code_objects_faa6ab7ac43f22b11d01eac57e48f4b9, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__14__normalize_host->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__14__normalize_host = cache_frame_frame_urllib3$util$url$$$function__14__normalize_host;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__14__normalize_host);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__14__normalize_host) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_host);
tmp_truth_name_1 = CHECK_IF_TRUE(par_host);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooo";
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_scheme);
tmp_cmp_expr_left_1 = par_scheme;
tmp_cmp_expr_right_1 = module_var_accessor_urllib3$util$url$_NORMALIZABLE_SCHEMES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$url$_IPV6_ADDRZ_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV6_ADDRZ_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_args_element_value_1 = par_host;
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 304;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_ipv6;
    var_is_ipv6 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_is_ipv6);
tmp_truth_name_2 = CHECK_IF_TRUE(var_is_ipv6);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
tmp_called_instance_2 = module_var_accessor_urllib3$util$url$_ZONE_ID_RE(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ZONE_ID_RE);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_args_element_value_2 = par_host;
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 309;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_search, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_match;
    var_match = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
CHECK_OBJECT(var_match);
tmp_truth_name_3 = CHECK_IF_TRUE(var_match);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_match);
tmp_called_instance_3 = var_match;
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 311;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_span,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1_tuple, 0)
);

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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



exception_lineno = 311;
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
    PyObject *old = var_start;
    var_start = tmp_assign_source_6;
    Py_INCREF(var_start);
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
    PyObject *old = var_end;
    var_end = tmp_assign_source_7;
    Py_INCREF(var_end);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
CHECK_OBJECT(par_host);
tmp_expression_value_1 = par_host;
CHECK_OBJECT(var_start);
tmp_start_value_1 = var_start;
CHECK_OBJECT(var_end);
tmp_stop_value_1 = var_end;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_zone_id;
    var_zone_id = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
int tmp_truth_name_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_zone_id);
tmp_expression_value_2 = var_zone_id;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 314;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_d4d95c263c86f9556159c4b2ca5d6780_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 314;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_zone_id);
tmp_cmp_expr_left_2 = var_zone_id;
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_d4d95c263c86f9556159c4b2ca5d6780;
tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_zone_id);
tmp_expression_value_3 = var_zone_id;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_3_none_none;
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_zone_id;
    assert(old != NULL);
    var_zone_id = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_zone_id);
tmp_expression_value_4 = var_zone_id;
tmp_subscript_value_3 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_zone_id;
    assert(old != NULL);
    var_zone_id = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_end_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_urllib3$util$url$_encode_invalid_chars(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__encode_invalid_chars);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_zone_id);
tmp_args_element_value_3 = var_zone_id;
tmp_args_element_value_4 = module_var_accessor_urllib3$util$url$_UNRESERVED_CHARS(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__UNRESERVED_CHARS);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 318;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_zone_id;
    assert(old != NULL);
    var_zone_id = tmp_assign_source_11;
    Py_DECREF(old);
}

}
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_stop_value_2;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_host);
tmp_expression_value_6 = par_host;
CHECK_OBJECT(var_start);
tmp_stop_value_2 = var_start;
tmp_subscript_value_4 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_2);
assert(!(tmp_subscript_value_4 == NULL));
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 319;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_stop_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_37;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_zone_id);
tmp_format_value_2 = var_zone_id;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_host);
tmp_expression_value_7 = par_host;
CHECK_OBJECT(var_end);
tmp_start_value_2 = var_end;
tmp_stop_value_3 = Py_None;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_3);
assert(!(tmp_subscript_value_5 == NULL));
tmp_format_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
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
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_host);
tmp_expression_value_8 = par_host;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_lower);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 321;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_4:;
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_5;
tmp_called_instance_4 = module_var_accessor_urllib3$util$url$_IPV4_RE(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV4_RE);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_host);
tmp_args_element_value_5 = par_host;
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 322;
tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_match, tmp_args_element_value_5);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = module_var_accessor_urllib3$util$url$to_str(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_str);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_bytes_arg_value_1 = mod_consts.const_bytes_chr_46;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_host);
tmp_expression_value_9 = par_host;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_split);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 324;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_dot_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 324;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_15 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_label;
    outline_0_var_label = tmp_assign_source_15;
    Py_INCREF(outline_0_var_label);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_7 = module_var_accessor_urllib3$util$url$_idna_encode(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__idna_encode);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_0_var_label);
tmp_args_element_value_7 = outline_0_var_label;
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 324;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
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
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var_label);
outline_0_var_label = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_label);
outline_0_var_label = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 324;
goto frame_exception_exit_1;
outline_result_1:;
tmp_args_element_value_6 = BYTES_JOIN(tstate, tmp_bytes_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = const_str_plain_ascii;
frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame.f_lineno = 323;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
branch_end_3:;
branch_no_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__14__normalize_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__14__normalize_host->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__14__normalize_host, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__14__normalize_host,
    type_description_1,
    par_host,
    par_scheme,
    var_is_ipv6,
    var_match,
    var_start,
    var_end,
    var_zone_id
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__14__normalize_host == cache_frame_frame_urllib3$util$url$$$function__14__normalize_host) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__14__normalize_host);
    cache_frame_frame_urllib3$util$url$$$function__14__normalize_host = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__14__normalize_host);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_host);
tmp_return_value = par_host;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_is_ipv6);
var_is_ipv6 = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_zone_id);
var_zone_id = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_is_ipv6);
var_is_ipv6 = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_zone_id);
var_zone_id = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_host);
Py_DECREF(par_host);
CHECK_OBJECT(par_scheme);
Py_DECREF(par_scheme);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$url$$$function__15__idna_encode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *var_idna = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__15__idna_encode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__15__idna_encode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__15__idna_encode)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__15__idna_encode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__15__idna_encode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__15__idna_encode = MAKE_FUNCTION_FRAME(tstate, code_objects_22968d50e44b1b76a6fcaf8d0447a848, module_urllib3$util$url, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__15__idna_encode->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__15__idna_encode = cache_frame_frame_urllib3$util$url$$$function__15__idna_encode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__15__idna_encode);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__15__idna_encode) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_name);
tmp_expression_value_1 = par_name;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isascii);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 331;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oo";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_idna;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$url;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 333;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_idna;
    var_idna = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__15__idna_encode, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__15__idna_encode, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_called_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_urllib3$util$url$LocationParseError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationParseError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_3;
}
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 335;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_6bcd2ff4dc4b6988ba9b180b0cf742e7_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 337;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 332;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame)) {
        frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_idna);
tmp_expression_value_2 = var_idna;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_name);
tmp_expression_value_3 = par_name;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 340;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 340;
tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 340;
type_description_1 = "oo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 340;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_3,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_true_tuple, 0),
        mod_consts.const_tuple_str_plain_strict_str_plain_std3_rules_tuple
    );
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oo";
    goto try_except_handler_4;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__15__idna_encode, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__15__idna_encode, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
CHECK_OBJECT(var_idna);
tmp_expression_value_4 = var_idna;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_IDNAError);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oo";
    goto try_except_handler_5;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_2;
tmp_called_value_5 = module_var_accessor_urllib3$util$url$LocationParseError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationParseError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_009752e9d152fbf271544e78e7a8bee3;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_bc152e222111272c162bcf54ff1ba047;
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
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 342;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oo";
    goto try_except_handler_5;
}
tmp_raise_cause_2 = Py_None;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_2);
exception_lineno = 344;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_2);
type_description_1 = "oo";
goto try_except_handler_5;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 339;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame)) {
        frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
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
// End of try:
branch_no_1:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_name);
tmp_expression_value_6 = par_name;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_lower);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 346;
tmp_expression_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame.f_lineno = 346;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__15__idna_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__15__idna_encode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__15__idna_encode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__15__idna_encode,
    type_description_1,
    par_name,
    var_idna
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__15__idna_encode == cache_frame_frame_urllib3$util$url$$$function__15__idna_encode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__15__idna_encode);
    cache_frame_frame_urllib3$util$url$$$function__15__idna_encode = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__15__idna_encode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_idna);
var_idna = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_idna);
var_idna = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$url$$$function__16__encode_target(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_target = python_pars[0];
PyObject *var_match = NULL;
PyObject *var_path = NULL;
PyObject *var_query = NULL;
PyObject *var_encoded_target = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__16__encode_target;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__16__encode_target = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__16__encode_target)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__16__encode_target);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__16__encode_target == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__16__encode_target = MAKE_FUNCTION_FRAME(tstate, code_objects_c4e14527f3020b305c1cbf0c0da93712, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__16__encode_target->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__16__encode_target = cache_frame_frame_urllib3$util$url$$$function__16__encode_target;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__16__encode_target);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__16__encode_target) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$url$_TARGET_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TARGET_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_target);
tmp_args_element_value_1 = par_target;
frame_frame_urllib3$util$url$$$function__16__encode_target->m_frame.f_lineno = 355;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_match;
    var_match = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_match);
tmp_operand_value_1 = var_match;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_format_spec_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$url$LocationParseError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationParseError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_target);
tmp_operand_value_2 = par_target;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_217c0a18bc835487db24f97e53da5076;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_urllib3$util$url$$$function__16__encode_target->m_frame.f_lineno = 357;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 357;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_match);
tmp_called_instance_2 = var_match;
frame_frame_urllib3$util$url$$$function__16__encode_target->m_frame.f_lineno = 359;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_groups);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "ooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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



exception_lineno = 359;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_5;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_query;
    var_query = tmp_assign_source_6;
    Py_INCREF(var_query);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_urllib3$util$url$_encode_invalid_chars(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__encode_invalid_chars);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_3 = var_path;
tmp_args_element_value_4 = module_var_accessor_urllib3$util$url$_PATH_CHARS(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PATH_CHARS);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__16__encode_target->m_frame.f_lineno = 360;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_encoded_target;
    var_encoded_target = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_query);
tmp_cmp_expr_left_1 = var_query;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_urllib3$util$url$_encode_invalid_chars(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__encode_invalid_chars);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_query);
tmp_args_element_value_5 = var_query;
tmp_args_element_value_6 = module_var_accessor_urllib3$util$url$_QUERY_CHARS(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__QUERY_CHARS);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 362;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__16__encode_target->m_frame.f_lineno = 362;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_query;
    assert(old != NULL);
    var_query = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_encoded_target);
tmp_iadd_expr_left_1 = var_encoded_target;
tmp_add_expr_left_1 = mod_consts.const_str_chr_63;
CHECK_OBJECT(var_query);
tmp_add_expr_right_1 = var_query;
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_iadd_expr_left_1;
var_encoded_target = tmp_assign_source_9;

}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__16__encode_target, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__16__encode_target->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__16__encode_target, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__16__encode_target,
    type_description_1,
    par_target,
    var_match,
    var_path,
    var_query,
    var_encoded_target
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__16__encode_target == cache_frame_frame_urllib3$util$url$$$function__16__encode_target) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__16__encode_target);
    cache_frame_frame_urllib3$util$url$$$function__16__encode_target = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__16__encode_target);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_encoded_target);
tmp_return_value = var_encoded_target;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_match);
CHECK_OBJECT(var_match);
Py_DECREF(var_match);
var_match = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query);
var_query = NULL;
CHECK_OBJECT(var_encoded_target);
CHECK_OBJECT(var_encoded_target);
Py_DECREF(var_encoded_target);
var_encoded_target = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query);
var_query = NULL;
Py_XDECREF(var_encoded_target);
var_encoded_target = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_target);
Py_DECREF(par_target);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_target);
Py_DECREF(par_target);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$url$$$function__17_parse_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *var_scheme = NULL;
PyObject *var_authority = NULL;
PyObject *var_auth = NULL;
PyObject *var_host = NULL;
PyObject *var_port = NULL;
PyObject *var_port_int = NULL;
PyObject *var_path = NULL;
PyObject *var_query = NULL;
PyObject *var_fragment = NULL;
PyObject *var_source_url = NULL;
PyObject *var_normalize_uri = NULL;
PyObject *var__ = NULL;
PyObject *var_host_port = NULL;
PyObject *var_e = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__element_5 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$function__17_parse_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$url$$$function__17_parse_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$url$$$function__17_parse_url)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$url$$$function__17_parse_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$url$$$function__17_parse_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$url$$$function__17_parse_url = MAKE_FUNCTION_FRAME(tstate, code_objects_c095dbe127b902b73e17d1723acea4c9, module_urllib3$util$url, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$url$$$function__17_parse_url->m_type_description == NULL);
frame_frame_urllib3$util$url$$$function__17_parse_url = cache_frame_frame_urllib3$util$url$$$function__17_parse_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$function__17_parse_url);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$function__17_parse_url) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_url);
tmp_operand_value_1 = par_url;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "ooooooooooooooo";
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
tmp_called_value_1 = module_var_accessor_urllib3$util$url$Url(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Url);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 397;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 397;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_url);
tmp_assign_source_1 = par_url;
{
    PyObject *old = var_source_url;
    var_source_url = tmp_assign_source_1;
    Py_INCREF(var_source_url);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$url$_SCHEME_RE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SCHEME_RE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 400;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_search, tmp_args_element_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "ooooooooooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
tmp_add_expr_left_1 = mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360;
CHECK_OBJECT(par_url);
tmp_add_expr_right_1 = par_url;
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_urllib3$util$url$_URI_RE(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__URI_RE);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_match);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
if (par_url == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_2 = par_url;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 414;
tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 414;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_groups);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 5);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_4;
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 4, 5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_5;
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 5);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_scheme;
    var_scheme = tmp_assign_source_9;
    Py_INCREF(var_scheme);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_authority;
    var_authority = tmp_assign_source_10;
    Py_INCREF(var_authority);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_path;
    var_path = tmp_assign_source_11;
    Py_INCREF(var_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;
{
    PyObject *old = var_query;
    var_query = tmp_assign_source_12;
    Py_INCREF(var_query);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;
{
    PyObject *old = var_fragment;
    var_fragment = tmp_assign_source_13;
    Py_INCREF(var_fragment);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_5);
tmp_tuple_unpack_1__element_5 = NULL;

{
PyObject *tmp_assign_source_14;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_scheme);
tmp_cmp_expr_left_1 = var_scheme;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_scheme);
tmp_expression_value_2 = var_scheme;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 415;
tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_2 = module_var_accessor_urllib3$util$url$_NORMALIZABLE_SCHEMES(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NORMALIZABLE_SCHEMES);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 415;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_assign_source_14 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_14 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = var_normalize_uri;
    var_normalize_uri = tmp_assign_source_14;
    Py_INCREF(var_normalize_uri);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_scheme);
tmp_truth_name_1 = CHECK_IF_TRUE(var_scheme);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_scheme);
tmp_expression_value_3 = var_scheme;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 418;
tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_scheme;
    assert(old != NULL);
    var_scheme = tmp_assign_source_15;
    Py_DECREF(old);
}

}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(var_authority);
tmp_truth_name_2 = CHECK_IF_TRUE(var_authority);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_authority);
tmp_expression_value_4 = var_authority;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rpartition);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 421;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_chr_64_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_17 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 0, 3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 1, 3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 2, 3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_19;
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



exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
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

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
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

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_auth;
    var_auth = tmp_assign_source_20;
    Py_INCREF(var_auth);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_21;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_22 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_host_port;
    var_host_port = tmp_assign_source_22;
    Py_INCREF(var_host_port);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_23;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
CHECK_OBJECT(var_auth);
tmp_or_left_value_2 = var_auth;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 422;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = Py_None;
tmp_assign_source_23 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_23 = tmp_or_left_value_2;
or_end_2:;
{
    PyObject *old = var_auth;
    assert(old != NULL);
    var_auth = tmp_assign_source_23;
    Py_INCREF(var_auth);
    Py_DECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_3;
tmp_called_instance_4 = module_var_accessor_urllib3$util$url$_HOST_PORT_RE(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HOST_PORT_RE);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_host_port);
tmp_args_element_value_3 = var_host_port;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 423;
tmp_called_instance_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_match, tmp_args_element_value_3);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 423;
tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_groups);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_25 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_26 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 423;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
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

goto try_except_handler_7;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_2;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_27 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_host;
    var_host = tmp_assign_source_27;
    Py_INCREF(var_host);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_28 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_port;
    var_port = tmp_assign_source_28;
    Py_INCREF(var_port);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_3;
int tmp_truth_name_4;
CHECK_OBJECT(var_auth);
tmp_truth_name_3 = CHECK_IF_TRUE(var_auth);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_normalize_uri);
tmp_truth_name_4 = CHECK_IF_TRUE(var_normalize_uri);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = module_var_accessor_urllib3$util$url$_encode_invalid_chars(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__encode_invalid_chars);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_auth);
tmp_args_element_value_4 = var_auth;
tmp_args_element_value_5 = module_var_accessor_urllib3$util$url$_USERINFO_CHARS(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__USERINFO_CHARS);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 425;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_auth;
    assert(old != NULL);
    var_auth = tmp_assign_source_29;
    Py_DECREF(old);
}

}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_port);
tmp_cmp_expr_left_3 = var_port;
tmp_cmp_expr_right_3 = const_str_empty;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = Py_None;
{
    PyObject *old = var_port;
    assert(old != NULL);
    var_port = tmp_assign_source_30;
    Py_INCREF(var_port);
    Py_DECREF(old);
}

}
branch_no_6:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_iter_arg_4;
tmp_iter_arg_4 = mod_consts.const_tuple_none_none_none_tuple;
tmp_assign_source_31 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
assert(!(tmp_assign_source_31 == NULL));
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_unpack_11;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_32 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_11, 0, 3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 429;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_unpack_12;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_33 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_12, 1, 3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 429;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_unpack_13;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_34 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_13, 2, 3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 429;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_3;
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_34;
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



exception_lineno = 429;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
}
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
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

goto try_except_handler_9;
// End of try:
try_end_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
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

goto try_except_handler_2;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_35 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_auth;
    var_auth = tmp_assign_source_35;
    Py_INCREF(var_auth);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_36;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_36 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var_host;
    var_host = tmp_assign_source_36;
    Py_INCREF(var_host);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_assign_source_37 = tmp_tuple_unpack_4__element_3;
{
    PyObject *old = var_port;
    var_port = tmp_assign_source_37;
    Py_INCREF(var_port);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

branch_end_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_port);
tmp_cmp_expr_left_4 = var_port;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(var_port);
tmp_int_arg_1 = var_port;
tmp_assign_source_38 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_port_int;
    var_port_int = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_3;
{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(var_port_int);
tmp_assign_source_39 = var_port_int;
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_39;
    Py_INCREF(tmp_comparison_chain_1__operand_2);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = const_int_0;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_5 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_40 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_4 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_3 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_operand_value_3);
goto try_return_handler_11;
branch_no_9:;
{
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_6 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_65535;
tmp_operand_value_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_11;
}
goto try_return_handler_11;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
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
try_except_handler_11:;
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

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = module_var_accessor_urllib3$util$url$LocationParseError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationParseError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 434;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (par_url == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 434;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_6 = par_url;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 434;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 434;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_2;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = Py_None;
{
    PyObject *old = var_port_int;
    var_port_int = tmp_assign_source_41;
    Py_INCREF(var_port_int);
    Py_XDECREF(old);
}

}
branch_end_7:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_8 = module_var_accessor_urllib3$util$url$_normalize_host(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__normalize_host);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_host);
tmp_args_element_value_7 = var_host;
if (var_scheme == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scheme);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 438;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = var_scheme;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 438;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_host;
    assert(old != NULL);
    var_host = tmp_assign_source_42;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_5;
int tmp_truth_name_6;
CHECK_OBJECT(var_normalize_uri);
tmp_truth_name_5 = CHECK_IF_TRUE(var_normalize_uri);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_path);
tmp_truth_name_6 = CHECK_IF_TRUE(var_path);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_10 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_10 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_9;
tmp_called_value_9 = module_var_accessor_urllib3$util$url$_remove_path_dot_segments(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__remove_path_dot_segments);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_9 = var_path;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 441;
tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_43;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_10 = module_var_accessor_urllib3$util$url$_encode_invalid_chars(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__encode_invalid_chars);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 442;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_path);
tmp_args_element_value_10 = var_path;
tmp_args_element_value_11 = module_var_accessor_urllib3$util$url$_PATH_CHARS(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PATH_CHARS);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 442;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 442;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 442;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_44;
    Py_DECREF(old);
}

}
branch_no_10:;
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_7;
int tmp_truth_name_8;
CHECK_OBJECT(var_normalize_uri);
tmp_truth_name_7 = CHECK_IF_TRUE(var_normalize_uri);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_query);
tmp_truth_name_8 = CHECK_IF_TRUE(var_query);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_3 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_11 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_11 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_value_11 = module_var_accessor_urllib3$util$url$_encode_invalid_chars(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__encode_invalid_chars);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_query);
tmp_args_element_value_12 = var_query;
tmp_args_element_value_13 = module_var_accessor_urllib3$util$url$_QUERY_CHARS(tstate);
if (unlikely(tmp_args_element_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__QUERY_CHARS);
}

if (tmp_args_element_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 444;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_query;
    assert(old != NULL);
    var_query = tmp_assign_source_45;
    Py_DECREF(old);
}

}
branch_no_11:;
{
nuitka_bool tmp_condition_result_12;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
int tmp_truth_name_9;
int tmp_truth_name_10;
CHECK_OBJECT(var_normalize_uri);
tmp_truth_name_9 = CHECK_IF_TRUE(var_normalize_uri);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_4 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_fragment);
tmp_truth_name_10 = CHECK_IF_TRUE(var_fragment);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_4 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_12 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_12 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_12 = module_var_accessor_urllib3$util$url$_encode_invalid_chars(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__encode_invalid_chars);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 446;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_fragment);
tmp_args_element_value_14 = var_fragment;
tmp_args_element_value_15 = module_var_accessor_urllib3$util$url$_FRAGMENT_CHARS(tstate);
if (unlikely(tmp_args_element_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FRAGMENT_CHARS);
}

if (tmp_args_element_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 446;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 446;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 446;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_fragment;
    assert(old != NULL);
    var_fragment = tmp_assign_source_46;
    Py_DECREF(old);
}

}
branch_no_12:;
goto try_end_9;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__17_parse_url, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__17_parse_url, exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_10, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_10);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = mod_consts.const_tuple_type_ValueError_type_AttributeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_47); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_47;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_16;
PyObject *tmp_raise_cause_1;
tmp_called_value_13 = module_var_accessor_urllib3$util$url$LocationParseError(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LocationParseError);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 449;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_source_url);
tmp_args_element_value_16 = var_source_url;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 449;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_16);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_13;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 449;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 449;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_13;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
goto branch_end_13;
branch_no_13:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 413;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame)) {
        frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_12;
branch_end_13:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_9:;
{
bool tmp_condition_result_14;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(var_path);
tmp_operand_value_5 = var_path;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
bool tmp_condition_result_15;
int tmp_or_left_truth_3;
bool tmp_or_left_value_3;
bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_query);
tmp_cmp_expr_left_8 = var_query;
tmp_cmp_expr_right_8 = Py_None;
tmp_or_left_value_3 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_fragment);
tmp_cmp_expr_left_9 = var_fragment;
tmp_cmp_expr_right_9 = Py_None;
tmp_or_right_value_3 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
tmp_condition_result_15 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_15 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = const_str_empty;
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_48;
    Py_INCREF(var_path);
    Py_DECREF(old);
}

}
goto branch_end_15;
branch_no_15:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = Py_None;
{
    PyObject *old = var_path;
    assert(old != NULL);
    var_path = tmp_assign_source_49;
    Py_INCREF(var_path);
    Py_DECREF(old);
}

}
branch_end_15:;
branch_no_14:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
tmp_called_value_14 = module_var_accessor_urllib3$util$url$Url(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Url);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 461;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_scheme == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_scheme);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 462;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = var_scheme;
CHECK_OBJECT(var_auth);
tmp_kw_call_value_1_1 = var_auth;
CHECK_OBJECT(var_host);
tmp_kw_call_value_2_1 = var_host;
if (var_port_int == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_port_int);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 465;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_3_1 = var_port_int;
CHECK_OBJECT(var_path);
tmp_kw_call_value_4_1 = var_path;
CHECK_OBJECT(var_query);
tmp_kw_call_value_5_1 = var_query;
CHECK_OBJECT(var_fragment);
tmp_kw_call_value_6_1 = var_fragment;
frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame.f_lineno = 461;
{
    PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_14, kw_values, mod_consts.const_tuple_3ce2738cae3fe08b86570edf5e49b1b7_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$function__17_parse_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$function__17_parse_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$function__17_parse_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$function__17_parse_url,
    type_description_1,
    par_url,
    var_scheme,
    var_authority,
    var_auth,
    var_host,
    var_port,
    var_port_int,
    var_path,
    var_query,
    var_fragment,
    var_source_url,
    var_normalize_uri,
    var__,
    var_host_port,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$url$$$function__17_parse_url == cache_frame_frame_urllib3$util$url$$$function__17_parse_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$url$$$function__17_parse_url);
    cache_frame_frame_urllib3$util$url$$$function__17_parse_url = NULL;
}

assertFrameObject(frame_frame_urllib3$util$url$$$function__17_parse_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_url);
par_url = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_authority);
var_authority = NULL;
Py_XDECREF(var_auth);
var_auth = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_port_int);
var_port_int = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query);
var_query = NULL;
Py_XDECREF(var_fragment);
var_fragment = NULL;
Py_XDECREF(var_source_url);
var_source_url = NULL;
Py_XDECREF(var_normalize_uri);
var_normalize_uri = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_host_port);
var_host_port = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_url);
par_url = NULL;
Py_XDECREF(var_scheme);
var_scheme = NULL;
Py_XDECREF(var_authority);
var_authority = NULL;
Py_XDECREF(var_auth);
var_auth = NULL;
Py_XDECREF(var_host);
var_host = NULL;
Py_XDECREF(var_port);
var_port = NULL;
Py_XDECREF(var_port_int);
var_port_int = NULL;
Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_query);
var_query = NULL;
Py_XDECREF(var_fragment);
var_fragment = NULL;
Py_XDECREF(var_source_url);
var_source_url = NULL;
Py_XDECREF(var_normalize_uri);
var_normalize_uri = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_host_port);
var_host_port = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

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



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__10__encode_invalid_chars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__10__encode_invalid_chars,
        mod_consts.const_str_plain__encode_invalid_chars,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6027d03785e8522e58e8f49be38c3c93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_e04463182c8587d07b7e2ce9414a6cd0,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_35bba484bbb408557a5ead2b7cb211b4,
#endif
        code_objects_e1e15555e48706a5f6cdc00447aef224,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__11__remove_path_dot_segments(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__11__remove_path_dot_segments,
        mod_consts.const_str_plain__remove_path_dot_segments,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ce00dfd55d24c4d7b655fcd09bfcf3a5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__12__normalize_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__normalize_host,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_11ddae64d02d791d99d96dbbcbf87cf1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__13__normalize_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__normalize_host,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3acfc4b3deb9591f4dfb93100feba93a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__14__normalize_host(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__14__normalize_host,
        mod_consts.const_str_plain__normalize_host,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_faa6ab7ac43f22b11d01eac57e48f4b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__15__idna_encode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__15__idna_encode,
        mod_consts.const_str_plain__idna_encode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_22968d50e44b1b76a6fcaf8d0447a848,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__16__encode_target(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__16__encode_target,
        mod_consts.const_str_plain__encode_target,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c4e14527f3020b305c1cbf0c0da93712,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_2bae53c8854d1d341b4773faec15848e,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__17_parse_url(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__17_parse_url,
        mod_consts.const_str_plain_parse_url,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c095dbe127b902b73e17d1723acea4c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_dceaaf054c60480723cf0dca67040848,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__1___new__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__1___new__,
        mod_consts.const_str_plain___new__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d059371e62041157c75568892a4792b2,
#endif
        code_objects_e6b52bd8d03ff531332780a102e4caf3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__2_hostname(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__2_hostname,
        mod_consts.const_str_plain_hostname,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d503b56d297494d3676c16d8414f11cd,
#endif
        code_objects_95e78ae9a3a80ae111e0ed47b3eab53d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_f43e189ec0b8de0c869cd891f79f8d5c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__3_request_uri(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__3_request_uri,
        mod_consts.const_str_plain_request_uri,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8db79b9d0912cab551b32203f01865e,
#endif
        code_objects_faa8f2febe82b2f4b5e3bf53a20fb510,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_eee64e928d1d5bb591f23189f7760b5c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__4_authority(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__4_authority,
        mod_consts.const_str_plain_authority,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_68f0cb9ffc866f2a93239e5e9b796d6a,
#endif
        code_objects_4573eba5641e2c0eb5532965e5c24972,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_56b417e840320c395c08a9bd42671139,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__5_netloc(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__5_netloc,
        mod_consts.const_str_plain_netloc,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e588ffd8998d7aa65d2f47eef1a83f98,
#endif
        code_objects_bc6072cff8b4eb309f1b0119a918611a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_236a74b8daaa75962e98c9f2472ef238,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__6_url(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__6_url,
        mod_consts.const_str_plain_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67a7add68e3824f4c255c17aad8377c0,
#endif
        code_objects_3acc7d10c3b94a436a1bd69754068269,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        mod_consts.const_str_digest_0f499271aa73f3caa920de9d2cacaaba,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__7___str__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$url$$$function__7___str__,
        mod_consts.const_str_plain___str__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ba44c1ca6ead3bd22179c5b60b235495,
#endif
        code_objects_dec4e83062a40961698298ce1e26ea01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__8__encode_invalid_chars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__encode_invalid_chars,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bc495fdace6dd0f279cd825f3452be87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$url$$$function__9__encode_invalid_chars(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain__encode_invalid_chars,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e7231919cb5616d7d3a91b2c2ad82b57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$url,
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

static function_impl_code const function_table_urllib3$util$url[] = {
impl_urllib3$util$url$$$function__10__encode_invalid_chars$$$function__1_lambda,
impl_urllib3$util$url$$$function__1___new__,
impl_urllib3$util$url$$$function__2_hostname,
impl_urllib3$util$url$$$function__3_request_uri,
impl_urllib3$util$url$$$function__4_authority,
impl_urllib3$util$url$$$function__5_netloc,
impl_urllib3$util$url$$$function__6_url,
impl_urllib3$util$url$$$function__7___str__,
impl_urllib3$util$url$$$function__10__encode_invalid_chars,
impl_urllib3$util$url$$$function__11__remove_path_dot_segments,
impl_urllib3$util$url$$$function__14__normalize_host,
impl_urllib3$util$url$$$function__15__idna_encode,
impl_urllib3$util$url$$$function__16__encode_target,
impl_urllib3$util$url$$$function__17_parse_url,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$url);
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
        module_urllib3$util$url,
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
        function_table_urllib3$util$url,
        sizeof(function_table_urllib3$util$url) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.url";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$url(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$url");

    // Store the module for future use.
    module_urllib3$util$url = module;

    moduledict_urllib3$util$url = MODULE_DICT(module_urllib3$util$url);

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
        PRINT_STRING("urllib3$util$url: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$url: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$url: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.url" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$url\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$url,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$url,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$url,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$url);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$url);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_x = NULL;
PyCellObject *outline_1_var___class__ = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_urllib3$util$url$$$class__1_Url_81 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_urllib3$util$url$$$class__1_Url_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$url = MAKE_MODULE_FRAME(code_objects_bbad885364f1a1ee8389133297c4a9fe, module_urllib3$util$url);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url);
assert(Py_REFCNT(frame_frame_urllib3$util$url) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$url$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$url$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$url;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$url->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_7);
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
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$url;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_LocationParseError_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$url->m_frame.f_lineno = 6;
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
        (PyObject *)moduledict_urllib3$util$url,
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
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_LocationParseError, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_util;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$url;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_to_str_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_urllib3$util$url->m_frame.f_lineno = 7;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$util$url,
        mod_consts.const_str_plain_to_str,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_to_str);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_to_str, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_tuple_str_plain_http_str_plain_https_none_tuple;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__NORMALIZABLE_SCHEMES, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 15;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e60c8f79207cc323ac04268ccfd1523b_tuple, 0)
);

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PERCENT_RE, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 16;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_db2e36596eb73c3bb49832ec8da0df8d_tuple, 0)
);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SCHEME_RE, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_9e018168c6b1068c3d71dabbe3c5a41e;
tmp_expression_value_2 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_UNICODE);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_DOTALL);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 17;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__URI_RE, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_digest_1826b28c6860a07db9041706aee97be0;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_PAT, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_f56592be3c4b72ed57ac76571250b6e0;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HEX_PAT, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_5c6a13c7a87c0f009723bae63b328c57;
tmp_kw_call_dict_value_0_1 = module_var_accessor_urllib3$util$url$_HEX_PAT(tstate);
assert(!(tmp_kw_call_dict_value_0_1 == NULL));
tmp_kw_call_dict_value_1_1 = module_var_accessor_urllib3$util$url$_IPV4_PAT(tstate);
assert(!(tmp_kw_call_dict_value_1_1 == NULL));
frame_frame_urllib3$util$url->m_frame.f_lineno = 28;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts.const_tuple_str_plain_hex_str_plain_ipv4_tuple);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__LS32_PAT, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_hex;
tmp_dict_value_1 = module_var_accessor_urllib3$util$url$_HEX_PAT(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_17 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ls32;
tmp_dict_value_1 = module_var_accessor_urllib3$util$url$_LS32_PAT(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__subs, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_LIST9(tstate, mod_consts.const_list_ae218dac465ffd29a1590e54ba0330fa_list);
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__variations, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_str_digest_5392fbc9acf6cf66badba51f368ac5a7;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_PAT, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_add_expr_left_2 = mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30;
tmp_str_arg_value_1 = mod_consts.const_str_chr_124;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_urllib3$util$url$_variations(tstate);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_21 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_1;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_23 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_23 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 52;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_24 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_x;
    outline_0_var_x = tmp_assign_source_24;
    Py_INCREF(outline_0_var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_x);
tmp_mod_expr_left_1 = outline_0_var_x;
tmp_mod_expr_right_1 = module_var_accessor_urllib3$util$url$_subs(tstate);
if (unlikely(tmp_mod_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__subs);
}

if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto try_except_handler_2;
}
tmp_append_value_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_iterable_value_1 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_iterable_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
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

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_x);
outline_0_var_x = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
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
exception_lineno = 52;
goto frame_exception_exit_1;
outline_result_1:;
tmp_add_expr_right_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
assert(!(tmp_add_expr_left_1 == NULL));
tmp_add_expr_right_1 = mod_consts.const_str_chr_41;
tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_assign_source_20 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_PAT, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
tmp_add_expr_left_4 = mod_consts.const_str_digest_1a37f630533acb99bcd4d2571342c253;
tmp_add_expr_right_4 = module_var_accessor_urllib3$util$url$_UNRESERVED_PAT(tstate);
if (unlikely(tmp_add_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__UNRESERVED_PAT);
}

if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_893fe2b0635ac22bae10876914286bf9;
tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_PAT, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
PyObject *tmp_add_expr_left_8;
PyObject *tmp_add_expr_right_8;
tmp_add_expr_left_8 = mod_consts.const_str_digest_9e42a8e9bfa4b8bacd0b07d808116ec3;
tmp_add_expr_right_8 = module_var_accessor_urllib3$util$url$_IPV6_PAT(tstate);
if (unlikely(tmp_add_expr_right_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV6_PAT);
}

if (tmp_add_expr_right_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
if (tmp_add_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_7 = mod_consts.const_str_digest_c64595dbb448219932b659de56da4f30;
tmp_add_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_left_7);
Py_DECREF(tmp_add_expr_left_7);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_6 = module_var_accessor_urllib3$util$url$_ZONE_ID_PAT(tstate);
if (unlikely(tmp_add_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ZONE_ID_PAT);
}

if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_6);

exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_5 = mod_consts.const_str_digest_c412f93a6e1f91caf77c0a410b265bf2;
tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_PAT, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_str_digest_34cb1f5e992ee5e7b808e8622e86b89f;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__REG_NAME_PAT, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 56;
tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_4b5aab0d88a6e77a2592d22f0375abd4_tuple, 0)
);

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__TARGET_RE, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_add_expr_left_9;
PyObject *tmp_add_expr_right_9;
PyObject *tmp_add_expr_left_10;
PyObject *tmp_add_expr_right_10;
tmp_expression_value_4 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_compile);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_10 = mod_consts.const_str_chr_94;
tmp_add_expr_right_10 = module_var_accessor_urllib3$util$url$_IPV4_PAT(tstate);
if (unlikely(tmp_add_expr_right_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV4_PAT);
}

if (tmp_add_expr_right_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
if (tmp_add_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_9 = mod_consts.const_str_chr_36;
tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
CHECK_OBJECT(tmp_add_expr_left_9);
Py_DECREF(tmp_add_expr_left_9);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 58;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 58;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV4_RE, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_add_expr_left_11;
PyObject *tmp_add_expr_right_11;
PyObject *tmp_add_expr_left_12;
PyObject *tmp_add_expr_right_12;
tmp_expression_value_5 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_compile);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_12 = mod_consts.const_str_chr_94;
tmp_add_expr_right_12 = module_var_accessor_urllib3$util$url$_IPV6_PAT(tstate);
if (unlikely(tmp_add_expr_right_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV6_PAT);
}

if (tmp_add_expr_right_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
if (tmp_add_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_11 = mod_consts.const_str_chr_36;
tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
CHECK_OBJECT(tmp_add_expr_left_11);
Py_DECREF(tmp_add_expr_left_11);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 59;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 59;
tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_RE, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_add_expr_left_13;
PyObject *tmp_add_expr_right_13;
PyObject *tmp_add_expr_left_14;
PyObject *tmp_add_expr_right_14;
tmp_expression_value_6 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_compile);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_14 = mod_consts.const_str_chr_94;
tmp_add_expr_right_14 = module_var_accessor_urllib3$util$url$_IPV6_ADDRZ_PAT(tstate);
if (unlikely(tmp_add_expr_right_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
}

if (tmp_add_expr_right_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
if (tmp_add_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 60;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_13 = mod_consts.const_str_chr_36;
tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_13, tmp_add_expr_right_13);
CHECK_OBJECT(tmp_add_expr_left_13);
Py_DECREF(tmp_add_expr_left_13);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 60;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 60;
tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__IPV6_ADDRZ_RE, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_add_expr_left_15;
PyObject *tmp_add_expr_right_15;
PyObject *tmp_add_expr_left_16;
PyObject *tmp_add_expr_right_16;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
tmp_expression_value_7 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_compile);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_16 = mod_consts.const_str_chr_94;
tmp_expression_value_8 = module_var_accessor_urllib3$util$url$_IPV6_ADDRZ_PAT(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 61;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_2_int_neg_2_none;
tmp_add_expr_right_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
if (tmp_add_expr_right_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 61;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
CHECK_OBJECT(tmp_add_expr_right_16);
Py_DECREF(tmp_add_expr_right_16);
if (tmp_add_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 61;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_15 = mod_consts.const_str_chr_36;
tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_15, tmp_add_expr_right_15);
CHECK_OBJECT(tmp_add_expr_left_15);
Py_DECREF(tmp_add_expr_left_15);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 61;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 61;
tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__BRACELESS_IPV6_ADDRZ_RE, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_7;
PyObject *tmp_add_expr_left_17;
PyObject *tmp_add_expr_right_17;
PyObject *tmp_add_expr_left_18;
PyObject *tmp_add_expr_right_18;
tmp_expression_value_9 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_compile);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_18 = mod_consts.const_str_chr_40;
tmp_add_expr_right_18 = module_var_accessor_urllib3$util$url$_ZONE_ID_PAT(tstate);
if (unlikely(tmp_add_expr_right_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ZONE_ID_PAT);
}

if (tmp_add_expr_right_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_18, tmp_add_expr_right_18);
if (tmp_add_expr_left_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 62;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_17 = mod_consts.const_str_digest_d7d843a06233e3f568e27f38bb8d7b08;
tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_17, tmp_add_expr_right_17);
CHECK_OBJECT(tmp_add_expr_left_17);
Py_DECREF(tmp_add_expr_left_17);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 62;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 62;
tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__ZONE_ID_RE, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_1;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_c61e7bf435c0f29154c94faf76a898d9;
tmp_tuple_element_1 = module_var_accessor_urllib3$util$url$_REG_NAME_PAT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__REG_NAME_PAT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_urllib3$util$url$_IPV4_PAT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV4_PAT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_urllib3$util$url$_IPV6_ADDRZ_PAT(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__IPV6_ADDRZ_PAT);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 2, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_34 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_PAT, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_bitor_expr_left_2;
PyObject *tmp_bitor_expr_right_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
tmp_expression_value_10 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_compile);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = module_var_accessor_urllib3$util$url$_HOST_PORT_PAT(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HOST_PORT_PAT);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_bitor_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_UNICODE);
if (tmp_bitor_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_urllib3$util$url$re(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_bitor_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_DOTALL);
if (tmp_bitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_bitor_expr_left_2);

exception_lineno = 69;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
CHECK_OBJECT(tmp_bitor_expr_left_2);
Py_DECREF(tmp_bitor_expr_left_2);
CHECK_OBJECT(tmp_bitor_expr_right_2);
Py_DECREF(tmp_bitor_expr_right_2);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 69;

    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 69;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__HOST_PORT_RE, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = PySet_New(mod_consts.const_set_53c45e97258f633aa3f886c742860f33);
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__UNRESERVED_CHARS, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = PySet_New(mod_consts.const_set_5a2bee9af70a72b54f166fa336f500da);
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__SUB_DELIM_CHARS, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_bitor_expr_left_3;
PyObject *tmp_bitor_expr_right_3;
PyObject *tmp_bitor_expr_left_4;
PyObject *tmp_bitor_expr_right_4;
tmp_bitor_expr_left_4 = module_var_accessor_urllib3$util$url$_UNRESERVED_CHARS(tstate);
assert(!(tmp_bitor_expr_left_4 == NULL));
tmp_bitor_expr_right_4 = module_var_accessor_urllib3$util$url$_SUB_DELIM_CHARS(tstate);
assert(!(tmp_bitor_expr_right_4 == NULL));
tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
assert(!(tmp_bitor_expr_left_3 == NULL));
tmp_bitor_expr_right_3 = PySet_New(mod_consts.const_set_bcce24f0c8d079704fc70e247346cc7b);
tmp_assign_source_38 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
CHECK_OBJECT(tmp_bitor_expr_left_3);
Py_DECREF(tmp_bitor_expr_left_3);
CHECK_OBJECT(tmp_bitor_expr_right_3);
Py_DECREF(tmp_bitor_expr_right_3);
assert(!(tmp_assign_source_38 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__USERINFO_CHARS, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_bitor_expr_left_5;
PyObject *tmp_bitor_expr_right_5;
tmp_bitor_expr_left_5 = module_var_accessor_urllib3$util$url$_USERINFO_CHARS(tstate);
assert(!(tmp_bitor_expr_left_5 == NULL));
tmp_bitor_expr_right_5 = PySet_New(mod_consts.const_set_c7ff68bd4b749917aca63d91185114e2);
tmp_assign_source_39 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
CHECK_OBJECT(tmp_bitor_expr_right_5);
Py_DECREF(tmp_bitor_expr_right_5);
assert(!(tmp_assign_source_39 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__PATH_CHARS, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_bitor_expr_left_6;
PyObject *tmp_bitor_expr_right_6;
tmp_bitor_expr_left_6 = module_var_accessor_urllib3$util$url$_PATH_CHARS(tstate);
assert(!(tmp_bitor_expr_left_6 == NULL));
tmp_bitor_expr_right_6 = PySet_New(mod_consts.const_set_ce2337c37dea2cd674cc672020e00412);
tmp_assign_source_40 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
CHECK_OBJECT(tmp_bitor_expr_right_6);
Py_DECREF(tmp_bitor_expr_right_6);
assert(!(tmp_assign_source_40 == NULL));
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_41 = tmp_assign_unpack_1__assign_source;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__QUERY_CHARS, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_42 = tmp_assign_unpack_1__assign_source;
UPDATE_STRING_DICT0(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__FRAGMENT_CHARS, tmp_assign_source_42);
}
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_43;
PyObject *tmp_tuple_element_2;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_3;
tmp_expression_value_13 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_13 == NULL));
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_NamedTuple);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
tmp_args_element_value_10 = mod_consts.const_str_plain_Url;
tmp_tuple_element_3 = mod_consts.const_str_plain_scheme;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_2;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_3);
tmp_expression_value_15 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_15 == NULL));
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto tuple_build_exception_2;
}
tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_list_element_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_11 = MAKE_LIST_EMPTY(tstate, 7);
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_tuple_element_6;
PyObject *tmp_tuple_element_7;
PyObject *tmp_tuple_element_8;
PyObject *tmp_tuple_element_9;
PyList_SET_ITEM(tmp_args_element_value_11, 0, tmp_list_element_1);
tmp_tuple_element_4 = mod_consts.const_str_plain_auth;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
tmp_expression_value_17 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_17 == NULL));
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_3;
}
tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyList_SET_ITEM(tmp_args_element_value_11, 1, tmp_list_element_1);
tmp_tuple_element_5 = mod_consts.const_str_plain_host;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
tmp_expression_value_19 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_19 == NULL));
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto tuple_build_exception_4;
}
tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
PyList_SET_ITEM(tmp_args_element_value_11, 2, tmp_list_element_1);
tmp_tuple_element_6 = mod_consts.const_str_plain_port;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_5;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
tmp_expression_value_21 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_21 == NULL));
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto tuple_build_exception_5;
}
tmp_subscript_value_5 = (PyObject *)&PyLong_Type;
tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
PyList_SET_ITEM(tmp_args_element_value_11, 3, tmp_list_element_1);
tmp_tuple_element_7 = const_str_plain_path;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_6;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
tmp_expression_value_23 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_23 == NULL));
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto tuple_build_exception_6;
}
tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyList_SET_ITEM(tmp_args_element_value_11, 4, tmp_list_element_1);
tmp_tuple_element_8 = mod_consts.const_str_plain_query;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_7;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
tmp_expression_value_25 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_25 == NULL));
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto tuple_build_exception_7;
}
tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_7);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
PyList_SET_ITEM(tmp_args_element_value_11, 5, tmp_list_element_1);
tmp_tuple_element_9 = mod_consts.const_str_plain_fragment;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_8;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
tmp_expression_value_27 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_27 == NULL));
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_Optional);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto tuple_build_exception_8;
}
tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_8);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
PyList_SET_ITEM(tmp_args_element_value_11, 6, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_args_element_value_11);
goto try_except_handler_3;
// Finished with no exception for list_build:
list_build_no_exception_1:;
frame_frame_urllib3$util$url->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
tmp_assign_source_43 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_43, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_44 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_28 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_9, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_46;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_47;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_Url;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_urllib3$util$url->m_frame.f_lineno = 81;
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_47;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_31 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
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
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_3;
}
frame_frame_urllib3$util$url->m_frame.f_lineno = 81;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_48;
}
branch_end_1:;
{
PyObject *tmp_assign_source_49;
outline_1_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$util$url$$$class__1_Url_81 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_b04d4c22614b9ff9b4fadfb8c8b3f608;
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_6832311759b3e442c157edeb3453516f;
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_Url;
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_80;
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_5;
}
frame_frame_urllib3$util$url$$$class__1_Url_2 = MAKE_CLASS_FRAME(tstate, code_objects_07bf04305d6a00e02d7b646401461bd8, module_urllib3$util$url, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$url$$$class__1_Url_2, locals_urllib3$util$url$$$class__1_Url_81);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$url$$$class__1_Url_2);
assert(Py_REFCNT(frame_frame_urllib3$util$url$$$class__1_Url_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_none_none_none_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_141b4456da149c4e2b447d2981b7e875);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_urllib3$util$url$$$function__1___new__(tstate, tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain___new__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_2;
tmp_called_value_10 = PyObject_GetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_12 = MAKE_FUNCTION_urllib3$util$url$$$function__2_hostname(tstate, tmp_annotations_2);

frame_frame_urllib3$util$url$$$class__1_Url_2->m_frame.f_lineno = 116;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_hostname, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_3;
tmp_called_value_11 = PyObject_GetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_13 = MAKE_FUNCTION_urllib3$util$url$$$function__3_request_uri(tstate, tmp_annotations_3);

frame_frame_urllib3$util$url$$$class__1_Url_2->m_frame.f_lineno = 121;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_request_uri, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_4;
tmp_called_value_12 = PyObject_GetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_14 = MAKE_FUNCTION_urllib3$util$url$$$function__4_authority(tstate, tmp_annotations_4);

frame_frame_urllib3$util$url$$$class__1_Url_2->m_frame.f_lineno = 131;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_authority, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_5;
tmp_called_value_13 = PyObject_GetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_15 = MAKE_FUNCTION_urllib3$util$url$$$function__5_netloc(tstate, tmp_annotations_5);

frame_frame_urllib3$util$url$$$class__1_Url_2->m_frame.f_lineno = 147;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_netloc, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_6;
tmp_called_value_14 = PyObject_GetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_property);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_16 = MAKE_FUNCTION_urllib3$util$url$$$function__6_url(tstate, tmp_annotations_6);

frame_frame_urllib3$util$url$$$class__1_Url_2->m_frame.f_lineno = 161;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_urllib3$util$url$$$function__7___str__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain___str__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$url$$$class__1_Url_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url$$$class__1_Url_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url$$$class__1_Url_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url$$$class__1_Url_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$url$$$class__1_Url_2,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_urllib3$util$url$$$class__1_Url_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$url$$$class__1_Url_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_5;
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


exception_lineno = 81;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_urllib3$util$url$$$class__1_Url_81, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_5;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = mod_consts.const_str_plain_Url;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_urllib3$util$url$$$class__1_Url_81;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_1, const_str_plain___classcell__, (PyObject *)outline_1_var___class__);
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_5, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_5;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_1_var___class__);
    PyCell_SET((PyObject *)outline_1_var___class__, tmp_assign_source_50);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_1_var___class__));
tmp_assign_source_49 = PyCell_GET((PyObject *)outline_1_var___class__);
Py_INCREF(tmp_assign_source_49);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_urllib3$util$url$$$class__1_Url_81);
locals_urllib3$util$url$$$class__1_Url_81 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$url$$$class__1_Url_81);
locals_urllib3$util$url$$$class__1_Url_81 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_1_var___class__);
assert(PyCell_Check((PyObject *)outline_1_var___class__));
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 81;
goto try_except_handler_3;
outline_result_3:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_Url, tmp_assign_source_49);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
goto outline_result_2;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_8;
tmp_called_instance_4 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_4 == NULL));
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_e76054befe70e533528a2eb21f09d07a);

tmp_args_element_value_17 = MAKE_FUNCTION_urllib3$util$url$$$function__8__encode_invalid_chars(tstate, tmp_annotations_8);

frame_frame_urllib3$util$url->m_frame.f_lineno = 213;
tmp_assign_source_51 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_overload, tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_invalid_chars, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_9;
tmp_called_instance_5 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_5 == NULL));
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_ee4b4b0ecc14f28f472dcd420a909d2d);

tmp_args_element_value_18 = MAKE_FUNCTION_urllib3$util$url$$$function__9__encode_invalid_chars(tstate, tmp_annotations_9);

frame_frame_urllib3$util$url->m_frame.f_lineno = 220;
tmp_assign_source_52 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_overload, tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_invalid_chars, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_3c7d02ee25cb50ca1d0c8569fa7a1936);

tmp_assign_source_53 = MAKE_FUNCTION_urllib3$util$url$$$function__10__encode_invalid_chars(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_invalid_chars, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_22cacb1771d5ae388aa90a755d3c3678);

tmp_assign_source_54 = MAKE_FUNCTION_urllib3$util$url$$$function__11__remove_path_dot_segments(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__remove_path_dot_segments, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_19;
PyObject *tmp_annotations_12;
tmp_called_instance_6 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_6 == NULL));
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_01380e6fa1b133bf639b03144c44354f);

tmp_args_element_value_19 = MAKE_FUNCTION_urllib3$util$url$$$function__12__normalize_host(tstate, tmp_annotations_12);

frame_frame_urllib3$util$url->m_frame.f_lineno = 293;
tmp_assign_source_55 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_overload, tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_host, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_20;
PyObject *tmp_annotations_13;
tmp_called_instance_7 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_7 == NULL));
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e4a8086e5367b0bb6fd855de17493b98);

tmp_args_element_value_20 = MAKE_FUNCTION_urllib3$util$url$$$function__13__normalize_host(tstate, tmp_annotations_13);

frame_frame_urllib3$util$url->m_frame.f_lineno = 297;
tmp_assign_source_56 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_overload, tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_host, tmp_assign_source_56);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_ecc03db4bb21f8563243a456a7033fb7);

tmp_assign_source_57 = MAKE_FUNCTION_urllib3$util$url$$$function__14__normalize_host(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__normalize_host, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_22aeb36c3603aeb0781b2ad0d66736ef);

tmp_assign_source_58 = MAKE_FUNCTION_urllib3$util$url$$$function__15__idna_encode(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__idna_encode, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_dd3e931f637f4cf6833fd2791b55e5e3);

tmp_assign_source_59 = MAKE_FUNCTION_urllib3$util$url$$$function__16__encode_target(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain__encode_target, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_e1d9687ff149fd9dc32e97c9b705edce);

tmp_assign_source_60 = MAKE_FUNCTION_urllib3$util$url$$$function__17_parse_url(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_urllib3$util$url, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_url, tmp_assign_source_60);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$url", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.url" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$url);
    return module_urllib3$util$url;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$url, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$url", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
