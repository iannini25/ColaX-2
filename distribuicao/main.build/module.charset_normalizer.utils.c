/* Generated code for Python module 'charset_normalizer$utils'
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



/* The "module_charset_normalizer$utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_charset_normalizer$utils;
PyDictObject *moduledict_charset_normalizer$utils;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_unicodedata;
PyObject *const_str_plain_LATIN;
PyObject *const_str_plain__LATIN;
PyObject *const_str_plain_CJK;
PyObject *const_str_plain__CJK;
PyObject *const_str_plain_HANGUL;
PyObject *const_str_plain__HANGUL;
PyObject *const_str_plain_KATAKANA;
PyObject *const_str_plain__KATAKANA;
PyObject *const_str_plain_HIRAGANA;
PyObject *const_str_plain__HIRAGANA;
PyObject *const_str_plain_THAI;
PyObject *const_str_plain__THAI;
PyObject *const_str_plain_ARABIC;
PyObject *const_str_plain__ARABIC;
PyObject *const_str_digest_fb192ab4fd674b435fa057e3b05ec20e;
PyObject *const_str_plain__ARABIC_ISOLATED_FORM;
PyObject *const_str_plain__ACCENT_KEYWORDS;
PyObject *const_str_plain__ACCENTUATED;
PyObject *const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91;
PyObject *const_str_plain__character_flags;
PyObject *const_str_plain_decomposition;
PyObject *const_tuple_str_space_tuple;
PyObject *const_int_pos_16;
PyObject *const_str_plain_start;
PyObject *const_str_plain_stop;
PyObject *const_str_angle_genexpr;
PyObject *const_str_plain_bisect_right;
PyObject *const_str_plain__UNICODE_RANGE_STARTS;
PyObject *const_str_plain__UNICODE_RANGES_SORTED;
PyObject *const_str_digest_d1dc48b0931ccac4e224b346a7c707ad;
PyObject *const_str_plain_category;
PyObject *const_str_plain_P;
PyObject *const_str_plain_unicode_range;
PyObject *const_str_plain_Punctuation;
PyObject *const_str_plain_S;
PyObject *const_str_plain_N;
PyObject *const_str_plain_Forms;
PyObject *const_str_plain_Lo;
PyObject *const_str_plain_Emoticons;
PyObject *const_str_plain_Pictographs;
PyObject *const_str_plain_isspace;
PyObject *const_frozenset_503566b97506a63a5d02f99cc421d27f;
PyObject *const_str_plain_Z;
PyObject *const_frozenset_9a946cbee04a173493ae3bf696d29b45;
PyObject *const_str_plain_islower;
PyObject *const_str_plain_isupper;
PyObject *const_str_plain_COMMON_CJK_CHARACTERS;
PyObject *const_str_plain__SECONDARY_RANGE_NAMES;
PyObject *const_str_plain_isprintable;
PyObject *const_str_chr_26;
PyObject *const_str_chr_65279;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_plain_min;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_str_plain_ignore_tuple;
PyObject *const_tuple_str_plain_errors_tuple;
PyObject *const_str_plain_coding;
PyObject *const_str_plain_charset;
PyObject *const_str_plain_findall;
PyObject *const_str_plain_RE_POSSIBLE_ENCODING_INDICATION;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_chr_45_str_underscore_tuple;
PyObject *const_str_plain_aliases;
PyObject *const_str_plain_items;
PyObject *const_str_digest_42c809df7db07610dbbbdc538ed8f128;
PyObject *const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b;
PyObject *const_tuple_70132459071aad542c4b7657c14fc8c1_tuple;
PyObject *const_str_plain_import_module;
PyObject *const_str_plain_getcodec;
PyObject *const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple;
PyObject *const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4;
PyObject *const_str_plain_ENCODING_MARKS;
PyObject *const_str_plain_sequence;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_none_bytes_empty_tuple;
PyObject *const_str_digest_026419c17c42d9df9ef3775275439e4a;
PyObject *const_frozenset_8b8956f3cc0832019a3ac3569dee251f;
PyObject *const_str_digest_f0b791082e82317222078abaaf61635a;
PyObject *const_str_chr_39;
PyObject *const_str_digest_c6ee51c58eaa778c6f3b21966e295096;
PyObject *const_str_plain_is_multi_byte_encoding;
PyObject *const_str_digest_212db538fd02d8496c4b3ecd7feeb10c;
PyObject *const_str_plain_IncrementalDecoder;
PyObject *const_tuple_str_plain_ignore_tuple;
PyObject *const_xrange_0_256;
PyObject *const_str_plain_id_a;
PyObject *const_str_plain_id_b;
PyObject *const_str_plain_character_match_count;
PyObject *const_int_pos_256;
PyObject *const_str_plain_IANA_SUPPORTED_SIMILAR;
PyObject *const_str_digest_478ae45b8c76a8928301a9feb93f8ab9;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_getLogger;
PyObject *const_str_plain_setLevel;
PyObject *const_str_plain_StreamHandler;
PyObject *const_str_plain_setFormatter;
PyObject *const_str_plain_Formatter;
PyObject *const_str_plain_addHandler;
PyObject *const_str_plain_decoded_payload;
PyObject *const_str_plain_is_multi_byte_decoder;
PyObject *const_str_plain_offsets;
PyObject *const_str_plain_chunk_size;
PyObject *const_str_plain_deferred_decoding;
PyObject *const_str_plain_strip_sig_or_bom;
PyObject *const_str_plain_sequences;
PyObject *const_str_plain_sig_payload;
PyObject *const_str_plain_encoding_iana;
PyObject *const_str_plain_bom_or_sig_available;
PyObject *const_str_plain_ignore;
PyObject *const_str_plain_strict;
PyObject *const_int_pos_4;
PyObject *const_str_plain_chunk;
PyObject *const_str_plain_cut_sequence_chunks;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_importlib;
PyObject *const_str_plain_bisect;
PyObject *const_tuple_str_plain_bisect_right_tuple;
PyObject *const_str_plain_codecs;
PyObject *const_tuple_str_plain_IncrementalDecoder_tuple;
PyObject *const_str_digest_17f7455087ff52977baad581ef5a11cb;
PyObject *const_tuple_str_plain_aliases_tuple;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_re;
PyObject *const_tuple_str_plain_findall_tuple;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_constant;
PyObject *const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple;
PyObject *const_str_plain_UNICODE_RANGES_COMBINED;
PyObject *const_str_plain_UTF8_MAXIMAL_ALLOCATION;
PyObject *const_dict_28c6abf7ef2eebaec767b8ee8e47f04f;
PyObject *const_dict_341db97459da1437e49b0b30023eda72;
PyObject *const_str_plain_is_accentuated;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_56acd67f60b561438df177796104f77c;
PyObject *const_str_plain_remove_accent;
PyObject *const_str_plain_sorted;
PyObject *const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9;
PyObject *const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706;
PyObject *const_dict_12515120807db0a69dfa8cc956f4e02b;
PyObject *const_str_plain_is_latin;
PyObject *const_str_plain_is_punctuation;
PyObject *const_str_plain_is_symbol;
PyObject *const_str_plain_is_emoticon;
PyObject *const_str_plain_is_separator;
PyObject *const_str_plain_is_case_variable;
PyObject *const_str_plain_is_cjk;
PyObject *const_str_plain_is_hiragana;
PyObject *const_str_plain_is_katakana;
PyObject *const_str_plain_is_hangul;
PyObject *const_str_plain_is_thai;
PyObject *const_str_plain_is_arabic;
PyObject *const_str_plain_is_arabic_isolated_form;
PyObject *const_str_plain_is_cjk_uncommon;
PyObject *const_dict_8b4f41aaf32259eb145c85034769e8c7;
PyObject *const_str_plain_is_unicode_range_secondary;
PyObject *const_str_plain_is_unprintable;
PyObject *const_tuple_int_pos_8192_tuple;
PyObject *const_dict_06494af8acb5254f2025a296d0460a57;
PyObject *const_str_plain_any_specified_encoding;
PyObject *const_tuple_int_pos_128_tuple;
PyObject *const_dict_c32046162d4d28465fa536447b566c4c;
PyObject *const_dict_fef2f5d2b6ff49c9f253d27d1514b809;
PyObject *const_str_plain_identify_sig_or_bom;
PyObject *const_dict_b035440771b7f4dc07a1a7b559c944e9;
PyObject *const_str_plain_should_strip_sig_or_bom;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_106a9c5d40f2b71272f04ea9c4db4d1d;
PyObject *const_str_plain_iana_name;
PyObject *const_dict_9b46f26a85dae4fada0b2530beb27e9e;
PyObject *const_str_plain_cp_similarity;
PyObject *const_dict_fc88334d29085f308acbc444add2fb49;
PyObject *const_str_plain_is_cp_similar;
PyObject *const_str_plain_charset_normalizer;
PyObject *const_str_plain_INFO;
PyObject *const_str_digest_ef5a70c0803e49dd3e197d45f17aa590;
PyObject *const_dict_ad4150f46e206975a00c9753f9ef9d68;
PyObject *const_str_plain_set_logging_handler;
PyObject *const_tuple_none_false_tuple;
PyObject *const_dict_55708f041515913b72117324d6bdae1b;
PyObject *const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b;
PyObject *const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple;
PyObject *const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0;
PyObject *const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple;
PyObject *const_tuple_16389b611761f7897cc065a81f442e94_tuple;
PyObject *const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple;
PyObject *const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple;
PyObject *const_tuple_03efaa63a77f78801954616e4e44d20c_tuple;
PyObject *const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple;
PyObject *const_tuple_str_plain_character_tuple;
PyObject *const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple;
PyObject *const_tuple_str_plain_character_str_plain_character_range_tuple;
PyObject *const_tuple_str_plain_name_str_plain_provider_tuple;
PyObject *const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple;
PyObject *const_tuple_str_plain_character_str_plain_character_category_tuple;
PyObject *const_tuple_str_plain_range_name_tuple;
PyObject *const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple;
PyObject *const_tuple_b6c83e287fc831affbba1f11825b9878_tuple;
PyObject *const_tuple_str_plain_iana_encoding_tuple;
PyObject *const_tuple_be8731981beffe4b0797c3723bac4899_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[202];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("charset_normalizer.utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 202) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 202 values, got %d\n",
                    UN_TRANSLATE("charset_normalizer.utils"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicodedata", mod_consts.const_str_plain_unicodedata);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LATIN", mod_consts.const_str_plain_LATIN);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_LATIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LATIN", mod_consts.const_str_plain__LATIN);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__LATIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CJK", mod_consts.const_str_plain_CJK);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_CJK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CJK", mod_consts.const_str_plain__CJK);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__CJK);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANGUL", mod_consts.const_str_plain_HANGUL);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANGUL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HANGUL", mod_consts.const_str_plain__HANGUL);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__HANGUL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KATAKANA", mod_consts.const_str_plain_KATAKANA);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_KATAKANA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KATAKANA", mod_consts.const_str_plain__KATAKANA);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__KATAKANA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HIRAGANA", mod_consts.const_str_plain_HIRAGANA);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_HIRAGANA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HIRAGANA", mod_consts.const_str_plain__HIRAGANA);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__HIRAGANA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_THAI", mod_consts.const_str_plain_THAI);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_THAI);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__THAI", mod_consts.const_str_plain__THAI);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__THAI);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ARABIC", mod_consts.const_str_plain_ARABIC);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_ARABIC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ARABIC", mod_consts.const_str_plain__ARABIC);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__ARABIC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e", mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ARABIC_ISOLATED_FORM", mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ACCENT_KEYWORDS", mod_consts.const_str_plain__ACCENT_KEYWORDS);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__ACCENT_KEYWORDS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ACCENTUATED", mod_consts.const_str_plain__ACCENTUATED);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__ACCENTUATED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91", mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__character_flags", mod_consts.const_str_plain__character_flags);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__character_flags);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decomposition", mod_consts.const_str_plain_decomposition);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_decomposition);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_space_tuple", mod_consts.const_tuple_str_space_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stop", mod_consts.const_str_plain_stop);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bisect_right", mod_consts.const_str_plain_bisect_right);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_right);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNICODE_RANGE_STARTS", mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNICODE_RANGES_SORTED", mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad", mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_category", mod_consts.const_str_plain_category);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_category);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicode_range", mod_consts.const_str_plain_unicode_range);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_range);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Punctuation", mod_consts.const_str_plain_Punctuation);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_Punctuation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_S", mod_consts.const_str_plain_S);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_S);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_N", mod_consts.const_str_plain_N);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_N);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Forms", mod_consts.const_str_plain_Forms);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Forms);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Lo", mod_consts.const_str_plain_Lo);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lo);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Emoticons", mod_consts.const_str_plain_Emoticons);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Emoticons);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Pictographs", mod_consts.const_str_plain_Pictographs);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pictographs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isspace", mod_consts.const_str_plain_isspace);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_isspace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f", mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Z", mod_consts.const_str_plain_Z);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_Z);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45", mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_islower", mod_consts.const_str_plain_islower);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_islower);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isupper", mod_consts.const_str_plain_isupper);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_isupper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COMMON_CJK_CHARACTERS", mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SECONDARY_RANGE_NAMES", mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isprintable", mod_consts.const_str_plain_isprintable);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_isprintable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_26", mod_consts.const_str_chr_26);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_chr_26);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_65279", mod_consts.const_str_chr_65279);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_chr_65279);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytes_type_bytearray_tuple", mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple", mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errors_tuple", mod_consts.const_tuple_str_plain_errors_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_coding", mod_consts.const_str_plain_coding);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_coding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset", mod_consts.const_str_plain_charset);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_findall", mod_consts.const_str_plain_findall);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_findall);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION", mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_45_str_underscore_tuple", mod_consts.const_tuple_str_chr_45_str_underscore_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_str_underscore_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_aliases", mod_consts.const_str_plain_aliases);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_aliases);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128", mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b", mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple", mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_import_module", mod_consts.const_str_plain_import_module);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_module);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getcodec", mod_consts.const_str_plain_getcodec);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_getcodec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple", mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4", mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ENCODING_MARKS", mod_consts.const_str_plain_ENCODING_MARKS);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENCODING_MARKS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sequence", mod_consts.const_str_plain_sequence);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequence);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_bytes_empty_tuple", mod_consts.const_tuple_none_bytes_empty_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_none_bytes_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a", mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f", mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a", mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_chr_39);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096", mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multi_byte_encoding", mod_consts.const_str_plain_is_multi_byte_encoding);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_multi_byte_encoding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c", mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IncrementalDecoder", mod_consts.const_str_plain_IncrementalDecoder);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_IncrementalDecoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ignore_tuple", mod_consts.const_tuple_str_plain_ignore_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ignore_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_xrange_0_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_id_a", mod_consts.const_str_plain_id_a);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_id_a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_id_b", mod_consts.const_str_plain_id_b);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_id_b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_character_match_count", mod_consts.const_str_plain_character_match_count);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_character_match_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR", mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9", mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLevel", mod_consts.const_str_plain_setLevel);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_setLevel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamHandler", mod_consts.const_str_plain_StreamHandler);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setFormatter", mod_consts.const_str_plain_setFormatter);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_setFormatter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Formatter", mod_consts.const_str_plain_Formatter);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Formatter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decoded_payload", mod_consts.const_str_plain_decoded_payload);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_decoded_payload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multi_byte_decoder", mod_consts.const_str_plain_is_multi_byte_decoder);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_multi_byte_decoder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offsets", mod_consts.const_str_plain_offsets);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_offsets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk_size", mod_consts.const_str_plain_chunk_size);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deferred_decoding", mod_consts.const_str_plain_deferred_decoding);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_deferred_decoding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip_sig_or_bom", mod_consts.const_str_plain_strip_sig_or_bom);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip_sig_or_bom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sequences", mod_consts.const_str_plain_sequences);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequences);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sig_payload", mod_consts.const_str_plain_sig_payload);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_sig_payload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoding_iana", mod_consts.const_str_plain_encoding_iana);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoding_iana);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bom_or_sig_available", mod_consts.const_str_plain_bom_or_sig_available);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_bom_or_sig_available);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strict", mod_consts.const_str_plain_strict);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_strict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk", mod_consts.const_str_plain_chunk);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cut_sequence_chunks", mod_consts.const_str_plain_cut_sequence_chunks);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_cut_sequence_chunks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_importlib", mod_consts.const_str_plain_importlib);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_importlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bisect", mod_consts.const_str_plain_bisect);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_bisect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_bisect_right_tuple", mod_consts.const_tuple_str_plain_bisect_right_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bisect_right_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_codecs", mod_consts.const_str_plain_codecs);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_codecs);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple", mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb", mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_aliases_tuple", mod_consts.const_tuple_str_plain_aliases_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aliases_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lru_cache", mod_consts.const_str_plain_lru_cache);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_findall_tuple", mod_consts.const_tuple_str_plain_findall_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_findall_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Generator", mod_consts.const_str_plain_Generator);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_constant", mod_consts.const_str_plain_constant);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_constant);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple", mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE_RANGES_COMBINED", mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION", mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f", mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_341db97459da1437e49b0b30023eda72", mod_consts.const_dict_341db97459da1437e49b0b30023eda72);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_accentuated", mod_consts.const_str_plain_is_accentuated);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_accentuated);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxsize_tuple", mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_56acd67f60b561438df177796104f77c", mod_consts.const_dict_56acd67f60b561438df177796104f77c);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_56acd67f60b561438df177796104f77c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_accent", mod_consts.const_str_plain_remove_accent);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_accent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sorted", mod_consts.const_str_plain_sorted);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9", mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706", mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b", mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_latin", mod_consts.const_str_plain_is_latin);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_latin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_punctuation", mod_consts.const_str_plain_is_punctuation);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_punctuation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_symbol", mod_consts.const_str_plain_is_symbol);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_symbol);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_emoticon", mod_consts.const_str_plain_is_emoticon);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_emoticon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_separator", mod_consts.const_str_plain_is_separator);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_separator);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_case_variable", mod_consts.const_str_plain_is_case_variable);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_case_variable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_cjk", mod_consts.const_str_plain_is_cjk);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_cjk);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_hiragana", mod_consts.const_str_plain_is_hiragana);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_hiragana);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_katakana", mod_consts.const_str_plain_is_katakana);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_katakana);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_hangul", mod_consts.const_str_plain_is_hangul);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_hangul);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_thai", mod_consts.const_str_plain_is_thai);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_thai);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_arabic", mod_consts.const_str_plain_is_arabic);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_arabic);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_arabic_isolated_form", mod_consts.const_str_plain_is_arabic_isolated_form);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_arabic_isolated_form);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_cjk_uncommon", mod_consts.const_str_plain_is_cjk_uncommon);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_cjk_uncommon);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7", mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_unicode_range_secondary", mod_consts.const_str_plain_is_unicode_range_secondary);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_unicode_range_secondary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_unprintable", mod_consts.const_str_plain_is_unprintable);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_unprintable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8192_tuple", mod_consts.const_tuple_int_pos_8192_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8192_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_06494af8acb5254f2025a296d0460a57", mod_consts.const_dict_06494af8acb5254f2025a296d0460a57);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_06494af8acb5254f2025a296d0460a57);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_any_specified_encoding", mod_consts.const_str_plain_any_specified_encoding);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_any_specified_encoding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_128_tuple", mod_consts.const_tuple_int_pos_128_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c32046162d4d28465fa536447b566c4c", mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809", mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_identify_sig_or_bom", mod_consts.const_str_plain_identify_sig_or_bom);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_identify_sig_or_bom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9", mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_should_strip_sig_or_bom", mod_consts.const_str_plain_should_strip_sig_or_bom);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_strip_sig_or_bom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d", mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iana_name", mod_consts.const_str_plain_iana_name);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_iana_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e", mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cp_similarity", mod_consts.const_str_plain_cp_similarity);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_cp_similarity);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fc88334d29085f308acbc444add2fb49", mod_consts.const_dict_fc88334d29085f308acbc444add2fb49);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_fc88334d29085f308acbc444add2fb49);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_cp_similar", mod_consts.const_str_plain_is_cp_similar);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_cp_similar);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset_normalizer", mod_consts.const_str_plain_charset_normalizer);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_charset_normalizer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INFO", mod_consts.const_str_plain_INFO);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_INFO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590", mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68", mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_logging_handler", mod_consts.const_str_plain_set_logging_handler);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_logging_handler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_false_tuple", mod_consts.const_tuple_none_false_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_55708f041515913b72117324d6bdae1b", mod_consts.const_dict_55708f041515913b72117324d6bdae1b);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_55708f041515913b72117324d6bdae1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b", mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple", mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0", mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple", mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple", mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple", mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple", mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple", mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple", mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_tuple", mod_consts.const_tuple_str_plain_character_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple", mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple", mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple", mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple", mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple", mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_range_name_tuple", mod_consts.const_tuple_str_plain_range_name_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_range_name_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple", mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple", mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_iana_encoding_tuple", mod_consts.const_tuple_str_plain_iana_encoding_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iana_encoding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple", mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple);
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
void checkModuleConstants_charset_normalizer$utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicodedata", mod_consts.const_str_plain_unicodedata);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicodedata) && "mod_consts.const_str_plain_unicodedata");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LATIN", mod_consts.const_str_plain_LATIN);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_LATIN) && "mod_consts.const_str_plain_LATIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__LATIN", mod_consts.const_str_plain__LATIN);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__LATIN) && "mod_consts.const_str_plain__LATIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CJK", mod_consts.const_str_plain_CJK);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_CJK) && "mod_consts.const_str_plain_CJK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CJK", mod_consts.const_str_plain__CJK);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__CJK) && "mod_consts.const_str_plain__CJK");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HANGUL", mod_consts.const_str_plain_HANGUL);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANGUL) && "mod_consts.const_str_plain_HANGUL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HANGUL", mod_consts.const_str_plain__HANGUL);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__HANGUL) && "mod_consts.const_str_plain__HANGUL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KATAKANA", mod_consts.const_str_plain_KATAKANA);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_KATAKANA) && "mod_consts.const_str_plain_KATAKANA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__KATAKANA", mod_consts.const_str_plain__KATAKANA);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__KATAKANA) && "mod_consts.const_str_plain__KATAKANA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HIRAGANA", mod_consts.const_str_plain_HIRAGANA);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_HIRAGANA) && "mod_consts.const_str_plain_HIRAGANA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__HIRAGANA", mod_consts.const_str_plain__HIRAGANA);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__HIRAGANA) && "mod_consts.const_str_plain__HIRAGANA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_THAI", mod_consts.const_str_plain_THAI);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_THAI) && "mod_consts.const_str_plain_THAI");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__THAI", mod_consts.const_str_plain__THAI);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__THAI) && "mod_consts.const_str_plain__THAI");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ARABIC", mod_consts.const_str_plain_ARABIC);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_ARABIC) && "mod_consts.const_str_plain_ARABIC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ARABIC", mod_consts.const_str_plain__ARABIC);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__ARABIC) && "mod_consts.const_str_plain__ARABIC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e", mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e) && "mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ARABIC_ISOLATED_FORM", mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__ARABIC_ISOLATED_FORM) && "mod_consts.const_str_plain__ARABIC_ISOLATED_FORM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ACCENT_KEYWORDS", mod_consts.const_str_plain__ACCENT_KEYWORDS);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__ACCENT_KEYWORDS) && "mod_consts.const_str_plain__ACCENT_KEYWORDS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ACCENTUATED", mod_consts.const_str_plain__ACCENTUATED);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__ACCENTUATED) && "mod_consts.const_str_plain__ACCENTUATED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91", mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91) && "mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__character_flags", mod_consts.const_str_plain__character_flags);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__character_flags) && "mod_consts.const_str_plain__character_flags");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decomposition", mod_consts.const_str_plain_decomposition);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_decomposition) && "mod_consts.const_str_plain_decomposition");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_space_tuple", mod_consts.const_tuple_str_space_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_space_tuple) && "mod_consts.const_tuple_str_space_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_16", mod_consts.const_int_pos_16);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_int_pos_16) && "mod_consts.const_int_pos_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_start", mod_consts.const_str_plain_start);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_start) && "mod_consts.const_str_plain_start");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_stop", mod_consts.const_str_plain_stop);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop) && "mod_consts.const_str_plain_stop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bisect_right", mod_consts.const_str_plain_bisect_right);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect_right) && "mod_consts.const_str_plain_bisect_right");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNICODE_RANGE_STARTS", mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__UNICODE_RANGE_STARTS) && "mod_consts.const_str_plain__UNICODE_RANGE_STARTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__UNICODE_RANGES_SORTED", mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__UNICODE_RANGES_SORTED) && "mod_consts.const_str_plain__UNICODE_RANGES_SORTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad", mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad) && "mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_category", mod_consts.const_str_plain_category);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_category) && "mod_consts.const_str_plain_category");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_P", mod_consts.const_str_plain_P);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_P) && "mod_consts.const_str_plain_P");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unicode_range", mod_consts.const_str_plain_unicode_range);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_unicode_range) && "mod_consts.const_str_plain_unicode_range");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Punctuation", mod_consts.const_str_plain_Punctuation);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_Punctuation) && "mod_consts.const_str_plain_Punctuation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_S", mod_consts.const_str_plain_S);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_S) && "mod_consts.const_str_plain_S");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_N", mod_consts.const_str_plain_N);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_N) && "mod_consts.const_str_plain_N");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Forms", mod_consts.const_str_plain_Forms);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Forms) && "mod_consts.const_str_plain_Forms");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Lo", mod_consts.const_str_plain_Lo);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lo) && "mod_consts.const_str_plain_Lo");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Emoticons", mod_consts.const_str_plain_Emoticons);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Emoticons) && "mod_consts.const_str_plain_Emoticons");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Pictographs", mod_consts.const_str_plain_Pictographs);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pictographs) && "mod_consts.const_str_plain_Pictographs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isspace", mod_consts.const_str_plain_isspace);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_isspace) && "mod_consts.const_str_plain_isspace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f", mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f) && "mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Z", mod_consts.const_str_plain_Z);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_Z) && "mod_consts.const_str_plain_Z");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45", mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45) && "mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_islower", mod_consts.const_str_plain_islower);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_islower) && "mod_consts.const_str_plain_islower");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isupper", mod_consts.const_str_plain_isupper);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_isupper) && "mod_consts.const_str_plain_isupper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_COMMON_CJK_CHARACTERS", mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_COMMON_CJK_CHARACTERS) && "mod_consts.const_str_plain_COMMON_CJK_CHARACTERS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SECONDARY_RANGE_NAMES", mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__SECONDARY_RANGE_NAMES) && "mod_consts.const_str_plain__SECONDARY_RANGE_NAMES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isprintable", mod_consts.const_str_plain_isprintable);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_isprintable) && "mod_consts.const_str_plain_isprintable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_26", mod_consts.const_str_chr_26);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_chr_26) && "mod_consts.const_str_chr_26");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_65279", mod_consts.const_str_chr_65279);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_chr_65279) && "mod_consts.const_str_chr_65279");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytes_type_bytearray_tuple", mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple) && "mod_consts.const_tuple_type_bytes_type_bytearray_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_min", mod_consts.const_str_plain_min);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_min) && "mod_consts.const_str_plain_min");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple", mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple) && "mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errors_tuple", mod_consts.const_tuple_str_plain_errors_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple) && "mod_consts.const_tuple_str_plain_errors_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_coding", mod_consts.const_str_plain_coding);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_coding) && "mod_consts.const_str_plain_coding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset", mod_consts.const_str_plain_charset);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset) && "mod_consts.const_str_plain_charset");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_findall", mod_consts.const_str_plain_findall);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_findall) && "mod_consts.const_str_plain_findall");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION", mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION) && "mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace) && "mod_consts.const_str_plain_replace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_chr_45_str_underscore_tuple", mod_consts.const_tuple_str_chr_45_str_underscore_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_45_str_underscore_tuple) && "mod_consts.const_tuple_str_chr_45_str_underscore_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_aliases", mod_consts.const_str_plain_aliases);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_aliases) && "mod_consts.const_str_plain_aliases");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_items", mod_consts.const_str_plain_items);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_items) && "mod_consts.const_str_plain_items");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128", mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128) && "mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b", mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b) && "mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple", mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple) && "mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_import_module", mod_consts.const_str_plain_import_module);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_module) && "mod_consts.const_str_plain_import_module");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getcodec", mod_consts.const_str_plain_getcodec);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_getcodec) && "mod_consts.const_str_plain_getcodec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple", mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple) && "mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4", mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4) && "mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ENCODING_MARKS", mod_consts.const_str_plain_ENCODING_MARKS);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENCODING_MARKS) && "mod_consts.const_str_plain_ENCODING_MARKS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sequence", mod_consts.const_str_plain_sequence);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequence) && "mod_consts.const_str_plain_sequence");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_startswith", mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith) && "mod_consts.const_str_plain_startswith");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_bytes_empty_tuple", mod_consts.const_tuple_none_bytes_empty_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_none_bytes_empty_tuple) && "mod_consts.const_tuple_none_bytes_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a", mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a) && "mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f", mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f) && "mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a", mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a) && "mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_39", mod_consts.const_str_chr_39);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_chr_39) && "mod_consts.const_str_chr_39");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096", mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096) && "mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multi_byte_encoding", mod_consts.const_str_plain_is_multi_byte_encoding);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_multi_byte_encoding) && "mod_consts.const_str_plain_is_multi_byte_encoding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c", mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c) && "mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IncrementalDecoder", mod_consts.const_str_plain_IncrementalDecoder);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_IncrementalDecoder) && "mod_consts.const_str_plain_IncrementalDecoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ignore_tuple", mod_consts.const_tuple_str_plain_ignore_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ignore_tuple) && "mod_consts.const_tuple_str_plain_ignore_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_xrange_0_256", mod_consts.const_xrange_0_256);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_xrange_0_256) && "mod_consts.const_xrange_0_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_id_a", mod_consts.const_str_plain_id_a);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_id_a) && "mod_consts.const_str_plain_id_a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_id_b", mod_consts.const_str_plain_id_b);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_id_b) && "mod_consts.const_str_plain_id_b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_character_match_count", mod_consts.const_str_plain_character_match_count);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_character_match_count) && "mod_consts.const_str_plain_character_match_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR", mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR) && "mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9", mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9) && "mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLevel", mod_consts.const_str_plain_setLevel);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_setLevel) && "mod_consts.const_str_plain_setLevel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamHandler", mod_consts.const_str_plain_StreamHandler);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamHandler) && "mod_consts.const_str_plain_StreamHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setFormatter", mod_consts.const_str_plain_setFormatter);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_setFormatter) && "mod_consts.const_str_plain_setFormatter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Formatter", mod_consts.const_str_plain_Formatter);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Formatter) && "mod_consts.const_str_plain_Formatter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler) && "mod_consts.const_str_plain_addHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decoded_payload", mod_consts.const_str_plain_decoded_payload);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_decoded_payload) && "mod_consts.const_str_plain_decoded_payload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multi_byte_decoder", mod_consts.const_str_plain_is_multi_byte_decoder);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_multi_byte_decoder) && "mod_consts.const_str_plain_is_multi_byte_decoder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_offsets", mod_consts.const_str_plain_offsets);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_offsets) && "mod_consts.const_str_plain_offsets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk_size", mod_consts.const_str_plain_chunk_size);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size) && "mod_consts.const_str_plain_chunk_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deferred_decoding", mod_consts.const_str_plain_deferred_decoding);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_deferred_decoding) && "mod_consts.const_str_plain_deferred_decoding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip_sig_or_bom", mod_consts.const_str_plain_strip_sig_or_bom);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip_sig_or_bom) && "mod_consts.const_str_plain_strip_sig_or_bom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sequences", mod_consts.const_str_plain_sequences);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequences) && "mod_consts.const_str_plain_sequences");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sig_payload", mod_consts.const_str_plain_sig_payload);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_sig_payload) && "mod_consts.const_str_plain_sig_payload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoding_iana", mod_consts.const_str_plain_encoding_iana);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoding_iana) && "mod_consts.const_str_plain_encoding_iana");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bom_or_sig_available", mod_consts.const_str_plain_bom_or_sig_available);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_bom_or_sig_available) && "mod_consts.const_str_plain_bom_or_sig_available");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ignore", mod_consts.const_str_plain_ignore);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore) && "mod_consts.const_str_plain_ignore");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strict", mod_consts.const_str_plain_strict);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_strict) && "mod_consts.const_str_plain_strict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk", mod_consts.const_str_plain_chunk);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk) && "mod_consts.const_str_plain_chunk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cut_sequence_chunks", mod_consts.const_str_plain_cut_sequence_chunks);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_cut_sequence_chunks) && "mod_consts.const_str_plain_cut_sequence_chunks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_importlib", mod_consts.const_str_plain_importlib);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_importlib) && "mod_consts.const_str_plain_importlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_bisect", mod_consts.const_str_plain_bisect);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_bisect) && "mod_consts.const_str_plain_bisect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_bisect_right_tuple", mod_consts.const_tuple_str_plain_bisect_right_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bisect_right_tuple) && "mod_consts.const_tuple_str_plain_bisect_right_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_codecs", mod_consts.const_str_plain_codecs);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_codecs) && "mod_consts.const_str_plain_codecs");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple", mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple) && "mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb", mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb) && "mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_aliases_tuple", mod_consts.const_tuple_str_plain_aliases_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_aliases_tuple) && "mod_consts.const_tuple_str_plain_aliases_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lru_cache", mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache) && "mod_consts.const_str_plain_lru_cache");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_re", mod_consts.const_str_plain_re);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_re) && "mod_consts.const_str_plain_re");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_findall_tuple", mod_consts.const_tuple_str_plain_findall_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_findall_tuple) && "mod_consts.const_tuple_str_plain_findall_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Generator", mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator) && "mod_consts.const_str_plain_Generator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_constant", mod_consts.const_str_plain_constant);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_constant) && "mod_consts.const_str_plain_constant");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple", mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple) && "mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNICODE_RANGES_COMBINED", mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED) && "mod_consts.const_str_plain_UNICODE_RANGES_COMBINED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION", mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION) && "mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f", mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f) && "mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_341db97459da1437e49b0b30023eda72", mod_consts.const_dict_341db97459da1437e49b0b30023eda72);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72) && "mod_consts.const_dict_341db97459da1437e49b0b30023eda72");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_accentuated", mod_consts.const_str_plain_is_accentuated);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_accentuated) && "mod_consts.const_str_plain_is_accentuated");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxsize_tuple", mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple) && "mod_consts.const_tuple_str_plain_maxsize_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_56acd67f60b561438df177796104f77c", mod_consts.const_dict_56acd67f60b561438df177796104f77c);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_56acd67f60b561438df177796104f77c) && "mod_consts.const_dict_56acd67f60b561438df177796104f77c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_remove_accent", mod_consts.const_str_plain_remove_accent);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_accent) && "mod_consts.const_str_plain_remove_accent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sorted", mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted) && "mod_consts.const_str_plain_sorted");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9", mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9) && "mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706", mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706) && "mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b", mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b) && "mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_latin", mod_consts.const_str_plain_is_latin);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_latin) && "mod_consts.const_str_plain_is_latin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_punctuation", mod_consts.const_str_plain_is_punctuation);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_punctuation) && "mod_consts.const_str_plain_is_punctuation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_symbol", mod_consts.const_str_plain_is_symbol);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_symbol) && "mod_consts.const_str_plain_is_symbol");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_emoticon", mod_consts.const_str_plain_is_emoticon);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_emoticon) && "mod_consts.const_str_plain_is_emoticon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_separator", mod_consts.const_str_plain_is_separator);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_separator) && "mod_consts.const_str_plain_is_separator");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_case_variable", mod_consts.const_str_plain_is_case_variable);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_case_variable) && "mod_consts.const_str_plain_is_case_variable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_cjk", mod_consts.const_str_plain_is_cjk);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_cjk) && "mod_consts.const_str_plain_is_cjk");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_hiragana", mod_consts.const_str_plain_is_hiragana);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_hiragana) && "mod_consts.const_str_plain_is_hiragana");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_katakana", mod_consts.const_str_plain_is_katakana);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_katakana) && "mod_consts.const_str_plain_is_katakana");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_hangul", mod_consts.const_str_plain_is_hangul);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_hangul) && "mod_consts.const_str_plain_is_hangul");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_thai", mod_consts.const_str_plain_is_thai);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_thai) && "mod_consts.const_str_plain_is_thai");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_arabic", mod_consts.const_str_plain_is_arabic);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_arabic) && "mod_consts.const_str_plain_is_arabic");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_arabic_isolated_form", mod_consts.const_str_plain_is_arabic_isolated_form);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_arabic_isolated_form) && "mod_consts.const_str_plain_is_arabic_isolated_form");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_cjk_uncommon", mod_consts.const_str_plain_is_cjk_uncommon);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_cjk_uncommon) && "mod_consts.const_str_plain_is_cjk_uncommon");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7", mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7) && "mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_unicode_range_secondary", mod_consts.const_str_plain_is_unicode_range_secondary);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_unicode_range_secondary) && "mod_consts.const_str_plain_is_unicode_range_secondary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_unprintable", mod_consts.const_str_plain_is_unprintable);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_unprintable) && "mod_consts.const_str_plain_is_unprintable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8192_tuple", mod_consts.const_tuple_int_pos_8192_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8192_tuple) && "mod_consts.const_tuple_int_pos_8192_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_06494af8acb5254f2025a296d0460a57", mod_consts.const_dict_06494af8acb5254f2025a296d0460a57);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_06494af8acb5254f2025a296d0460a57) && "mod_consts.const_dict_06494af8acb5254f2025a296d0460a57");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_any_specified_encoding", mod_consts.const_str_plain_any_specified_encoding);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_any_specified_encoding) && "mod_consts.const_str_plain_any_specified_encoding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_128_tuple", mod_consts.const_tuple_int_pos_128_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple) && "mod_consts.const_tuple_int_pos_128_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c32046162d4d28465fa536447b566c4c", mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_c32046162d4d28465fa536447b566c4c) && "mod_consts.const_dict_c32046162d4d28465fa536447b566c4c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809", mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809) && "mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_identify_sig_or_bom", mod_consts.const_str_plain_identify_sig_or_bom);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_identify_sig_or_bom) && "mod_consts.const_str_plain_identify_sig_or_bom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9", mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9) && "mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_should_strip_sig_or_bom", mod_consts.const_str_plain_should_strip_sig_or_bom);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_strip_sig_or_bom) && "mod_consts.const_str_plain_should_strip_sig_or_bom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d", mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d) && "mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iana_name", mod_consts.const_str_plain_iana_name);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_iana_name) && "mod_consts.const_str_plain_iana_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e", mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e) && "mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cp_similarity", mod_consts.const_str_plain_cp_similarity);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_cp_similarity) && "mod_consts.const_str_plain_cp_similarity");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_fc88334d29085f308acbc444add2fb49", mod_consts.const_dict_fc88334d29085f308acbc444add2fb49);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_fc88334d29085f308acbc444add2fb49) && "mod_consts.const_dict_fc88334d29085f308acbc444add2fb49");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_cp_similar", mod_consts.const_str_plain_is_cp_similar);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_cp_similar) && "mod_consts.const_str_plain_is_cp_similar");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_charset_normalizer", mod_consts.const_str_plain_charset_normalizer);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_charset_normalizer) && "mod_consts.const_str_plain_charset_normalizer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_INFO", mod_consts.const_str_plain_INFO);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_INFO) && "mod_consts.const_str_plain_INFO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590", mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590) && "mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68", mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68) && "mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_logging_handler", mod_consts.const_str_plain_set_logging_handler);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_logging_handler) && "mod_consts.const_str_plain_set_logging_handler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_false_tuple", mod_consts.const_tuple_none_false_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_none_false_tuple) && "mod_consts.const_tuple_none_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_55708f041515913b72117324d6bdae1b", mod_consts.const_dict_55708f041515913b72117324d6bdae1b);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_55708f041515913b72117324d6bdae1b) && "mod_consts.const_dict_55708f041515913b72117324d6bdae1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b", mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b) && "mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple", mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple) && "mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0", mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0) && "mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple", mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple) && "mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple", mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple) && "mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple", mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple) && "mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple", mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple) && "mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple", mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple) && "mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple", mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple) && "mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_tuple", mod_consts.const_tuple_str_plain_character_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_tuple) && "mod_consts.const_tuple_str_plain_character_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple", mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple) && "mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple", mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple) && "mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple", mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple) && "mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple", mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple) && "mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple", mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple) && "mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_range_name_tuple", mod_consts.const_tuple_str_plain_range_name_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_range_name_tuple) && "mod_consts.const_tuple_str_plain_range_name_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple", mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple) && "mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple", mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple) && "mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_iana_encoding_tuple", mod_consts.const_tuple_str_plain_iana_encoding_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_iana_encoding_tuple) && "mod_consts.const_tuple_str_plain_iana_encoding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple", mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple) && "mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 30
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
static PyObject *module_var_accessor_charset_normalizer$utils$COMMON_CJK_CHARACTERS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMON_CJK_CHARACTERS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COMMON_CJK_CHARACTERS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$ENCODING_MARKS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODING_MARKS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENCODING_MARKS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENCODING_MARKS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENCODING_MARKS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENCODING_MARKS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODING_MARKS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODING_MARKS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODING_MARKS);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$IANA_SUPPORTED_SIMILAR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$RE_POSSIBLE_ENCODING_INDICATION(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$UNICODE_RANGES_COMBINED(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_ACCENTUATED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENTUATED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ACCENTUATED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ACCENTUATED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ACCENTUATED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ACCENTUATED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENTUATED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENTUATED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENTUATED);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_ACCENT_KEYWORDS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENT_KEYWORDS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ACCENT_KEYWORDS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ACCENT_KEYWORDS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ACCENT_KEYWORDS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ACCENT_KEYWORDS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENT_KEYWORDS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENT_KEYWORDS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENT_KEYWORDS);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_ARABIC(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ARABIC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ARABIC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ARABIC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ARABIC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_ARABIC_ISOLATED_FORM(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ARABIC_ISOLATED_FORM, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ARABIC_ISOLATED_FORM, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_CJK(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CJK);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CJK);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CJK, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CJK);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CJK, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CJK);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CJK);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CJK);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_HANGUL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HANGUL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HANGUL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HANGUL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HANGUL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HANGUL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HANGUL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HANGUL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HANGUL);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_HIRAGANA(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HIRAGANA);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HIRAGANA);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HIRAGANA, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HIRAGANA);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HIRAGANA, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HIRAGANA);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HIRAGANA);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HIRAGANA);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_KATAKANA(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__KATAKANA);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__KATAKANA);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__KATAKANA, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__KATAKANA);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__KATAKANA, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__KATAKANA);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__KATAKANA);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__KATAKANA);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_LATIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LATIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LATIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LATIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LATIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LATIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LATIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LATIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LATIN);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_SECONDARY_RANGE_NAMES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SECONDARY_RANGE_NAMES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SECONDARY_RANGE_NAMES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_THAI(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__THAI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__THAI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__THAI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__THAI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__THAI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__THAI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__THAI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__THAI);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_UNICODE_RANGES_SORTED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNICODE_RANGES_SORTED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNICODE_RANGES_SORTED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_UNICODE_RANGE_STARTS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNICODE_RANGE_STARTS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__UNICODE_RANGE_STARTS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$_character_flags(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__character_flags);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__character_flags);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__character_flags, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__character_flags);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__character_flags, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__character_flags);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__character_flags);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__character_flags);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$aliases(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aliases);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aliases, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aliases);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aliases, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$bisect_right(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect_right);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bisect_right);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bisect_right, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bisect_right);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bisect_right, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect_right);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect_right);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect_right);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$findall(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_findall);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_findall);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_findall, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_findall);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_findall, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_findall);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_findall);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_findall);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$is_multi_byte_encoding(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_multi_byte_encoding);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_multi_byte_encoding, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_multi_byte_encoding);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_multi_byte_encoding, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$logging(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$lru_cache(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$unicode_range(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicode_range);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicode_range);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicode_range, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicode_range);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicode_range, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicode_range);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicode_range);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unicode_range);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$utils$unicodedata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unicodedata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unicodedata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_90a73c4636c33d8adaef1c4184594008;
static PyCodeObject *code_objects_7933ba7e8d141437c40b094e3f08d9eb;
static PyCodeObject *code_objects_1fc60f981a4a0c6294281069d5eef69f;
static PyCodeObject *code_objects_b3a60693d556988cf6d44ad14e4dcf94;
static PyCodeObject *code_objects_08dece0360e0ea6d2191048b780b235b;
static PyCodeObject *code_objects_9bc81c19515ece14872245d84e9d8617;
static PyCodeObject *code_objects_4ff5e8efe38d38761f6eedfc76b589c3;
static PyCodeObject *code_objects_253528650d562adc64d86e0ccef84ee3;
static PyCodeObject *code_objects_0105fa408c7329bc264cc1f32825d338;
static PyCodeObject *code_objects_e77c23253271c6b988de0cf67ace7502;
static PyCodeObject *code_objects_17172391d6151c82b3baf6b6278093d5;
static PyCodeObject *code_objects_3e60d6fce0935e97087a8456ca9037ec;
static PyCodeObject *code_objects_6ce67dd6100d96c741c4b517d02516b5;
static PyCodeObject *code_objects_fd6f24e5d8b3c2e8395ad02173e9e8f3;
static PyCodeObject *code_objects_00ef566d848299a2a21fdfed651ce0d5;
static PyCodeObject *code_objects_41a0e415dacd8ae682ef196226b05b2b;
static PyCodeObject *code_objects_b0e521e8b318937661f6a2e3c683bbe2;
static PyCodeObject *code_objects_9aba69183b818227d03e49fa13e786b1;
static PyCodeObject *code_objects_ae32b9ccd5f5421566b148c25d15d52a;
static PyCodeObject *code_objects_ab117c2ab044817b7fbb0c0817907cd2;
static PyCodeObject *code_objects_78c2e05bc3dc94b86bc9ed141537be37;
static PyCodeObject *code_objects_287cc0b0aea8c9b2f240140ee2c7ea58;
static PyCodeObject *code_objects_6a6ab3e23c5b8d5df549fd5990be453d;
static PyCodeObject *code_objects_d299a243d52e1a90c475ea27aecd3a8e;
static PyCodeObject *code_objects_1f413d8f32f7f9e1ba60e90189625bb8;
static PyCodeObject *code_objects_74ee0797677232a7214b55e63f898120;
static PyCodeObject *code_objects_16c46037c1565b7efad0128e03c9ad9d;
static PyCodeObject *code_objects_b5efef712e08e45d38b3ad7bd9a76ecb;
static PyCodeObject *code_objects_00f111a53ef3674cefff18c579f85573;
static PyCodeObject *code_objects_f6a9531544aa4c517fca5959101daccf;
static PyCodeObject *code_objects_4545148c1df2999b7d289e02faed8594;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_07ec1a6530ccc29f246cb4890dc4dd9b); CHECK_OBJECT(module_filename_obj);
code_objects_90a73c4636c33d8adaef1c4184594008 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_angle_genexpr, mod_consts.const_tuple_84703d2c47b6feaa6e78ffb2d91ecbad_tuple, NULL, 1, 0, 0);
code_objects_7933ba7e8d141437c40b094e3f08d9eb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0, mod_consts.const_str_digest_a4cbfd607117a5b2e4534eff0889eeb0, NULL, NULL, 0, 0, 0);
code_objects_1fc60f981a4a0c6294281069d5eef69f = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__character_flags, mod_consts.const_str_plain__character_flags, mod_consts.const_tuple_20ba3bafafa57435d82fc8b7e28ebbc3_tuple, NULL, 1, 0, 0);
code_objects_b3a60693d556988cf6d44ad14e4dcf94 = MAKE_CODE_OBJECT(module_filename_obj, 218, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_any_specified_encoding, mod_consts.const_str_plain_any_specified_encoding, mod_consts.const_tuple_16389b611761f7897cc065a81f442e94_tuple, NULL, 2, 0, 0);
code_objects_08dece0360e0ea6d2191048b780b235b = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cp_similarity, mod_consts.const_str_plain_cp_similarity, mod_consts.const_tuple_e3d81b1a597c9c802e14a4d5e8019258_tuple, NULL, 2, 0, 0);
code_objects_9bc81c19515ece14872245d84e9d8617 = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cut_sequence_chunks, mod_consts.const_str_plain_cut_sequence_chunks, mod_consts.const_tuple_b1a2af2cac9e2c9e563556285c7b6e4b_tuple, NULL, 10, 0, 0);
code_objects_4ff5e8efe38d38761f6eedfc76b589c3 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_iana_name, mod_consts.const_str_plain_iana_name, mod_consts.const_tuple_03efaa63a77f78801954616e4e44d20c_tuple, NULL, 2, 0, 0);
code_objects_253528650d562adc64d86e0ccef84ee3 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_identify_sig_or_bom, mod_consts.const_str_plain_identify_sig_or_bom, mod_consts.const_tuple_ab7f5b14243597d3c8709c56a9bbd037_tuple, NULL, 1, 0, 0);
code_objects_0105fa408c7329bc264cc1f32825d338 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_accentuated, mod_consts.const_str_plain_is_accentuated, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_e77c23253271c6b988de0cf67ace7502 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_arabic, mod_consts.const_str_plain_is_arabic, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_17172391d6151c82b3baf6b6278093d5 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_arabic_isolated_form, mod_consts.const_str_plain_is_arabic_isolated_form, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_3e60d6fce0935e97087a8456ca9037ec = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_case_variable, mod_consts.const_str_plain_is_case_variable, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_6ce67dd6100d96c741c4b517d02516b5 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_cjk, mod_consts.const_str_plain_is_cjk, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_fd6f24e5d8b3c2e8395ad02173e9e8f3 = MAKE_CODE_OBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_cjk_uncommon, mod_consts.const_str_plain_is_cjk_uncommon, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_00ef566d848299a2a21fdfed651ce0d5 = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_cp_similar, mod_consts.const_str_plain_is_cp_similar, mod_consts.const_tuple_str_plain_iana_name_a_str_plain_iana_name_b_tuple, NULL, 2, 0, 0);
code_objects_41a0e415dacd8ae682ef196226b05b2b = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_emoticon, mod_consts.const_str_plain_is_emoticon, mod_consts.const_tuple_str_plain_character_str_plain_character_range_tuple, NULL, 1, 0, 0);
code_objects_b0e521e8b318937661f6a2e3c683bbe2 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_hangul, mod_consts.const_str_plain_is_hangul, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_9aba69183b818227d03e49fa13e786b1 = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_hiragana, mod_consts.const_str_plain_is_hiragana, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_ae32b9ccd5f5421566b148c25d15d52a = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_katakana, mod_consts.const_str_plain_is_katakana, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_ab117c2ab044817b7fbb0c0817907cd2 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_latin, mod_consts.const_str_plain_is_latin, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_78c2e05bc3dc94b86bc9ed141537be37 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_multi_byte_encoding, mod_consts.const_str_plain_is_multi_byte_encoding, mod_consts.const_tuple_str_plain_name_str_plain_provider_tuple, NULL, 1, 0, 0);
code_objects_287cc0b0aea8c9b2f240140ee2c7ea58 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_punctuation, mod_consts.const_str_plain_is_punctuation, mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple, NULL, 1, 0, 0);
code_objects_6a6ab3e23c5b8d5df549fd5990be453d = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_separator, mod_consts.const_str_plain_is_separator, mod_consts.const_tuple_str_plain_character_str_plain_character_category_tuple, NULL, 1, 0, 0);
code_objects_d299a243d52e1a90c475ea27aecd3a8e = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_symbol, mod_consts.const_str_plain_is_symbol, mod_consts.const_tuple_ebff14266b8fbd5ed00df571ba3481a2_tuple, NULL, 1, 0, 0);
code_objects_1f413d8f32f7f9e1ba60e90189625bb8 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_thai, mod_consts.const_str_plain_is_thai, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_74ee0797677232a7214b55e63f898120 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_unicode_range_secondary, mod_consts.const_str_plain_is_unicode_range_secondary, mod_consts.const_tuple_str_plain_range_name_tuple, NULL, 1, 0, 0);
code_objects_16c46037c1565b7efad0128e03c9ad9d = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_unprintable, mod_consts.const_str_plain_is_unprintable, mod_consts.const_tuple_str_plain_character_tuple, NULL, 1, 0, 0);
code_objects_b5efef712e08e45d38b3ad7bd9a76ecb = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_remove_accent, mod_consts.const_str_plain_remove_accent, mod_consts.const_tuple_str_plain_character_str_plain_decomposed_str_plain_codes_tuple, NULL, 1, 0, 0);
code_objects_00f111a53ef3674cefff18c579f85573 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_logging_handler, mod_consts.const_str_plain_set_logging_handler, mod_consts.const_tuple_b6c83e287fc831affbba1f11825b9878_tuple, NULL, 3, 0, 0);
code_objects_f6a9531544aa4c517fca5959101daccf = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_should_strip_sig_or_bom, mod_consts.const_str_plain_should_strip_sig_or_bom, mod_consts.const_tuple_str_plain_iana_encoding_tuple, NULL, 1, 0, 0);
code_objects_4545148c1df2999b7d289e02faed8594 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_unicode_range, mod_consts.const_str_plain_unicode_range, mod_consts.const_tuple_be8731981beffe4b0797c3723bac4899_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_charset_normalizer$utils$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__10_is_case_variable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__11_is_cjk(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__12_is_hiragana(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__13_is_katakana(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__14_is_hangul(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__15_is_thai(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__16_is_arabic(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__17_is_arabic_isolated_form(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__18_is_cjk_uncommon(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__19_is_unicode_range_secondary(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__1__character_flags(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__20_is_unprintable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__21_any_specified_encoding(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__22_is_multi_byte_encoding(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__23_identify_sig_or_bom(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__25_iana_name(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__26_cp_similarity(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__27_is_cp_similar(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__28_set_logging_handler(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__29_cut_sequence_chunks(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__2_is_accentuated(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__3_remove_accent(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__4_unicode_range(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__5_is_latin(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__6_is_punctuation(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__7_is_symbol(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__8_is_emoticon(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__9_is_separator(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_charset_normalizer$utils$$$function__1__character_flags(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_desc = NULL;
PyObject *var_flags = NULL;
PyObject *var_kw = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__1__character_flags;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags = MAKE_FUNCTION_FRAME(tstate, code_objects_1fc60f981a4a0c6294281069d5eef69f, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__1__character_flags = cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__1__character_flags);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__1__character_flags) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$utils$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__1__character_flags->m_frame.f_lineno = 37;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_name, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_desc;
    var_desc = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__1__character_flags, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__1__character_flags, exception_keeper_lineno_1);
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
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 36;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$utils$$$function__1__character_flags->m_frame)) {
        frame_frame_charset_normalizer$utils$$$function__1__character_flags->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
{
    PyObject *old = var_flags;
    var_flags = tmp_assign_source_2;
    Py_INCREF(var_flags);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_LATIN;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_2 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_1 = var_flags;
tmp_ibitor_expr_right_1 = module_var_accessor_charset_normalizer$utils$_LATIN(tstate);
if (unlikely(tmp_ibitor_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LATIN);
}

if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_LONG_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_ibitor_expr_left_1;
var_flags = tmp_assign_source_3;

}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_CJK;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_3 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_ibitor_expr_left_2;
PyObject *tmp_ibitor_expr_right_2;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_2 = var_flags;
tmp_ibitor_expr_right_2 = module_var_accessor_charset_normalizer$utils$_CJK(tstate);
if (unlikely(tmp_ibitor_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CJK);
}

if (tmp_ibitor_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_ibitor_expr_left_2;
var_flags = tmp_assign_source_4;

}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = mod_consts.const_str_plain_HANGUL;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_4 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_ibitor_expr_left_3;
PyObject *tmp_ibitor_expr_right_3;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_3 = var_flags;
tmp_ibitor_expr_right_3 = module_var_accessor_charset_normalizer$utils$_HANGUL(tstate);
if (unlikely(tmp_ibitor_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HANGUL);
}

if (tmp_ibitor_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_3, tmp_ibitor_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_ibitor_expr_left_3;
var_flags = tmp_assign_source_5;

}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = mod_consts.const_str_plain_KATAKANA;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_5 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_ibitor_expr_left_4;
PyObject *tmp_ibitor_expr_right_4;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_4 = var_flags;
tmp_ibitor_expr_right_4 = module_var_accessor_charset_normalizer$utils$_KATAKANA(tstate);
if (unlikely(tmp_ibitor_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__KATAKANA);
}

if (tmp_ibitor_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_4, tmp_ibitor_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_ibitor_expr_left_4;
var_flags = tmp_assign_source_6;

}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = mod_consts.const_str_plain_HIRAGANA;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_6 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_ibitor_expr_left_5;
PyObject *tmp_ibitor_expr_right_5;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_5 = var_flags;
tmp_ibitor_expr_right_5 = module_var_accessor_charset_normalizer$utils$_HIRAGANA(tstate);
if (unlikely(tmp_ibitor_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HIRAGANA);
}

if (tmp_ibitor_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_5, tmp_ibitor_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_ibitor_expr_left_5;
var_flags = tmp_assign_source_7;

}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = mod_consts.const_str_plain_THAI;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_7 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_ibitor_expr_left_6;
PyObject *tmp_ibitor_expr_right_6;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_6 = var_flags;
tmp_ibitor_expr_right_6 = module_var_accessor_charset_normalizer$utils$_THAI(tstate);
if (unlikely(tmp_ibitor_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__THAI);
}

if (tmp_ibitor_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_6, tmp_ibitor_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_ibitor_expr_left_6;
var_flags = tmp_assign_source_8;

}
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = mod_consts.const_str_plain_ARABIC;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_8 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_ibitor_expr_left_7;
PyObject *tmp_ibitor_expr_right_7;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_7 = var_flags;
tmp_ibitor_expr_right_7 = module_var_accessor_charset_normalizer$utils$_ARABIC(tstate);
if (unlikely(tmp_ibitor_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ARABIC);
}

if (tmp_ibitor_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_7, tmp_ibitor_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_ibitor_expr_left_7;
var_flags = tmp_assign_source_9;

}
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = mod_consts.const_str_digest_fb192ab4fd674b435fa057e3b05ec20e;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_9 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_ibitor_expr_left_8;
PyObject *tmp_ibitor_expr_right_8;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_8 = var_flags;
tmp_ibitor_expr_right_8 = module_var_accessor_charset_normalizer$utils$_ARABIC_ISOLATED_FORM(tstate);
if (unlikely(tmp_ibitor_expr_right_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
}

if (tmp_ibitor_expr_right_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_8, tmp_ibitor_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = tmp_ibitor_expr_left_8;
var_flags = tmp_assign_source_10;

}
branch_no_9:;
branch_no_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_charset_normalizer$utils$_ACCENT_KEYWORDS(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ACCENT_KEYWORDS);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 60;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_13 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_kw;
    var_kw = tmp_assign_source_13;
    Py_INCREF(var_kw);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_kw);
tmp_cmp_expr_left_10 = var_kw;
CHECK_OBJECT(var_desc);
tmp_cmp_expr_right_10 = var_desc;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_condition_result_10 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_ibitor_expr_left_9;
PyObject *tmp_ibitor_expr_right_9;
CHECK_OBJECT(var_flags);
tmp_ibitor_expr_left_9 = var_flags;
tmp_ibitor_expr_right_9 = module_var_accessor_charset_normalizer$utils$_ACCENTUATED(tstate);
if (unlikely(tmp_ibitor_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ACCENTUATED);
}

if (tmp_ibitor_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_9, tmp_ibitor_expr_right_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_14 = tmp_ibitor_expr_left_9;
var_flags = tmp_assign_source_14;

}
goto loop_end_1;
branch_no_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
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
try_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__1__character_flags, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__1__character_flags->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__1__character_flags, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__1__character_flags,
    type_description_1,
    par_character,
    var_desc,
    var_flags,
    var_kw
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__1__character_flags == cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags);
    cache_frame_frame_charset_normalizer$utils$$$function__1__character_flags = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__1__character_flags);

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
CHECK_OBJECT(var_flags);
tmp_return_value = var_flags;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_desc);
var_desc = NULL;
Py_XDECREF(var_flags);
var_flags = NULL;
Py_XDECREF(var_kw);
var_kw = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_desc);
var_desc = NULL;
Py_XDECREF(var_flags);
var_flags = NULL;
Py_XDECREF(var_kw);
var_kw = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__2_is_accentuated(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__2_is_accentuated;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated = MAKE_FUNCTION_FRAME(tstate, code_objects_0105fa408c7329bc264cc1f32825d338, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__2_is_accentuated = cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__2_is_accentuated);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__2_is_accentuated) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__2_is_accentuated->m_frame.f_lineno = 69;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_ACCENTUATED(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ACCENTUATED);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 69;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__2_is_accentuated, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__2_is_accentuated->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__2_is_accentuated, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__2_is_accentuated,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__2_is_accentuated == cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated);
    cache_frame_frame_charset_normalizer$utils$$$function__2_is_accentuated = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__2_is_accentuated);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__3_remove_accent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_decomposed = NULL;
PyObject *var_codes = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__3_remove_accent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent = MAKE_FUNCTION_FRAME(tstate, code_objects_b5efef712e08e45d38b3ad7bd9a76ecb, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__3_remove_accent = cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__3_remove_accent);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__3_remove_accent) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$utils$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__3_remove_accent->m_frame.f_lineno = 74;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_decomposition, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_decomposed;
    var_decomposed = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_decomposed);
tmp_operand_value_1 = var_decomposed;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
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
CHECK_OBJECT(par_character);
tmp_return_value = par_character;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_decomposed);
tmp_expression_value_1 = var_decomposed;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_split);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__3_remove_accent->m_frame.f_lineno = 78;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_space_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_codes;
    var_codes = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_chr_arg_1;
PyObject *tmp_value_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_base_value_1;
CHECK_OBJECT(var_codes);
tmp_expression_value_2 = var_codes;
tmp_subscript_value_1 = const_int_0;
tmp_value_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_base_value_1 = mod_consts.const_int_pos_16;
tmp_chr_arg_1 = BUILTIN_INT2(tstate, tmp_value_value_1, tmp_base_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_chr_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_CHR(tstate, tmp_chr_arg_1);
CHECK_OBJECT(tmp_chr_arg_1);
Py_DECREF(tmp_chr_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__3_remove_accent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__3_remove_accent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__3_remove_accent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__3_remove_accent,
    type_description_1,
    par_character,
    var_decomposed,
    var_codes
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__3_remove_accent == cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent);
    cache_frame_frame_charset_normalizer$utils$$$function__3_remove_accent = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__3_remove_accent);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_decomposed);
CHECK_OBJECT(var_decomposed);
Py_DECREF(var_decomposed);
var_decomposed = NULL;
Py_XDECREF(var_codes);
var_codes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_decomposed);
var_decomposed = NULL;
Py_XDECREF(var_codes);
var_codes = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct charset_normalizer$utils$$$genexpr__1_genexpr_locals {
PyObject *var_name;
PyObject *var_ord_range;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *charset_normalizer$utils$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct charset_normalizer$utils$$$genexpr__1_genexpr_locals *generator_heap = (struct charset_normalizer$utils$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_name = NULL;
generator_heap->var_ord_range = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_90a73c4636c33d8adaef1c4184594008, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 85;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_name;
    generator_heap->var_name = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_ord_range;
    generator_heap->var_ord_range = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_ord_range);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_ord_range);
tmp_expression_value_2 = generator_heap->var_ord_range;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_start);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_expression_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_ord_range);
tmp_expression_value_3 = generator_heap->var_ord_range;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_stop);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "Noo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_name);
tmp_tuple_element_1 = generator_heap->var_name;
PyTuple_SET_ITEM0(tmp_expression_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 86;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 85;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    generator_heap->var_name,
    generator_heap->var_ord_range
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_name);
generator_heap->var_name = NULL;
Py_XDECREF(generator_heap->var_ord_range);
generator_heap->var_ord_range = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_name);
generator_heap->var_name = NULL;
Py_XDECREF(generator_heap->var_ord_range);
generator_heap->var_ord_range = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_charset_normalizer$utils$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        charset_normalizer$utils$$$genexpr__1_genexpr_context,
        module_charset_normalizer$utils,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_90a73c4636c33d8adaef1c4184594008,
        closure,
        1,
#if 1
        sizeof(struct charset_normalizer$utils$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_charset_normalizer$utils$$$function__4_unicode_range(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_character_ord = NULL;
PyObject *var_idx = NULL;
PyObject *var_start = NULL;
PyObject *var_stop = NULL;
PyObject *var_name = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__4_unicode_range;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range = MAKE_FUNCTION_FRAME(tstate, code_objects_4545148c1df2999b7d289e02faed8594, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__4_unicode_range = cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__4_unicode_range);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__4_unicode_range) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_ord_arg_1;
CHECK_OBJECT(par_character);
tmp_ord_arg_1 = par_character;
tmp_assign_source_1 = BUILTIN_ORD(tmp_ord_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_character_ord;
    var_character_ord = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$bisect_right(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bisect_right);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_charset_normalizer$utils$_UNICODE_RANGE_STARTS(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__UNICODE_RANGE_STARTS);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_character_ord);
tmp_args_element_value_2 = var_character_ord;
frame_frame_charset_normalizer$utils$$$function__4_unicode_range->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_idx;
    var_idx = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_idx);
tmp_cmp_expr_left_1 = var_idx;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_charset_normalizer$utils$_UNICODE_RANGES_SORTED(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_idx);
tmp_subscript_value_1 = var_idx;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "oooooo";
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
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "oooooo";
    goto try_except_handler_3;
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
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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



exception_lineno = 101;
type_description_1 = "oooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_start;
    var_start = tmp_assign_source_7;
    Py_INCREF(var_start);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_stop;
    var_stop = tmp_assign_source_8;
    Py_INCREF(var_stop);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_9;
    Py_INCREF(var_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_character_ord);
tmp_cmp_expr_left_2 = var_character_ord;
CHECK_OBJECT(var_stop);
tmp_cmp_expr_right_2 = var_stop;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_name);
tmp_return_value = var_name;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__4_unicode_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__4_unicode_range->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__4_unicode_range, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__4_unicode_range,
    type_description_1,
    par_character,
    var_character_ord,
    var_idx,
    var_start,
    var_stop,
    var_name
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__4_unicode_range == cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range);
    cache_frame_frame_charset_normalizer$utils$$$function__4_unicode_range = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__4_unicode_range);

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
CHECK_OBJECT(var_character_ord);
CHECK_OBJECT(var_character_ord);
Py_DECREF(var_character_ord);
var_character_ord = NULL;
CHECK_OBJECT(var_idx);
CHECK_OBJECT(var_idx);
Py_DECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_name);
var_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_character_ord);
var_character_ord = NULL;
Py_XDECREF(var_idx);
var_idx = NULL;
Py_XDECREF(var_start);
var_start = NULL;
Py_XDECREF(var_stop);
var_stop = NULL;
Py_XDECREF(var_name);
var_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__5_is_latin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__5_is_latin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin = MAKE_FUNCTION_FRAME(tstate, code_objects_ab117c2ab044817b7fbb0c0817907cd2, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__5_is_latin = cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__5_is_latin);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__5_is_latin) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__5_is_latin->m_frame.f_lineno = 109;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_LATIN(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LATIN);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__5_is_latin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__5_is_latin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__5_is_latin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__5_is_latin,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__5_is_latin == cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin);
    cache_frame_frame_charset_normalizer$utils$$$function__5_is_latin = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__5_is_latin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__6_is_punctuation(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_character_category = NULL;
PyObject *var_character_range = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__6_is_punctuation;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation = MAKE_FUNCTION_FRAME(tstate, code_objects_287cc0b0aea8c9b2f240140ee2c7ea58, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__6_is_punctuation = cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__6_is_punctuation);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__6_is_punctuation) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$utils$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__6_is_punctuation->m_frame.f_lineno = 113;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_category, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_character_category;
    var_character_category = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_P;
CHECK_OBJECT(var_character_category);
tmp_cmp_expr_right_1 = var_character_category;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$unicode_range(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicode_range);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_2 = par_character;
frame_frame_charset_normalizer$utils$$$function__6_is_punctuation->m_frame.f_lineno = 118;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_character_range;
    var_character_range = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_character_range);
tmp_cmp_expr_left_2 = var_character_range;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_Punctuation;
CHECK_OBJECT(var_character_range);
tmp_cmp_expr_right_3 = var_character_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__6_is_punctuation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__6_is_punctuation->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__6_is_punctuation, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__6_is_punctuation,
    type_description_1,
    par_character,
    var_character_category,
    var_character_range
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__6_is_punctuation == cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation);
    cache_frame_frame_charset_normalizer$utils$$$function__6_is_punctuation = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__6_is_punctuation);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_character_category);
CHECK_OBJECT(var_character_category);
Py_DECREF(var_character_category);
var_character_category = NULL;
Py_XDECREF(var_character_range);
var_character_range = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_character_category);
var_character_category = NULL;
Py_XDECREF(var_character_range);
var_character_range = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__7_is_symbol(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_character_category = NULL;
PyObject *var_character_range = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__7_is_symbol;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol = MAKE_FUNCTION_FRAME(tstate, code_objects_d299a243d52e1a90c475ea27aecd3a8e, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__7_is_symbol = cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__7_is_symbol);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__7_is_symbol) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$utils$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__7_is_symbol->m_frame.f_lineno = 127;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_category, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_character_category;
    var_character_category = tmp_assign_source_1;
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
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_S;
CHECK_OBJECT(var_character_category);
tmp_cmp_expr_right_1 = var_character_category;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_N;
CHECK_OBJECT(var_character_category);
tmp_cmp_expr_right_2 = var_character_category;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? true : false;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$unicode_range(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicode_range);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_2 = par_character;
frame_frame_charset_normalizer$utils$$$function__7_is_symbol->m_frame.f_lineno = 132;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_character_range;
    var_character_range = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_character_range);
tmp_cmp_expr_left_3 = var_character_range;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
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
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_4 = mod_consts.const_str_plain_Forms;
CHECK_OBJECT(var_character_range);
tmp_cmp_expr_right_4 = var_character_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_character_category);
tmp_cmp_expr_left_5 = var_character_category;
tmp_cmp_expr_right_5 = mod_consts.const_str_plain_Lo;
tmp_and_right_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__7_is_symbol, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__7_is_symbol->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__7_is_symbol, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__7_is_symbol,
    type_description_1,
    par_character,
    var_character_category,
    var_character_range
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__7_is_symbol == cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol);
    cache_frame_frame_charset_normalizer$utils$$$function__7_is_symbol = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__7_is_symbol);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_character_category);
CHECK_OBJECT(var_character_category);
Py_DECREF(var_character_category);
var_character_category = NULL;
Py_XDECREF(var_character_range);
var_character_range = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_character_category);
var_character_category = NULL;
Py_XDECREF(var_character_range);
var_character_range = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__8_is_emoticon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_character_range = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__8_is_emoticon;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon = MAKE_FUNCTION_FRAME(tstate, code_objects_41a0e415dacd8ae682ef196226b05b2b, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__8_is_emoticon = cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__8_is_emoticon);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__8_is_emoticon) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$unicode_range(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicode_range);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__8_is_emoticon->m_frame.f_lineno = 141;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_character_range;
    var_character_range = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_character_range);
tmp_cmp_expr_left_1 = var_character_range;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_Emoticons;
CHECK_OBJECT(var_character_range);
tmp_cmp_expr_right_2 = var_character_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
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
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_Pictographs;
CHECK_OBJECT(var_character_range);
tmp_cmp_expr_right_3 = var_character_range;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__8_is_emoticon, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__8_is_emoticon->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__8_is_emoticon, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__8_is_emoticon,
    type_description_1,
    par_character,
    var_character_range
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__8_is_emoticon == cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon);
    cache_frame_frame_charset_normalizer$utils$$$function__8_is_emoticon = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__8_is_emoticon);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_character_range);
CHECK_OBJECT(var_character_range);
Py_DECREF(var_character_range);
var_character_range = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_character_range);
var_character_range = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__9_is_separator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
PyObject *var_character_category = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__9_is_separator;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator = MAKE_FUNCTION_FRAME(tstate, code_objects_6a6ab3e23c5b8d5df549fd5990be453d, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__9_is_separator = cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__9_is_separator);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__9_is_separator) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_character);
tmp_expression_value_1 = par_character;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isspace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__9_is_separator->m_frame.f_lineno = 150;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_character);
tmp_cmp_expr_left_1 = par_character;
tmp_cmp_expr_right_1 = mod_consts.const_frozenset_503566b97506a63a5d02f99cc421d27f;
tmp_res = PySet_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$utils$unicodedata(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unicodedata);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__9_is_separator->m_frame.f_lineno = 153;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_category, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_character_category;
    var_character_category = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_Z;
CHECK_OBJECT(var_character_category);
tmp_cmp_expr_right_2 = var_character_category;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 1) ? Py_True : Py_False;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_character_category);
tmp_cmp_expr_left_3 = var_character_category;
tmp_cmp_expr_right_3 = mod_consts.const_frozenset_9a946cbee04a173493ae3bf696d29b45;
tmp_res = PySet_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res == 1) ? Py_True : Py_False;
tmp_return_value = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_return_value = tmp_or_left_value_2;
or_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__9_is_separator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__9_is_separator->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__9_is_separator, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__9_is_separator,
    type_description_1,
    par_character,
    var_character_category
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__9_is_separator == cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator);
    cache_frame_frame_charset_normalizer$utils$$$function__9_is_separator = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__9_is_separator);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_character_category);
var_character_category = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_character_category);
var_character_category = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__10_is_case_variable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__10_is_case_variable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable = MAKE_FUNCTION_FRAME(tstate, code_objects_3e60d6fce0935e97087a8456ca9037ec, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__10_is_case_variable = cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__10_is_case_variable);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__10_is_case_variable) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_character);
tmp_expression_value_1 = par_character;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_islower);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__10_is_case_variable->m_frame.f_lineno = 160;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_expression_value_2 = par_character;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_isupper);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 160;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__10_is_case_variable->m_frame.f_lineno = 160;
tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 160;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__10_is_case_variable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__10_is_case_variable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__10_is_case_variable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__10_is_case_variable,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__10_is_case_variable == cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable);
    cache_frame_frame_charset_normalizer$utils$$$function__10_is_case_variable = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__10_is_case_variable);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__11_is_cjk(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__11_is_cjk;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk = MAKE_FUNCTION_FRAME(tstate, code_objects_6ce67dd6100d96c741c4b517d02516b5, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__11_is_cjk = cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__11_is_cjk);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__11_is_cjk) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__11_is_cjk->m_frame.f_lineno = 165;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_CJK(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CJK);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 165;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__11_is_cjk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__11_is_cjk->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__11_is_cjk, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__11_is_cjk,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__11_is_cjk == cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk);
    cache_frame_frame_charset_normalizer$utils$$$function__11_is_cjk = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__11_is_cjk);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__12_is_hiragana(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__12_is_hiragana;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana = MAKE_FUNCTION_FRAME(tstate, code_objects_9aba69183b818227d03e49fa13e786b1, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__12_is_hiragana = cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__12_is_hiragana);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__12_is_hiragana) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__12_is_hiragana->m_frame.f_lineno = 170;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_HIRAGANA(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HIRAGANA);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__12_is_hiragana, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__12_is_hiragana->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__12_is_hiragana, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__12_is_hiragana,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__12_is_hiragana == cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana);
    cache_frame_frame_charset_normalizer$utils$$$function__12_is_hiragana = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__12_is_hiragana);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__13_is_katakana(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__13_is_katakana;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana = MAKE_FUNCTION_FRAME(tstate, code_objects_ae32b9ccd5f5421566b148c25d15d52a, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__13_is_katakana = cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__13_is_katakana);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__13_is_katakana) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__13_is_katakana->m_frame.f_lineno = 175;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_KATAKANA(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__KATAKANA);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 175;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__13_is_katakana, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__13_is_katakana->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__13_is_katakana, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__13_is_katakana,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__13_is_katakana == cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana);
    cache_frame_frame_charset_normalizer$utils$$$function__13_is_katakana = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__13_is_katakana);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__14_is_hangul(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__14_is_hangul;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul = MAKE_FUNCTION_FRAME(tstate, code_objects_b0e521e8b318937661f6a2e3c683bbe2, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__14_is_hangul = cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__14_is_hangul);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__14_is_hangul) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__14_is_hangul->m_frame.f_lineno = 180;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_HANGUL(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HANGUL);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 180;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__14_is_hangul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__14_is_hangul->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__14_is_hangul, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__14_is_hangul,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__14_is_hangul == cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul);
    cache_frame_frame_charset_normalizer$utils$$$function__14_is_hangul = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__14_is_hangul);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__15_is_thai(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__15_is_thai;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai = MAKE_FUNCTION_FRAME(tstate, code_objects_1f413d8f32f7f9e1ba60e90189625bb8, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__15_is_thai = cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__15_is_thai);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__15_is_thai) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__15_is_thai->m_frame.f_lineno = 185;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_THAI(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__THAI);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__15_is_thai, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__15_is_thai->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__15_is_thai, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__15_is_thai,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__15_is_thai == cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai);
    cache_frame_frame_charset_normalizer$utils$$$function__15_is_thai = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__15_is_thai);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__16_is_arabic(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__16_is_arabic;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic = MAKE_FUNCTION_FRAME(tstate, code_objects_e77c23253271c6b988de0cf67ace7502, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__16_is_arabic = cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__16_is_arabic);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__16_is_arabic) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__16_is_arabic->m_frame.f_lineno = 190;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_ARABIC(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ARABIC);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 190;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__16_is_arabic, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__16_is_arabic->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__16_is_arabic, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__16_is_arabic,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__16_is_arabic == cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic);
    cache_frame_frame_charset_normalizer$utils$$$function__16_is_arabic = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__16_is_arabic);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__17_is_arabic_isolated_form(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form = MAKE_FUNCTION_FRAME(tstate, code_objects_17172391d6151c82b3baf6b6278093d5, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form = cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$_character_flags(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_flags);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_character);
tmp_args_element_value_1 = par_character;
frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form->m_frame.f_lineno = 195;
tmp_bitand_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_bitand_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_1 = module_var_accessor_charset_normalizer$utils$_ARABIC_ISOLATED_FORM(tstate);
if (unlikely(tmp_bitand_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
}

if (tmp_bitand_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitand_expr_left_1);

exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
CHECK_OBJECT(tmp_bitand_expr_left_1);
Py_DECREF(tmp_bitand_expr_left_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form == cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form);
    cache_frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__17_is_arabic_isolated_form);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__18_is_cjk_uncommon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon = MAKE_FUNCTION_FRAME(tstate, code_objects_fd6f24e5d8b3c2e8395ad02173e9e8f3, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon = cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_character);
tmp_cmp_expr_left_1 = par_character;
tmp_cmp_expr_right_1 = module_var_accessor_charset_normalizer$utils$COMMON_CJK_CHARACTERS(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon == cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon);
    cache_frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__18_is_cjk_uncommon);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__19_is_unicode_range_secondary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_range_name = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary = MAKE_FUNCTION_FRAME(tstate, code_objects_74ee0797677232a7214b55e63f898120, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary = cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_range_name);
tmp_cmp_expr_left_1 = par_range_name;
tmp_cmp_expr_right_1 = module_var_accessor_charset_normalizer$utils$_SECONDARY_RANGE_NAMES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary,
    type_description_1,
    par_range_name
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary == cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary);
    cache_frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__19_is_unicode_range_secondary);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_range_name);
Py_DECREF(par_range_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_range_name);
Py_DECREF(par_range_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__20_is_unprintable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_character = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__20_is_unprintable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable = MAKE_FUNCTION_FRAME(tstate, code_objects_16c46037c1565b7efad0128e03c9ad9d, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__20_is_unprintable = cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__20_is_unprintable);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__20_is_unprintable) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_character);
tmp_expression_value_1 = par_character;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_isspace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__20_is_unprintable->m_frame.f_lineno = 210;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_character);
tmp_expression_value_2 = par_character;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_isprintable);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__20_is_unprintable->m_frame.f_lineno = 211;
tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_character);
tmp_cmp_expr_left_1 = par_character;
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_26;
tmp_and_left_value_3 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_3);

exception_lineno = 212;
type_description_1 = "o";
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
CHECK_OBJECT(par_character);
tmp_cmp_expr_left_2 = par_character;
tmp_cmp_expr_right_2 = mod_consts.const_str_chr_65279;
tmp_and_right_value_3 = RICH_COMPARE_NE_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
Py_INCREF(tmp_and_left_value_2);
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__20_is_unprintable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__20_is_unprintable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__20_is_unprintable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__20_is_unprintable,
    type_description_1,
    par_character
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__20_is_unprintable == cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable);
    cache_frame_frame_charset_normalizer$utils$$$function__20_is_unprintable = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__20_is_unprintable);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_character);
Py_DECREF(par_character);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_character);
Py_DECREF(par_character);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__21_any_specified_encoding(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sequence = python_pars[0];
PyObject *par_search_zone = python_pars[1];
PyObject *var_seq_len = NULL;
PyObject *var_decoded_zone = NULL;
PyObject *var_lowered_zone = NULL;
PyObject *var_results = NULL;
PyObject *var_encoding_alias = NULL;
PyObject *var_encoding_iana = NULL;
PyObject *var_specified_encoding = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding;
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
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding = MAKE_FUNCTION_FRAME(tstate, code_objects_b3a60693d556988cf6d44ad14e4dcf94, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding = cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_sequence);
tmp_isinstance_inst_1 = par_sequence;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
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
{
PyObject *tmp_raise_type_1;
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_TypeError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 225;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_sequence);
tmp_len_arg_1 = par_sequence;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_seq_len;
    var_seq_len = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_sequence);
tmp_expression_value_2 = par_sequence;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(var_seq_len);
tmp_args_element_value_1 = var_seq_len;
CHECK_OBJECT(par_search_zone);
tmp_args_element_value_2 = par_search_zone;
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame.f_lineno = 229;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_stop_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame.f_lineno = 229;
tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ascii_str_plain_ignore_tuple, 0), mod_consts.const_tuple_str_plain_errors_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_decoded_zone;
    var_decoded_zone = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_decoded_zone);
tmp_expression_value_3 = var_decoded_zone;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame.f_lineno = 234;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lowered_zone;
    var_lowered_zone = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_1 = mod_consts.const_str_plain_coding;
CHECK_OBJECT(var_lowered_zone);
tmp_cmp_expr_right_1 = var_lowered_zone;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_charset;
CHECK_OBJECT(var_lowered_zone);
tmp_cmp_expr_right_2 = var_lowered_zone;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_charset_normalizer$utils$findall(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_findall);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_charset_normalizer$utils$RE_POSSIBLE_ENCODING_INDICATION(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_decoded_zone);
tmp_args_element_value_4 = var_decoded_zone;
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame.f_lineno = 238;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_results;
    var_results = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(var_results);
tmp_len_arg_2 = var_results;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 0;
tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_results);
tmp_iter_arg_1 = var_results;
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 246;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_specified_encoding;
    var_specified_encoding = tmp_assign_source_7;
    Py_INCREF(var_specified_encoding);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_specified_encoding);
tmp_expression_value_5 = var_specified_encoding;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_lower);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame.f_lineno = 247;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame.f_lineno = 247;
tmp_assign_source_8 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_chr_45_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_specified_encoding;
    assert(old != NULL);
    var_specified_encoding = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_charset_normalizer$utils$aliases(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aliases);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_items);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame.f_lineno = 252;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 252;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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



exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_encoding_alias;
    var_encoding_alias = tmp_assign_source_14;
    Py_INCREF(var_encoding_alias);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_encoding_iana;
    var_encoding_iana = tmp_assign_source_15;
    Py_INCREF(var_encoding_iana);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_encoding_alias);
tmp_cmp_expr_left_4 = var_encoding_alias;
CHECK_OBJECT(var_specified_encoding);
tmp_cmp_expr_right_4 = var_specified_encoding;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(var_encoding_iana);
tmp_return_value = var_encoding_iana;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_5 = var_encoding_iana;
CHECK_OBJECT(var_specified_encoding);
tmp_cmp_expr_right_5 = var_specified_encoding;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(var_encoding_iana);
tmp_return_value = var_encoding_iana;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
branch_no_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
CHECK_OBJECT(tmp_for_loop_2__iter_value);
Py_DECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding,
    type_description_1,
    par_sequence,
    par_search_zone,
    var_seq_len,
    var_decoded_zone,
    var_lowered_zone,
    var_results,
    var_encoding_alias,
    var_encoding_iana,
    var_specified_encoding
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding == cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding);
    cache_frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__21_any_specified_encoding);

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
CHECK_OBJECT(var_seq_len);
CHECK_OBJECT(var_seq_len);
Py_DECREF(var_seq_len);
var_seq_len = NULL;
CHECK_OBJECT(var_decoded_zone);
CHECK_OBJECT(var_decoded_zone);
Py_DECREF(var_decoded_zone);
var_decoded_zone = NULL;
CHECK_OBJECT(var_lowered_zone);
CHECK_OBJECT(var_lowered_zone);
Py_DECREF(var_lowered_zone);
var_lowered_zone = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_encoding_alias);
var_encoding_alias = NULL;
Py_XDECREF(var_encoding_iana);
var_encoding_iana = NULL;
Py_XDECREF(var_specified_encoding);
var_specified_encoding = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_seq_len);
var_seq_len = NULL;
Py_XDECREF(var_decoded_zone);
var_decoded_zone = NULL;
Py_XDECREF(var_lowered_zone);
var_lowered_zone = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_encoding_alias);
var_encoding_alias = NULL;
Py_XDECREF(var_encoding_iana);
var_encoding_iana = NULL;
Py_XDECREF(var_specified_encoding);
var_specified_encoding = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sequence);
Py_DECREF(par_sequence);
CHECK_OBJECT(par_search_zone);
Py_DECREF(par_search_zone);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sequence);
Py_DECREF(par_sequence);
CHECK_OBJECT(par_search_zone);
Py_DECREF(par_search_zone);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__22_is_multi_byte_encoding(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *var_provider = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding = MAKE_FUNCTION_FRAME(tstate, code_objects_78c2e05bc3dc94b86bc9ed141537be37, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding = cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_name);
tmp_cmp_expr_left_1 = par_name;
tmp_cmp_expr_right_1 = mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b;
tmp_res = PySet_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oo";
    goto frame_exception_exit_1;
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
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_70132459071aad542c4b7657c14fc8c1_tuple;
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
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
tmp_assign_source_2 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oo";
exception_lineno = 286;
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
    PyObject *old = var_provider;
    var_provider = tmp_assign_source_3;
    Py_INCREF(var_provider);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_provider);
tmp_name_value_1 = var_provider;
frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding->m_frame.f_lineno = 295;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    PyObject *import_module_func = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
    tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, import_module_func, tmp_name_value_1);
    Py_DECREF(import_module_func);
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_getcodec);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oo";
    goto try_except_handler_3;
}
if (par_name == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "oo";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = par_name;
frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding->m_frame.f_lineno = 295;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_ImportError_type_AttributeError_type_LookupError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto try_continue_handler_4;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 294;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding->m_frame)) {
        frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_4;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// try continue handler code:
try_continue_handler_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto loop_start_1;
// End of try:
// End of try:
try_end_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
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
try_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding,
    type_description_1,
    par_name,
    var_provider
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding == cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding);
    cache_frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__22_is_multi_byte_encoding);

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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_provider);
var_provider = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_provider);
var_provider = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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


static PyObject *impl_charset_normalizer$utils$$$function__23_identify_sig_or_bom(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sequence = python_pars[0];
PyObject *var_marks = NULL;
PyObject *var_iana_encoding = NULL;
PyObject *var_mark = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom = MAKE_FUNCTION_FRAME(tstate, code_objects_253528650d562adc64d86e0ccef84ee3, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom = cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_charset_normalizer$utils$ENCODING_MARKS(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ENCODING_MARKS);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 308;
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
    PyObject *old = var_iana_encoding;
    var_iana_encoding = tmp_assign_source_3;
    Py_INCREF(var_iana_encoding);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_charset_normalizer$utils$ENCODING_MARKS(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ENCODING_MARKS);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_iana_encoding);
tmp_subscript_value_1 = var_iana_encoding;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_marks;
    var_marks = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_marks);
tmp_isinstance_inst_1 = var_marks;
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_marks);
tmp_list_element_1 = var_marks;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_5, 0, tmp_list_element_1);
{
    PyObject *old = var_marks;
    assert(old != NULL);
    var_marks = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_marks);
tmp_iter_arg_2 = var_marks;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 314;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_8 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_mark;
    var_mark = tmp_assign_source_8;
    Py_INCREF(var_mark);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
if (par_sequence == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 315;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_expression_value_2 = par_sequence;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_mark);
tmp_args_element_value_1 = var_mark;
frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom->m_frame.f_lineno = 315;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 315;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_iana_encoding);
tmp_tuple_element_1 = var_iana_encoding;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_mark);
tmp_tuple_element_1 = var_mark;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_3;
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
CHECK_OBJECT(tmp_for_loop_2__iter_value);
Py_DECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom,
    type_description_1,
    par_sequence,
    var_marks,
    var_iana_encoding,
    var_mark
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom == cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom);
    cache_frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__23_identify_sig_or_bom);

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
tmp_return_value = mod_consts.const_tuple_none_bytes_empty_tuple;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_marks);
var_marks = NULL;
Py_XDECREF(var_iana_encoding);
var_iana_encoding = NULL;
Py_XDECREF(var_mark);
var_mark = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_marks);
var_marks = NULL;
Py_XDECREF(var_iana_encoding);
var_iana_encoding = NULL;
Py_XDECREF(var_mark);
var_mark = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sequence);
Py_DECREF(par_sequence);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sequence);
Py_DECREF(par_sequence);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_iana_encoding = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom = MAKE_FUNCTION_FRAME(tstate, code_objects_f6a9531544aa4c517fca5959101daccf, module_charset_normalizer$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom = cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_iana_encoding);
tmp_cmp_expr_left_1 = par_iana_encoding;
tmp_cmp_expr_right_1 = mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f;
tmp_res = PySet_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom,
    type_description_1,
    par_iana_encoding
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom == cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom);
    cache_frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_iana_encoding);
Py_DECREF(par_iana_encoding);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_iana_encoding);
Py_DECREF(par_iana_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__25_iana_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cp_name = python_pars[0];
PyObject *par_strict = python_pars[1];
PyObject *var_encoding_alias = NULL;
PyObject *var_encoding_iana = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__25_iana_name;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name = MAKE_FUNCTION_FRAME(tstate, code_objects_4ff5e8efe38d38761f6eedfc76b589c3, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__25_iana_name = cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__25_iana_name);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__25_iana_name) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_cp_name);
tmp_expression_value_2 = par_cp_name;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__25_iana_name->m_frame.f_lineno = 327;
tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__25_iana_name->m_frame.f_lineno = 327;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_chr_45_str_underscore_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_cp_name;
    assert(old != NULL);
    par_cp_name = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_charset_normalizer$utils$aliases(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_aliases);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__25_iana_name->m_frame.f_lineno = 332;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 332;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 332;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_encoding_alias;
    var_encoding_alias = tmp_assign_source_7;
    Py_INCREF(var_encoding_alias);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_encoding_iana;
    var_encoding_iana = tmp_assign_source_8;
    Py_INCREF(var_encoding_iana);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_cp_name);
tmp_cmp_expr_left_1 = par_cp_name;
CHECK_OBJECT(var_encoding_alias);
tmp_list_element_1 = var_encoding_alias;
tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_encoding_iana);
tmp_list_element_1 = var_encoding_iana;
PyList_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_encoding_iana);
tmp_return_value = var_encoding_iana;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Return handler code:
try_return_handler_2:;
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
try_except_handler_2:;
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
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_strict);
tmp_truth_name_1 = CHECK_IF_TRUE(par_strict);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_f0b791082e82317222078abaaf61635a;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_cp_name);
tmp_format_value_1 = par_cp_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_39;
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
frame_frame_charset_normalizer$utils$$$function__25_iana_name->m_frame.f_lineno = 337;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 337;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__25_iana_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__25_iana_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__25_iana_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__25_iana_name,
    type_description_1,
    par_cp_name,
    par_strict,
    var_encoding_alias,
    var_encoding_iana
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__25_iana_name == cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name);
    cache_frame_frame_charset_normalizer$utils$$$function__25_iana_name = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__25_iana_name);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_cp_name);
tmp_return_value = par_cp_name;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cp_name);
CHECK_OBJECT(par_cp_name);
Py_DECREF(par_cp_name);
par_cp_name = NULL;
Py_XDECREF(var_encoding_alias);
var_encoding_alias = NULL;
Py_XDECREF(var_encoding_iana);
var_encoding_iana = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cp_name);
par_cp_name = NULL;
Py_XDECREF(var_encoding_alias);
var_encoding_alias = NULL;
Py_XDECREF(var_encoding_iana);
var_encoding_iana = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__26_cp_similarity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_iana_name_a = python_pars[0];
PyObject *par_iana_name_b = python_pars[1];
PyObject *var_id_a = NULL;
PyObject *var_id_b = NULL;
PyObject *var_character_match_count = NULL;
PyObject *var_to_be_decoded = NULL;
PyObject *var_decoder_a = NULL;
PyObject *var_decoder_b = NULL;
PyObject *var_i = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__26_cp_similarity;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity = MAKE_FUNCTION_FRAME(tstate, code_objects_08dece0360e0ea6d2191048b780b235b, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity = cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__26_cp_similarity);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__26_cp_similarity) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_2;
tmp_called_value_1 = module_var_accessor_charset_normalizer$utils$is_multi_byte_encoding(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_multi_byte_encoding);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iana_name_a);
tmp_args_element_value_1 = par_iana_name_a;
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 343;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_2 = module_var_accessor_charset_normalizer$utils$is_multi_byte_encoding(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_multi_byte_encoding);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iana_name_b);
tmp_args_element_value_2 = par_iana_name_b;
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 343;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 343;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = const_float_0_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_iana_name_a);
tmp_format_value_1 = par_iana_name_a;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooo";
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
tmp_name_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_name_value_1 == NULL));
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 346;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    PyObject *import_module_func = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
    tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, import_module_func, tmp_name_value_1);
    Py_DECREF(import_module_func);
}
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_IncrementalDecoder);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_decoder_a;
    var_decoder_a = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_212db538fd02d8496c4b3ecd7feeb10c;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_iana_name_b);
tmp_format_value_2 = par_iana_name_b;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooo";
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
tmp_name_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_name_value_2 == NULL));
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 347;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    PyObject *import_module_func = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
    tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, import_module_func, tmp_name_value_2);
    Py_DECREF(import_module_func);
}
CHECK_OBJECT(tmp_name_value_2);
Py_DECREF(tmp_name_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_IncrementalDecoder);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_decoder_b;
    var_decoder_b = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_decoder_a);
tmp_called_value_3 = var_decoder_a;
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 349;
tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ignore_tuple, 0), mod_consts.const_tuple_str_plain_errors_tuple);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_id_a;
    var_id_a = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
CHECK_OBJECT(var_decoder_b);
tmp_called_value_4 = var_decoder_b;
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 350;
tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ignore_tuple, 0), mod_consts.const_tuple_str_plain_errors_tuple);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_id_b;
    var_id_b = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_0;
{
    PyObject *old = var_character_match_count;
    var_character_match_count = tmp_assign_source_5;
    Py_INCREF(var_character_match_count);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_xrange_0_256;
tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_6 == NULL));
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
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooo";
exception_lineno = 354;
        goto try_except_handler_2;
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
    PyObject *old = var_i;
    var_i = tmp_assign_source_8;
    Py_INCREF(var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_bytes_arg_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_i);
tmp_list_element_1 = var_i;
tmp_bytes_arg_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_bytes_arg_1, 0, tmp_list_element_1);
tmp_assign_source_9 = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_to_be_decoded;
    var_to_be_decoded = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
if (var_id_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_id_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_3 = var_id_a;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_to_be_decoded);
tmp_args_element_value_3 = var_to_be_decoded;
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 356;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
if (var_id_b == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_id_b);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = var_id_b;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_decode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_to_be_decoded);
tmp_args_element_value_4 = var_to_be_decoded;
frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame.f_lineno = 356;
tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 356;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_character_match_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_character_match_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 357;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}

tmp_iadd_expr_left_1 = var_character_match_count;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = tmp_iadd_expr_left_1;
var_character_match_count = tmp_assign_source_10;

}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "ooooooooo";
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
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
if (var_character_match_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_character_match_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_left_1 = var_character_match_count;
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_256;
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__26_cp_similarity, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__26_cp_similarity->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__26_cp_similarity, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__26_cp_similarity,
    type_description_1,
    par_iana_name_a,
    par_iana_name_b,
    var_id_a,
    var_id_b,
    var_character_match_count,
    var_to_be_decoded,
    var_decoder_a,
    var_decoder_b,
    var_i
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__26_cp_similarity == cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity);
    cache_frame_frame_charset_normalizer$utils$$$function__26_cp_similarity = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__26_cp_similarity);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_id_a);
var_id_a = NULL;
Py_XDECREF(var_id_b);
var_id_b = NULL;
Py_XDECREF(var_character_match_count);
var_character_match_count = NULL;
Py_XDECREF(var_to_be_decoded);
var_to_be_decoded = NULL;
Py_XDECREF(var_decoder_a);
var_decoder_a = NULL;
Py_XDECREF(var_decoder_b);
var_decoder_b = NULL;
Py_XDECREF(var_i);
var_i = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_id_a);
var_id_a = NULL;
Py_XDECREF(var_id_b);
var_id_b = NULL;
Py_XDECREF(var_character_match_count);
var_character_match_count = NULL;
Py_XDECREF(var_to_be_decoded);
var_to_be_decoded = NULL;
Py_XDECREF(var_decoder_a);
var_decoder_a = NULL;
Py_XDECREF(var_decoder_b);
var_decoder_b = NULL;
Py_XDECREF(var_i);
var_i = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_iana_name_a);
Py_DECREF(par_iana_name_a);
CHECK_OBJECT(par_iana_name_b);
Py_DECREF(par_iana_name_b);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_iana_name_a);
Py_DECREF(par_iana_name_a);
CHECK_OBJECT(par_iana_name_b);
Py_DECREF(par_iana_name_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__27_is_cp_similar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_iana_name_a = python_pars[0];
PyObject *par_iana_name_b = python_pars[1];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar = MAKE_FUNCTION_FRAME(tstate, code_objects_00ef566d848299a2a21fdfed651ce0d5, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar = cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_iana_name_a);
tmp_cmp_expr_left_1 = par_iana_name_a;
tmp_cmp_expr_right_1 = module_var_accessor_charset_normalizer$utils$IANA_SUPPORTED_SIMILAR(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_iana_name_b);
tmp_cmp_expr_left_2 = par_iana_name_b;
tmp_expression_value_1 = module_var_accessor_charset_normalizer$utils$IANA_SUPPORTED_SIMILAR(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 369;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iana_name_a);
tmp_subscript_value_1 = par_iana_name_a;
tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar,
    type_description_1,
    par_iana_name_a,
    par_iana_name_b
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar == cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar);
    cache_frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__27_is_cp_similar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_iana_name_a);
Py_DECREF(par_iana_name_a);
CHECK_OBJECT(par_iana_name_b);
Py_DECREF(par_iana_name_b);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_iana_name_a);
Py_DECREF(par_iana_name_a);
CHECK_OBJECT(par_iana_name_b);
Py_DECREF(par_iana_name_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__28_set_logging_handler(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_name = python_pars[0];
PyObject *par_level = python_pars[1];
PyObject *par_format_string = python_pars[2];
PyObject *var_logger = NULL;
PyObject *var_handler = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler = MAKE_FUNCTION_FRAME(tstate, code_objects_00f111a53ef3674cefff18c579f85573, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_type_description == NULL);
frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler = cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$utils$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_args_element_value_1 = par_name;
frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_frame.f_lineno = 378;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getLogger, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_logger;
    var_logger = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_logger);
tmp_called_instance_2 = var_logger;
CHECK_OBJECT(par_level);
tmp_args_element_value_2 = par_level;
frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_frame.f_lineno = 379;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_setLevel, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_charset_normalizer$utils$logging(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_frame.f_lineno = 381;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_StreamHandler);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_handler;
    var_handler = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_handler);
tmp_expression_value_1 = var_handler;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setFormatter);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_4 = module_var_accessor_charset_normalizer$utils$logging(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 382;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_format_string);
tmp_args_element_value_4 = par_format_string;
frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_frame.f_lineno = 382;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_Formatter, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 382;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_frame.f_lineno = 382;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_logger);
tmp_called_instance_5 = var_logger;
CHECK_OBJECT(var_handler);
tmp_args_element_value_5 = var_handler;
frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_frame.f_lineno = 383;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_addHandler, tmp_args_element_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler,
    type_description_1,
    par_name,
    par_level,
    par_format_string,
    var_logger,
    var_handler
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler == cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler);
    cache_frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$utils$$$function__28_set_logging_handler);

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
CHECK_OBJECT(var_logger);
CHECK_OBJECT(var_logger);
Py_DECREF(var_logger);
var_logger = NULL;
CHECK_OBJECT(var_handler);
CHECK_OBJECT(var_handler);
Py_DECREF(var_handler);
var_handler = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_logger);
var_logger = NULL;
Py_XDECREF(var_handler);
var_handler = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_format_string);
Py_DECREF(par_format_string);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_level);
Py_DECREF(par_level);
CHECK_OBJECT(par_format_string);
Py_DECREF(par_format_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$utils$$$function__29_cut_sequence_chunks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_sequences = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_encoding_iana = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_offsets = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_chunk_size = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_bom_or_sig_available = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_strip_sig_or_bom = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_sig_payload = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_is_multi_byte_decoder = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_decoded_payload = Nuitka_Cell_New1(python_pars[8]);
struct Nuitka_CellObject *par_deferred_decoding = Nuitka_Cell_New1(python_pars[9]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[10];
tmp_closure_1[0] = par_bom_or_sig_available;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_chunk_size;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_decoded_payload;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_deferred_decoding;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_encoding_iana;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_is_multi_byte_decoder;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_offsets;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_sequences;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = par_sig_payload;
Py_INCREF(tmp_closure_1[8]);
tmp_closure_1[9] = par_strip_sig_or_bom;
Py_INCREF(tmp_closure_1[9]);
tmp_return_value = MAKE_GENERATOR_charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_sequences);
CHECK_OBJECT(par_sequences);
Py_DECREF(par_sequences);
par_sequences = NULL;
CHECK_OBJECT(par_encoding_iana);
CHECK_OBJECT(par_encoding_iana);
Py_DECREF(par_encoding_iana);
par_encoding_iana = NULL;
CHECK_OBJECT(par_offsets);
CHECK_OBJECT(par_offsets);
Py_DECREF(par_offsets);
par_offsets = NULL;
CHECK_OBJECT(par_chunk_size);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
par_chunk_size = NULL;
CHECK_OBJECT(par_bom_or_sig_available);
CHECK_OBJECT(par_bom_or_sig_available);
Py_DECREF(par_bom_or_sig_available);
par_bom_or_sig_available = NULL;
CHECK_OBJECT(par_strip_sig_or_bom);
CHECK_OBJECT(par_strip_sig_or_bom);
Py_DECREF(par_strip_sig_or_bom);
par_strip_sig_or_bom = NULL;
CHECK_OBJECT(par_sig_payload);
CHECK_OBJECT(par_sig_payload);
Py_DECREF(par_sig_payload);
par_sig_payload = NULL;
CHECK_OBJECT(par_is_multi_byte_decoder);
CHECK_OBJECT(par_is_multi_byte_decoder);
Py_DECREF(par_is_multi_byte_decoder);
par_is_multi_byte_decoder = NULL;
CHECK_OBJECT(par_decoded_payload);
CHECK_OBJECT(par_decoded_payload);
Py_DECREF(par_decoded_payload);
par_decoded_payload = NULL;
CHECK_OBJECT(par_deferred_decoding);
CHECK_OBJECT(par_deferred_decoding);
Py_DECREF(par_deferred_decoding);
par_deferred_decoding = NULL;
goto function_return_exit;
// End of try:

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



#if 1
struct charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks_locals {
PyObject *var_chunk_partial_size_chk;
PyObject *var_i;
PyObject *var_chunk;
PyObject *var_base_bytes;
PyObject *var_cut_sequence;
PyObject *var_chunk_end;
PyObject *var_j;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
PyObject *tmp_for_loop_3__for_iterator;
PyObject *tmp_for_loop_3__iter_value;
PyObject *tmp_for_loop_4__for_iterator;
PyObject *tmp_for_loop_4__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks_locals *generator_heap = (struct charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_chunk_partial_size_chk = NULL;
generator_heap->var_i = NULL;
generator_heap->var_chunk = NULL;
generator_heap->var_base_bytes = NULL;
generator_heap->var_cut_sequence = NULL;
generator_heap->var_chunk_end = NULL;
generator_heap->var_j = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->tmp_for_loop_3__for_iterator = NULL;
generator_heap->tmp_for_loop_3__iter_value = NULL;
generator_heap->tmp_for_loop_4__for_iterator = NULL;
generator_heap->tmp_for_loop_4__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9bc81c19515ece14872245d84e9d8617, module_charset_normalizer$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_multi_byte_decoder);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = Nuitka_Cell_GET(generator->m_closure[5]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 399;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 399;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccccccooooooo";
generator_heap->exception_lineno = 399;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
CHECK_OBJECT(generator_heap->var_i);
tmp_start_value_1 = generator_heap->var_i;
CHECK_OBJECT(generator_heap->var_i);
tmp_add_expr_left_1 = generator_heap->var_i;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_2;
}

tmp_add_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(generator_heap->var_chunk);
tmp_operand_value_2 = generator_heap->var_chunk;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 401;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_chunk);
tmp_expression_value_2 = generator_heap->var_chunk;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 399;
generator_heap->type_description_1 = "ccccccccccooooooo";
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

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_deferred_decoding);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 404;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 404;
generator_heap->type_description_1 = "ccccccccccooooooo";
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
PyObject *tmp_assign_source_5;
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_stop_value_2;
if (Nuitka_Cell_GET(generator->m_closure[9]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_strip_sig_or_bom);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = Nuitka_Cell_GET(generator->m_closure[9]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_5 = Nuitka_Cell_GET(generator->m_closure[7]);
Py_INCREF(tmp_assign_source_5);
goto condexpr_end_1;
condexpr_false_1:;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[7]);
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_1 = Nuitka_Cell_GET(generator->m_closure[8]);
tmp_start_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
{
    PyObject *old = generator_heap->var_base_bytes;
    generator_heap->var_base_bytes = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 414;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_2 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 414;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_2 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccccccooooooo";
generator_heap->exception_lineno = 414;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_8 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_8;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_3;
PyObject *tmp_start_value_3;
PyObject *tmp_stop_value_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(generator_heap->var_base_bytes);
tmp_expression_value_4 = generator_heap->var_base_bytes;
CHECK_OBJECT(generator_heap->var_i);
tmp_start_value_3 = generator_heap->var_i;
CHECK_OBJECT(generator_heap->var_i);
tmp_add_expr_left_2 = generator_heap->var_i;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 415;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}

tmp_add_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_stop_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_stop_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 415;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}
tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
CHECK_OBJECT(tmp_stop_value_3);
Py_DECREF(tmp_stop_value_3);
assert(!(tmp_subscript_value_3 == NULL));
tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 415;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->var_cut_sequence;
    generator_heap->var_cut_sequence = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(generator_heap->var_cut_sequence);
tmp_operand_value_4 = generator_heap->var_cut_sequence;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_5 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
goto loop_end_2;
branch_no_4:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_unicode_encoding_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
CHECK_OBJECT(generator_heap->var_cut_sequence);
tmp_unicode_arg_1 = generator_heap->var_cut_sequence;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_encoding_iana);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 418;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}

tmp_unicode_encoding_1 = Nuitka_Cell_GET(generator->m_closure[4]);
tmp_expression_value_5 = BUILTIN_UNICODE3(tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 418;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_unicode_encoding_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_5;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_unicode_encoding_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 418;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 414;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 420;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_3 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 420;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_3__for_iterator;
    generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
tmp_next_source_3 = generator_heap->tmp_for_loop_3__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccccccooooooo";
generator_heap->exception_lineno = 420;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
    generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
tmp_assign_source_12 = generator_heap->tmp_for_loop_3__iter_value;
{
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_12;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
CHECK_OBJECT(generator_heap->var_i);
tmp_add_expr_left_3 = generator_heap->var_i;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 421;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_add_expr_right_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 421;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->var_chunk_end;
    generator_heap->var_chunk_end = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_add_expr_left_4;
nuitka_digit tmp_add_expr_right_4;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(generator_heap->var_chunk_end);
tmp_cmp_expr_left_1 = generator_heap->var_chunk_end;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 422;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_len_arg_2 = Nuitka_Cell_GET(generator->m_closure[7]);
tmp_add_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 422;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_add_expr_right_4 = 8;
tmp_cmp_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
assert(!(tmp_cmp_expr_right_1 == NULL));
tmp_condition_result_6 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 422;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_start_3;
branch_no_5:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_start_value_4;
PyObject *tmp_stop_value_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 425;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[7]);
CHECK_OBJECT(generator_heap->var_i);
tmp_start_value_4 = generator_heap->var_i;
CHECK_OBJECT(generator_heap->var_i);
tmp_add_expr_left_5 = generator_heap->var_i;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 425;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_add_expr_right_5 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_stop_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_stop_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 425;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_4);
CHECK_OBJECT(tmp_stop_value_4);
Py_DECREF(tmp_stop_value_4);
assert(!(tmp_subscript_value_4 == NULL));
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 425;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->var_cut_sequence;
    generator_heap->var_cut_sequence = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_3;
PyObject *tmp_operand_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_bom_or_sig_available);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 427;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[0]));
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 427;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 427;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(generator->m_closure[9]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_strip_sig_or_bom);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 427;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_operand_value_5 = Nuitka_Cell_GET(generator->m_closure[9]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 427;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 428;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_add_expr_left_6 = Nuitka_Cell_GET(generator->m_closure[8]);
CHECK_OBJECT(generator_heap->var_cut_sequence);
tmp_add_expr_right_6 = generator_heap->var_cut_sequence;
tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 428;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->var_cut_sequence;
    assert(old != NULL);
    generator_heap->var_cut_sequence = tmp_assign_source_15;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_4;
CHECK_OBJECT(generator_heap->var_cut_sequence);
tmp_expression_value_7 = generator_heap->var_cut_sequence;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_encoding_iana);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 431;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[4]);
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_multi_byte_decoder);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_truth_name_4 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[5]));
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_1);

generator_heap->exception_lineno = 432;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_kw_call_dict_value_0_1 = mod_consts.const_str_plain_ignore;
goto condexpr_end_2;
condexpr_false_2:;
tmp_kw_call_dict_value_0_1 = mod_consts.const_str_plain_strict;
condexpr_end_2:;
generator->m_frame->m_frame.f_lineno = 430;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_errors_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 430;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_multi_byte_decoder);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_truth_name_5 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[5]));
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(generator_heap->var_i);
tmp_cmp_expr_left_2 = generator_heap->var_i;
tmp_cmp_expr_right_2 = const_int_0;
tmp_and_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_9 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_9 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_args_element_value_2 = mod_consts.const_int_pos_16;
generator->m_frame->m_frame.f_lineno = 438;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->var_chunk_partial_size_chk;
    generator_heap->var_chunk_partial_size_chk = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
int tmp_truth_name_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_5;
PyObject *tmp_stop_value_5;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 441;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_truth_name_6 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 441;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_4 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 441;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(generator_heap->var_chunk);
tmp_expression_value_8 = generator_heap->var_chunk;
CHECK_OBJECT(generator_heap->var_chunk_partial_size_chk);
tmp_stop_value_5 = generator_heap->var_chunk_partial_size_chk;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_5);
assert(!(tmp_subscript_value_5 == NULL));
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 442;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 442;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_cmp_expr_right_3 = Nuitka_Cell_GET(generator->m_closure[2]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 442;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_4 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_10 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_10 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_4;
PyObject *tmp_xrange_low_1;
PyObject *tmp_xrange_high_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_xrange_step_1;
CHECK_OBJECT(generator_heap->var_i);
tmp_xrange_low_1 = generator_heap->var_i;
CHECK_OBJECT(generator_heap->var_i);
tmp_sub_expr_left_1 = generator_heap->var_i;
tmp_sub_expr_right_1 = mod_consts.const_int_pos_4;
tmp_xrange_high_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_xrange_high_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_xrange_step_1 = const_int_neg_1;
tmp_iter_arg_4 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_high_1);
Py_DECREF(tmp_xrange_high_1);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_for_loop_4__for_iterator;
    generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
tmp_next_source_4 = generator_heap->tmp_for_loop_4__for_iterator;
tmp_assign_source_19 = ITERATOR_NEXT_ITERATOR(tmp_next_source_4);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccccccooooooo";
generator_heap->exception_lineno = 444;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
    generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
tmp_assign_source_20 = generator_heap->tmp_for_loop_4__iter_value;
{
    PyObject *old = generator_heap->var_j;
    generator_heap->var_j = tmp_assign_source_20;
    Py_INCREF(generator_heap->var_j);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_6;
PyObject *tmp_start_value_5;
PyObject *tmp_stop_value_6;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 445;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[7]);
CHECK_OBJECT(generator_heap->var_j);
tmp_start_value_5 = generator_heap->var_j;
CHECK_OBJECT(generator_heap->var_chunk_end);
tmp_stop_value_6 = generator_heap->var_chunk_end;
tmp_subscript_value_6 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_5, tmp_stop_value_6);
assert(!(tmp_subscript_value_6 == NULL));
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 445;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->var_cut_sequence;
    generator_heap->var_cut_sequence = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_11;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_7;
PyObject *tmp_operand_value_6;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_bom_or_sig_available);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}

tmp_truth_name_7 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[0]));
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_5 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
if (Nuitka_Cell_GET(generator->m_closure[9]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_strip_sig_or_bom);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}

tmp_operand_value_6 = Nuitka_Cell_GET(generator->m_closure[9]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 447;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_5 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_11 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_11 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}

tmp_add_expr_left_7 = Nuitka_Cell_GET(generator->m_closure[8]);
CHECK_OBJECT(generator_heap->var_cut_sequence);
tmp_add_expr_right_7 = generator_heap->var_cut_sequence;
tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 448;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->var_cut_sequence;
    assert(old != NULL);
    generator_heap->var_cut_sequence = tmp_assign_source_22;
    Py_DECREF(old);
}

}
branch_no_9:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_2;
CHECK_OBJECT(generator_heap->var_cut_sequence);
tmp_expression_value_10 = generator_heap->var_cut_sequence;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_encoding_iana);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}

tmp_kw_call_arg_value_0_2 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 450;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_3,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_ignore_tuple, 0),
        mod_consts.const_tuple_str_plain_errors_tuple
    );
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 450;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->var_chunk;
    generator_heap->var_chunk = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_7;
PyObject *tmp_stop_value_7;
CHECK_OBJECT(generator_heap->var_chunk);
tmp_expression_value_11 = generator_heap->var_chunk;
CHECK_OBJECT(generator_heap->var_chunk_partial_size_chk);
tmp_stop_value_7 = generator_heap->var_chunk_partial_size_chk;
tmp_subscript_value_7 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_7);
assert(!(tmp_subscript_value_7 == NULL));
tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 452;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 452;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}

tmp_cmp_expr_right_4 = Nuitka_Cell_GET(generator->m_closure[2]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 452;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_12 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
goto loop_end_4;
branch_no_10:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 444;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_5;
}
goto loop_start_4;
loop_end_4:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
generator_heap->tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
generator_heap->tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
generator_heap->tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
generator_heap->tmp_for_loop_4__for_iterator = NULL;
branch_no_8:;
branch_no_7:;
{
PyObject *tmp_expression_value_12;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
if (generator_heap->var_chunk == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_chunk);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 455;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_12 = generator_heap->var_chunk;
Py_INCREF(tmp_expression_value_12);
generator->m_yield_return_index = 3;
return tmp_expression_value_12;
yield_return_3:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 455;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 420;
generator_heap->type_description_1 = "ccccccccccooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
generator_heap->tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
generator_heap->tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
generator_heap->tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
generator_heap->tmp_for_loop_3__for_iterator = NULL;
branch_end_3:;
branch_end_1:;

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
    generator->m_closure[7],
    generator->m_closure[4],
    generator->m_closure[6],
    generator->m_closure[1],
    generator->m_closure[0],
    generator->m_closure[9],
    generator->m_closure[8],
    generator->m_closure[5],
    generator->m_closure[2],
    generator->m_closure[3],
    generator_heap->var_chunk_partial_size_chk,
    generator_heap->var_i,
    generator_heap->var_chunk,
    generator_heap->var_base_bytes,
    generator_heap->var_cut_sequence,
    generator_heap->var_chunk_end,
    generator_heap->var_j
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
goto try_end_5;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_chunk_partial_size_chk);
generator_heap->var_chunk_partial_size_chk = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_base_bytes);
generator_heap->var_base_bytes = NULL;
Py_XDECREF(generator_heap->var_cut_sequence);
generator_heap->var_cut_sequence = NULL;
Py_XDECREF(generator_heap->var_chunk_end);
generator_heap->var_chunk_end = NULL;
Py_XDECREF(generator_heap->var_j);
generator_heap->var_j = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_5:;
Py_XDECREF(generator_heap->var_chunk_partial_size_chk);
generator_heap->var_chunk_partial_size_chk = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
Py_XDECREF(generator_heap->var_chunk);
generator_heap->var_chunk = NULL;
Py_XDECREF(generator_heap->var_base_bytes);
generator_heap->var_base_bytes = NULL;
Py_XDECREF(generator_heap->var_cut_sequence);
generator_heap->var_cut_sequence = NULL;
Py_XDECREF(generator_heap->var_chunk_end);
generator_heap->var_chunk_end = NULL;
Py_XDECREF(generator_heap->var_j);
generator_heap->var_j = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks_context,
        module_charset_normalizer$utils,
        mod_consts.const_str_plain_cut_sequence_chunks,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_9bc81c19515ece14872245d84e9d8617,
        closure,
        10,
#if 1
        sizeof(struct charset_normalizer$utils$$$function__29_cut_sequence_chunks$$$genobj__1_cut_sequence_chunks_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__10_is_case_variable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__10_is_case_variable,
        mod_consts.const_str_plain_is_case_variable,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3e60d6fce0935e97087a8456ca9037ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__11_is_cjk(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__11_is_cjk,
        mod_consts.const_str_plain_is_cjk,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6ce67dd6100d96c741c4b517d02516b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__12_is_hiragana(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__12_is_hiragana,
        mod_consts.const_str_plain_is_hiragana,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9aba69183b818227d03e49fa13e786b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__13_is_katakana(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__13_is_katakana,
        mod_consts.const_str_plain_is_katakana,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ae32b9ccd5f5421566b148c25d15d52a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__14_is_hangul(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__14_is_hangul,
        mod_consts.const_str_plain_is_hangul,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b0e521e8b318937661f6a2e3c683bbe2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__15_is_thai(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__15_is_thai,
        mod_consts.const_str_plain_is_thai,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1f413d8f32f7f9e1ba60e90189625bb8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__16_is_arabic(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__16_is_arabic,
        mod_consts.const_str_plain_is_arabic,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e77c23253271c6b988de0cf67ace7502,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__17_is_arabic_isolated_form(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__17_is_arabic_isolated_form,
        mod_consts.const_str_plain_is_arabic_isolated_form,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_17172391d6151c82b3baf6b6278093d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__18_is_cjk_uncommon(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__18_is_cjk_uncommon,
        mod_consts.const_str_plain_is_cjk_uncommon,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fd6f24e5d8b3c2e8395ad02173e9e8f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__19_is_unicode_range_secondary(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__19_is_unicode_range_secondary,
        mod_consts.const_str_plain_is_unicode_range_secondary,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_74ee0797677232a7214b55e63f898120,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__1__character_flags(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__1__character_flags,
        mod_consts.const_str_plain__character_flags,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1fc60f981a4a0c6294281069d5eef69f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        mod_consts.const_str_digest_0afb6ab8d2f540ce1e9f1428eade0a91,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__20_is_unprintable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__20_is_unprintable,
        mod_consts.const_str_plain_is_unprintable,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_16c46037c1565b7efad0128e03c9ad9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__21_any_specified_encoding(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__21_any_specified_encoding,
        mod_consts.const_str_plain_any_specified_encoding,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b3a60693d556988cf6d44ad14e4dcf94,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        mod_consts.const_str_digest_42c809df7db07610dbbbdc538ed8f128,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__22_is_multi_byte_encoding(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__22_is_multi_byte_encoding,
        mod_consts.const_str_plain_is_multi_byte_encoding,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_78c2e05bc3dc94b86bc9ed141537be37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        mod_consts.const_str_digest_b12ea722ecbac03e94c2e6e6165d21c4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__23_identify_sig_or_bom(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__23_identify_sig_or_bom,
        mod_consts.const_str_plain_identify_sig_or_bom,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_253528650d562adc64d86e0ccef84ee3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        mod_consts.const_str_digest_026419c17c42d9df9ef3775275439e4a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom,
        mod_consts.const_str_plain_should_strip_sig_or_bom,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f6a9531544aa4c517fca5959101daccf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__25_iana_name(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__25_iana_name,
        mod_consts.const_str_plain_iana_name,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4ff5e8efe38d38761f6eedfc76b589c3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        mod_consts.const_str_digest_c6ee51c58eaa778c6f3b21966e295096,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__26_cp_similarity(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__26_cp_similarity,
        mod_consts.const_str_plain_cp_similarity,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_08dece0360e0ea6d2191048b780b235b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__27_is_cp_similar(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__27_is_cp_similar,
        mod_consts.const_str_plain_is_cp_similar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_00ef566d848299a2a21fdfed651ce0d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        mod_consts.const_str_digest_478ae45b8c76a8928301a9feb93f8ab9,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__28_set_logging_handler(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__28_set_logging_handler,
        mod_consts.const_str_plain_set_logging_handler,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_00f111a53ef3674cefff18c579f85573,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__29_cut_sequence_chunks(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__29_cut_sequence_chunks,
        mod_consts.const_str_plain_cut_sequence_chunks,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9bc81c19515ece14872245d84e9d8617,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__2_is_accentuated(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__2_is_accentuated,
        mod_consts.const_str_plain_is_accentuated,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0105fa408c7329bc264cc1f32825d338,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__3_remove_accent(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__3_remove_accent,
        mod_consts.const_str_plain_remove_accent,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b5efef712e08e45d38b3ad7bd9a76ecb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__4_unicode_range(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__4_unicode_range,
        mod_consts.const_str_plain_unicode_range,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4545148c1df2999b7d289e02faed8594,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        mod_consts.const_str_digest_d1dc48b0931ccac4e224b346a7c707ad,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__5_is_latin(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__5_is_latin,
        mod_consts.const_str_plain_is_latin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ab117c2ab044817b7fbb0c0817907cd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__6_is_punctuation(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__6_is_punctuation,
        mod_consts.const_str_plain_is_punctuation,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_287cc0b0aea8c9b2f240140ee2c7ea58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__7_is_symbol(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__7_is_symbol,
        mod_consts.const_str_plain_is_symbol,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d299a243d52e1a90c475ea27aecd3a8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__8_is_emoticon(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__8_is_emoticon,
        mod_consts.const_str_plain_is_emoticon,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_41a0e415dacd8ae682ef196226b05b2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$utils$$$function__9_is_separator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$utils$$$function__9_is_separator,
        mod_consts.const_str_plain_is_separator,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6a6ab3e23c5b8d5df549fd5990be453d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$utils,
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

static function_impl_code const function_table_charset_normalizer$utils[] = {
impl_charset_normalizer$utils$$$function__1__character_flags,
impl_charset_normalizer$utils$$$function__2_is_accentuated,
impl_charset_normalizer$utils$$$function__3_remove_accent,
impl_charset_normalizer$utils$$$function__4_unicode_range,
impl_charset_normalizer$utils$$$function__5_is_latin,
impl_charset_normalizer$utils$$$function__6_is_punctuation,
impl_charset_normalizer$utils$$$function__7_is_symbol,
impl_charset_normalizer$utils$$$function__8_is_emoticon,
impl_charset_normalizer$utils$$$function__9_is_separator,
impl_charset_normalizer$utils$$$function__10_is_case_variable,
impl_charset_normalizer$utils$$$function__11_is_cjk,
impl_charset_normalizer$utils$$$function__12_is_hiragana,
impl_charset_normalizer$utils$$$function__13_is_katakana,
impl_charset_normalizer$utils$$$function__14_is_hangul,
impl_charset_normalizer$utils$$$function__15_is_thai,
impl_charset_normalizer$utils$$$function__16_is_arabic,
impl_charset_normalizer$utils$$$function__17_is_arabic_isolated_form,
impl_charset_normalizer$utils$$$function__18_is_cjk_uncommon,
impl_charset_normalizer$utils$$$function__19_is_unicode_range_secondary,
impl_charset_normalizer$utils$$$function__20_is_unprintable,
impl_charset_normalizer$utils$$$function__21_any_specified_encoding,
impl_charset_normalizer$utils$$$function__22_is_multi_byte_encoding,
impl_charset_normalizer$utils$$$function__23_identify_sig_or_bom,
impl_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom,
impl_charset_normalizer$utils$$$function__25_iana_name,
impl_charset_normalizer$utils$$$function__26_cp_similarity,
impl_charset_normalizer$utils$$$function__27_is_cp_similar,
impl_charset_normalizer$utils$$$function__28_set_logging_handler,
impl_charset_normalizer$utils$$$function__29_cut_sequence_chunks,
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

    return Nuitka_Function_GetFunctionState(function, function_table_charset_normalizer$utils);
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
        module_charset_normalizer$utils,
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
        function_table_charset_normalizer$utils,
        sizeof(function_table_charset_normalizer$utils) / sizeof(function_impl_code)
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
static char const *module_full_name = "charset_normalizer.utils";
#endif

// Internal entry point for module code.
PyObject *module_code_charset_normalizer$utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("charset_normalizer$utils");

    // Store the module for future use.
    module_charset_normalizer$utils = module;

    moduledict_charset_normalizer$utils = MODULE_DICT(module_charset_normalizer$utils);

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
        PRINT_STRING("charset_normalizer$utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer$utils: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("charset_normalizer$utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer.utils" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcharset_normalizer$utils\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_charset_normalizer$utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_charset_normalizer$utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_charset_normalizer$utils);
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

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var_e = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$utils;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_charset_normalizer$utils = MAKE_MODULE_FRAME(code_objects_7933ba7e8d141437c40b094e3f08d9eb, module_charset_normalizer$utils);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$utils);
assert(Py_REFCNT(frame_frame_charset_normalizer$utils) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_charset_normalizer$utils$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_charset_normalizer$utils$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_IMPORTLIB();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_importlib, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_charset_normalizer$utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 4;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_unicodedata;
tmp_globals_arg_value_2 = (PyObject *)moduledict_charset_normalizer$utils;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 5;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicodedata, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_bisect;
tmp_globals_arg_value_3 = (PyObject *)moduledict_charset_normalizer$utils;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_bisect_right_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_bisect_right,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_bisect_right);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_bisect_right, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_codecs;
tmp_globals_arg_value_4 = (PyObject *)moduledict_charset_normalizer$utils;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_IncrementalDecoder_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 7;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_IncrementalDecoder,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_IncrementalDecoder);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_IncrementalDecoder, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_17f7455087ff52977baad581ef5a11cb;
tmp_globals_arg_value_5 = (PyObject *)moduledict_charset_normalizer$utils;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_aliases_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_aliases,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_aliases);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_aliases, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
tmp_import_name_from_4 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_4 == NULL));
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_6 = (PyObject *)moduledict_charset_normalizer$utils;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_findall_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 10;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_findall,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_findall);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_findall, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
tmp_import_name_from_6 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_6 == NULL));
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_constant;
tmp_globals_arg_value_7 = (PyObject *)moduledict_charset_normalizer$utils;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_ee03afb1346f207f9c28aa5e99dc7c11_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 13;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_ENCODING_MARKS,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ENCODING_MARKS);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCODING_MARKS, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_RE_POSSIBLE_ENCODING_INDICATION, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_UNICODE_RANGES_COMBINED,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UNICODE_RANGES_COMBINED, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__SECONDARY_RANGE_NAMES,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain__SECONDARY_RANGE_NAMES);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__SECONDARY_RANGE_NAMES, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain_COMMON_CJK_CHARACTERS,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_COMMON_CJK_CHARACTERS);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_COMMON_CJK_CHARACTERS, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_14 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__LATIN,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain__LATIN);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LATIN, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_15 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__CJK,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain__CJK);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CJK, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_16 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__HANGUL,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain__HANGUL);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HANGUL, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_17 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__KATAKANA,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain__KATAKANA);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__KATAKANA, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_18 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__HIRAGANA,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain__HIRAGANA);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__HIRAGANA, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_19 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__THAI,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain__THAI);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__THAI, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_20 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__ARABIC,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain__ARABIC);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_21 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__ARABIC_ISOLATED_FORM,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain__ARABIC_ISOLATED_FORM);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ARABIC_ISOLATED_FORM, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_22 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__ACCENT_KEYWORDS,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain__ACCENT_KEYWORDS);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENT_KEYWORDS, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_23 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_charset_normalizer$utils,
        mod_consts.const_str_plain__ACCENTUATED,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain__ACCENTUATED);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__ACCENTUATED, tmp_assign_source_33);
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
PyObject *tmp_assign_source_34;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_28c6abf7ef2eebaec767b8ee8e47f04f);

tmp_assign_source_34 = MAKE_FUNCTION_charset_normalizer$utils$$$function__1__character_flags(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__character_flags, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_assign_source_35 = MAKE_FUNCTION_charset_normalizer$utils$$$function__2_is_accentuated(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_accentuated, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
tmp_called_value_2 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 72;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_56acd67f60b561438df177796104f77c);

tmp_args_element_value_1 = MAKE_FUNCTION_charset_normalizer$utils$$$function__3_remove_accent(tstate, tmp_annotations_3);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 72;
tmp_assign_source_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_accent, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_3 != NULL);
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_charset_normalizer$utils$UNICODE_RANGES_COMBINED(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UNICODE_RANGES_COMBINED);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 87;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_assign_source_38 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_38;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_args_element_value_2 = MAKE_GENERATOR_charset_normalizer$utils$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 85;
tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGES_SORTED, tmp_assign_source_37);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_5c3a9926374bd3c0b0cb4b6b82084aa9;
tmp_ass_subscribed_1 = module_var_accessor_charset_normalizer$utils$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__UNICODE_RANGES_SORTED;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_39;
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = module_var_accessor_charset_normalizer$utils$_UNICODE_RANGES_SORTED(tstate);
if (unlikely(tmp_iter_arg_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__UNICODE_RANGES_SORTED);
}

if (tmp_iter_arg_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto try_except_handler_3;
}
tmp_assign_source_40 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_3;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_42;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_42 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_42 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 89;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_43 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_e;
    outline_0_var_e = tmp_assign_source_43;
    Py_INCREF(outline_0_var_e);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_e);
tmp_expression_value_2 = outline_0_var_e;
tmp_subscript_value_1 = const_int_0;
tmp_append_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_4;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_39 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
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
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
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
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_e);
outline_0_var_e = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_e);
outline_0_var_e = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 89;
goto frame_exception_exit_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain__UNICODE_RANGE_STARTS, tmp_assign_source_39);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_0ed7bc0782f388d3e8dff0c3c521a706;
tmp_ass_subscribed_2 = module_var_accessor_charset_normalizer$utils$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__UNICODE_RANGE_STARTS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_12515120807db0a69dfa8cc956f4e02b);

tmp_assign_source_44 = MAKE_FUNCTION_charset_normalizer$utils$$$function__4_unicode_range(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_unicode_range, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_assign_source_45 = MAKE_FUNCTION_charset_normalizer$utils$$$function__5_is_latin(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_latin, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_assign_source_46 = MAKE_FUNCTION_charset_normalizer$utils$$$function__6_is_punctuation(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_punctuation, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_assign_source_47 = MAKE_FUNCTION_charset_normalizer$utils$$$function__7_is_symbol(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_symbol, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_assign_source_48 = MAKE_FUNCTION_charset_normalizer$utils$$$function__8_is_emoticon(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_emoticon, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_assign_source_49 = MAKE_FUNCTION_charset_normalizer$utils$$$function__9_is_separator(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_separator, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_10;
tmp_called_value_6 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 158;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_called_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_3 = MAKE_FUNCTION_charset_normalizer$utils$$$function__10_is_case_variable(tstate, tmp_annotations_10);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 158;
tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_case_variable, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_11;
tmp_called_value_8 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_3 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 163;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

    tmp_called_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_4 = MAKE_FUNCTION_charset_normalizer$utils$$$function__11_is_cjk(tstate, tmp_annotations_11);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 163;
tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_cjk, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_9;
PyObject *tmp_called_value_10;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_12;
tmp_called_value_10 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_4 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 168;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

    tmp_called_value_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_10, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;

    goto frame_exception_exit_1;
}
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_5 = MAKE_FUNCTION_charset_normalizer$utils$$$function__12_is_hiragana(tstate, tmp_annotations_12);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 168;
tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_hiragana, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_11;
PyObject *tmp_called_value_12;
PyObject *tmp_kw_call_value_0_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_13;
tmp_called_value_12 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_5 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 173;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

    tmp_called_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_12, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;

    goto frame_exception_exit_1;
}
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_6 = MAKE_FUNCTION_charset_normalizer$utils$$$function__13_is_katakana(tstate, tmp_annotations_13);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 173;
tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_katakana, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_13;
PyObject *tmp_called_value_14;
PyObject *tmp_kw_call_value_0_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_14;
tmp_called_value_14 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_6 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 178;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

    tmp_called_value_13 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_14, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;

    goto frame_exception_exit_1;
}
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_7 = MAKE_FUNCTION_charset_normalizer$utils$$$function__14_is_hangul(tstate, tmp_annotations_14);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 178;
tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_hangul, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_15;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_value_0_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_15;
tmp_called_value_16 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_7 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 183;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

    tmp_called_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_16, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto frame_exception_exit_1;
}
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_8 = MAKE_FUNCTION_charset_normalizer$utils$$$function__15_is_thai(tstate, tmp_annotations_15);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 183;
tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_thai, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_17;
PyObject *tmp_called_value_18;
PyObject *tmp_kw_call_value_0_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_16;
tmp_called_value_18 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_8 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 188;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_8};

    tmp_called_value_17 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_18, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto frame_exception_exit_1;
}
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_9 = MAKE_FUNCTION_charset_normalizer$utils$$$function__16_is_arabic(tstate, tmp_annotations_16);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 188;
tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_arabic, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_19;
PyObject *tmp_called_value_20;
PyObject *tmp_kw_call_value_0_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_17;
tmp_called_value_20 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_9 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 193;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_9};

    tmp_called_value_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_20, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto frame_exception_exit_1;
}
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_10 = MAKE_FUNCTION_charset_normalizer$utils$$$function__17_is_arabic_isolated_form(tstate, tmp_annotations_17);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 193;
tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_arabic_isolated_form, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_21;
PyObject *tmp_called_value_22;
PyObject *tmp_kw_call_value_0_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_18;
tmp_called_value_22 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_10 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 198;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_10};

    tmp_called_value_21 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_22, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto frame_exception_exit_1;
}
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_11 = MAKE_FUNCTION_charset_normalizer$utils$$$function__18_is_cjk_uncommon(tstate, tmp_annotations_18);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 198;
tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_cjk_uncommon, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_8b4f41aaf32259eb145c85034769e8c7);

tmp_assign_source_59 = MAKE_FUNCTION_charset_normalizer$utils$$$function__19_is_unicode_range_secondary(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_unicode_range_secondary, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_23;
PyObject *tmp_called_value_24;
PyObject *tmp_kw_call_value_0_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_20;
tmp_called_value_24 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_11 = module_var_accessor_charset_normalizer$utils$UTF8_MAXIMAL_ALLOCATION(tstate);
if (unlikely(tmp_kw_call_value_0_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UTF8_MAXIMAL_ALLOCATION);
}

if (tmp_kw_call_value_0_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 207;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_11};

    tmp_called_value_23 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_24, kw_values, mod_consts.const_tuple_str_plain_maxsize_tuple);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto frame_exception_exit_1;
}
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_341db97459da1437e49b0b30023eda72);

tmp_args_element_value_12 = MAKE_FUNCTION_charset_normalizer$utils$$$function__20_is_unprintable(tstate, tmp_annotations_20);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 207;
tmp_assign_source_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_unprintable, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_21;
tmp_defaults_1 = mod_consts.const_tuple_int_pos_8192_tuple;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_06494af8acb5254f2025a296d0460a57);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_61 = MAKE_FUNCTION_charset_normalizer$utils$$$function__21_any_specified_encoding(tstate, tmp_defaults_1, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_any_specified_encoding, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_25;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_22;
tmp_called_value_26 = module_var_accessor_charset_normalizer$utils$lru_cache(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$utils->m_frame.f_lineno = 261;
tmp_called_value_25 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_128_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto frame_exception_exit_1;
}
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_c32046162d4d28465fa536447b566c4c);

tmp_args_element_value_13 = MAKE_FUNCTION_charset_normalizer$utils$$$function__22_is_multi_byte_encoding(tstate, tmp_annotations_22);

frame_frame_charset_normalizer$utils->m_frame.f_lineno = 261;
tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_fef2f5d2b6ff49c9f253d27d1514b809);

tmp_assign_source_63 = MAKE_FUNCTION_charset_normalizer$utils$$$function__23_identify_sig_or_bom(tstate, tmp_annotations_23);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_identify_sig_or_bom, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_b035440771b7f4dc07a1a7b559c944e9);

tmp_assign_source_64 = MAKE_FUNCTION_charset_normalizer$utils$$$function__24_should_strip_sig_or_bom(tstate, tmp_annotations_24);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_should_strip_sig_or_bom, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_25;
tmp_defaults_2 = mod_consts.const_tuple_true_tuple;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_106a9c5d40f2b71272f04ea9c4db4d1d);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_65 = MAKE_FUNCTION_charset_normalizer$utils$$$function__25_iana_name(tstate, tmp_defaults_2, tmp_annotations_25);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_iana_name, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_9b46f26a85dae4fada0b2530beb27e9e);

tmp_assign_source_66 = MAKE_FUNCTION_charset_normalizer$utils$$$function__26_cp_similarity(tstate, tmp_annotations_26);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_cp_similarity, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_fc88334d29085f308acbc444add2fb49);

tmp_assign_source_67 = MAKE_FUNCTION_charset_normalizer$utils$$$function__27_is_cp_similar(tstate, tmp_annotations_27);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_cp_similar, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_1;
PyObject *tmp_annotations_28;
tmp_tuple_element_1 = mod_consts.const_str_plain_charset_normalizer;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_1);
tmp_expression_value_3 = module_var_accessor_charset_normalizer$utils$logging(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_INFO);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_3, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_ef5a70c0803e49dd3e197d45f17aa590;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_ad4150f46e206975a00c9753f9ef9d68);

tmp_assign_source_68 = MAKE_FUNCTION_charset_normalizer$utils$$$function__28_set_logging_handler(tstate, tmp_defaults_3, tmp_annotations_28);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_set_logging_handler, tmp_assign_source_68);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$utils->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_charset_normalizer$utils);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_69;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_29;
tmp_defaults_4 = mod_consts.const_tuple_none_false_tuple;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_55708f041515913b72117324d6bdae1b);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_69 = MAKE_FUNCTION_charset_normalizer$utils$$$function__29_cut_sequence_chunks(tstate, tmp_defaults_4, tmp_annotations_29);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)mod_consts.const_str_plain_cut_sequence_chunks, tmp_assign_source_69);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("charset_normalizer$utils", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer.utils" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_charset_normalizer$utils);
    return module_charset_normalizer$utils;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("charset_normalizer$utils", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
