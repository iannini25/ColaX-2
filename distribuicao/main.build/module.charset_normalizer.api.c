/* Generated code for Python module 'charset_normalizer$api'
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



/* The "module_charset_normalizer$api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_charset_normalizer$api;
PyDictObject *moduledict_charset_normalizer$api;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_is_multi_byte_encoding;
PyObject *const_tuple_type_bytearray_type_bytes_tuple;
PyObject *const_str_digest_6d988cb629920f570b461b2e0a5f9302;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_addHandler;
PyObject *const_str_plain_explain_handler;
PyObject *const_str_plain_setLevel;
PyObject *const_str_plain_TRACE;
PyObject *const_str_plain_debug;
PyObject *const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple;
PyObject *const_str_plain_removeHandler;
PyObject *const_str_plain_previous_logger_level;
PyObject *const_str_plain_CharsetMatches;
PyObject *const_str_plain_CharsetMatch;
PyObject *const_str_plain_utf_8;
PyObject *const_str_plain_log;
PyObject *const_str_digest_2a0e1884c2319a2dcbac94c1616515b4;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_plain_iana_name;
PyObject *const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7;
PyObject *const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1;
PyObject *const_str_plain_steps;
PyObject *const_str_plain_chunk_size;
PyObject *const_str_plain_TOO_SMALL_SEQUENCE;
PyObject *const_str_plain_TOO_BIG_SEQUENCE;
PyObject *const_str_digest_e5c689e4541937f0c14298d88eb1893a;
PyObject *const_str_digest_3d0582751a29236b591154603e0813f1;
PyObject *const_str_plain_any_specified_encoding;
PyObject *const_str_digest_11265f15445a22d9e248a98c6e4d8dbc;
PyObject *const_str_plain_lru_cache;
PyObject *const_tuple_none_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_str_plain_mess_ratio;
PyObject *const_str_plain_coherence_ratio;
PyObject *const_int_pos_7;
PyObject *const_str_plain_identify_sig_or_bom;
PyObject *const_str_digest_4b8c3f9bfe0fe6299097298566c84a00;
PyObject *const_str_plain_IANA_SUPPORTED_MB_FIRST;
PyObject *const_str_plain_cp_isolation;
PyObject *const_str_plain_tested;
PyObject *const_str_plain_add;
PyObject *const_str_plain_should_strip_sig_or_bom;
PyObject *const_frozenset_8b8956f3cc0832019a3ac3569dee251f;
PyObject *const_str_digest_bd3d247aee308d92d57fb681e720a863;
PyObject *const_frozenset_c8b561c5738a8c0827dcd9e956084627;
PyObject *const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd;
PyObject *const_str_plain_soft_failure_skip;
PyObject *const_str_digest_70588241fb81b3530b0fb9b6546908fe;
PyObject *const_str_plain_success_fast_tracked;
PyObject *const_str_digest_b11a25583f93f9e1f2c199be655306e1;
PyObject *const_tuple_type_ModuleNotFoundError_type_ImportError_tuple;
PyObject *const_str_digest_05494da37e91142ed11dae921c203d78;
PyObject *const_str_plain_definitive_match_found;
PyObject *const_str_plain_encoding_languages;
PyObject *const_str_plain_mb_encoding_languages;
PyObject *const_str_plain_intersection;
PyObject *const_str_plain_definitive_target_languages;
PyObject *const_str_digest_3cd9605de140c45dc16b0389f51a1910;
PyObject *const_str_plain_post_definitive_sb_success_count;
PyObject *const_str_plain_POST_DEFINITIVE_SB_CAP;
PyObject *const_str_digest_b8f4ad047833622a520bcfeff8041e46;
PyObject *const_str_plain_mb_definitive_match_found;
PyObject *const_str_digest_a40fe328d9374ac040d9eab125a152a1;
PyObject *const_str_plain_sequences;
PyObject *const_slice_none_int_pos_500000_none;
PyObject *const_str_plain_sig_payload;
PyObject *const_int_pos_500000;
PyObject *const_str_plain_utf_7;
PyObject *const_str_chr_65279;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_tuple_type_UnicodeDecodeError_type_LookupError_tuple;
PyObject *const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b;
PyObject *const_str_plain_tested_but_hard_failure;
PyObject *const_str_plain_length;
PyObject *const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c;
PyObject *const_int_pos_4;
PyObject *const_str_plain_max;
PyObject *const_int_pos_2;
PyObject *const_str_plain_cut_sequence_chunks;
PyObject *const_str_plain_md_chunks;
PyObject *const_str_plain_md_ratios;
PyObject *const_str_plain_cached_mess_ratio;
PyObject *const_str_plain_threshold;
PyObject *const_str_plain_early_stop_count;
PyObject *const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a;
PyObject *const_slice_int_pos_50000_none_none;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_strict_tuple;
PyObject *const_tuple_str_plain_errors_tuple;
PyObject *const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf;
PyObject *const_str_plain_tested_but_soft_failure;
PyObject *const_str_plain_IANA_SUPPORTED_SIMILAR;
PyObject *const_str_plain_update;
PyObject *const_str_plain_payload_result_cache;
PyObject *const_str_digest_6fe22b3ec3f411cedfd348328dd698f1;
PyObject *const_str_plain_round;
PyObject *const_int_pos_100;
PyObject *const_tuple_int_pos_3_tuple;
PyObject *const_tuple_str_plain_ndigits_tuple;
PyObject *const_str_plain_specified_encoding;
PyObject *const_str_plain_utf_16;
PyObject *const_str_plain_utf_32;
PyObject *const_str_digest_e52b539aedb68a24bc1cff32ea133b10;
PyObject *const_str_plain_decoded_payload;
PyObject *const_tuple_str_plain_preemptive_declaration_tuple;
PyObject *const_str_plain_results;
PyObject *const_str_plain_append;
PyObject *const_str_digest_5ae709ec6e3062eb12190d258b3a613d;
PyObject *const_float_0_1;
PyObject *const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f;
PyObject *const_str_plain_early_stop_results;
PyObject *const_str_plain_best;
PyObject *const_str_digest_0f18db28640740a5c5b69342be190118;
PyObject *const_str_digest_d3189cd1808103cd9c59a2cd1f24701b;
PyObject *const_str_digest_ce012b2d8f82ae3b46e447786ca742db;
PyObject *const_str_chr_44;
PyObject *const_str_plain_cached_coherence_ratio;
PyObject *const_str_plain_language_threshold;
PyObject *const_str_plain_lg_inclusion;
PyObject *const_str_plain_cd_ratios;
PyObject *const_str_plain_merge_coherence_ratios;
PyObject *const_str_digest_2cb824a30d3087c5c3998c92fa5cd277;
PyObject *const_float_0_02;
PyObject *const_tuple_float_0_0_tuple;
PyObject *const_tuple_str_plain_default_tuple;
PyObject *const_float_0_5;
PyObject *const_str_digest_aaeb8948e6316096e35e05a7e581c12c;
PyObject *const_float_0_98;
PyObject *const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b;
PyObject *const_str_digest_4648d1cb5c6098315b07a493a38d43d6;
PyObject *const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5;
PyObject *const_str_plain_fallback_u8;
PyObject *const_str_plain_fallback_ascii;
PyObject *const_str_plain_fallback_specified;
PyObject *const_str_digest_11b47e446d82b048bd97f0dc52fcb489;
PyObject *const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a;
PyObject *const_str_plain_fingerprint;
PyObject *const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple;
PyObject *const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple;
PyObject *const_str_digest_430850dd2a6c98048f5c599250181605;
PyObject *const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple;
PyObject *const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_bf36e44462d169f1fb198435587ea17f;
PyObject *const_str_plain_from_bytes;
PyObject *const_str_digest_3ea5c437cdd511f982671e3b76b758da;
PyObject *const_str_plain_from_fp;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_digest_abaa23a8d807105d2803e0cc164fa6fb;
PyObject *const_str_plain_PathLike;
PyObject *const_str_plain_from_path;
PyObject *const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_digest_99580df93a3cc940a175c4c6e0bdef9e;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_BinaryIO;
PyObject *const_str_plain_cd;
PyObject *const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple;
PyObject *const_str_plain_constant;
PyObject *const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple;
PyObject *const_str_plain_IANA_SUPPORTED;
PyObject *const_str_plain_md;
PyObject *const_tuple_str_plain_mess_ratio_tuple;
PyObject *const_str_plain_models;
PyObject *const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple;
PyObject *const_str_plain_utils;
PyObject *const_tuple_b92287d58414a94f5f69115f56d701d4_tuple;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_plain_charset_normalizer_tuple;
PyObject *const_str_plain_StreamHandler;
PyObject *const_str_plain_setFormatter;
PyObject *const_str_plain_Formatter;
PyObject *const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple;
PyObject *const_str_plain_sorted;
PyObject *const_str_angle_lambda;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_digest_e457754874b2ab64235a137685f8363a;
PyObject *const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple;
PyObject *const_dict_3f63aad899e7665be40d3fe683aac44d;
PyObject *const_dict_401f10c7d082fd00523753e337052f56;
PyObject *const_dict_965802b7ee7c0db7b7086a96673a1534;
PyObject *const_tuple_12402516bcb764e0670745750952a144_tuple;
PyObject *const_dict_57090b1bab40ee452949405fa9be224f;
PyObject *const_str_plain_is_binary;
PyObject *const_str_digest_ebfadceaf34f27e6af01ab340ab47633;
PyObject *const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple;
PyObject *const_tuple_str_plain_encoding_tuple;
PyObject *const_str_digest_e1bf14511a47805218d290639a80e75f;
PyObject *const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple;
PyObject *const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple;
PyObject *const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple;
PyObject *const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("charset_normalizer.api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 195) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 195 values, got %d\n",
                    UN_TRANSLATE("charset_normalizer.api"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multi_byte_encoding", mod_consts.const_str_plain_is_multi_byte_encoding);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_multi_byte_encoding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytearray_type_bytes_tuple", mod_consts.const_tuple_type_bytearray_type_bytes_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytearray_type_bytes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302", mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logger", mod_consts.const_str_plain_logger);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_explain_handler", mod_consts.const_str_plain_explain_handler);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_explain_handler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLevel", mod_consts.const_str_plain_setLevel);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_setLevel);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TRACE", mod_consts.const_str_plain_TRACE);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRACE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple", mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_removeHandler", mod_consts.const_str_plain_removeHandler);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_removeHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_previous_logger_level", mod_consts.const_str_plain_previous_logger_level);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_previous_logger_level);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatches", mod_consts.const_str_plain_CharsetMatches);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatches);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatch", mod_consts.const_str_plain_CharsetMatch);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatch);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_8", mod_consts.const_str_plain_utf_8);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4", mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77", mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iana_name", mod_consts.const_str_plain_iana_name);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_iana_name);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7", mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1", mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_steps", mod_consts.const_str_plain_steps);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_steps);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk_size", mod_consts.const_str_plain_chunk_size);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TOO_SMALL_SEQUENCE", mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TOO_BIG_SEQUENCE", mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a", mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1", mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_any_specified_encoding", mod_consts.const_str_plain_any_specified_encoding);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_any_specified_encoding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc", mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lru_cache", mod_consts.const_str_plain_lru_cache);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxsize_tuple", mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mess_ratio", mod_consts.const_str_plain_mess_ratio);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_mess_ratio);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_coherence_ratio", mod_consts.const_str_plain_coherence_ratio);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_coherence_ratio);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_identify_sig_or_bom", mod_consts.const_str_plain_identify_sig_or_bom);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_identify_sig_or_bom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00", mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST", mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cp_isolation", mod_consts.const_str_plain_cp_isolation);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_cp_isolation);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tested", mod_consts.const_str_plain_tested);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_tested);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_should_strip_sig_or_bom", mod_consts.const_str_plain_should_strip_sig_or_bom);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_should_strip_sig_or_bom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f", mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863", mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627", mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd", mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_soft_failure_skip", mod_consts.const_str_plain_soft_failure_skip);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_soft_failure_skip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe", mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_success_fast_tracked", mod_consts.const_str_plain_success_fast_tracked);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_success_fast_tracked);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1", mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple", mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78", mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_definitive_match_found", mod_consts.const_str_plain_definitive_match_found);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_definitive_match_found);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoding_languages", mod_consts.const_str_plain_encoding_languages);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_encoding_languages);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mb_encoding_languages", mod_consts.const_str_plain_mb_encoding_languages);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_mb_encoding_languages);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_intersection", mod_consts.const_str_plain_intersection);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_intersection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_definitive_target_languages", mod_consts.const_str_plain_definitive_target_languages);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_definitive_target_languages);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910", mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post_definitive_sb_success_count", mod_consts.const_str_plain_post_definitive_sb_success_count);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_definitive_sb_success_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP", mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46", mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mb_definitive_match_found", mod_consts.const_str_plain_mb_definitive_match_found);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_mb_definitive_match_found);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1", mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sequences", mod_consts.const_str_plain_sequences);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequences);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_500000_none", mod_consts.const_slice_none_int_pos_500000_none);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_500000_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sig_payload", mod_consts.const_str_plain_sig_payload);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_sig_payload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_500000", mod_consts.const_int_pos_500000);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_500000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_7", mod_consts.const_str_plain_utf_7);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_65279", mod_consts.const_str_chr_65279);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_chr_65279);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple", mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b", mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tested_but_hard_failure", mod_consts.const_str_plain_tested_but_hard_failure);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_tested_but_hard_failure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_length", mod_consts.const_str_plain_length);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c", mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cut_sequence_chunks", mod_consts.const_str_plain_cut_sequence_chunks);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_cut_sequence_chunks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md_chunks", mod_consts.const_str_plain_md_chunks);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_md_chunks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md_ratios", mod_consts.const_str_plain_md_ratios);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_md_ratios);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cached_mess_ratio", mod_consts.const_str_plain_cached_mess_ratio);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_mess_ratio);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threshold", mod_consts.const_str_plain_threshold);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_threshold);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_early_stop_count", mod_consts.const_str_plain_early_stop_count);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_early_stop_count);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a", mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_50000_none_none", mod_consts.const_slice_int_pos_50000_none_none);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_50000_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_strict_tuple", mod_consts.const_tuple_str_plain_strict_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errors_tuple", mod_consts.const_tuple_str_plain_errors_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf", mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tested_but_soft_failure", mod_consts.const_str_plain_tested_but_soft_failure);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_tested_but_soft_failure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR", mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_payload_result_cache", mod_consts.const_str_plain_payload_result_cache);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_payload_result_cache);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1", mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ndigits_tuple", mod_consts.const_tuple_str_plain_ndigits_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ndigits_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_specified_encoding", mod_consts.const_str_plain_specified_encoding);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_specified_encoding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_16", mod_consts.const_str_plain_utf_16);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_16);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_32", mod_consts.const_str_plain_utf_32);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_utf_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10", mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decoded_payload", mod_consts.const_str_plain_decoded_payload);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_decoded_payload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_preemptive_declaration_tuple", mod_consts.const_tuple_str_plain_preemptive_declaration_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_preemptive_declaration_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_results", mod_consts.const_str_plain_results);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_results);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d", mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_1", mod_consts.const_float_0_1);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_float_0_1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f", mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_early_stop_results", mod_consts.const_str_plain_early_stop_results);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_early_stop_results);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_best", mod_consts.const_str_plain_best);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_best);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118", mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b", mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db", mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_44", mod_consts.const_str_chr_44);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cached_coherence_ratio", mod_consts.const_str_plain_cached_coherence_ratio);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_coherence_ratio);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_language_threshold", mod_consts.const_str_plain_language_threshold);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_language_threshold);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lg_inclusion", mod_consts.const_str_plain_lg_inclusion);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_lg_inclusion);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cd_ratios", mod_consts.const_str_plain_cd_ratios);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_cd_ratios);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_merge_coherence_ratios", mod_consts.const_str_plain_merge_coherence_ratios);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_merge_coherence_ratios);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277", mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_02", mod_consts.const_float_0_02);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_float_0_02);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_float_0_0_tuple", mod_consts.const_tuple_float_0_0_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_float_0_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_default_tuple", mod_consts.const_tuple_str_plain_default_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c", mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_98", mod_consts.const_float_0_98);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_float_0_98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b", mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6", mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5", mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fallback_u8", mod_consts.const_str_plain_fallback_u8);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_fallback_u8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fallback_ascii", mod_consts.const_str_plain_fallback_ascii);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_fallback_ascii);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fallback_specified", mod_consts.const_str_plain_fallback_specified);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_fallback_specified);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489", mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a", mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fingerprint", mod_consts.const_str_plain_fingerprint);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_fingerprint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple", mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple", mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605", mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple", mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a", mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f", mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_bytes", mod_consts.const_str_plain_from_bytes);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da", mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_fp", mod_consts.const_str_plain_from_fp);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb", mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PathLike", mod_consts.const_str_plain_PathLike);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_path", mod_consts.const_str_plain_from_path);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_path);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple", mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytes_type_bytearray_tuple", mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e", mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BinaryIO", mod_consts.const_str_plain_BinaryIO);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cd", mod_consts.const_str_plain_cd);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_cd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple", mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_constant", mod_consts.const_str_plain_constant);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_constant);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple", mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED", mod_consts.const_str_plain_IANA_SUPPORTED);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md", mod_consts.const_str_plain_md);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_md);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mess_ratio_tuple", mod_consts.const_tuple_str_plain_mess_ratio_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mess_ratio_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_models);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple", mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple", mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_charset_normalizer_tuple", mod_consts.const_tuple_str_plain_charset_normalizer_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_charset_normalizer_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamHandler", mod_consts.const_str_plain_StreamHandler);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamHandler);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setFormatter", mod_consts.const_str_plain_setFormatter);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_setFormatter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Formatter", mod_consts.const_str_plain_Formatter);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_Formatter);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple", mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sorted", mod_consts.const_str_plain_sorted);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_tuple", mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a", mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple", mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d", mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_401f10c7d082fd00523753e337052f56", mod_consts.const_dict_401f10c7d082fd00523753e337052f56);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_401f10c7d082fd00523753e337052f56);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534", mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple", mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_57090b1bab40ee452949405fa9be224f", mod_consts.const_dict_57090b1bab40ee452949405fa9be224f);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_57090b1bab40ee452949405fa9be224f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_binary", mod_consts.const_str_plain_is_binary);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_binary);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633", mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple", mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f", mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple", mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple", mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple", mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple", mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple);
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
void checkModuleConstants_charset_normalizer$api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multi_byte_encoding", mod_consts.const_str_plain_is_multi_byte_encoding);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_multi_byte_encoding) && "mod_consts.const_str_plain_is_multi_byte_encoding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytearray_type_bytes_tuple", mod_consts.const_tuple_type_bytearray_type_bytes_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytearray_type_bytes_tuple) && "mod_consts.const_tuple_type_bytearray_type_bytes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302", mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302) && "mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logger", mod_consts.const_str_plain_logger);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger) && "mod_consts.const_str_plain_logger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_addHandler", mod_consts.const_str_plain_addHandler);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_addHandler) && "mod_consts.const_str_plain_addHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_explain_handler", mod_consts.const_str_plain_explain_handler);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_explain_handler) && "mod_consts.const_str_plain_explain_handler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setLevel", mod_consts.const_str_plain_setLevel);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_setLevel) && "mod_consts.const_str_plain_setLevel");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TRACE", mod_consts.const_str_plain_TRACE);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRACE) && "mod_consts.const_str_plain_TRACE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_debug", mod_consts.const_str_plain_debug);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug) && "mod_consts.const_str_plain_debug");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple", mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple) && "mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_removeHandler", mod_consts.const_str_plain_removeHandler);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_removeHandler) && "mod_consts.const_str_plain_removeHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_previous_logger_level", mod_consts.const_str_plain_previous_logger_level);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_previous_logger_level) && "mod_consts.const_str_plain_previous_logger_level");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatches", mod_consts.const_str_plain_CharsetMatches);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatches) && "mod_consts.const_str_plain_CharsetMatches");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CharsetMatch", mod_consts.const_str_plain_CharsetMatch);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_CharsetMatch) && "mod_consts.const_str_plain_CharsetMatch");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_8", mod_consts.const_str_plain_utf_8);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_8) && "mod_consts.const_str_plain_utf_8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_log", mod_consts.const_str_plain_log);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_log) && "mod_consts.const_str_plain_log");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4", mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4) && "mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77", mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77) && "mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iana_name", mod_consts.const_str_plain_iana_name);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_iana_name) && "mod_consts.const_str_plain_iana_name");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7", mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7) && "mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1", mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1) && "mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_steps", mod_consts.const_str_plain_steps);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_steps) && "mod_consts.const_str_plain_steps");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk_size", mod_consts.const_str_plain_chunk_size);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size) && "mod_consts.const_str_plain_chunk_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TOO_SMALL_SEQUENCE", mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE) && "mod_consts.const_str_plain_TOO_SMALL_SEQUENCE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TOO_BIG_SEQUENCE", mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_TOO_BIG_SEQUENCE) && "mod_consts.const_str_plain_TOO_BIG_SEQUENCE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a", mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a) && "mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1", mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1) && "mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_any_specified_encoding", mod_consts.const_str_plain_any_specified_encoding);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_any_specified_encoding) && "mod_consts.const_str_plain_any_specified_encoding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc", mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc) && "mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lru_cache", mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache) && "mod_consts.const_str_plain_lru_cache");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_maxsize_tuple", mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple) && "mod_consts.const_tuple_str_plain_maxsize_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mess_ratio", mod_consts.const_str_plain_mess_ratio);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_mess_ratio) && "mod_consts.const_str_plain_mess_ratio");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_coherence_ratio", mod_consts.const_str_plain_coherence_ratio);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_coherence_ratio) && "mod_consts.const_str_plain_coherence_ratio");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_7", mod_consts.const_int_pos_7);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_7) && "mod_consts.const_int_pos_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_identify_sig_or_bom", mod_consts.const_str_plain_identify_sig_or_bom);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_identify_sig_or_bom) && "mod_consts.const_str_plain_identify_sig_or_bom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00", mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00) && "mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST", mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST) && "mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cp_isolation", mod_consts.const_str_plain_cp_isolation);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_cp_isolation) && "mod_consts.const_str_plain_cp_isolation");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tested", mod_consts.const_str_plain_tested);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_tested) && "mod_consts.const_str_plain_tested");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_add", mod_consts.const_str_plain_add);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_add) && "mod_consts.const_str_plain_add");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_should_strip_sig_or_bom", mod_consts.const_str_plain_should_strip_sig_or_bom);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_should_strip_sig_or_bom) && "mod_consts.const_str_plain_should_strip_sig_or_bom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f", mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f) && "mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863", mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863) && "mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627", mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627) && "mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd", mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd) && "mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_soft_failure_skip", mod_consts.const_str_plain_soft_failure_skip);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_soft_failure_skip) && "mod_consts.const_str_plain_soft_failure_skip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe", mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe) && "mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_success_fast_tracked", mod_consts.const_str_plain_success_fast_tracked);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_success_fast_tracked) && "mod_consts.const_str_plain_success_fast_tracked");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1", mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1) && "mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple", mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple) && "mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78", mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78) && "mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_definitive_match_found", mod_consts.const_str_plain_definitive_match_found);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_definitive_match_found) && "mod_consts.const_str_plain_definitive_match_found");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encoding_languages", mod_consts.const_str_plain_encoding_languages);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_encoding_languages) && "mod_consts.const_str_plain_encoding_languages");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mb_encoding_languages", mod_consts.const_str_plain_mb_encoding_languages);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_mb_encoding_languages) && "mod_consts.const_str_plain_mb_encoding_languages");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_intersection", mod_consts.const_str_plain_intersection);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_intersection) && "mod_consts.const_str_plain_intersection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_definitive_target_languages", mod_consts.const_str_plain_definitive_target_languages);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_definitive_target_languages) && "mod_consts.const_str_plain_definitive_target_languages");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910", mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910) && "mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_post_definitive_sb_success_count", mod_consts.const_str_plain_post_definitive_sb_success_count);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_definitive_sb_success_count) && "mod_consts.const_str_plain_post_definitive_sb_success_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP", mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP) && "mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46", mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46) && "mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mb_definitive_match_found", mod_consts.const_str_plain_mb_definitive_match_found);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_mb_definitive_match_found) && "mod_consts.const_str_plain_mb_definitive_match_found");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1", mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1) && "mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sequences", mod_consts.const_str_plain_sequences);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequences) && "mod_consts.const_str_plain_sequences");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_500000_none", mod_consts.const_slice_none_int_pos_500000_none);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_500000_none) && "mod_consts.const_slice_none_int_pos_500000_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sig_payload", mod_consts.const_str_plain_sig_payload);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_sig_payload) && "mod_consts.const_str_plain_sig_payload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_500000", mod_consts.const_int_pos_500000);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_500000) && "mod_consts.const_int_pos_500000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_7", mod_consts.const_str_plain_utf_7);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_7) && "mod_consts.const_str_plain_utf_7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_65279", mod_consts.const_str_chr_65279);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_chr_65279) && "mod_consts.const_str_chr_65279");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_none_none", mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none) && "mod_consts.const_slice_int_pos_1_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple", mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple) && "mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b", mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b) && "mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tested_but_hard_failure", mod_consts.const_str_plain_tested_but_hard_failure);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_tested_but_hard_failure) && "mod_consts.const_str_plain_tested_but_hard_failure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_length", mod_consts.const_str_plain_length);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_length) && "mod_consts.const_str_plain_length");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c", mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c) && "mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_4", mod_consts.const_int_pos_4);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_4) && "mod_consts.const_int_pos_4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_max", mod_consts.const_str_plain_max);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_max) && "mod_consts.const_str_plain_max");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cut_sequence_chunks", mod_consts.const_str_plain_cut_sequence_chunks);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_cut_sequence_chunks) && "mod_consts.const_str_plain_cut_sequence_chunks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md_chunks", mod_consts.const_str_plain_md_chunks);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_md_chunks) && "mod_consts.const_str_plain_md_chunks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md_ratios", mod_consts.const_str_plain_md_ratios);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_md_ratios) && "mod_consts.const_str_plain_md_ratios");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cached_mess_ratio", mod_consts.const_str_plain_cached_mess_ratio);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_mess_ratio) && "mod_consts.const_str_plain_cached_mess_ratio");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_threshold", mod_consts.const_str_plain_threshold);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_threshold) && "mod_consts.const_str_plain_threshold");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_early_stop_count", mod_consts.const_str_plain_early_stop_count);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_early_stop_count) && "mod_consts.const_str_plain_early_stop_count");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a", mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a) && "mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_50000_none_none", mod_consts.const_slice_int_pos_50000_none_none);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_50000_none_none) && "mod_consts.const_slice_int_pos_50000_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_strict_tuple", mod_consts.const_tuple_str_plain_strict_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_tuple) && "mod_consts.const_tuple_str_plain_strict_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_errors_tuple", mod_consts.const_tuple_str_plain_errors_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple) && "mod_consts.const_tuple_str_plain_errors_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf", mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf) && "mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tested_but_soft_failure", mod_consts.const_str_plain_tested_but_soft_failure);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_tested_but_soft_failure) && "mod_consts.const_str_plain_tested_but_soft_failure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR", mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR) && "mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_update) && "mod_consts.const_str_plain_update");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_payload_result_cache", mod_consts.const_str_plain_payload_result_cache);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_payload_result_cache) && "mod_consts.const_str_plain_payload_result_cache");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1", mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1) && "mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_round", mod_consts.const_str_plain_round);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_round) && "mod_consts.const_str_plain_round");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_100", mod_consts.const_int_pos_100);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_100) && "mod_consts.const_int_pos_100");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_tuple", mod_consts.const_tuple_int_pos_3_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_tuple) && "mod_consts.const_tuple_int_pos_3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ndigits_tuple", mod_consts.const_tuple_str_plain_ndigits_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ndigits_tuple) && "mod_consts.const_tuple_str_plain_ndigits_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_specified_encoding", mod_consts.const_str_plain_specified_encoding);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_specified_encoding) && "mod_consts.const_str_plain_specified_encoding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_16", mod_consts.const_str_plain_utf_16);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_16) && "mod_consts.const_str_plain_utf_16");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utf_32", mod_consts.const_str_plain_utf_32);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_utf_32) && "mod_consts.const_str_plain_utf_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10", mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10) && "mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decoded_payload", mod_consts.const_str_plain_decoded_payload);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_decoded_payload) && "mod_consts.const_str_plain_decoded_payload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_preemptive_declaration_tuple", mod_consts.const_tuple_str_plain_preemptive_declaration_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_preemptive_declaration_tuple) && "mod_consts.const_tuple_str_plain_preemptive_declaration_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_results", mod_consts.const_str_plain_results);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_results) && "mod_consts.const_str_plain_results");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_append", mod_consts.const_str_plain_append);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_append) && "mod_consts.const_str_plain_append");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d", mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d) && "mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_1", mod_consts.const_float_0_1);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_float_0_1) && "mod_consts.const_float_0_1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f", mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f) && "mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_early_stop_results", mod_consts.const_str_plain_early_stop_results);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_early_stop_results) && "mod_consts.const_str_plain_early_stop_results");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_best", mod_consts.const_str_plain_best);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_best) && "mod_consts.const_str_plain_best");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118", mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118) && "mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b", mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b) && "mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db", mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db) && "mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_44", mod_consts.const_str_chr_44);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_chr_44) && "mod_consts.const_str_chr_44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cached_coherence_ratio", mod_consts.const_str_plain_cached_coherence_ratio);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_coherence_ratio) && "mod_consts.const_str_plain_cached_coherence_ratio");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_language_threshold", mod_consts.const_str_plain_language_threshold);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_language_threshold) && "mod_consts.const_str_plain_language_threshold");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lg_inclusion", mod_consts.const_str_plain_lg_inclusion);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_lg_inclusion) && "mod_consts.const_str_plain_lg_inclusion");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cd_ratios", mod_consts.const_str_plain_cd_ratios);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_cd_ratios) && "mod_consts.const_str_plain_cd_ratios");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_merge_coherence_ratios", mod_consts.const_str_plain_merge_coherence_ratios);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_merge_coherence_ratios) && "mod_consts.const_str_plain_merge_coherence_ratios");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277", mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277) && "mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_02", mod_consts.const_float_0_02);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_float_0_02) && "mod_consts.const_float_0_02");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_float_0_0_tuple", mod_consts.const_tuple_float_0_0_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_float_0_0_tuple) && "mod_consts.const_tuple_float_0_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_default_tuple", mod_consts.const_tuple_str_plain_default_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple) && "mod_consts.const_tuple_str_plain_default_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_5", mod_consts.const_float_0_5);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_float_0_5) && "mod_consts.const_float_0_5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c", mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c) && "mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_float_0_98", mod_consts.const_float_0_98);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_float_0_98) && "mod_consts.const_float_0_98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b", mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b) && "mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6", mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6) && "mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5", mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5) && "mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fallback_u8", mod_consts.const_str_plain_fallback_u8);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_fallback_u8) && "mod_consts.const_str_plain_fallback_u8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fallback_ascii", mod_consts.const_str_plain_fallback_ascii);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_fallback_ascii) && "mod_consts.const_str_plain_fallback_ascii");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fallback_specified", mod_consts.const_str_plain_fallback_specified);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_fallback_specified) && "mod_consts.const_str_plain_fallback_specified");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489", mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489) && "mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a", mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a) && "mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fingerprint", mod_consts.const_str_plain_fingerprint);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_fingerprint) && "mod_consts.const_str_plain_fingerprint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple", mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple) && "mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple", mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple) && "mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605", mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605) && "mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple", mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple) && "mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a", mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a) && "mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f", mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f) && "mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_bytes", mod_consts.const_str_plain_from_bytes);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes) && "mod_consts.const_str_plain_from_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da", mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da) && "mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_fp", mod_consts.const_str_plain_from_fp);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_fp) && "mod_consts.const_str_plain_from_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb", mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb) && "mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PathLike", mod_consts.const_str_plain_PathLike);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_PathLike) && "mod_consts.const_str_plain_PathLike");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_path", mod_consts.const_str_plain_from_path);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_path) && "mod_consts.const_str_plain_from_path");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple", mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple) && "mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytes_type_bytearray_tuple", mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple) && "mod_consts.const_tuple_type_bytes_type_bytearray_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e", mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e) && "mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_logging", mod_consts.const_str_plain_logging);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging) && "mod_consts.const_str_plain_logging");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BinaryIO", mod_consts.const_str_plain_BinaryIO);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO) && "mod_consts.const_str_plain_BinaryIO");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cd", mod_consts.const_str_plain_cd);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_cd) && "mod_consts.const_str_plain_cd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple", mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple) && "mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_constant", mod_consts.const_str_plain_constant);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_constant) && "mod_consts.const_str_plain_constant");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple", mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple) && "mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_IANA_SUPPORTED", mod_consts.const_str_plain_IANA_SUPPORTED);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_IANA_SUPPORTED) && "mod_consts.const_str_plain_IANA_SUPPORTED");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_md", mod_consts.const_str_plain_md);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_md) && "mod_consts.const_str_plain_md");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_mess_ratio_tuple", mod_consts.const_tuple_str_plain_mess_ratio_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mess_ratio_tuple) && "mod_consts.const_tuple_str_plain_mess_ratio_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_models", mod_consts.const_str_plain_models);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_models) && "mod_consts.const_str_plain_models");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple", mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple) && "mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple", mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple) && "mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getLogger", mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger) && "mod_consts.const_str_plain_getLogger");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_charset_normalizer_tuple", mod_consts.const_tuple_str_plain_charset_normalizer_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_charset_normalizer_tuple) && "mod_consts.const_tuple_str_plain_charset_normalizer_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamHandler", mod_consts.const_str_plain_StreamHandler);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamHandler) && "mod_consts.const_str_plain_StreamHandler");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setFormatter", mod_consts.const_str_plain_setFormatter);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_setFormatter) && "mod_consts.const_str_plain_setFormatter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Formatter", mod_consts.const_str_plain_Formatter);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_Formatter) && "mod_consts.const_str_plain_Formatter");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple", mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple) && "mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sorted", mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted) && "mod_consts.const_str_plain_sorted");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_lambda", mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda) && "mod_consts.const_str_angle_lambda");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_key_tuple", mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple) && "mod_consts.const_tuple_str_plain_key_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a", mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a) && "mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple", mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple) && "mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d", mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d) && "mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_401f10c7d082fd00523753e337052f56", mod_consts.const_dict_401f10c7d082fd00523753e337052f56);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_401f10c7d082fd00523753e337052f56) && "mod_consts.const_dict_401f10c7d082fd00523753e337052f56");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534", mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534) && "mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple", mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple) && "mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_57090b1bab40ee452949405fa9be224f", mod_consts.const_dict_57090b1bab40ee452949405fa9be224f);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_57090b1bab40ee452949405fa9be224f) && "mod_consts.const_dict_57090b1bab40ee452949405fa9be224f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_binary", mod_consts.const_str_plain_is_binary);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_binary) && "mod_consts.const_str_plain_is_binary");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633", mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633) && "mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple", mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple) && "mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple) && "mod_consts.const_tuple_str_plain_encoding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f", mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f) && "mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple", mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple) && "mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple", mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple) && "mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple", mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple) && "mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple", mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple) && "mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 29
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
static PyObject *module_var_accessor_charset_normalizer$api$CharsetMatch(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatch);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharsetMatch);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharsetMatch, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharsetMatch);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharsetMatch, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatch);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatch);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatch);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$CharsetMatches(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatches);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharsetMatches);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharsetMatches, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CharsetMatches);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CharsetMatches, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatches);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatches);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatches);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$IANA_SUPPORTED(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$IANA_SUPPORTED_MB_FIRST(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$IANA_SUPPORTED_SIMILAR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$PathLike(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_PathLike);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PathLike);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PathLike, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PathLike);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PathLike, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_PathLike);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_PathLike);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PathLike);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$TOO_BIG_SEQUENCE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TOO_BIG_SEQUENCE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TOO_BIG_SEQUENCE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$TOO_SMALL_SEQUENCE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$TRACE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TRACE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRACE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRACE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRACE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRACE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TRACE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TRACE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TRACE);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$any_specified_encoding(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_any_specified_encoding);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_any_specified_encoding);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_any_specified_encoding, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_any_specified_encoding);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_any_specified_encoding, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_any_specified_encoding);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_any_specified_encoding);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_any_specified_encoding);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$coherence_ratio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_coherence_ratio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_coherence_ratio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_coherence_ratio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_coherence_ratio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_coherence_ratio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_coherence_ratio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_coherence_ratio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_coherence_ratio);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$cut_sequence_chunks(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cut_sequence_chunks);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cut_sequence_chunks);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cut_sequence_chunks, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cut_sequence_chunks);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cut_sequence_chunks, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cut_sequence_chunks);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cut_sequence_chunks);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cut_sequence_chunks);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$encoding_languages(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_encoding_languages);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encoding_languages);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encoding_languages, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encoding_languages);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encoding_languages, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_encoding_languages);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_encoding_languages);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encoding_languages);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$explain_handler(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_explain_handler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_explain_handler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_explain_handler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_explain_handler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_explain_handler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_explain_handler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_explain_handler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_explain_handler);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$from_bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_from_bytes);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$from_fp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_fp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_fp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_fp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_fp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_fp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_fp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_fp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_from_fp);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$from_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_from_path);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$iana_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_iana_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_iana_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_iana_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_iana_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_iana_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_iana_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_iana_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_iana_name);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$identify_sig_or_bom(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_identify_sig_or_bom);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_identify_sig_or_bom);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_identify_sig_or_bom, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_identify_sig_or_bom);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_identify_sig_or_bom, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_identify_sig_or_bom);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_identify_sig_or_bom);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_identify_sig_or_bom);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$is_multi_byte_encoding(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$lru_cache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$mb_encoding_languages(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mb_encoding_languages);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mb_encoding_languages);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mb_encoding_languages, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mb_encoding_languages);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mb_encoding_languages, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mb_encoding_languages);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mb_encoding_languages);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mb_encoding_languages);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$merge_coherence_ratios(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_coherence_ratios);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_merge_coherence_ratios);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_merge_coherence_ratios, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_merge_coherence_ratios);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_merge_coherence_ratios, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_coherence_ratios);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_coherence_ratios);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_coherence_ratios);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$mess_ratio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mess_ratio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mess_ratio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mess_ratio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_mess_ratio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_mess_ratio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mess_ratio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mess_ratio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_mess_ratio);
    }

    return result;
}

static PyObject *module_var_accessor_charset_normalizer$api$should_strip_sig_or_bom(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_charset_normalizer$api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_charset_normalizer$api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_should_strip_sig_or_bom);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_charset_normalizer$api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_should_strip_sig_or_bom);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_should_strip_sig_or_bom, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_should_strip_sig_or_bom);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_should_strip_sig_or_bom, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_should_strip_sig_or_bom);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_should_strip_sig_or_bom);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_should_strip_sig_or_bom);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ee3446bd73cc052cccb60fd5c86d00c9;
static PyCodeObject *code_objects_976d5addd46db99887e42d64c2a3ac8a;
static PyCodeObject *code_objects_e24aded9a8bce952c9b74c92304c57b4;
static PyCodeObject *code_objects_7fce404aab87146560afe9a288cae124;
static PyCodeObject *code_objects_57edc95c756625795321d812d0fbaea4;
static PyCodeObject *code_objects_de8c7cef865d3e53703f23deac0e40f8;
static PyCodeObject *code_objects_1105410c447262331db03bf6ac19613d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ebfadceaf34f27e6af01ab340ab47633); CHECK_OBJECT(module_filename_obj);
code_objects_ee3446bd73cc052cccb60fd5c86d00c9 = MAKE_CODE_OBJECT(module_filename_obj, 835, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f, mod_consts.const_tuple_2f1dad79312998838ce9e6bd0975cfd9_tuple, NULL, 1, 0, 0);
code_objects_976d5addd46db99887e42d64c2a3ac8a = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_encoding_tuple, NULL, 1, 0, 0);
code_objects_e24aded9a8bce952c9b74c92304c57b4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f, mod_consts.const_str_digest_e1bf14511a47805218d290639a80e75f, NULL, NULL, 0, 0, 0);
code_objects_7fce404aab87146560afe9a288cae124 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_bytes, mod_consts.const_str_plain_from_bytes, mod_consts.const_tuple_ae691bb1488069da98dd2b9f6f5c47fe_tuple, NULL, 10, 0, 0);
code_objects_57edc95c756625795321d812d0fbaea4 = MAKE_CODE_OBJECT(module_filename_obj, 941, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_fp, mod_consts.const_str_plain_from_fp, mod_consts.const_tuple_b2fdb735a024f1727531f668ddcfe91d_tuple, NULL, 10, 0, 0);
code_objects_de8c7cef865d3e53703f23deac0e40f8 = MAKE_CODE_OBJECT(module_filename_obj, 971, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_path, mod_consts.const_str_plain_from_path, mod_consts.const_tuple_26fbf264c487abbf8f96200f3746ce74_tuple, NULL, 10, 0, 0);
code_objects_1105410c447262331db03bf6ac19613d = MAKE_CODE_OBJECT(module_filename_obj, 1002, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_binary, mod_consts.const_str_plain_is_binary, mod_consts.const_tuple_c93ddcb74e3b2db99902ec43d32fff2e_tuple, NULL, 10, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__2_from_bytes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__3_from_fp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__4_from_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__5_is_binary(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_charset_normalizer$api$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_encoding = python_pars[0];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$api$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$api$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$api$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$api$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$api$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$api$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_976d5addd46db99887e42d64c2a3ac8a, module_charset_normalizer$api, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$api$$$function__1_lambda->m_type_description == NULL);
frame_frame_charset_normalizer$api$$$function__1_lambda = cache_frame_frame_charset_normalizer$api$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$api$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_charset_normalizer$api$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$api$is_multi_byte_encoding(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_multi_byte_encoding);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_encoding);
tmp_args_element_value_1 = par_encoding;
frame_frame_charset_normalizer$api$$$function__1_lambda->m_frame.f_lineno = 46;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$api$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$api$$$function__1_lambda,
    type_description_1,
    par_encoding
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$api$$$function__1_lambda == cache_frame_frame_charset_normalizer$api$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$api$$$function__1_lambda);
    cache_frame_frame_charset_normalizer$api$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$api$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$api$$$function__2_from_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sequences = python_pars[0];
PyObject *par_steps = python_pars[1];
PyObject *par_chunk_size = python_pars[2];
PyObject *par_threshold = python_pars[3];
PyObject *par_cp_isolation = python_pars[4];
PyObject *par_cp_exclusion = python_pars[5];
PyObject *par_preemptive_behaviour = python_pars[6];
PyObject *par_explain = python_pars[7];
PyObject *par_language_threshold = python_pars[8];
PyObject *par_enable_fallback = python_pars[9];
PyObject *var_previous_logger_level = NULL;
PyObject *var_length = NULL;
PyObject *var_is_too_small_sequence = NULL;
PyObject *var_is_too_large_sequence = NULL;
PyObject *var_prioritized_encodings = NULL;
PyObject *var_specified_encoding = NULL;
PyObject *var_tested = NULL;
PyObject *var_tested_but_hard_failure = NULL;
PyObject *var_tested_but_soft_failure = NULL;
PyObject *var_soft_failure_skip = NULL;
PyObject *var_success_fast_tracked = NULL;
PyObject *var_payload_result_cache = NULL;
PyObject *var_definitive_match_found = NULL;
PyObject *var_definitive_target_languages = NULL;
PyObject *var_post_definitive_sb_success_count = NULL;
PyObject *var_POST_DEFINITIVE_SB_CAP = NULL;
PyObject *var_mb_definitive_match_found = NULL;
PyObject *var_fallback_ascii = NULL;
PyObject *var_fallback_u8 = NULL;
PyObject *var_fallback_specified = NULL;
PyObject *var_results = NULL;
PyObject *var_early_stop_results = NULL;
PyObject *var_decoded_payload = NULL;
PyObject *var_bom_or_sig_available = NULL;
PyObject *var_strip_sig_or_bom = NULL;
PyObject *var_is_multi_byte_decoder = NULL;
PyObject *var_deferred_decoding = NULL;
PyObject *var_multi_byte_bonus = NULL;
PyObject *var_max_chunk_gave_up = NULL;
PyObject *var_early_stop_count = NULL;
PyObject *var_md_chunks = NULL;
PyObject *var_mean_mess_ratio = NULL;
PyObject *var_payload_hash = NULL;
PyObject *var_probable_result = NULL;
PyObject *var_target_languages = NULL;
PyObject *var_lg_inclusion = NULL;
PyObject *var_cached_mess_ratio = NULL;
PyObject *var_cached_coherence_ratio = NULL;
PyObject *var_sig_encoding = NULL;
PyObject *var_sig_payload = NULL;
PyObject *var_encoding_iana = NULL;
PyObject *var_enc_languages = NULL;
PyObject *var_e = NULL;
PyObject *var_r_ = NULL;
PyObject *var_lazy_str_hard_failure = NULL;
PyObject *var_md_ratios = NULL;
PyObject *var_chunk = NULL;
PyObject *var_fallback_entry = NULL;
PyObject *var_cached = NULL;
PyObject *var_cached_mess = NULL;
PyObject *var_cached_cd = NULL;
PyObject *var_cached_passed = NULL;
PyObject *var_fast_match = NULL;
PyObject *var_cd_ratios = NULL;
PyObject *var_chunk_languages = NULL;
PyObject *var_cd_ratios_merged = NULL;
PyObject *var_current_match = NULL;
PyObject *var_best_coherence = NULL;
PyObject *outline_0_var_cp = NULL;
PyObject *outline_1_var_cp = NULL;
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$api$$$function__2_from_bytes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_2;
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
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionStackItem exception_preserved_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionStackItem exception_preserved_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes = MAKE_FUNCTION_FRAME(tstate, code_objects_7fce404aab87146560afe9a288cae124, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_type_description == NULL);
frame_frame_charset_normalizer$api$$$function__2_from_bytes = cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$api$$$function__2_from_bytes);
assert(Py_REFCNT(frame_frame_charset_normalizer$api$$$function__2_from_bytes) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_sequences);
tmp_isinstance_inst_1 = par_sequences;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_bytearray_type_bytes_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_type_arg_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_6d988cb629920f570b461b2e0a5f9302;
CHECK_OBJECT(par_sequences);
tmp_type_arg_1 = par_sequences;
tmp_kw_call_arg_value_1_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_kw_call_arg_value_1_1 == NULL));
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 81;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_explain);
tmp_truth_name_1 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_level);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_previous_logger_level;
    var_previous_logger_level = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_2 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_addHandler);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 89;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 89;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 90;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 90;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_sequences);
tmp_len_arg_1 = par_sequences;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_length;
    var_length = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
CHECK_OBJECT(var_length);
tmp_cmp_expr_left_1 = var_length;
tmp_cmp_expr_right_1 = 0;
tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_3;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 95;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c82c025baccbe815c462a87afb424f9f_tuple, 0)
);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_explain);
tmp_truth_name_2 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
tmp_expression_value_4 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_removeHandler);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 97;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 97;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_4;
tmp_expression_value_5 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_previous_logger_level == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_logger_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = var_previous_logger_level;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 98;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_charset_normalizer$api$CharsetMatch(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatch);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sequences);
tmp_args_element_value_6 = par_sequences;
tmp_args_element_value_7 = mod_consts.const_str_plain_utf_8;
tmp_args_element_value_8 = const_float_0_0;
tmp_args_element_value_9 = Py_False;
tmp_args_element_value_10 = MAKE_LIST_EMPTY(tstate, 0);
tmp_args_element_value_11 = const_str_empty;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_5, 0, tmp_list_element_1);
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 99;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_cp_isolation);
tmp_cmp_expr_left_2 = par_cp_isolation;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_expression_value_6 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_log);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 103;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = mod_consts.const_str_digest_2a0e1884c2319a2dcbac94c1616515b4;
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
CHECK_OBJECT(par_cp_isolation);
tmp_iterable_value_1 = par_cp_isolation;
tmp_args_element_value_14 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 106;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_assign_source_3;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_cp_isolation);
tmp_iter_arg_1 = par_cp_isolation;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 108;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_cp;
    outline_0_var_cp = tmp_assign_source_7;
    Py_INCREF(outline_0_var_cp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_8 = module_var_accessor_charset_normalizer$api$iana_name(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iana_name);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_cp);
tmp_args_element_value_15 = outline_0_var_cp;
tmp_args_element_value_16 = Py_False;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_3 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_3);
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
Py_XDECREF(outline_0_var_cp);
outline_0_var_cp = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_cp);
outline_0_var_cp = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 108;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = par_cp_isolation;
    assert(old != NULL);
    par_cp_isolation = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = par_cp_isolation;
    assert(old != NULL);
    par_cp_isolation = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_end_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_cp_exclusion);
tmp_cmp_expr_left_3 = par_cp_exclusion;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_2;
tmp_expression_value_7 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_log);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 114;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_18 = mod_consts.const_str_digest_57e95db9037ea685f8d4c0c10f8a48d7;
tmp_str_arg_value_2 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
CHECK_OBJECT(par_cp_exclusion);
tmp_iterable_value_2 = par_cp_exclusion;
tmp_args_element_value_19 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_2);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 117;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_assign_source_9;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_cp_exclusion);
tmp_iter_arg_2 = par_cp_exclusion;
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp_2__$0;
    tmp_listcomp_2__$0 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_2__contraction;
    tmp_listcomp_2__contraction = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 119;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_13 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_cp;
    outline_1_var_cp = tmp_assign_source_13;
    Py_INCREF(outline_1_var_cp);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_called_value_10 = module_var_accessor_charset_normalizer$api$iana_name(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iana_name);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_1_var_cp);
tmp_args_element_value_20 = outline_1_var_cp;
tmp_args_element_value_21 = Py_False;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 119;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_assign_source_9 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_assign_source_9);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_cp);
outline_1_var_cp = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_cp);
outline_1_var_cp = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 119;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = par_cp_exclusion;
    assert(old != NULL);
    par_cp_exclusion = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = par_cp_exclusion;
    assert(old != NULL);
    par_cp_exclusion = tmp_assign_source_14;
    Py_DECREF(old);
}

}
branch_end_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
CHECK_OBJECT(var_length);
tmp_cmp_expr_left_4 = var_length;
CHECK_OBJECT(par_chunk_size);
tmp_mult_expr_left_1 = par_chunk_size;
CHECK_OBJECT(par_steps);
tmp_mult_expr_right_1 = par_steps;
tmp_cmp_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = RICH_COMPARE_LE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_right_4);
Py_DECREF(tmp_cmp_expr_right_4);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
tmp_expression_value_8 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_log);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_22 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 125;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_23 = mod_consts.const_str_digest_cfdcd577ac0a913d02f8e7cbff1e78f1;
CHECK_OBJECT(par_steps);
tmp_args_element_value_24 = par_steps;
CHECK_OBJECT(par_chunk_size);
tmp_args_element_value_25 = par_chunk_size;
CHECK_OBJECT(var_length);
tmp_args_element_value_26 = var_length;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 124;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = const_int_pos_1;
{
    PyObject *old = par_steps;
    assert(old != NULL);
    par_steps = tmp_assign_source_15;
    Py_INCREF(par_steps);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(var_length);
tmp_assign_source_16 = var_length;
{
    PyObject *old = par_chunk_size;
    assert(old != NULL);
    par_chunk_size = tmp_assign_source_16;
    Py_INCREF(par_chunk_size);
    Py_DECREF(old);
}

}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
if (par_steps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_steps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = par_steps;
tmp_cmp_expr_right_5 = const_int_pos_1;
tmp_and_left_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_length);
tmp_truediv_expr_left_1 = var_length;
if (par_steps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_steps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_right_1 = par_steps;
tmp_cmp_expr_left_6 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_chunk_size == NULL) {
Py_DECREF(tmp_cmp_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_6 = par_chunk_size;
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_8 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_int_arg_1;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
CHECK_OBJECT(var_length);
tmp_truediv_expr_left_2 = var_length;
if (par_steps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_steps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truediv_expr_right_2 = par_steps;
tmp_int_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_17 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_chunk_size;
    par_chunk_size = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_sequences);
tmp_len_arg_2 = par_sequences;
tmp_cmp_expr_left_7 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = module_var_accessor_charset_normalizer$api$TOO_SMALL_SEQUENCE(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_7);

exception_lineno = 137;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_too_small_sequence;
    var_is_too_small_sequence = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_len_arg_3;
CHECK_OBJECT(par_sequences);
tmp_len_arg_3 = par_sequences;
tmp_cmp_expr_left_8 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = module_var_accessor_charset_normalizer$api$TOO_BIG_SEQUENCE(tstate);
if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
}

if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 138;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = RICH_COMPARE_GE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_is_too_large_sequence;
    var_is_too_large_sequence = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
CHECK_OBJECT(var_is_too_small_sequence);
tmp_truth_name_3 = CHECK_IF_TRUE(var_is_too_small_sequence);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
tmp_expression_value_9 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_log);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_27 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 142;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_digest_e5c689e4541937f0c14298d88eb1893a;
CHECK_OBJECT(var_length);
tmp_kw_call_arg_value_1_2 = var_length;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 143;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 143;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 141;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
goto branch_end_9;
branch_no_9:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_4;
CHECK_OBJECT(var_is_too_large_sequence);
tmp_truth_name_4 = CHECK_IF_TRUE(var_is_too_large_sequence);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
tmp_expression_value_10 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_log);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_29 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 149;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_digest_3d0582751a29236b591154603e0813f1;
CHECK_OBJECT(var_length);
tmp_kw_call_arg_value_1_3 = var_length;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 150;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_10:;
branch_end_9:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_prioritized_encodings;
    var_prioritized_encodings = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_5;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_31;
CHECK_OBJECT(par_preemptive_behaviour);
tmp_truth_name_5 = CHECK_IF_TRUE(par_preemptive_behaviour);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_14 = module_var_accessor_charset_normalizer$api$any_specified_encoding(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_any_specified_encoding);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sequences);
tmp_args_element_value_31 = par_sequences;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 158;
tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_31);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_21 = Py_None;
Py_INCREF(tmp_assign_source_21);
condexpr_end_1:;
{
    PyObject *old = var_specified_encoding;
    var_specified_encoding = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_specified_encoding);
tmp_cmp_expr_left_9 = var_specified_encoding;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_prioritized_encodings);
tmp_list_arg_value_1 = var_prioritized_encodings;
CHECK_OBJECT(var_specified_encoding);
tmp_item_value_1 = var_specified_encoding;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
tmp_expression_value_11 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 163;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_log);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_32 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 164;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_33 = mod_consts.const_str_digest_11265f15445a22d9e248a98c6e4d8dbc;
CHECK_OBJECT(var_specified_encoding);
tmp_args_element_value_34 = var_specified_encoding;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_11:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = PySet_New(NULL);
{
    PyObject *old = var_tested;
    var_tested = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_tested_but_hard_failure;
    var_tested_but_hard_failure = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_tested_but_soft_failure;
    var_tested_but_soft_failure = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = PySet_New(NULL);
{
    PyObject *old = var_soft_failure_skip;
    var_soft_failure_skip = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = PySet_New(NULL);
{
    PyObject *old = var_success_fast_tracked;
    var_success_fast_tracked = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = var_payload_result_cache;
    var_payload_result_cache = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_16;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_35;
tmp_called_value_17 = module_var_accessor_charset_normalizer$api$lru_cache(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 184;
tmp_called_value_16 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_35 = module_var_accessor_charset_normalizer$api$mess_ratio(tstate);
if (unlikely(tmp_args_element_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mess_ratio);
}

if (tmp_args_element_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_16);

exception_lineno = 184;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 184;
tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_35);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cached_mess_ratio;
    var_cached_mess_ratio = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_18;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_36;
tmp_called_value_19 = module_var_accessor_charset_normalizer$api$lru_cache(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 185;
tmp_called_value_18 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_36 = module_var_accessor_charset_normalizer$api$coherence_ratio(tstate);
if (unlikely(tmp_args_element_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_coherence_ratio);
}

if (tmp_args_element_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 185;
tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_36);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cached_coherence_ratio;
    var_cached_coherence_ratio = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = Py_False;
{
    PyObject *old = var_definitive_match_found;
    var_definitive_match_found = tmp_assign_source_30;
    Py_INCREF(var_definitive_match_found);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = PySet_New(NULL);
{
    PyObject *old = var_definitive_target_languages;
    var_definitive_target_languages = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = const_int_0;
{
    PyObject *old = var_post_definitive_sb_success_count;
    var_post_definitive_sb_success_count = tmp_assign_source_32;
    Py_INCREF(var_post_definitive_sb_success_count);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_int_pos_7;
{
    PyObject *old = var_POST_DEFINITIVE_SB_CAP;
    var_POST_DEFINITIVE_SB_CAP = tmp_assign_source_33;
    Py_INCREF(var_POST_DEFINITIVE_SB_CAP);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = Py_False;
{
    PyObject *old = var_mb_definitive_match_found;
    var_mb_definitive_match_found = tmp_assign_source_34;
    Py_INCREF(var_mb_definitive_match_found);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = Py_None;
{
    PyObject *old = var_fallback_ascii;
    var_fallback_ascii = tmp_assign_source_35;
    Py_INCREF(var_fallback_ascii);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = Py_None;
{
    PyObject *old = var_fallback_u8;
    var_fallback_u8 = tmp_assign_source_36;
    Py_INCREF(var_fallback_u8);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = Py_None;
{
    PyObject *old = var_fallback_specified;
    var_fallback_specified = tmp_assign_source_37;
    Py_INCREF(var_fallback_specified);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_20;
tmp_called_value_20 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 218;
tmp_assign_source_38 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_20);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_results;
    var_results = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_21;
tmp_called_value_21 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 220;
tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_early_stop_results;
    var_early_stop_results = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_37;
tmp_called_value_22 = module_var_accessor_charset_normalizer$api$identify_sig_or_bom(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_identify_sig_or_bom);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_sequences);
tmp_args_element_value_37 = par_sequences;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 222;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_37);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_40 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_41 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_42 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_42;
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



exception_lineno = 222;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_43;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_43 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_sig_encoding;
    var_sig_encoding = tmp_assign_source_43;
    Py_INCREF(var_sig_encoding);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_44 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_sig_payload;
    var_sig_payload = tmp_assign_source_44;
    Py_INCREF(var_sig_payload);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_sig_encoding);
tmp_cmp_expr_left_10 = var_sig_encoding;
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_13 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
CHECK_OBJECT(var_prioritized_encodings);
tmp_list_arg_value_2 = var_prioritized_encodings;
CHECK_OBJECT(var_sig_encoding);
tmp_item_value_2 = var_sig_encoding;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_args_element_value_40;
PyObject *tmp_len_arg_4;
PyObject *tmp_args_element_value_41;
tmp_expression_value_12 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_log);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_38 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_23);

exception_lineno = 227;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_39 = mod_consts.const_str_digest_4b8c3f9bfe0fe6299097298566c84a00;
CHECK_OBJECT(var_sig_payload);
tmp_len_arg_4 = var_sig_payload;
tmp_args_element_value_40 = BUILTIN_LEN(tstate, tmp_len_arg_4);
if (tmp_args_element_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 229;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_sig_encoding);
tmp_args_element_value_41 = var_sig_encoding;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41};
    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
branch_no_12:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
CHECK_OBJECT(var_prioritized_encodings);
tmp_list_arg_value_3 = var_prioritized_encodings;
tmp_item_value_3 = const_str_plain_ascii;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = mod_consts.const_str_plain_utf_8;
CHECK_OBJECT(var_prioritized_encodings);
tmp_cmp_expr_right_11 = var_prioritized_encodings;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_prioritized_encodings);
tmp_list_arg_value_4 = var_prioritized_encodings;
tmp_item_value_4 = mod_consts.const_str_plain_utf_8;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
branch_no_13:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_iter_arg_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_prioritized_encodings);
tmp_add_expr_left_1 = var_prioritized_encodings;
tmp_add_expr_right_1 = module_var_accessor_charset_normalizer$api$IANA_SUPPORTED_MB_FIRST(tstate);
if (unlikely(tmp_add_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST);
}

if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_iter_arg_4 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_45 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_46;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_3 = tmp_for_loop_1__for_iterator;
tmp_assign_source_46 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_46 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 238;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_47;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_47 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_encoding_iana;
    var_encoding_iana = tmp_assign_source_47;
    Py_INCREF(var_encoding_iana);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_15;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_6;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
if (par_cp_isolation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cp_isolation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_6 = CHECK_IF_TRUE(par_cp_isolation);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_12 = var_encoding_iana;
if (par_cp_isolation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cp_isolation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_12 = par_cp_isolation;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_15 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_15 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
goto loop_start_3;
branch_no_14:;
{
nuitka_bool tmp_condition_result_16;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_7;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(par_cp_exclusion);
tmp_truth_name_7 = CHECK_IF_TRUE(par_cp_exclusion);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_13 = var_encoding_iana;
CHECK_OBJECT(par_cp_exclusion);
tmp_cmp_expr_right_13 = par_cp_exclusion;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_13, tmp_cmp_expr_left_13);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_16 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_16 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
goto loop_start_3;
branch_no_15:;
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_14 = var_encoding_iana;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_14 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_14, tmp_cmp_expr_left_14);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_17 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
goto loop_start_3;
branch_no_16:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_42;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_2 = var_tested;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_42 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 248;
tmp_call_result_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_add, tmp_args_element_value_42);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = Py_None;
{
    PyObject *old = var_decoded_payload;
    var_decoded_payload = tmp_assign_source_48;
    Py_INCREF(var_decoded_payload);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(var_sig_encoding);
tmp_cmp_expr_left_15 = var_sig_encoding;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_right_15 = var_encoding_iana;
tmp_assign_source_49 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_bom_or_sig_available;
    var_bom_or_sig_available = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_50;
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_43;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_and_left_value_4 = var_bom_or_sig_available;
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
tmp_called_value_24 = module_var_accessor_charset_normalizer$api$should_strip_sig_or_bom(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_should_strip_sig_or_bom);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_43 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 252;
tmp_and_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_43);
if (tmp_and_right_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_50 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
Py_INCREF(tmp_and_left_value_4);
tmp_assign_source_50 = tmp_and_left_value_4;
and_end_4:;
{
    PyObject *old = var_strip_sig_or_bom;
    var_strip_sig_or_bom = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_18;
int tmp_and_left_truth_5;
bool tmp_and_left_value_5;
bool tmp_and_right_value_5;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_16 = var_encoding_iana;
tmp_cmp_expr_right_16 = mod_consts.const_frozenset_8b8956f3cc0832019a3ac3569dee251f;
tmp_res = PySet_Contains(tmp_cmp_expr_right_16, tmp_cmp_expr_left_16);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_5 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_5 = tmp_and_left_value_5 != false ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_operand_value_2 = var_bom_or_sig_available;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_5 = (tmp_res == 0) ? true : false;
tmp_condition_result_18 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_18 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_18 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_44;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
tmp_expression_value_13 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_log);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_44 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_25);

exception_lineno = 258;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_45 = mod_consts.const_str_digest_bd3d247aee308d92d57fb681e720a863;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_46 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 257;
{
    PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46};
    tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
goto loop_start_3;
branch_no_17:;
{
bool tmp_condition_result_19;
int tmp_and_left_truth_6;
bool tmp_and_left_value_6;
bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_17 = var_encoding_iana;
tmp_cmp_expr_right_17 = mod_consts.const_frozenset_c8b561c5738a8c0827dcd9e956084627;
tmp_res = PySet_Contains(tmp_cmp_expr_right_17, tmp_cmp_expr_left_17);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_6 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_6 = tmp_and_left_value_6 != false ? 1 : 0;
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_operand_value_3 = var_bom_or_sig_available;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_6 = (tmp_res == 0) ? true : false;
tmp_condition_result_19 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_19 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_19 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_15;
PyObject *tmp_args_element_value_47;
PyObject *tmp_args_element_value_48;
PyObject *tmp_args_element_value_49;
tmp_expression_value_14 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_log);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_47 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_26);

exception_lineno = 265;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_48 = mod_consts.const_str_digest_809997f5c6d1fe70a2d79fd0a9af0bbd;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_49 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 264;
{
    PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
    tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
goto loop_start_3;
branch_no_18:;
{
bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_18 = var_encoding_iana;
if (var_soft_failure_skip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_soft_failure_skip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_18 = var_soft_failure_skip;
tmp_res = PySet_Contains(tmp_cmp_expr_right_18, tmp_cmp_expr_left_18);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_20 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_16;
PyObject *tmp_args_element_value_50;
PyObject *tmp_args_element_value_51;
PyObject *tmp_args_element_value_52;
tmp_expression_value_15 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_log);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_50 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 275;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_51 = mod_consts.const_str_digest_70588241fb81b3530b0fb9b6546908fe;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_52 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
    tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_27, call_args);
}

CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
goto loop_start_3;
branch_no_19:;
{
bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_19 = var_encoding_iana;
if (var_success_fast_tracked == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_success_fast_tracked);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_19 = var_success_fast_tracked;
tmp_res = PySet_Contains(tmp_cmp_expr_right_19, tmp_cmp_expr_left_19);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_21 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_17;
PyObject *tmp_args_element_value_53;
PyObject *tmp_args_element_value_54;
PyObject *tmp_args_element_value_55;
tmp_expression_value_16 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_log);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_53 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_28);

exception_lineno = 284;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_54 = mod_consts.const_str_digest_b11a25583f93f9e1f2c199be655306e1;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_55 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 283;
{
    PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
    tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
if (tmp_call_result_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_17);
Py_DECREF(tmp_call_result_17);
}
goto loop_start_3;
branch_no_20:;
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_56;
tmp_called_value_29 = module_var_accessor_charset_normalizer$api$is_multi_byte_encoding(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_multi_byte_encoding);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_56 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 291;
tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_56);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = var_is_multi_byte_decoder;
    var_is_multi_byte_decoder = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
tmp_cmp_expr_left_20 = EXC_TYPE(tstate);
tmp_cmp_expr_right_20 = mod_consts.const_tuple_type_ModuleNotFoundError_type_ImportError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_18;
PyObject *tmp_args_element_value_57;
PyObject *tmp_args_element_value_58;
PyObject *tmp_args_element_value_59;
tmp_expression_value_17 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_log);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_args_element_value_57 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_30);

exception_lineno = 294;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_args_element_value_58 = mod_consts.const_str_digest_05494da37e91142ed11dae921c203d78;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_59 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 293;
{
    PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58, tmp_args_element_value_59};
    tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_30, call_args);
}

CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
if (tmp_call_result_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_18);
Py_DECREF(tmp_call_result_18);
}
goto try_continue_handler_10;
goto branch_end_21;
branch_no_21:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 290;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_10;
branch_end_21:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// try continue handler code:
try_continue_handler_10:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto loop_start_3;
// End of try:
// End of try:
try_end_3:;
{
nuitka_bool tmp_condition_result_23;
int tmp_truth_name_8;
if (var_definitive_match_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_definitive_match_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 305;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_8 = CHECK_IF_TRUE(var_definitive_match_found);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_23 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
bool tmp_condition_result_24;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_4 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_24 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_set_arg_1;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_60;
tmp_called_value_31 = module_var_accessor_charset_normalizer$api$encoding_languages(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoding_languages);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_60 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 307;
tmp_set_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_60);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_52 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_enc_languages;
    var_enc_languages = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
goto branch_end_23;
branch_no_23:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_set_arg_2;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_61;
tmp_called_value_32 = module_var_accessor_charset_normalizer$api$mb_encoding_languages(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mb_encoding_languages);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 309;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_61 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 309;
tmp_set_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_61);
if (tmp_set_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_53 = PySet_New(tmp_set_arg_2);
CHECK_OBJECT(tmp_set_arg_2);
Py_DECREF(tmp_set_arg_2);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_enc_languages;
    var_enc_languages = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
branch_end_23:;
{
bool tmp_condition_result_25;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_62;
CHECK_OBJECT(var_enc_languages);
tmp_expression_value_18 = var_enc_languages;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_intersection);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_definitive_target_languages == NULL) {
Py_DECREF(tmp_called_value_33);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_definitive_target_languages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 310;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_62 = var_definitive_target_languages;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 310;
tmp_operand_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_62);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_25 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_19;
PyObject *tmp_args_element_value_63;
PyObject *tmp_args_element_value_64;
PyObject *tmp_args_element_value_65;
PyObject *tmp_args_element_value_66;
PyObject *tmp_args_element_value_67;
tmp_expression_value_19 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_log);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_63 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_34);

exception_lineno = 312;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_64 = mod_consts.const_str_digest_3cd9605de140c45dc16b0389f51a1910;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_65 = var_encoding_iana;
CHECK_OBJECT(var_enc_languages);
tmp_args_element_value_66 = var_enc_languages;
if (var_definitive_target_languages == NULL) {
Py_DECREF(tmp_called_value_34);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_definitive_target_languages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 316;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_67 = var_definitive_target_languages;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
    tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_34, call_args);
}

CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
if (tmp_call_result_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_19);
Py_DECREF(tmp_call_result_19);
}
goto loop_start_3;
branch_no_24:;
branch_no_22:;
{
nuitka_bool tmp_condition_result_26;
int tmp_and_left_truth_7;
nuitka_bool tmp_and_left_value_7;
nuitka_bool tmp_and_right_value_7;
int tmp_truth_name_9;
int tmp_and_left_truth_8;
nuitka_bool tmp_and_left_value_8;
nuitka_bool tmp_and_right_value_8;
PyObject *tmp_operand_value_6;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
if (var_definitive_match_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_definitive_match_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 325;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_9 = CHECK_IF_TRUE(var_definitive_match_found);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_7 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_6 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_8 = tmp_and_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_8 == 1) {
    goto and_right_8;
} else {
    goto and_left_8;
}
and_right_8:;
if (var_post_definitive_sb_success_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_post_definitive_sb_success_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 327;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_21 = var_post_definitive_sb_success_count;
if (var_POST_DEFINITIVE_SB_CAP == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 327;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_21 = var_POST_DEFINITIVE_SB_CAP;
tmp_and_right_value_8 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_and_right_value_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_7 = tmp_and_right_value_8;
goto and_end_8;
and_left_8:;
tmp_and_right_value_7 = tmp_and_left_value_8;
and_end_8:;
tmp_condition_result_26 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_condition_result_26 = tmp_and_left_value_7;
and_end_7:;
if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_called_value_35;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_20;
PyObject *tmp_args_element_value_68;
PyObject *tmp_args_element_value_69;
PyObject *tmp_args_element_value_70;
PyObject *tmp_args_element_value_71;
PyObject *tmp_args_element_value_72;
tmp_expression_value_20 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 329;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_log);
if (tmp_called_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_68 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_35);

exception_lineno = 330;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_69 = mod_consts.const_str_digest_b8f4ad047833622a520bcfeff8041e46;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_70 = var_encoding_iana;
if (var_post_definitive_sb_success_count == NULL) {
Py_DECREF(tmp_called_value_35);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_post_definitive_sb_success_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 333;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_71 = var_post_definitive_sb_success_count;
if (var_POST_DEFINITIVE_SB_CAP == NULL) {
Py_DECREF(tmp_called_value_35);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POST_DEFINITIVE_SB_CAP);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 334;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_72 = var_POST_DEFINITIVE_SB_CAP;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 329;
{
    PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
    tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_35, call_args);
}

CHECK_OBJECT(tmp_called_value_35);
Py_DECREF(tmp_called_value_35);
if (tmp_call_result_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_20);
Py_DECREF(tmp_call_result_20);
}
goto loop_start_3;
branch_no_25:;
{
nuitka_bool tmp_condition_result_27;
int tmp_and_left_truth_9;
nuitka_bool tmp_and_left_value_9;
nuitka_bool tmp_and_right_value_9;
int tmp_truth_name_10;
PyObject *tmp_operand_value_7;
if (var_mb_definitive_match_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mb_definitive_match_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 341;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_10 = CHECK_IF_TRUE(var_mb_definitive_match_found);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_9 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_9 = tmp_and_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_9 == 1) {
    goto and_right_9;
} else {
    goto and_left_9;
}
and_right_9:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_7 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_27 = tmp_and_right_value_9;
goto and_end_9;
and_left_9:;
tmp_condition_result_27 = tmp_and_left_value_9;
and_end_9:;
if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_called_value_36;
PyObject *tmp_expression_value_21;
PyObject *tmp_call_result_21;
PyObject *tmp_args_element_value_73;
PyObject *tmp_args_element_value_74;
PyObject *tmp_args_element_value_75;
tmp_expression_value_21 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_log);
if (tmp_called_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_73 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_36);

exception_lineno = 343;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_74 = mod_consts.const_str_digest_a40fe328d9374ac040d9eab125a152a1;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_75 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 342;
{
    PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
    tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_36, call_args);
}

CHECK_OBJECT(tmp_called_value_36);
Py_DECREF(tmp_called_value_36);
if (tmp_call_result_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_21);
Py_DECREF(tmp_call_result_21);
}
goto loop_start_3;
branch_no_26:;
{
PyObject *tmp_assign_source_54;
int tmp_and_left_truth_10;
PyObject *tmp_and_left_value_10;
PyObject *tmp_and_right_value_10;
PyObject *tmp_operand_value_8;
PyObject *tmp_operand_value_9;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_8 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_10 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_10 = CHECK_IF_TRUE(tmp_and_left_value_10);
if (tmp_and_left_truth_10 == 1) {
    goto and_right_10;
} else {
    goto and_left_10;
}
and_right_10:;
CHECK_OBJECT(var_is_too_large_sequence);
tmp_operand_value_9 = var_is_too_large_sequence;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_10 = (tmp_res == 0) ? Py_True : Py_False;
tmp_assign_source_54 = tmp_and_right_value_10;
goto and_end_10;
and_left_10:;
tmp_assign_source_54 = tmp_and_left_value_10;
and_end_10:;
{
    PyObject *old = var_deferred_decoding;
    var_deferred_decoding = tmp_assign_source_54;
    Py_INCREF(var_deferred_decoding);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_28;
int tmp_and_left_truth_11;
nuitka_bool tmp_and_left_value_11;
nuitka_bool tmp_and_right_value_11;
int tmp_truth_name_11;
PyObject *tmp_operand_value_10;
CHECK_OBJECT(var_is_too_large_sequence);
tmp_truth_name_11 = CHECK_IF_TRUE(var_is_too_large_sequence);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_and_left_value_11 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_11 = tmp_and_left_value_11 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_and_left_truth_11 == 1) {
    goto and_right_11;
} else {
    goto and_left_11;
}
and_right_11:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_10 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_and_right_value_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_28 = tmp_and_right_value_11;
goto and_end_11;
and_left_11:;
tmp_condition_result_28 = tmp_and_left_value_11;
and_end_11:;
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
PyObject *tmp_unicode_arg_1;
bool tmp_condition_result_29;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_len_arg_5;
PyObject *tmp_stop_value_1;
PyObject *tmp_unicode_encoding_1;
PyObject *tmp_capi_result_1;
CHECK_OBJECT(var_strip_sig_or_bom);
tmp_operand_value_11 = var_strip_sig_or_bom;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_29 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_29 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 363;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_22 = par_sequences;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_500000_none;
tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_1);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
goto condexpr_end_2;
condexpr_false_2:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 365;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_23 = par_sequences;
if (var_sig_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 365;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_len_arg_5 = var_sig_payload;
tmp_start_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_5);
if (tmp_start_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_stop_value_1 = mod_consts.const_int_pos_500000;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
CHECK_OBJECT(tmp_start_value_1);
Py_DECREF(tmp_start_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_unicode_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
condexpr_end_2:;
CHECK_OBJECT(var_encoding_iana);
tmp_unicode_encoding_1 = var_encoding_iana;
tmp_capi_result_1 = BUILTIN_UNICODE3(tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
}
goto branch_end_27;
branch_no_27:;
{
bool tmp_condition_result_30;
PyObject *tmp_operand_value_12;
CHECK_OBJECT(var_deferred_decoding);
tmp_operand_value_12 = var_deferred_decoding;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_30 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
nuitka_bool tmp_condition_result_31;
int tmp_and_left_truth_12;
nuitka_bool tmp_and_left_value_12;
nuitka_bool tmp_and_right_value_12;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
int tmp_truth_name_12;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_22 = var_encoding_iana;
tmp_cmp_expr_right_22 = mod_consts.const_str_plain_utf_7;
tmp_and_left_value_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_and_left_value_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_and_left_truth_12 = tmp_and_left_value_12 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_and_left_truth_12 == 1) {
    goto and_right_12;
} else {
    goto and_left_12;
}
and_right_12:;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_truth_name_12 = CHECK_IF_TRUE(var_bom_or_sig_available);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_and_right_value_12 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_31 = tmp_and_right_value_12;
goto and_end_12;
and_left_12:;
tmp_condition_result_31 = tmp_and_left_value_12;
and_end_12:;
if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_unicode_arg_2;
PyObject *tmp_unicode_encoding_2;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 378;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_unicode_arg_2 = par_sequences;
CHECK_OBJECT(var_encoding_iana);
tmp_unicode_encoding_2 = var_encoding_iana;
tmp_assign_source_55 = BUILTIN_UNICODE3(tmp_unicode_arg_2, tmp_unicode_encoding_2, NULL);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_decoded_payload;
    assert(old != NULL);
    var_decoded_payload = tmp_assign_source_55;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_32;
int tmp_and_left_truth_13;
nuitka_bool tmp_and_left_value_13;
nuitka_bool tmp_and_right_value_13;
int tmp_truth_name_13;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_decoded_payload);
tmp_truth_name_13 = CHECK_IF_TRUE(var_decoded_payload);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_and_left_value_13 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_13 = tmp_and_left_value_13 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
if (tmp_and_left_truth_13 == 1) {
    goto and_right_13;
} else {
    goto and_left_13;
}
and_right_13:;
CHECK_OBJECT(var_decoded_payload);
tmp_expression_value_24 = var_decoded_payload;
tmp_subscript_value_3 = const_int_0;
tmp_cmp_expr_left_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_3, 0);
if (tmp_cmp_expr_left_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_cmp_expr_right_23 = mod_consts.const_str_chr_65279;
tmp_and_right_value_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
CHECK_OBJECT(tmp_cmp_expr_left_23);
Py_DECREF(tmp_cmp_expr_left_23);
if (tmp_and_right_value_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_32 = tmp_and_right_value_13;
goto and_end_13;
and_left_13:;
tmp_condition_result_32 = tmp_and_left_value_13;
and_end_13:;
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(var_decoded_payload);
tmp_expression_value_25 = var_decoded_payload;
tmp_subscript_value_4 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_4);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_decoded_payload;
    assert(old != NULL);
    var_decoded_payload = tmp_assign_source_56;
    Py_DECREF(old);
}

}
branch_no_30:;
goto branch_end_29;
branch_no_29:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_unicode_arg_3;
bool tmp_condition_result_33;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_5;
PyObject *tmp_start_value_2;
PyObject *tmp_len_arg_6;
PyObject *tmp_stop_value_2;
PyObject *tmp_unicode_encoding_3;
CHECK_OBJECT(var_strip_sig_or_bom);
tmp_operand_value_13 = var_strip_sig_or_bom;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_33 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_33 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 386;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_unicode_arg_3 = par_sequences;
Py_INCREF(tmp_unicode_arg_3);
goto condexpr_end_3;
condexpr_false_3:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_26 = par_sequences;
if (var_sig_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 388;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}

tmp_len_arg_6 = var_sig_payload;
tmp_start_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_6);
if (tmp_start_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_stop_value_2 = Py_None;
tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_2, tmp_stop_value_2);
CHECK_OBJECT(tmp_start_value_2);
Py_DECREF(tmp_start_value_2);
assert(!(tmp_subscript_value_5 == NULL));
tmp_unicode_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_unicode_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
condexpr_end_3:;
CHECK_OBJECT(var_encoding_iana);
tmp_unicode_encoding_3 = var_encoding_iana;
tmp_assign_source_57 = BUILTIN_UNICODE3(tmp_unicode_arg_3, tmp_unicode_encoding_3, NULL);
CHECK_OBJECT(tmp_unicode_arg_3);
Py_DECREF(tmp_unicode_arg_3);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = var_decoded_payload;
    assert(old != NULL);
    var_decoded_payload = tmp_assign_source_57;
    Py_DECREF(old);
}

}
branch_end_29:;
branch_no_28:;
branch_end_27:;
goto try_end_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_34;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
tmp_cmp_expr_left_24 = EXC_TYPE(tstate);
tmp_cmp_expr_right_24 = mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_58); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_58;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_14;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_e);
tmp_isinstance_inst_2 = var_e;
tmp_isinstance_cls_2 = PyExc_LookupError;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_called_value_37;
PyObject *tmp_expression_value_27;
PyObject *tmp_call_result_22;
PyObject *tmp_args_element_value_76;
PyObject *tmp_args_element_value_77;
PyObject *tmp_args_element_value_78;
PyObject *tmp_args_element_value_79;
PyObject *tmp_unicode_arg_4;
tmp_expression_value_27 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 394;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_log);
if (tmp_called_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_args_element_value_76 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_37);

exception_lineno = 395;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
tmp_args_element_value_77 = mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_78 = var_encoding_iana;
CHECK_OBJECT(var_e);
tmp_unicode_arg_4 = var_e;
tmp_args_element_value_79 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
if (tmp_args_element_value_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_37);

exception_lineno = 398;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 394;
{
    PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79};
    tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_37, call_args);
}

CHECK_OBJECT(tmp_called_value_37);
Py_DECREF(tmp_called_value_37);
CHECK_OBJECT(tmp_args_element_value_79);
Py_DECREF(tmp_args_element_value_79);
if (tmp_call_result_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(tmp_call_result_22);
Py_DECREF(tmp_call_result_22);
}
branch_no_32:;
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
if (var_tested_but_hard_failure == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested_but_hard_failure);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 400;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
}

tmp_list_arg_value_5 = var_tested_but_hard_failure;
CHECK_OBJECT(var_encoding_iana);
tmp_item_value_5 = var_encoding_iana;
tmp_result = LIST_APPEND0(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
goto try_continue_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_12;
// try continue handler code:
try_continue_handler_13:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_continue_handler_12;
// End of try:
goto branch_end_31;
branch_no_31:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 359;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_12;
branch_end_31:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_8;
// try continue handler code:
try_continue_handler_12:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto loop_start_3;
// End of try:
// End of try:
try_end_4:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_xrange_low_1;
bool tmp_condition_result_36;
PyObject *tmp_operand_value_15;
PyObject *tmp_len_arg_7;
PyObject *tmp_xrange_high_1;
PyObject *tmp_xrange_step_1;
PyObject *tmp_int_arg_2;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_operand_value_15 = var_bom_or_sig_available;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_36 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_36 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
tmp_xrange_low_1 = const_int_0;
Py_INCREF(tmp_xrange_low_1);
goto condexpr_end_4;
condexpr_false_4:;
if (var_sig_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 404;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_7 = var_sig_payload;
tmp_xrange_low_1 = BUILTIN_LEN(tstate, tmp_len_arg_7);
if (tmp_xrange_low_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
condexpr_end_4:;
if (var_length == NULL) {
Py_DECREF(tmp_xrange_low_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 405;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_xrange_high_1 = var_length;
if (var_length == NULL) {
Py_DECREF(tmp_xrange_low_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 406;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truediv_expr_left_3 = var_length;
if (par_steps == NULL) {
Py_DECREF(tmp_xrange_low_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_steps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 406;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truediv_expr_right_3 = par_steps;
tmp_int_arg_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_1);

exception_lineno = 406;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_xrange_step_1 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_xrange_step_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_xrange_low_1);

exception_lineno = 406;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_59 = BUILTIN_XRANGE3(tstate, tmp_xrange_low_1, tmp_xrange_high_1, tmp_xrange_step_1);
CHECK_OBJECT(tmp_xrange_low_1);
Py_DECREF(tmp_xrange_low_1);
CHECK_OBJECT(tmp_xrange_step_1);
Py_DECREF(tmp_xrange_step_1);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_r_;
    var_r_ = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_60;
int tmp_and_left_truth_14;
PyObject *tmp_and_left_value_14;
PyObject *tmp_and_right_value_14;
int tmp_and_left_truth_15;
PyObject *tmp_and_left_value_15;
PyObject *tmp_and_right_value_15;
PyObject *tmp_cmp_expr_left_25;
PyObject *tmp_cmp_expr_right_25;
PyObject *tmp_cmp_expr_left_26;
PyObject *tmp_cmp_expr_right_26;
PyObject *tmp_len_arg_8;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_and_left_value_14 = var_is_multi_byte_decoder;
tmp_and_left_truth_14 = CHECK_IF_TRUE(tmp_and_left_value_14);
if (tmp_and_left_truth_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 410;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_14 == 1) {
    goto and_right_14;
} else {
    goto and_left_14;
}
and_right_14:;
CHECK_OBJECT(var_decoded_payload);
tmp_cmp_expr_left_25 = var_decoded_payload;
tmp_cmp_expr_right_25 = Py_None;
tmp_and_left_value_15 = (tmp_cmp_expr_left_25 != tmp_cmp_expr_right_25) ? Py_True : Py_False;
tmp_and_left_truth_15 = CHECK_IF_TRUE(tmp_and_left_value_15);
if (tmp_and_left_truth_15 == 1) {
    goto and_right_15;
} else {
    goto and_left_15;
}
and_right_15:;
CHECK_OBJECT(var_decoded_payload);
tmp_len_arg_8 = var_decoded_payload;
tmp_cmp_expr_left_26 = BUILTIN_LEN(tstate, tmp_len_arg_8);
if (tmp_cmp_expr_left_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_length == NULL) {
Py_DECREF(tmp_cmp_expr_left_26);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 412;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_26 = var_length;
tmp_and_right_value_15 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
CHECK_OBJECT(tmp_cmp_expr_left_26);
Py_DECREF(tmp_cmp_expr_left_26);
if (tmp_and_right_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_14 = tmp_and_right_value_15;
goto and_end_15;
and_left_15:;
Py_INCREF(tmp_and_left_value_15);
tmp_and_right_value_14 = tmp_and_left_value_15;
and_end_15:;
tmp_assign_source_60 = tmp_and_right_value_14;
goto and_end_14;
and_left_14:;
Py_INCREF(tmp_and_left_value_14);
tmp_assign_source_60 = tmp_and_left_value_14;
and_end_14:;
{
    PyObject *old = var_multi_byte_bonus;
    var_multi_byte_bonus = tmp_assign_source_60;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_14;
CHECK_OBJECT(var_multi_byte_bonus);
tmp_truth_name_14 = CHECK_IF_TRUE(var_multi_byte_bonus);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_37 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
{
PyObject *tmp_called_value_38;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_23;
PyObject *tmp_args_element_value_80;
PyObject *tmp_args_element_value_81;
PyObject *tmp_args_element_value_82;
tmp_expression_value_28 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_log);
if (tmp_called_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_80 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_38);

exception_lineno = 417;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_81 = mod_consts.const_str_digest_99ea3cb8c0007dbbb87c7d968babf72c;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_82 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 416;
{
    PyObject *call_args[] = {tmp_args_element_value_80, tmp_args_element_value_81, tmp_args_element_value_82};
    tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_38, call_args);
}

CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
if (tmp_call_result_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_23);
Py_DECREF(tmp_call_result_23);
}
branch_no_33:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_int_arg_3;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
PyObject *tmp_len_arg_9;
CHECK_OBJECT(var_r_);
tmp_len_arg_9 = var_r_;
tmp_truediv_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_9);
assert(!(tmp_truediv_expr_left_4 == NULL));
tmp_truediv_expr_right_4 = mod_consts.const_int_pos_4;
tmp_int_arg_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
CHECK_OBJECT(tmp_truediv_expr_left_4);
Py_DECREF(tmp_truediv_expr_left_4);
if (tmp_int_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_61 = PyNumber_Int(tmp_int_arg_3);
CHECK_OBJECT(tmp_int_arg_3);
Py_DECREF(tmp_int_arg_3);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_max_chunk_gave_up;
    var_max_chunk_gave_up = tmp_assign_source_61;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_39;
PyObject *tmp_args_element_value_83;
PyObject *tmp_args_element_value_84;
tmp_called_value_39 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_39 != NULL);
CHECK_OBJECT(var_max_chunk_gave_up);
tmp_args_element_value_83 = var_max_chunk_gave_up;
tmp_args_element_value_84 = mod_consts.const_int_pos_2;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 425;
{
    PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
    tmp_assign_source_62 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
}

if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_max_chunk_gave_up;
    assert(old != NULL);
    var_max_chunk_gave_up = tmp_assign_source_62;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = const_int_0;
{
    PyObject *old = var_early_stop_count;
    var_early_stop_count = tmp_assign_source_63;
    Py_INCREF(var_early_stop_count);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = Py_False;
{
    PyObject *old = var_lazy_str_hard_failure;
    var_lazy_str_hard_failure = tmp_assign_source_64;
    Py_INCREF(var_lazy_str_hard_failure);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_md_chunks;
    var_md_chunks = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_md_ratios;
    var_md_ratios = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_67;
PyObject *tmp_iter_arg_5;
PyObject *tmp_called_value_40;
PyObject *tmp_args_element_value_85;
PyObject *tmp_args_element_value_86;
PyObject *tmp_args_element_value_87;
PyObject *tmp_args_element_value_88;
PyObject *tmp_args_element_value_89;
PyObject *tmp_args_element_value_90;
PyObject *tmp_args_element_value_91;
PyObject *tmp_args_element_value_92;
PyObject *tmp_args_element_value_93;
PyObject *tmp_args_element_value_94;
tmp_called_value_40 = module_var_accessor_charset_normalizer$api$cut_sequence_chunks(tstate);
if (unlikely(tmp_called_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cut_sequence_chunks);
}

if (tmp_called_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 434;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_85 = par_sequences;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_86 = var_encoding_iana;
CHECK_OBJECT(var_r_);
tmp_args_element_value_87 = var_r_;
if (par_chunk_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 437;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_88 = par_chunk_size;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_args_element_value_89 = var_bom_or_sig_available;
CHECK_OBJECT(var_strip_sig_or_bom);
tmp_args_element_value_90 = var_strip_sig_or_bom;
if (var_sig_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_args_element_value_91 = var_sig_payload;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_args_element_value_92 = var_is_multi_byte_decoder;
CHECK_OBJECT(var_decoded_payload);
tmp_args_element_value_93 = var_decoded_payload;
CHECK_OBJECT(var_deferred_decoding);
tmp_args_element_value_94 = var_deferred_decoding;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 433;
{
    PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90, tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93, tmp_args_element_value_94};
    tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_40, call_args);
}

if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
tmp_assign_source_67 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_67;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_68;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_4 = tmp_for_loop_2__for_iterator;
tmp_assign_source_68 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_68 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 433;
        goto try_except_handler_15;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_68;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_69;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_69 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_69;
    Py_INCREF(var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_6;
PyObject *tmp_item_value_6;
if (var_md_chunks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_md_chunks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 445;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_list_arg_value_6 = var_md_chunks;
CHECK_OBJECT(var_chunk);
tmp_item_value_6 = var_chunk;
tmp_result = LIST_APPEND0(tmp_list_arg_value_6, tmp_item_value_6);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_7;
PyObject *tmp_item_value_7;
PyObject *tmp_called_value_41;
PyObject *tmp_args_element_value_95;
PyObject *tmp_args_element_value_96;
PyObject *tmp_args_element_value_97;
int tmp_and_left_truth_16;
PyObject *tmp_and_left_value_16;
PyObject *tmp_and_right_value_16;
if (var_md_ratios == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_md_ratios);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 447;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_list_arg_value_7 = var_md_ratios;
if (var_cached_mess_ratio == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_mess_ratio);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 448;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_called_value_41 = var_cached_mess_ratio;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_95 = var_chunk;
if (par_threshold == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threshold);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 450;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_args_element_value_96 = par_threshold;
CHECK_OBJECT(par_explain);
tmp_and_left_value_16 = par_explain;
tmp_and_left_truth_16 = CHECK_IF_TRUE(tmp_and_left_value_16);
if (tmp_and_left_truth_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
if (tmp_and_left_truth_16 == 1) {
    goto and_right_16;
} else {
    goto and_left_16;
}
and_right_16:;
// Tried code:
{
PyObject *tmp_assign_source_70;
PyObject *tmp_len_arg_10;
if (par_cp_isolation == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cp_isolation);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 451;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}

tmp_len_arg_10 = par_cp_isolation;
tmp_assign_source_70 = BUILTIN_LEN(tstate, tmp_len_arg_10);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
{
    PyObject *old = tmp_comparison_chain_1__operand_2;
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_70;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_71;
nuitka_digit tmp_cmp_expr_left_27;
PyObject *tmp_cmp_expr_right_27;
bool tmp_tmp_assign_source_71_cbool_1;
tmp_cmp_expr_left_27 = 1;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_27 = tmp_comparison_chain_1__operand_2;
tmp_tmp_assign_source_71_cbool_1 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_right_27, tmp_cmp_expr_left_27);
tmp_assign_source_71 = (tmp_tmp_assign_source_71_cbool_1 != false) ? Py_True : Py_False;
{
    PyObject *old = tmp_comparison_chain_1__comparison_result;
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_71;
    Py_INCREF(tmp_comparison_chain_1__comparison_result);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_38;
PyObject *tmp_operand_value_16;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_16 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
}
tmp_condition_result_38 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_and_right_value_16 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_and_right_value_16);
goto try_return_handler_16;
branch_no_34:;
{
PyObject *tmp_cmp_expr_left_28;
nuitka_digit tmp_cmp_expr_right_28;
bool tmp_tmp_and_right_value_16_cbool_1;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_28 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_28 = 2;
tmp_tmp_and_right_value_16_cbool_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
tmp_and_right_value_16 = (tmp_tmp_and_right_value_16_cbool_1 != false) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_16);
goto try_return_handler_16;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_args_element_value_97 = tmp_and_right_value_16;
goto and_end_16;
and_left_16:;
Py_INCREF(tmp_and_left_value_16);
tmp_args_element_value_97 = tmp_and_left_value_16;
and_end_16:;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 448;
{
    PyObject *call_args[] = {tmp_args_element_value_95, tmp_args_element_value_96, tmp_args_element_value_97};
    tmp_item_value_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
}

CHECK_OBJECT(tmp_args_element_value_97);
Py_DECREF(tmp_args_element_value_97);
if (tmp_item_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_7, tmp_item_value_7);
assert(!(tmp_result == false));
}
{
nuitka_bool tmp_condition_result_39;
PyObject *tmp_cmp_expr_left_29;
PyObject *tmp_cmp_expr_right_29;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_6;
if (var_md_ratios == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_md_ratios);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 455;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_expression_value_29 = var_md_ratios;
tmp_subscript_value_6 = const_int_neg_1;
tmp_cmp_expr_left_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_6, -1);
if (tmp_cmp_expr_left_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
if (par_threshold == NULL) {
Py_DECREF(tmp_cmp_expr_left_29);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threshold);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 455;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_cmp_expr_right_29 = par_threshold;
tmp_condition_result_39 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
CHECK_OBJECT(tmp_cmp_expr_left_29);
Py_DECREF(tmp_cmp_expr_left_29);
if (tmp_condition_result_39 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 455;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_early_stop_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 456;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_iadd_expr_left_1 = var_early_stop_count;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 456;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_assign_source_72 = tmp_iadd_expr_left_1;
var_early_stop_count = tmp_assign_source_72;

}
branch_no_35:;
{
nuitka_bool tmp_condition_result_40;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_30;
PyObject *tmp_cmp_expr_right_30;
int tmp_and_left_truth_17;
nuitka_bool tmp_and_left_value_17;
nuitka_bool tmp_and_right_value_17;
int tmp_truth_name_15;
PyObject *tmp_operand_value_17;
if (var_early_stop_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 458;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}

tmp_cmp_expr_left_30 = var_early_stop_count;
CHECK_OBJECT(var_max_chunk_gave_up);
tmp_cmp_expr_right_30 = var_max_chunk_gave_up;
tmp_or_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 458;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_truth_name_15 = CHECK_IF_TRUE(var_bom_or_sig_available);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_and_left_value_17 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_17 = tmp_and_left_value_17 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
if (tmp_and_left_truth_17 == 1) {
    goto and_right_17;
} else {
    goto and_left_17;
}
and_right_17:;
CHECK_OBJECT(var_strip_sig_or_bom);
tmp_operand_value_17 = var_strip_sig_or_bom;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
tmp_and_right_value_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_1 = tmp_and_right_value_17;
goto and_end_17;
and_left_17:;
tmp_or_right_value_1 = tmp_and_left_value_17;
and_end_17:;
tmp_condition_result_40 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_40 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
goto loop_end_4;
branch_no_36:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_15;
}
goto loop_start_4;
loop_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto try_end_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_14);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_14);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_14, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_14);
// Tried code:
{
bool tmp_condition_result_41;
PyObject *tmp_cmp_expr_left_31;
PyObject *tmp_cmp_expr_right_31;
tmp_cmp_expr_left_31 = EXC_TYPE(tstate);
tmp_cmp_expr_right_31 = mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_17;
}
tmp_condition_result_41 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_41 != false) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_73); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_73;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_42;
int tmp_truth_name_16;
CHECK_OBJECT(var_deferred_decoding);
tmp_truth_name_16 = CHECK_IF_TRUE(var_deferred_decoding);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 466;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_condition_result_42 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
    goto branch_yes_38;
} else {
    goto branch_no_38;
}
}
branch_yes_38:;
{
PyObject *tmp_called_value_42;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_24;
PyObject *tmp_args_element_value_98;
PyObject *tmp_args_element_value_99;
PyObject *tmp_args_element_value_100;
PyObject *tmp_args_element_value_101;
PyObject *tmp_unicode_arg_5;
tmp_expression_value_30 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 470;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_log);
if (tmp_called_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_args_element_value_98 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_42);

exception_lineno = 471;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_args_element_value_99 = mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_100 = var_encoding_iana;
CHECK_OBJECT(var_e);
tmp_unicode_arg_5 = var_e;
tmp_args_element_value_101 = BUILTIN_UNICODE1(tmp_unicode_arg_5);
if (tmp_args_element_value_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_42);

exception_lineno = 474;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 470;
{
    PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99, tmp_args_element_value_100, tmp_args_element_value_101};
    tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_42, call_args);
}

CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
CHECK_OBJECT(tmp_args_element_value_101);
Py_DECREF(tmp_args_element_value_101);
if (tmp_call_result_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
CHECK_OBJECT(tmp_call_result_24);
Py_DECREF(tmp_call_result_24);
}
{
PyObject *tmp_list_arg_value_8;
PyObject *tmp_item_value_8;
if (var_tested_but_hard_failure == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested_but_hard_failure);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 476;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}

tmp_list_arg_value_8 = var_tested_but_hard_failure;
CHECK_OBJECT(var_encoding_iana);
tmp_item_value_8 = var_encoding_iana;
tmp_result = LIST_APPEND0(tmp_list_arg_value_8, tmp_item_value_8);
assert(!(tmp_result == false));
}
goto try_continue_handler_18;
branch_no_38:;
{
PyObject *tmp_called_value_43;
PyObject *tmp_expression_value_31;
PyObject *tmp_call_result_25;
PyObject *tmp_args_element_value_102;
PyObject *tmp_args_element_value_103;
PyObject *tmp_args_element_value_104;
PyObject *tmp_args_element_value_105;
PyObject *tmp_unicode_arg_6;
tmp_expression_value_31 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 478;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_log);
if (tmp_called_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_args_element_value_102 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_102 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_102 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_43);

exception_lineno = 479;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
tmp_args_element_value_103 = mod_consts.const_str_digest_a6638c2dbae535d9ba7dc5567cc5859a;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_104 = var_encoding_iana;
CHECK_OBJECT(var_e);
tmp_unicode_arg_6 = var_e;
tmp_args_element_value_105 = BUILTIN_UNICODE1(tmp_unicode_arg_6);
if (tmp_args_element_value_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_43);

exception_lineno = 482;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 478;
{
    PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105};
    tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_43, call_args);
}

CHECK_OBJECT(tmp_called_value_43);
Py_DECREF(tmp_called_value_43);
CHECK_OBJECT(tmp_args_element_value_105);
Py_DECREF(tmp_args_element_value_105);
if (tmp_call_result_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_18;
}
CHECK_OBJECT(tmp_call_result_25);
Py_DECREF(tmp_call_result_25);
}
goto try_end_7;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_17;
// try continue handler code:
try_continue_handler_18:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_continue_handler_17;
// End of try:
try_end_7:;
{
PyObject *tmp_assign_source_74;
CHECK_OBJECT(var_max_chunk_gave_up);
tmp_assign_source_74 = var_max_chunk_gave_up;
{
    PyObject *old = var_early_stop_count;
    var_early_stop_count = tmp_assign_source_74;
    Py_INCREF(var_early_stop_count);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = Py_True;
{
    PyObject *old = var_lazy_str_hard_failure;
    assert(old != NULL);
    var_lazy_str_hard_failure = tmp_assign_source_75;
    Py_INCREF(var_lazy_str_hard_failure);
    Py_DECREF(old);
}

}
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_37;
branch_no_37:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 432;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_17;
branch_end_37:;
goto try_end_8;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_8;
// try continue handler code:
try_continue_handler_17:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto loop_start_3;
// End of try:
try_end_8:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
{
nuitka_bool tmp_condition_result_43;
int tmp_and_left_truth_18;
nuitka_bool tmp_and_left_value_18;
nuitka_bool tmp_and_right_value_18;
PyObject *tmp_operand_value_18;
int tmp_and_left_truth_19;
nuitka_bool tmp_and_left_value_19;
nuitka_bool tmp_and_right_value_19;
int tmp_truth_name_17;
PyObject *tmp_operand_value_19;
CHECK_OBJECT(var_lazy_str_hard_failure);
tmp_operand_value_18 = var_lazy_str_hard_failure;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
assert(!(tmp_res == -1));
tmp_and_left_value_18 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_18 = tmp_and_left_value_18 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_18 == 1) {
    goto and_right_18;
} else {
    goto and_left_18;
}
and_right_18:;
CHECK_OBJECT(var_is_too_large_sequence);
tmp_truth_name_17 = CHECK_IF_TRUE(var_is_too_large_sequence);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_19 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_19 = tmp_and_left_value_19 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_19 == 1) {
    goto and_right_19;
} else {
    goto and_left_19;
}
and_right_19:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_19 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_19 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_18 = tmp_and_right_value_19;
goto and_end_19;
and_left_19:;
tmp_and_right_value_18 = tmp_and_left_value_19;
and_end_19:;
tmp_condition_result_43 = tmp_and_right_value_18;
goto and_end_18;
and_left_18:;
tmp_condition_result_43 = tmp_and_left_value_18;
and_end_18:;
if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
// Tried code:
{
PyObject *tmp_called_value_44;
PyObject *tmp_expression_value_32;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_7;
PyObject *tmp_call_result_26;
PyObject *tmp_kw_call_arg_value_0_4;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 495;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}

tmp_expression_value_33 = par_sequences;
tmp_subscript_value_7 = mod_consts.const_slice_int_pos_50000_none_none;
tmp_expression_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_7);
if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_called_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(var_encoding_iana);
tmp_kw_call_arg_value_0_4 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 495;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_44,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_strict_tuple, 0),
        mod_consts.const_tuple_str_plain_errors_tuple
    );
}

CHECK_OBJECT(tmp_called_value_44);
Py_DECREF(tmp_called_value_44);
if (tmp_call_result_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
}
CHECK_OBJECT(tmp_call_result_26);
Py_DECREF(tmp_call_result_26);
}
goto try_end_9;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_17);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_17);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_17, exception_tb);
    } else if (exception_keeper_lineno_17 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_17);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_17, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_17);
// Tried code:
{
bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_32;
PyObject *tmp_cmp_expr_right_32;
tmp_cmp_expr_left_32 = EXC_TYPE(tstate);
tmp_cmp_expr_right_32 = PyExc_UnicodeDecodeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
assert(!(tmp_res == -1));
tmp_condition_result_44 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_44 != false) {
    goto branch_yes_40;
} else {
    goto branch_no_40;
}
}
branch_yes_40:;
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_76); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_76;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_45;
PyObject *tmp_expression_value_34;
PyObject *tmp_call_result_27;
PyObject *tmp_args_element_value_106;
PyObject *tmp_args_element_value_107;
PyObject *tmp_args_element_value_108;
PyObject *tmp_args_element_value_109;
PyObject *tmp_unicode_arg_7;
tmp_expression_value_34 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 497;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_log);
if (tmp_called_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
tmp_args_element_value_106 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_106 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_106 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_45);

exception_lineno = 498;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
tmp_args_element_value_107 = mod_consts.const_str_digest_fd5f86796017c5067ff2ed55f1ac57cf;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_108 = var_encoding_iana;
CHECK_OBJECT(var_e);
tmp_unicode_arg_7 = var_e;
tmp_args_element_value_109 = BUILTIN_UNICODE1(tmp_unicode_arg_7);
if (tmp_args_element_value_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_45);

exception_lineno = 501;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 497;
{
    PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108, tmp_args_element_value_109};
    tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_45, call_args);
}

CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_element_value_109);
Py_DECREF(tmp_args_element_value_109);
if (tmp_call_result_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 497;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}
CHECK_OBJECT(tmp_call_result_27);
Py_DECREF(tmp_call_result_27);
}
{
PyObject *tmp_list_arg_value_9;
PyObject *tmp_item_value_9;
if (var_tested_but_hard_failure == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested_but_hard_failure);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 503;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_21;
}

tmp_list_arg_value_9 = var_tested_but_hard_failure;
CHECK_OBJECT(var_encoding_iana);
tmp_item_value_9 = var_encoding_iana;
tmp_result = LIST_APPEND0(tmp_list_arg_value_9, tmp_item_value_9);
assert(!(tmp_result == false));
}
goto try_continue_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_20;
// try continue handler code:
try_continue_handler_21:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_continue_handler_20;
// End of try:
goto branch_end_40;
branch_no_40:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 494;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_20;
branch_end_40:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_8;
// try continue handler code:
try_continue_handler_20:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

goto loop_start_3;
// End of try:
// End of try:
try_end_9:;
branch_no_39:;
{
PyObject *tmp_assign_source_77;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_18;
PyObject *tmp_truediv_expr_left_5;
PyObject *tmp_truediv_expr_right_5;
PyObject *tmp_sum_sequence_1;
PyObject *tmp_len_arg_11;
if (var_md_ratios == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_md_ratios);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 506;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_18 = CHECK_IF_TRUE(var_md_ratios);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_45 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
if (var_md_ratios == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_md_ratios);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 506;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_sum_sequence_1 = var_md_ratios;
tmp_truediv_expr_left_5 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
if (tmp_truediv_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_md_ratios == NULL) {
Py_DECREF(tmp_truediv_expr_left_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_md_ratios);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 506;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_11 = var_md_ratios;
tmp_truediv_expr_right_5 = BUILTIN_LEN(tstate, tmp_len_arg_11);
if (tmp_truediv_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_5);

exception_lineno = 506;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_77 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
CHECK_OBJECT(tmp_truediv_expr_left_5);
Py_DECREF(tmp_truediv_expr_left_5);
CHECK_OBJECT(tmp_truediv_expr_right_5);
Py_DECREF(tmp_truediv_expr_right_5);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_assign_source_77 = const_float_0_0;
Py_INCREF(tmp_assign_source_77);
condexpr_end_5:;
{
    PyObject *old = var_mean_mess_ratio;
    var_mean_mess_ratio = tmp_assign_source_77;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_46;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_33;
PyObject *tmp_cmp_expr_right_33;
PyObject *tmp_cmp_expr_left_34;
PyObject *tmp_cmp_expr_right_34;
CHECK_OBJECT(var_mean_mess_ratio);
tmp_cmp_expr_left_33 = var_mean_mess_ratio;
if (par_threshold == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threshold);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 507;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_33 = par_threshold;
tmp_or_left_value_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_33, tmp_cmp_expr_right_33);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (var_early_stop_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 507;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_34 = var_early_stop_count;
CHECK_OBJECT(var_max_chunk_gave_up);
tmp_cmp_expr_right_34 = var_max_chunk_gave_up;
tmp_or_right_value_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_46 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_46 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
    goto branch_yes_41;
} else {
    goto branch_no_41;
}
}
branch_yes_41:;
{
PyObject *tmp_list_arg_value_10;
PyObject *tmp_item_value_10;
if (var_tested_but_soft_failure == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested_but_soft_failure);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 508;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_arg_value_10 = var_tested_but_soft_failure;
CHECK_OBJECT(var_encoding_iana);
tmp_item_value_10 = var_encoding_iana;
tmp_result = LIST_APPEND0(tmp_list_arg_value_10, tmp_item_value_10);
assert(!(tmp_result == false));
}
{
bool tmp_condition_result_47;
PyObject *tmp_cmp_expr_left_35;
PyObject *tmp_cmp_expr_right_35;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_35 = var_encoding_iana;
tmp_cmp_expr_right_35 = module_var_accessor_charset_normalizer$api$IANA_SUPPORTED_SIMILAR(tstate);
if (unlikely(tmp_cmp_expr_right_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
}

if (tmp_cmp_expr_right_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 509;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_35, tmp_cmp_expr_left_35);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_47 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_47 != false) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
{
PyObject *tmp_called_value_46;
PyObject *tmp_expression_value_35;
PyObject *tmp_call_result_28;
PyObject *tmp_args_element_value_110;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_8;
if (var_soft_failure_skip == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_soft_failure_skip);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 510;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_35 = var_soft_failure_skip;
tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_update);
if (tmp_called_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_36 = module_var_accessor_charset_normalizer$api$IANA_SUPPORTED_SIMILAR(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_46);

exception_lineno = 510;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_encoding_iana);
tmp_subscript_value_8 = var_encoding_iana;
tmp_args_element_value_110 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_8);
if (tmp_args_element_value_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_46);

exception_lineno = 510;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 510;
tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_110);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_element_value_110);
Py_DECREF(tmp_args_element_value_110);
if (tmp_call_result_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 510;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_28);
Py_DECREF(tmp_call_result_28);
}
branch_no_42:;
{
bool tmp_condition_result_48;
int tmp_and_left_truth_20;
bool tmp_and_left_value_20;
bool tmp_and_right_value_20;
PyObject *tmp_cmp_expr_left_36;
PyObject *tmp_cmp_expr_right_36;
PyObject *tmp_operand_value_20;
CHECK_OBJECT(var_decoded_payload);
tmp_cmp_expr_left_36 = var_decoded_payload;
tmp_cmp_expr_right_36 = Py_None;
tmp_and_left_value_20 = (tmp_cmp_expr_left_36 != tmp_cmp_expr_right_36) ? true : false;
tmp_and_left_truth_20 = tmp_and_left_value_20 != false ? 1 : 0;
if (tmp_and_left_truth_20 == 1) {
    goto and_right_20;
} else {
    goto and_left_20;
}
and_right_20:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_20 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_20 = (tmp_res == 0) ? true : false;
tmp_condition_result_48 = tmp_and_right_value_20;
goto and_end_20;
and_left_20:;
tmp_condition_result_48 = tmp_and_left_value_20;
and_end_20:;
if (tmp_condition_result_48 != false) {
    goto branch_yes_43;
} else {
    goto branch_no_43;
}
}
branch_yes_43:;
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_hash_arg_1;
PyObject *tmp_default_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_capi_result_2;
if (var_payload_result_cache == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_payload_result_cache);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 514;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_dict_arg_value_1 = var_payload_result_cache;
CHECK_OBJECT(var_decoded_payload);
tmp_hash_arg_1 = var_decoded_payload;
tmp_key_value_1 = BUILTIN_HASH(tstate, tmp_hash_arg_1);
if (tmp_key_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_mean_mess_ratio);
tmp_tuple_element_1 = var_mean_mess_ratio;
tmp_default_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_default_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = MAKE_LIST_EMPTY(tstate, 0);
PyTuple_SET_ITEM(tmp_default_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = Py_False;
PyTuple_SET_ITEM0(tmp_default_value_1, 2, tmp_tuple_element_1);
tmp_capi_result_2 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_key_value_1);
Py_DECREF(tmp_key_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
assert(!(tmp_capi_result_2 == NULL));
CHECK_OBJECT(tmp_capi_result_2);
Py_DECREF(tmp_capi_result_2);
}
branch_no_43:;
{
PyObject *tmp_called_value_47;
PyObject *tmp_expression_value_37;
PyObject *tmp_call_result_29;
PyObject *tmp_args_element_value_111;
PyObject *tmp_args_element_value_112;
PyObject *tmp_args_element_value_113;
PyObject *tmp_args_element_value_114;
PyObject *tmp_args_element_value_115;
PyObject *tmp_called_value_48;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
tmp_expression_value_37 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_log);
if (tmp_called_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_111 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_111 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_47);

exception_lineno = 518;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_112 = mod_consts.const_str_digest_6fe22b3ec3f411cedfd348328dd698f1;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_113 = var_encoding_iana;
if (var_early_stop_count == NULL) {
Py_DECREF(tmp_called_value_47);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 522;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_114 = var_early_stop_count;
tmp_called_value_48 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_48 != NULL);
CHECK_OBJECT(var_mean_mess_ratio);
tmp_mult_expr_left_2 = var_mean_mess_ratio;
tmp_mult_expr_right_2 = mod_consts.const_int_pos_100;
tmp_kw_call_arg_value_0_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_kw_call_arg_value_0_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_47);

exception_lineno = 523;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 523;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    tmp_args_element_value_115 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_48,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0),
        mod_consts.const_tuple_str_plain_ndigits_tuple
    );
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_5);
Py_DECREF(tmp_kw_call_arg_value_0_5);
if (tmp_args_element_value_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_47);

exception_lineno = 523;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 517;
{
    PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115};
    tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_47, call_args);
}

CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_element_value_115);
Py_DECREF(tmp_args_element_value_115);
if (tmp_call_result_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_29);
Py_DECREF(tmp_call_result_29);
}
{
nuitka_bool tmp_condition_result_49;
int tmp_and_left_truth_21;
nuitka_bool tmp_and_left_value_21;
nuitka_bool tmp_and_right_value_21;
int tmp_truth_name_19;
int tmp_and_left_truth_22;
nuitka_bool tmp_and_left_value_22;
nuitka_bool tmp_and_right_value_22;
PyObject *tmp_cmp_expr_left_37;
PyObject *tmp_cmp_expr_right_37;
PyObject *tmp_list_element_2;
PyObject *tmp_operand_value_21;
CHECK_OBJECT(par_enable_fallback);
tmp_truth_name_19 = CHECK_IF_TRUE(par_enable_fallback);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_21 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_21 = tmp_and_left_value_21 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_21 == 1) {
    goto and_right_21;
} else {
    goto and_left_21;
}
and_right_21:;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_37 = var_encoding_iana;
tmp_list_element_2 = const_str_plain_ascii;
tmp_cmp_expr_right_37 = MAKE_LIST_EMPTY(tstate, 5);
PyList_SET_ITEM0(tmp_cmp_expr_right_37, 0, tmp_list_element_2);
tmp_list_element_2 = mod_consts.const_str_plain_utf_8;
PyList_SET_ITEM0(tmp_cmp_expr_right_37, 1, tmp_list_element_2);
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 529;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto list_build_exception_1;
}

tmp_list_element_2 = var_specified_encoding;
PyList_SET_ITEM0(tmp_cmp_expr_right_37, 2, tmp_list_element_2);
tmp_list_element_2 = mod_consts.const_str_plain_utf_16;
PyList_SET_ITEM0(tmp_cmp_expr_right_37, 3, tmp_list_element_2);
tmp_list_element_2 = mod_consts.const_str_plain_utf_32;
PyList_SET_ITEM0(tmp_cmp_expr_right_37, 4, tmp_list_element_2);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_37);
goto try_except_handler_8;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_37, tmp_cmp_expr_left_37);
CHECK_OBJECT(tmp_cmp_expr_right_37);
Py_DECREF(tmp_cmp_expr_right_37);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_22 = tmp_and_left_value_22 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_22 == 1) {
    goto and_right_22;
} else {
    goto and_left_22;
}
and_right_22:;
CHECK_OBJECT(var_lazy_str_hard_failure);
tmp_operand_value_21 = var_lazy_str_hard_failure;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
assert(!(tmp_res == -1));
tmp_and_right_value_22 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_21 = tmp_and_right_value_22;
goto and_end_22;
and_left_22:;
tmp_and_right_value_21 = tmp_and_left_value_22;
and_end_22:;
tmp_condition_result_49 = tmp_and_right_value_21;
goto and_end_21;
and_left_21:;
tmp_condition_result_49 = tmp_and_left_value_21;
and_end_21:;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto branch_yes_44;
} else {
    goto branch_no_44;
}
}
branch_yes_44:;
{
bool tmp_condition_result_50;
PyObject *tmp_cmp_expr_left_38;
PyObject *tmp_cmp_expr_right_38;
CHECK_OBJECT(var_decoded_payload);
tmp_cmp_expr_left_38 = var_decoded_payload;
tmp_cmp_expr_right_38 = Py_None;
tmp_condition_result_50 = (tmp_cmp_expr_left_38 == tmp_cmp_expr_right_38) ? true : false;
if (tmp_condition_result_50 != false) {
    goto branch_yes_45;
} else {
    goto branch_no_45;
}
}
branch_yes_45:;
// Tried code:
{
PyObject *tmp_assign_source_78;
PyObject *tmp_unicode_arg_8;
bool tmp_condition_result_51;
PyObject *tmp_operand_value_22;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_9;
PyObject *tmp_start_value_3;
PyObject *tmp_len_arg_12;
PyObject *tmp_stop_value_3;
PyObject *tmp_unicode_encoding_4;
CHECK_OBJECT(var_strip_sig_or_bom);
tmp_operand_value_22 = var_strip_sig_or_bom;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_condition_result_51 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_51 != false) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 540;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_unicode_arg_8 = par_sequences;
Py_INCREF(tmp_unicode_arg_8);
goto condexpr_end_6;
condexpr_false_6:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 542;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_expression_value_38 = par_sequences;
if (var_sig_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 542;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}

tmp_len_arg_12 = var_sig_payload;
tmp_start_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_12);
if (tmp_start_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
tmp_stop_value_3 = Py_None;
tmp_subscript_value_9 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_3, tmp_stop_value_3);
CHECK_OBJECT(tmp_start_value_3);
Py_DECREF(tmp_start_value_3);
assert(!(tmp_subscript_value_9 == NULL));
tmp_unicode_arg_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_unicode_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 542;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
condexpr_end_6:;
CHECK_OBJECT(var_encoding_iana);
tmp_unicode_encoding_4 = var_encoding_iana;
tmp_assign_source_78 = BUILTIN_UNICODE3(tmp_unicode_arg_8, tmp_unicode_encoding_4, NULL);
CHECK_OBJECT(tmp_unicode_arg_8);
Py_DECREF(tmp_unicode_arg_8);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
}
{
    PyObject *old = var_decoded_payload;
    assert(old != NULL);
    var_decoded_payload = tmp_assign_source_78;
    Py_DECREF(old);
}

}
goto try_end_10;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 5.
exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_20);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_20);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_20, exception_tb);
    } else if (exception_keeper_lineno_20 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_20);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_20, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_20);
// Tried code:
{
bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_39;
PyObject *tmp_cmp_expr_right_39;
tmp_cmp_expr_left_39 = EXC_TYPE(tstate);
tmp_cmp_expr_right_39 = mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_39, tmp_cmp_expr_right_39);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
tmp_condition_result_52 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_52 != false) {
    goto branch_yes_46;
} else {
    goto branch_no_46;
}
}
branch_yes_46:;
{
PyObject *tmp_called_value_49;
PyObject *tmp_expression_value_39;
PyObject *tmp_call_result_30;
PyObject *tmp_args_element_value_116;
PyObject *tmp_args_element_value_117;
PyObject *tmp_args_element_value_118;
tmp_expression_value_39 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 547;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_log);
if (tmp_called_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
tmp_args_element_value_116 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_116 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_116 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_49);

exception_lineno = 548;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
tmp_args_element_value_117 = mod_consts.const_str_digest_e52b539aedb68a24bc1cff32ea133b10;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_118 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 547;
{
    PyObject *call_args[] = {tmp_args_element_value_116, tmp_args_element_value_117, tmp_args_element_value_118};
    tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_49, call_args);
}

CHECK_OBJECT(tmp_called_value_49);
Py_DECREF(tmp_called_value_49);
if (tmp_call_result_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_23;
}
CHECK_OBJECT(tmp_call_result_30);
Py_DECREF(tmp_call_result_30);
}
goto try_continue_handler_23;
goto branch_end_46;
branch_no_46:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 537;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_23;
branch_end_46:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_8;
// try continue handler code:
try_continue_handler_23:;
// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

goto loop_start_3;
// End of try:
// End of try:
try_end_10:;
{
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_20;
CHECK_OBJECT(var_is_too_large_sequence);
tmp_truth_name_20 = CHECK_IF_TRUE(var_is_too_large_sequence);
if (tmp_truth_name_20 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_53 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto branch_yes_47;
} else {
    goto branch_no_47;
}
}
branch_yes_47:;
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = Py_None;
{
    PyObject *old = var_decoded_payload;
    assert(old != NULL);
    var_decoded_payload = tmp_assign_source_79;
    Py_INCREF(var_decoded_payload);
    Py_DECREF(old);
}

}
branch_no_47:;
branch_no_45:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_50;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_50 = module_var_accessor_charset_normalizer$api$CharsetMatch(tstate);
if (unlikely(tmp_called_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatch);
}

if (tmp_called_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 557;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 558;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_0_6 = par_sequences;
CHECK_OBJECT(var_encoding_iana);
tmp_kw_call_arg_value_1_4 = var_encoding_iana;
if (par_threshold == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threshold);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 560;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_2_1 = par_threshold;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_kw_call_arg_value_3_1 = var_bom_or_sig_available;
tmp_kw_call_arg_value_4_1 = MAKE_LIST_EMPTY(tstate, 0);
if (var_decoded_payload == NULL) {
Py_DECREF(tmp_kw_call_arg_value_4_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 563;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_5_1 = var_decoded_payload;
if (var_specified_encoding == NULL) {
Py_DECREF(tmp_kw_call_arg_value_4_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 564;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_0_1 = var_specified_encoding;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 557;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_80 = CALL_FUNCTION_WITH_ARGS6_KW_SPLIT(tstate, tmp_called_value_50, args, kw_values, mod_consts.const_tuple_str_plain_preemptive_declaration_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_fallback_entry;
    var_fallback_entry = tmp_assign_source_80;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_54;
PyObject *tmp_cmp_expr_left_40;
PyObject *tmp_cmp_expr_right_40;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_40 = var_encoding_iana;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 566;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_40 = var_specified_encoding;
tmp_condition_result_54 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
    goto branch_yes_48;
} else {
    goto branch_no_48;
}
}
branch_yes_48:;
{
PyObject *tmp_assign_source_81;
CHECK_OBJECT(var_fallback_entry);
tmp_assign_source_81 = var_fallback_entry;
{
    PyObject *old = var_fallback_specified;
    var_fallback_specified = tmp_assign_source_81;
    Py_INCREF(var_fallback_specified);
    Py_XDECREF(old);
}

}
goto branch_end_48;
branch_no_48:;
{
nuitka_bool tmp_condition_result_55;
PyObject *tmp_cmp_expr_left_41;
PyObject *tmp_cmp_expr_right_41;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_41 = var_encoding_iana;
tmp_cmp_expr_right_41 = const_str_plain_ascii;
tmp_condition_result_55 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
    goto branch_yes_49;
} else {
    goto branch_no_49;
}
}
branch_yes_49:;
{
PyObject *tmp_assign_source_82;
CHECK_OBJECT(var_fallback_entry);
tmp_assign_source_82 = var_fallback_entry;
{
    PyObject *old = var_fallback_ascii;
    var_fallback_ascii = tmp_assign_source_82;
    Py_INCREF(var_fallback_ascii);
    Py_XDECREF(old);
}

}
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_83;
CHECK_OBJECT(var_fallback_entry);
tmp_assign_source_83 = var_fallback_entry;
{
    PyObject *old = var_fallback_u8;
    var_fallback_u8 = tmp_assign_source_83;
    Py_INCREF(var_fallback_u8);
    Py_XDECREF(old);
}

}
branch_end_49:;
branch_end_48:;
branch_no_44:;
goto loop_start_3;
branch_no_41:;
{
nuitka_bool tmp_condition_result_56;
int tmp_truth_name_21;
CHECK_OBJECT(var_deferred_decoding);
tmp_truth_name_21 = CHECK_IF_TRUE(var_deferred_decoding);
if (tmp_truth_name_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_56 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_50;
} else {
    goto branch_no_50;
}
}
branch_yes_50:;
// Tried code:
{
PyObject *tmp_assign_source_84;
PyObject *tmp_unicode_arg_9;
bool tmp_condition_result_57;
PyObject *tmp_operand_value_23;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_10;
PyObject *tmp_start_value_4;
PyObject *tmp_len_arg_13;
PyObject *tmp_stop_value_4;
PyObject *tmp_unicode_encoding_5;
CHECK_OBJECT(var_strip_sig_or_bom);
tmp_operand_value_23 = var_strip_sig_or_bom;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
tmp_condition_result_57 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_57 != false) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 580;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}

tmp_unicode_arg_9 = par_sequences;
Py_INCREF(tmp_unicode_arg_9);
goto condexpr_end_7;
condexpr_false_7:;
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 582;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}

tmp_expression_value_40 = par_sequences;
if (var_sig_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sig_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 582;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}

tmp_len_arg_13 = var_sig_payload;
tmp_start_value_4 = BUILTIN_LEN(tstate, tmp_len_arg_13);
if (tmp_start_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
tmp_stop_value_4 = Py_None;
tmp_subscript_value_10 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_4, tmp_stop_value_4);
CHECK_OBJECT(tmp_start_value_4);
Py_DECREF(tmp_start_value_4);
assert(!(tmp_subscript_value_10 == NULL));
tmp_unicode_arg_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_unicode_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
condexpr_end_7:;
CHECK_OBJECT(var_encoding_iana);
tmp_unicode_encoding_5 = var_encoding_iana;
tmp_assign_source_84 = BUILTIN_UNICODE3(tmp_unicode_arg_9, tmp_unicode_encoding_5, NULL);
CHECK_OBJECT(tmp_unicode_arg_9);
Py_DECREF(tmp_unicode_arg_9);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_24;
}
{
    PyObject *old = var_decoded_payload;
    assert(old != NULL);
    var_decoded_payload = tmp_assign_source_84;
    Py_DECREF(old);
}

}
goto try_end_11;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 6.
exception_preserved_6 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_22);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22, exception_tb);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_keeper_lineno_22);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_22, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_22);
// Tried code:
{
bool tmp_condition_result_58;
PyObject *tmp_cmp_expr_left_42;
PyObject *tmp_cmp_expr_right_42;
tmp_cmp_expr_left_42 = EXC_TYPE(tstate);
tmp_cmp_expr_right_42 = mod_consts.const_tuple_type_UnicodeDecodeError_type_LookupError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 586;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
}
tmp_condition_result_58 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_58 != false) {
    goto branch_yes_51;
} else {
    goto branch_no_51;
}
}
branch_yes_51:;
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_85); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_85;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_51;
PyObject *tmp_expression_value_41;
PyObject *tmp_call_result_31;
PyObject *tmp_args_element_value_119;
PyObject *tmp_args_element_value_120;
PyObject *tmp_args_element_value_121;
PyObject *tmp_args_element_value_122;
PyObject *tmp_unicode_arg_10;
tmp_expression_value_41 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 587;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts.const_str_plain_log);
if (tmp_called_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
tmp_args_element_value_119 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_119 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_119 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_51);

exception_lineno = 588;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
tmp_args_element_value_120 = mod_consts.const_str_digest_24f7aad4a7ebaa8ff98723baa3b3ab8b;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_121 = var_encoding_iana;
CHECK_OBJECT(var_e);
tmp_unicode_arg_10 = var_e;
tmp_args_element_value_122 = BUILTIN_UNICODE1(tmp_unicode_arg_10);
if (tmp_args_element_value_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_51);

exception_lineno = 591;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 587;
{
    PyObject *call_args[] = {tmp_args_element_value_119, tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122};
    tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_51, call_args);
}

CHECK_OBJECT(tmp_called_value_51);
Py_DECREF(tmp_called_value_51);
CHECK_OBJECT(tmp_args_element_value_122);
Py_DECREF(tmp_args_element_value_122);
if (tmp_call_result_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}
CHECK_OBJECT(tmp_call_result_31);
Py_DECREF(tmp_call_result_31);
}
{
PyObject *tmp_list_arg_value_11;
PyObject *tmp_item_value_11;
if (var_tested_but_hard_failure == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested_but_hard_failure);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 593;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
}

tmp_list_arg_value_11 = var_tested_but_hard_failure;
CHECK_OBJECT(var_encoding_iana);
tmp_item_value_11 = var_encoding_iana;
tmp_result = LIST_APPEND0(tmp_list_arg_value_11, tmp_item_value_11);
assert(!(tmp_result == false));
}
goto try_continue_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_25;
// try continue handler code:
try_continue_handler_26:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_continue_handler_25;
// End of try:
goto branch_end_51;
branch_no_51:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 577;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
goto try_except_handler_25;
branch_end_51:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 6.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_8;
// try continue handler code:
try_continue_handler_25:;
// Restore previous exception id 6.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

goto loop_start_3;
// End of try:
// End of try:
try_end_11:;
branch_no_50:;
{
bool tmp_condition_result_59;
int tmp_and_left_truth_23;
bool tmp_and_left_value_23;
bool tmp_and_right_value_23;
PyObject *tmp_cmp_expr_left_43;
PyObject *tmp_cmp_expr_right_43;
PyObject *tmp_operand_value_24;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 600;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_43 = var_decoded_payload;
tmp_cmp_expr_right_43 = Py_None;
tmp_and_left_value_23 = (tmp_cmp_expr_left_43 != tmp_cmp_expr_right_43) ? true : false;
tmp_and_left_truth_23 = tmp_and_left_value_23 != false ? 1 : 0;
if (tmp_and_left_truth_23 == 1) {
    goto and_right_23;
} else {
    goto and_left_23;
}
and_right_23:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_24 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_23 = (tmp_res == 0) ? true : false;
tmp_condition_result_59 = tmp_and_right_value_23;
goto and_end_23;
and_left_23:;
tmp_condition_result_59 = tmp_and_left_value_23;
and_end_23:;
if (tmp_condition_result_59 != false) {
    goto branch_yes_52;
} else {
    goto branch_no_52;
}
}
branch_yes_52:;
{
PyObject *tmp_assign_source_86;
PyObject *tmp_hash_arg_2;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 601;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_hash_arg_2 = var_decoded_payload;
tmp_assign_source_86 = BUILTIN_HASH(tstate, tmp_hash_arg_2);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_payload_hash;
    var_payload_hash = tmp_assign_source_86;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
if (var_payload_result_cache == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_payload_result_cache);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 602;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_dict_arg_value_2 = var_payload_result_cache;
CHECK_OBJECT(var_payload_hash);
tmp_key_value_2 = var_payload_hash;
tmp_assign_source_87 = DICT_GET_ITEM_WITH_HASH_ERROR1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_87 == NULL && !HAS_ERROR_OCCURRED(tstate)) {
    tmp_assign_source_87 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_87);
}
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_cached;
    var_cached = tmp_assign_source_87;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_60;
PyObject *tmp_cmp_expr_left_44;
PyObject *tmp_cmp_expr_right_44;
CHECK_OBJECT(var_cached);
tmp_cmp_expr_left_44 = var_cached;
tmp_cmp_expr_right_44 = Py_None;
tmp_condition_result_60 = (tmp_cmp_expr_left_44 != tmp_cmp_expr_right_44) ? true : false;
if (tmp_condition_result_60 != false) {
    goto branch_yes_53;
} else {
    goto branch_no_53;
}
}
branch_yes_53:;
// Tried code:
{
PyObject *tmp_assign_source_88;
PyObject *tmp_iter_arg_6;
CHECK_OBJECT(var_cached);
tmp_iter_arg_6 = var_cached;
tmp_assign_source_88 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 604;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_27;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_88;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_89;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_89 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 3);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 604;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_89;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_90 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 3);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 604;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_90;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_91 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 2, 3);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 604;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_3;
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_91;
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



exception_lineno = 604;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
}
}
goto try_end_12;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_27;
// End of try:
try_end_12:;
goto try_end_13;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_8;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_92;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_92 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_cached_mess;
    var_cached_mess = tmp_assign_source_92;
    Py_INCREF(var_cached_mess);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_93;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_93 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_cached_cd;
    var_cached_cd = tmp_assign_source_93;
    Py_INCREF(var_cached_cd);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_94;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_94 = tmp_tuple_unpack_2__element_3;
{
    PyObject *old = var_cached_passed;
    var_cached_passed = tmp_assign_source_94;
    Py_INCREF(var_cached_passed);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_22;
CHECK_OBJECT(var_cached_passed);
tmp_truth_name_22 = CHECK_IF_TRUE(var_cached_passed);
if (tmp_truth_name_22 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_61 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto branch_yes_54;
} else {
    goto branch_no_54;
}
}
branch_yes_54:;
{
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_52;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_arg_value_1_5;
PyObject *tmp_kw_call_arg_value_2_2;
PyObject *tmp_kw_call_arg_value_3_2;
PyObject *tmp_kw_call_arg_value_4_2;
PyObject *tmp_kw_call_arg_value_5_2;
bool tmp_condition_result_62;
int tmp_or_left_truth_3;
bool tmp_or_left_value_3;
bool tmp_or_right_value_3;
PyObject *tmp_operand_value_25;
PyObject *tmp_cmp_expr_left_45;
PyObject *tmp_cmp_expr_right_45;
PyObject *tmp_list_element_3;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_52 = module_var_accessor_charset_normalizer$api$CharsetMatch(tstate);
if (unlikely(tmp_called_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatch);
}

if (tmp_called_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 607;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 608;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_0_7 = par_sequences;
CHECK_OBJECT(var_encoding_iana);
tmp_kw_call_arg_value_1_5 = var_encoding_iana;
CHECK_OBJECT(var_cached_mess);
tmp_kw_call_arg_value_2_2 = var_cached_mess;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_kw_call_arg_value_3_2 = var_bom_or_sig_available;
CHECK_OBJECT(var_cached_cd);
tmp_kw_call_arg_value_4_2 = var_cached_cd;
CHECK_OBJECT(var_is_too_large_sequence);
tmp_operand_value_25 = var_is_too_large_sequence;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_3 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_45 = var_encoding_iana;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 618;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_element_3 = var_specified_encoding;
tmp_cmp_expr_right_45 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_cmp_expr_right_45, 0, tmp_list_element_3);
tmp_list_element_3 = const_str_plain_ascii;
PyList_SET_ITEM0(tmp_cmp_expr_right_45, 1, tmp_list_element_3);
tmp_list_element_3 = mod_consts.const_str_plain_utf_8;
PyList_SET_ITEM0(tmp_cmp_expr_right_45, 2, tmp_list_element_3);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_45, tmp_cmp_expr_left_45);
CHECK_OBJECT(tmp_cmp_expr_right_45);
Py_DECREF(tmp_cmp_expr_right_45);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_3 = (tmp_res == 1) ? true : false;
tmp_condition_result_62 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_62 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_62 != false) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 614;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_5_2 = var_decoded_payload;
goto condexpr_end_8;
condexpr_false_8:;
tmp_kw_call_arg_value_5_2 = Py_None;
condexpr_end_8:;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 622;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_0_2 = var_specified_encoding;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 607;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_2, tmp_kw_call_arg_value_5_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_95 = CALL_FUNCTION_WITH_ARGS6_KW_SPLIT(tstate, tmp_called_value_52, args, kw_values, mod_consts.const_tuple_str_plain_preemptive_declaration_tuple);
}

if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_fast_match;
    var_fast_match = tmp_assign_source_95;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_53;
PyObject *tmp_expression_value_42;
PyObject *tmp_call_result_32;
PyObject *tmp_args_element_value_123;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 624;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_42 = var_results;
tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_append);
if (tmp_called_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_fast_match);
tmp_args_element_value_123 = var_fast_match;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 624;
tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_123);
CHECK_OBJECT(tmp_called_value_53);
Py_DECREF(tmp_called_value_53);
if (tmp_call_result_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_32);
Py_DECREF(tmp_call_result_32);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_33;
PyObject *tmp_args_element_value_124;
if (var_success_fast_tracked == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_success_fast_tracked);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 625;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_3 = var_success_fast_tracked;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_124 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 625;
tmp_call_result_33 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_add, tmp_args_element_value_124);
if (tmp_call_result_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_33);
Py_DECREF(tmp_call_result_33);
}
{
PyObject *tmp_called_value_54;
PyObject *tmp_expression_value_43;
PyObject *tmp_call_result_34;
PyObject *tmp_args_element_value_125;
PyObject *tmp_args_element_value_126;
PyObject *tmp_args_element_value_127;
PyObject *tmp_args_element_value_128;
PyObject *tmp_called_value_55;
PyObject *tmp_kw_call_arg_value_0_8;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
tmp_expression_value_43 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 626;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_log);
if (tmp_called_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_125 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_125 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_125 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_54);

exception_lineno = 627;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_126 = mod_consts.const_str_digest_5ae709ec6e3062eb12190d258b3a613d;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_127 = var_encoding_iana;
tmp_called_value_55 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_55 != NULL);
CHECK_OBJECT(var_cached_mess);
tmp_mult_expr_left_3 = var_cached_mess;
tmp_mult_expr_right_3 = mod_consts.const_int_pos_100;
tmp_kw_call_arg_value_0_8 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
if (tmp_kw_call_arg_value_0_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_54);

exception_lineno = 630;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 630;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_8};
    tmp_args_element_value_128 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_55,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0),
        mod_consts.const_tuple_str_plain_ndigits_tuple
    );
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_8);
Py_DECREF(tmp_kw_call_arg_value_0_8);
if (tmp_args_element_value_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_54);

exception_lineno = 630;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 626;
{
    PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128};
    tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_54, call_args);
}

CHECK_OBJECT(tmp_called_value_54);
Py_DECREF(tmp_called_value_54);
CHECK_OBJECT(tmp_args_element_value_128);
Py_DECREF(tmp_args_element_value_128);
if (tmp_call_result_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_34);
Py_DECREF(tmp_call_result_34);
}
{
nuitka_bool tmp_condition_result_63;
int tmp_and_left_truth_24;
nuitka_bool tmp_and_left_value_24;
nuitka_bool tmp_and_right_value_24;
PyObject *tmp_cmp_expr_left_46;
PyObject *tmp_cmp_expr_right_46;
PyObject *tmp_list_element_4;
PyObject *tmp_cmp_expr_left_47;
PyObject *tmp_cmp_expr_right_47;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_46 = var_encoding_iana;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 634;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_element_4 = var_specified_encoding;
tmp_cmp_expr_right_46 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_cmp_expr_right_46, 0, tmp_list_element_4);
tmp_list_element_4 = const_str_plain_ascii;
PyList_SET_ITEM0(tmp_cmp_expr_right_46, 1, tmp_list_element_4);
tmp_list_element_4 = mod_consts.const_str_plain_utf_8;
PyList_SET_ITEM0(tmp_cmp_expr_right_46, 2, tmp_list_element_4);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_46, tmp_cmp_expr_left_46);
CHECK_OBJECT(tmp_cmp_expr_right_46);
Py_DECREF(tmp_cmp_expr_right_46);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_24 = tmp_and_left_value_24 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_24 == 1) {
    goto and_right_24;
} else {
    goto and_left_24;
}
and_right_24:;
CHECK_OBJECT(var_cached_mess);
tmp_cmp_expr_left_47 = var_cached_mess;
tmp_cmp_expr_right_47 = mod_consts.const_float_0_1;
tmp_and_right_value_24 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_47, tmp_cmp_expr_right_47);
if (tmp_and_right_value_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_63 = tmp_and_right_value_24;
goto and_end_24;
and_left_24:;
tmp_condition_result_63 = tmp_and_left_value_24;
and_end_24:;
if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
    goto branch_yes_55;
} else {
    goto branch_no_55;
}
}
branch_yes_55:;
{
nuitka_bool tmp_condition_result_64;
PyObject *tmp_cmp_expr_left_48;
PyObject *tmp_cmp_expr_right_48;
CHECK_OBJECT(var_cached_mess);
tmp_cmp_expr_left_48 = var_cached_mess;
tmp_cmp_expr_right_48 = const_float_0_0;
tmp_condition_result_64 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_48, tmp_cmp_expr_right_48);
if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
    goto branch_yes_56;
} else {
    goto branch_no_56;
}
}
branch_yes_56:;
{
PyObject *tmp_called_value_56;
PyObject *tmp_expression_value_44;
PyObject *tmp_call_result_35;
PyObject *tmp_args_element_value_129;
PyObject *tmp_args_element_value_130;
PyObject *tmp_expression_value_45;
tmp_expression_value_44 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 638;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_debug);
if (tmp_called_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_129 = mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f;
CHECK_OBJECT(var_fast_match);
tmp_expression_value_45 = var_fast_match;
tmp_args_element_value_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, const_str_plain_encoding);
if (tmp_args_element_value_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_56);

exception_lineno = 640;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 638;
{
    PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
    tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_56, call_args);
}

CHECK_OBJECT(tmp_called_value_56);
Py_DECREF(tmp_called_value_56);
CHECK_OBJECT(tmp_args_element_value_130);
Py_DECREF(tmp_args_element_value_130);
if (tmp_call_result_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 638;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_35);
Py_DECREF(tmp_call_result_35);
}
{
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_23;
CHECK_OBJECT(par_explain);
tmp_truth_name_23 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_23 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_65 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto branch_yes_57;
} else {
    goto branch_no_57;
}
}
branch_yes_57:;
{
PyObject *tmp_called_value_57;
PyObject *tmp_expression_value_46;
PyObject *tmp_call_result_36;
PyObject *tmp_args_element_value_131;
tmp_expression_value_46 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 643;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_removeHandler);
if (tmp_called_value_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_131 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_131 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_131 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_57);

exception_lineno = 643;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 643;
tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_131);
CHECK_OBJECT(tmp_called_value_57);
Py_DECREF(tmp_called_value_57);
if (tmp_call_result_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_36);
Py_DECREF(tmp_call_result_36);
}
{
PyObject *tmp_called_value_58;
PyObject *tmp_expression_value_47;
PyObject *tmp_call_result_37;
PyObject *tmp_args_element_value_132;
tmp_expression_value_47 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 644;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_previous_logger_level == NULL) {
Py_DECREF(tmp_called_value_58);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_logger_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 644;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_132 = var_previous_logger_level;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 644;
tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_132);
CHECK_OBJECT(tmp_called_value_58);
Py_DECREF(tmp_called_value_58);
if (tmp_call_result_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_37);
Py_DECREF(tmp_call_result_37);
}
branch_no_57:;
{
PyObject *tmp_called_value_59;
PyObject *tmp_args_element_value_133;
PyObject *tmp_list_element_5;
tmp_called_value_59 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 645;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_fast_match);
tmp_list_element_5 = var_fast_match;
tmp_args_element_value_133 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_133, 0, tmp_list_element_5);
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 645;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_133);
CHECK_OBJECT(tmp_args_element_value_133);
Py_DECREF(tmp_args_element_value_133);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 645;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto try_return_handler_8;
}
branch_no_56:;
{
PyObject *tmp_called_value_60;
PyObject *tmp_expression_value_48;
PyObject *tmp_call_result_38;
PyObject *tmp_args_element_value_134;
if (var_early_stop_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 646;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_48 = var_early_stop_results;
tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_append);
if (tmp_called_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_fast_match);
tmp_args_element_value_134 = var_fast_match;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 646;
tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_134);
CHECK_OBJECT(tmp_called_value_60);
Py_DECREF(tmp_called_value_60);
if (tmp_call_result_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 646;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_38);
Py_DECREF(tmp_call_result_38);
}
branch_no_55:;
{
bool tmp_condition_result_66;
int tmp_and_left_truth_25;
bool tmp_and_left_value_25;
bool tmp_and_right_value_25;
PyObject *tmp_len_arg_14;
PyObject *tmp_capi_result_3;
int tmp_and_left_truth_26;
bool tmp_and_left_value_26;
bool tmp_and_right_value_26;
int tmp_or_left_truth_4;
bool tmp_or_left_value_4;
bool tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_49;
PyObject *tmp_cmp_expr_right_49;
PyObject *tmp_cmp_expr_left_50;
PyObject *tmp_cmp_expr_right_50;
int tmp_and_left_truth_27;
bool tmp_and_left_value_27;
bool tmp_and_right_value_27;
PyObject *tmp_cmp_expr_left_51;
PyObject *tmp_cmp_expr_right_51;
PyObject *tmp_cmp_expr_left_52;
PyObject *tmp_cmp_expr_right_52;
if (var_early_stop_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 649;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_14 = var_early_stop_results;
tmp_capi_result_3 = BUILTIN_LEN(tstate, tmp_len_arg_14);
if (tmp_capi_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_25 = CHECK_IF_TRUE(tmp_capi_result_3) == 1;
CHECK_OBJECT(tmp_capi_result_3);
Py_DECREF(tmp_capi_result_3);
tmp_and_left_truth_25 = tmp_and_left_value_25 != false ? 1 : 0;
if (tmp_and_left_truth_25 == 1) {
    goto and_right_25;
} else {
    goto and_left_25;
}
and_right_25:;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 650;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_49 = var_specified_encoding;
tmp_cmp_expr_right_49 = Py_None;
tmp_or_left_value_4 = (tmp_cmp_expr_left_49 == tmp_cmp_expr_right_49) ? true : false;
tmp_or_left_truth_4 = tmp_or_left_value_4 != false ? 1 : 0;
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 650;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_50 = var_specified_encoding;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 650;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_50 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_50, tmp_cmp_expr_left_50);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_4 = (tmp_res == 1) ? true : false;
tmp_and_left_value_26 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_and_left_value_26 = tmp_or_left_value_4;
or_end_4:;
tmp_and_left_truth_26 = tmp_and_left_value_26 != false ? 1 : 0;
if (tmp_and_left_truth_26 == 1) {
    goto and_right_26;
} else {
    goto and_left_26;
}
and_right_26:;
tmp_cmp_expr_left_51 = const_str_plain_ascii;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 651;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_51 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_51, tmp_cmp_expr_left_51);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 651;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_27 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_27 = tmp_and_left_value_27 != false ? 1 : 0;
if (tmp_and_left_truth_27 == 1) {
    goto and_right_27;
} else {
    goto and_left_27;
}
and_right_27:;
tmp_cmp_expr_left_52 = mod_consts.const_str_plain_utf_8;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 652;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_52 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_52, tmp_cmp_expr_left_52);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 652;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_27 = (tmp_res == 1) ? true : false;
tmp_and_right_value_26 = tmp_and_right_value_27;
goto and_end_27;
and_left_27:;
tmp_and_right_value_26 = tmp_and_left_value_27;
and_end_27:;
tmp_and_right_value_25 = tmp_and_right_value_26;
goto and_end_26;
and_left_26:;
tmp_and_right_value_25 = tmp_and_left_value_26;
and_end_26:;
tmp_condition_result_66 = tmp_and_right_value_25;
goto and_end_25;
and_left_25:;
tmp_condition_result_66 = tmp_and_left_value_25;
and_end_25:;
if (tmp_condition_result_66 != false) {
    goto branch_yes_58;
} else {
    goto branch_no_58;
}
}
branch_yes_58:;
{
PyObject *tmp_assign_source_96;
PyObject *tmp_called_instance_4;
if (var_early_stop_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 654;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_4 = var_early_stop_results;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 654;
tmp_assign_source_96 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_best);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 654;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_probable_result;
    var_probable_result = tmp_assign_source_96;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_61;
PyObject *tmp_expression_value_49;
PyObject *tmp_call_result_39;
PyObject *tmp_args_element_value_135;
PyObject *tmp_args_element_value_136;
PyObject *tmp_expression_value_50;
tmp_expression_value_49 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 655;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_debug);
if (tmp_called_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_135 = mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f;
CHECK_OBJECT(var_probable_result);
tmp_expression_value_50 = var_probable_result;
tmp_args_element_value_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, const_str_plain_encoding);
if (tmp_args_element_value_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_61);

exception_lineno = 657;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 655;
{
    PyObject *call_args[] = {tmp_args_element_value_135, tmp_args_element_value_136};
    tmp_call_result_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_61, call_args);
}

CHECK_OBJECT(tmp_called_value_61);
Py_DECREF(tmp_called_value_61);
CHECK_OBJECT(tmp_args_element_value_136);
Py_DECREF(tmp_args_element_value_136);
if (tmp_call_result_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_39);
Py_DECREF(tmp_call_result_39);
}
{
nuitka_bool tmp_condition_result_67;
int tmp_truth_name_24;
CHECK_OBJECT(par_explain);
tmp_truth_name_24 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_24 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_67 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
    goto branch_yes_59;
} else {
    goto branch_no_59;
}
}
branch_yes_59:;
{
PyObject *tmp_called_value_62;
PyObject *tmp_expression_value_51;
PyObject *tmp_call_result_40;
PyObject *tmp_args_element_value_137;
tmp_expression_value_51 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 660;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_removeHandler);
if (tmp_called_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_137 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_137 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_137 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_62);

exception_lineno = 660;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 660;
tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_137);
CHECK_OBJECT(tmp_called_value_62);
Py_DECREF(tmp_called_value_62);
if (tmp_call_result_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_40);
Py_DECREF(tmp_call_result_40);
}
{
PyObject *tmp_called_value_63;
PyObject *tmp_expression_value_52;
PyObject *tmp_call_result_41;
PyObject *tmp_args_element_value_138;
tmp_expression_value_52 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 661;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_previous_logger_level == NULL) {
Py_DECREF(tmp_called_value_63);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_logger_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 661;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_138 = var_previous_logger_level;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 661;
tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_138);
CHECK_OBJECT(tmp_called_value_63);
Py_DECREF(tmp_called_value_63);
if (tmp_call_result_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_41);
Py_DECREF(tmp_call_result_41);
}
branch_no_59:;
{
PyObject *tmp_called_value_64;
PyObject *tmp_args_element_value_139;
PyObject *tmp_list_element_6;
tmp_called_value_64 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 662;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_probable_result);
tmp_list_element_6 = var_probable_result;
tmp_args_element_value_139 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_139, 0, tmp_list_element_6);
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 662;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_139);
CHECK_OBJECT(tmp_args_element_value_139);
Py_DECREF(tmp_args_element_value_139);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 662;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto try_return_handler_8;
}
branch_no_58:;
goto loop_start_3;
goto branch_end_54;
branch_no_54:;
{
PyObject *tmp_list_arg_value_12;
PyObject *tmp_item_value_12;
if (var_tested_but_soft_failure == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested_but_soft_failure);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 670;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_arg_value_12 = var_tested_but_soft_failure;
CHECK_OBJECT(var_encoding_iana);
tmp_item_value_12 = var_encoding_iana;
tmp_result = LIST_APPEND0(tmp_list_arg_value_12, tmp_item_value_12);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_65;
PyObject *tmp_expression_value_53;
PyObject *tmp_call_result_42;
PyObject *tmp_args_element_value_140;
PyObject *tmp_args_element_value_141;
PyObject *tmp_args_element_value_142;
tmp_expression_value_53 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 671;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_log);
if (tmp_called_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_140 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_140 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_140 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_65);

exception_lineno = 672;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_141 = mod_consts.const_str_digest_0f18db28640740a5c5b69342be190118;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_142 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 671;
{
    PyObject *call_args[] = {tmp_args_element_value_140, tmp_args_element_value_141, tmp_args_element_value_142};
    tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_65, call_args);
}

CHECK_OBJECT(tmp_called_value_65);
Py_DECREF(tmp_called_value_65);
if (tmp_call_result_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 671;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_42);
Py_DECREF(tmp_call_result_42);
}
{
nuitka_bool tmp_condition_result_68;
int tmp_and_left_truth_28;
nuitka_bool tmp_and_left_value_28;
nuitka_bool tmp_and_right_value_28;
int tmp_truth_name_25;
PyObject *tmp_cmp_expr_left_53;
PyObject *tmp_cmp_expr_right_53;
PyObject *tmp_list_element_7;
CHECK_OBJECT(par_enable_fallback);
tmp_truth_name_25 = CHECK_IF_TRUE(par_enable_fallback);
if (tmp_truth_name_25 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_28 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_28 = tmp_and_left_value_28 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_28 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_28 == 1) {
    goto and_right_28;
} else {
    goto and_left_28;
}
and_right_28:;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_53 = var_encoding_iana;
tmp_list_element_7 = const_str_plain_ascii;
tmp_cmp_expr_right_53 = MAKE_LIST_EMPTY(tstate, 5);
PyList_SET_ITEM0(tmp_cmp_expr_right_53, 0, tmp_list_element_7);
tmp_list_element_7 = mod_consts.const_str_plain_utf_8;
PyList_SET_ITEM0(tmp_cmp_expr_right_53, 1, tmp_list_element_7);
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 680;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto list_build_exception_2;
}

tmp_list_element_7 = var_specified_encoding;
PyList_SET_ITEM0(tmp_cmp_expr_right_53, 2, tmp_list_element_7);
tmp_list_element_7 = mod_consts.const_str_plain_utf_16;
PyList_SET_ITEM0(tmp_cmp_expr_right_53, 3, tmp_list_element_7);
tmp_list_element_7 = mod_consts.const_str_plain_utf_32;
PyList_SET_ITEM0(tmp_cmp_expr_right_53, 4, tmp_list_element_7);
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_cmp_expr_right_53);
goto try_except_handler_8;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_53, tmp_cmp_expr_left_53);
CHECK_OBJECT(tmp_cmp_expr_right_53);
Py_DECREF(tmp_cmp_expr_right_53);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_28 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_68 = tmp_and_right_value_28;
goto and_end_28;
and_left_28:;
tmp_condition_result_68 = tmp_and_left_value_28;
and_end_28:;
if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
    goto branch_yes_60;
} else {
    goto branch_no_60;
}
}
branch_yes_60:;
{
PyObject *tmp_assign_source_97;
PyObject *tmp_called_value_66;
PyObject *tmp_kw_call_arg_value_0_9;
PyObject *tmp_kw_call_arg_value_1_6;
PyObject *tmp_kw_call_arg_value_2_3;
PyObject *tmp_kw_call_arg_value_3_3;
PyObject *tmp_kw_call_arg_value_4_3;
PyObject *tmp_kw_call_arg_value_5_3;
PyObject *tmp_kw_call_dict_value_0_3;
tmp_called_value_66 = module_var_accessor_charset_normalizer$api$CharsetMatch(tstate);
if (unlikely(tmp_called_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatch);
}

if (tmp_called_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 684;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 685;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_0_9 = par_sequences;
CHECK_OBJECT(var_encoding_iana);
tmp_kw_call_arg_value_1_6 = var_encoding_iana;
if (par_threshold == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threshold);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 687;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_2_3 = par_threshold;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_kw_call_arg_value_3_3 = var_bom_or_sig_available;
tmp_kw_call_arg_value_4_3 = MAKE_LIST_EMPTY(tstate, 0);
if (var_decoded_payload == NULL) {
Py_DECREF(tmp_kw_call_arg_value_4_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 690;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_5_3 = var_decoded_payload;
if (var_specified_encoding == NULL) {
Py_DECREF(tmp_kw_call_arg_value_4_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 691;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_0_3 = var_specified_encoding;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 684;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_3, tmp_kw_call_arg_value_3_3, tmp_kw_call_arg_value_4_3, tmp_kw_call_arg_value_5_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS6_KW_SPLIT(tstate, tmp_called_value_66, args, kw_values, mod_consts.const_tuple_str_plain_preemptive_declaration_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_4_3);
Py_DECREF(tmp_kw_call_arg_value_4_3);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 684;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_fallback_entry;
    var_fallback_entry = tmp_assign_source_97;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_69;
PyObject *tmp_cmp_expr_left_54;
PyObject *tmp_cmp_expr_right_54;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_54 = var_encoding_iana;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 693;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_54 = var_specified_encoding;
tmp_condition_result_69 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_54, tmp_cmp_expr_right_54);
if (tmp_condition_result_69 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 693;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto branch_yes_61;
} else {
    goto branch_no_61;
}
}
branch_yes_61:;
{
PyObject *tmp_assign_source_98;
CHECK_OBJECT(var_fallback_entry);
tmp_assign_source_98 = var_fallback_entry;
{
    PyObject *old = var_fallback_specified;
    var_fallback_specified = tmp_assign_source_98;
    Py_INCREF(var_fallback_specified);
    Py_XDECREF(old);
}

}
goto branch_end_61;
branch_no_61:;
{
nuitka_bool tmp_condition_result_70;
PyObject *tmp_cmp_expr_left_55;
PyObject *tmp_cmp_expr_right_55;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_55 = var_encoding_iana;
tmp_cmp_expr_right_55 = const_str_plain_ascii;
tmp_condition_result_70 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_55, tmp_cmp_expr_right_55);
if (tmp_condition_result_70 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
    goto branch_yes_62;
} else {
    goto branch_no_62;
}
}
branch_yes_62:;
{
PyObject *tmp_assign_source_99;
CHECK_OBJECT(var_fallback_entry);
tmp_assign_source_99 = var_fallback_entry;
{
    PyObject *old = var_fallback_ascii;
    var_fallback_ascii = tmp_assign_source_99;
    Py_INCREF(var_fallback_ascii);
    Py_XDECREF(old);
}

}
goto branch_end_62;
branch_no_62:;
{
PyObject *tmp_assign_source_100;
CHECK_OBJECT(var_fallback_entry);
tmp_assign_source_100 = var_fallback_entry;
{
    PyObject *old = var_fallback_u8;
    var_fallback_u8 = tmp_assign_source_100;
    Py_INCREF(var_fallback_u8);
    Py_XDECREF(old);
}

}
branch_end_62:;
branch_end_61:;
branch_no_60:;
goto loop_start_3;
branch_end_54:;
branch_no_53:;
branch_no_52:;
{
PyObject *tmp_called_value_67;
PyObject *tmp_expression_value_54;
PyObject *tmp_call_result_43;
PyObject *tmp_args_element_value_143;
PyObject *tmp_args_element_value_144;
PyObject *tmp_args_element_value_145;
PyObject *tmp_args_element_value_146;
PyObject *tmp_called_value_68;
PyObject *tmp_kw_call_arg_value_0_10;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
tmp_expression_value_54 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 701;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_log);
if (tmp_called_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_143 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_143 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_143 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_67);

exception_lineno = 702;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_144 = mod_consts.const_str_digest_d3189cd1808103cd9c59a2cd1f24701b;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_145 = var_encoding_iana;
tmp_called_value_68 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_68 != NULL);
CHECK_OBJECT(var_mean_mess_ratio);
tmp_mult_expr_left_4 = var_mean_mess_ratio;
tmp_mult_expr_right_4 = mod_consts.const_int_pos_100;
tmp_kw_call_arg_value_0_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
if (tmp_kw_call_arg_value_0_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_67);

exception_lineno = 705;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 705;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_10};
    tmp_args_element_value_146 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_68,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_3_tuple, 0),
        mod_consts.const_tuple_str_plain_ndigits_tuple
    );
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_10);
Py_DECREF(tmp_kw_call_arg_value_0_10);
if (tmp_args_element_value_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_67);

exception_lineno = 705;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 701;
{
    PyObject *call_args[] = {tmp_args_element_value_143, tmp_args_element_value_144, tmp_args_element_value_145, tmp_args_element_value_146};
    tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_67, call_args);
}

CHECK_OBJECT(tmp_called_value_67);
Py_DECREF(tmp_called_value_67);
CHECK_OBJECT(tmp_args_element_value_146);
Py_DECREF(tmp_args_element_value_146);
if (tmp_call_result_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 701;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_43);
Py_DECREF(tmp_call_result_43);
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_26;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_26 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_26);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_71 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_71 != false) {
    goto branch_yes_63;
} else {
    goto branch_no_63;
}
}
branch_yes_63:;
{
PyObject *tmp_assign_source_101;
PyObject *tmp_called_value_69;
PyObject *tmp_args_element_value_147;
tmp_called_value_69 = module_var_accessor_charset_normalizer$api$encoding_languages(tstate);
if (unlikely(tmp_called_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encoding_languages);
}

if (tmp_called_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 709;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_147 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 709;
tmp_assign_source_101 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_147);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_target_languages;
    var_target_languages = tmp_assign_source_101;
    Py_XDECREF(old);
}

}
goto branch_end_63;
branch_no_63:;
{
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_70;
PyObject *tmp_args_element_value_148;
tmp_called_value_70 = module_var_accessor_charset_normalizer$api$mb_encoding_languages(tstate);
if (unlikely(tmp_called_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mb_encoding_languages);
}

if (tmp_called_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 711;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_148 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 711;
tmp_assign_source_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_148);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_target_languages;
    var_target_languages = tmp_assign_source_102;
    Py_XDECREF(old);
}

}
branch_end_63:;
{
nuitka_bool tmp_condition_result_72;
int tmp_truth_name_26;
CHECK_OBJECT(var_target_languages);
tmp_truth_name_26 = CHECK_IF_TRUE(var_target_languages);
if (tmp_truth_name_26 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 713;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_72 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
    goto branch_yes_64;
} else {
    goto branch_no_64;
}
}
branch_yes_64:;
{
PyObject *tmp_called_value_71;
PyObject *tmp_expression_value_55;
PyObject *tmp_call_result_44;
PyObject *tmp_args_element_value_149;
PyObject *tmp_args_element_value_150;
PyObject *tmp_kw_call_arg_value_0_11;
PyObject *tmp_kw_call_arg_value_1_7;
PyObject *tmp_kw_call_arg_value_2_4;
PyObject *tmp_unicode_arg_11;
tmp_expression_value_55 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 714;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_log);
if (tmp_called_value_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 714;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_149 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_149 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_149 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_71);

exception_lineno = 715;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_kw_call_arg_value_0_11 = mod_consts.const_str_digest_ce012b2d8f82ae3b46e447786ca742db;
CHECK_OBJECT(var_encoding_iana);
tmp_kw_call_arg_value_1_7 = var_encoding_iana;
CHECK_OBJECT(var_target_languages);
tmp_unicode_arg_11 = var_target_languages;
tmp_kw_call_arg_value_2_4 = BUILTIN_UNICODE1(tmp_unicode_arg_11);
if (tmp_kw_call_arg_value_2_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_71);

exception_lineno = 717;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 716;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_11, tmp_kw_call_arg_value_1_7, tmp_kw_call_arg_value_2_4};
    tmp_args_element_value_150 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_4);
Py_DECREF(tmp_kw_call_arg_value_2_4);
if (tmp_args_element_value_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_71);

exception_lineno = 716;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 714;
{
    PyObject *call_args[] = {tmp_args_element_value_149, tmp_args_element_value_150};
    tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_71, call_args);
}

CHECK_OBJECT(tmp_called_value_71);
Py_DECREF(tmp_called_value_71);
CHECK_OBJECT(tmp_args_element_value_150);
Py_DECREF(tmp_args_element_value_150);
if (tmp_call_result_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 714;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_44);
Py_DECREF(tmp_call_result_44);
}
branch_no_64:;
{
PyObject *tmp_assign_source_103;
tmp_assign_source_103 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_cd_ratios;
    var_cd_ratios = tmp_assign_source_103;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_73;
PyObject *tmp_cmp_expr_left_56;
PyObject *tmp_cmp_expr_right_56;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_56 = var_encoding_iana;
tmp_cmp_expr_right_56 = const_str_plain_ascii;
tmp_condition_result_73 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_56, tmp_cmp_expr_right_56);
if (tmp_condition_result_73 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
    goto branch_yes_65;
} else {
    goto branch_no_65;
}
}
branch_yes_65:;
{
PyObject *tmp_assign_source_104;
nuitka_bool tmp_condition_result_74;
int tmp_truth_name_27;
PyObject *tmp_str_arg_value_3;
PyObject *tmp_iterable_value_3;
CHECK_OBJECT(var_target_languages);
tmp_truth_name_27 = CHECK_IF_TRUE(var_target_languages);
if (tmp_truth_name_27 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_74 = tmp_truth_name_27 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
tmp_str_arg_value_3 = mod_consts.const_str_chr_44;
CHECK_OBJECT(var_target_languages);
tmp_iterable_value_3 = var_target_languages;
tmp_assign_source_104 = UNICODE_JOIN(tstate, tmp_str_arg_value_3, tmp_iterable_value_3);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 732;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_assign_source_104 = Py_None;
Py_INCREF(tmp_assign_source_104);
condexpr_end_9:;
{
    PyObject *old = var_lg_inclusion;
    var_lg_inclusion = tmp_assign_source_104;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_iter_arg_7;
if (var_md_chunks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_md_chunks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 735;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_iter_arg_7 = var_md_chunks;
tmp_assign_source_105 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_105;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_106;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_5 = tmp_for_loop_3__for_iterator;
tmp_assign_source_106 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_106 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
exception_lineno = 735;
        goto try_except_handler_29;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_106;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_107;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_107 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_chunk;
    var_chunk = tmp_assign_source_107;
    Py_INCREF(var_chunk);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_called_value_72;
PyObject *tmp_args_element_value_151;
PyObject *tmp_args_element_value_152;
PyObject *tmp_args_element_value_153;
if (var_cached_coherence_ratio == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_coherence_ratio);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 736;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_called_value_72 = var_cached_coherence_ratio;
CHECK_OBJECT(var_chunk);
tmp_args_element_value_151 = var_chunk;
if (par_language_threshold == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_language_threshold);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 738;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_args_element_value_152 = par_language_threshold;
if (var_lg_inclusion == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lg_inclusion);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 739;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_args_element_value_153 = var_lg_inclusion;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 736;
{
    PyObject *call_args[] = {tmp_args_element_value_151, tmp_args_element_value_152, tmp_args_element_value_153};
    tmp_assign_source_108 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_72, call_args);
}

if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 736;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
{
    PyObject *old = var_chunk_languages;
    var_chunk_languages = tmp_assign_source_108;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_13;
PyObject *tmp_item_value_13;
if (var_cd_ratios == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cd_ratios);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 742;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}

tmp_list_arg_value_13 = var_cd_ratios;
CHECK_OBJECT(var_chunk_languages);
tmp_item_value_13 = var_chunk_languages;
tmp_result = LIST_APPEND0(tmp_list_arg_value_13, tmp_item_value_13);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_29;
}
goto loop_start_5;
loop_end_5:;
goto try_end_14;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_8;
// End of try:
try_end_14:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
branch_no_65:;
{
PyObject *tmp_assign_source_109;
PyObject *tmp_called_value_73;
PyObject *tmp_args_element_value_154;
tmp_called_value_73 = module_var_accessor_charset_normalizer$api$merge_coherence_ratios(tstate);
if (unlikely(tmp_called_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_merge_coherence_ratios);
}

if (tmp_called_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 744;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_cd_ratios == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cd_ratios);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 744;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_154 = var_cd_ratios;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 744;
tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_154);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 744;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_cd_ratios_merged;
    var_cd_ratios_merged = tmp_assign_source_109;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_75;
int tmp_truth_name_28;
CHECK_OBJECT(var_cd_ratios_merged);
tmp_truth_name_28 = CHECK_IF_TRUE(var_cd_ratios_merged);
if (tmp_truth_name_28 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_75 = tmp_truth_name_28 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
    goto branch_yes_66;
} else {
    goto branch_no_66;
}
}
branch_yes_66:;
{
PyObject *tmp_called_value_74;
PyObject *tmp_expression_value_56;
PyObject *tmp_call_result_45;
PyObject *tmp_args_element_value_155;
PyObject *tmp_args_element_value_156;
PyObject *tmp_kw_call_arg_value_0_12;
PyObject *tmp_kw_call_arg_value_1_8;
PyObject *tmp_kw_call_arg_value_2_5;
tmp_expression_value_56 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 747;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_log);
if (tmp_called_value_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_155 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_155 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_155 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_74);

exception_lineno = 748;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_kw_call_arg_value_0_12 = mod_consts.const_str_digest_2cb824a30d3087c5c3998c92fa5cd277;
CHECK_OBJECT(var_cd_ratios_merged);
tmp_kw_call_arg_value_1_8 = var_cd_ratios_merged;
CHECK_OBJECT(var_encoding_iana);
tmp_kw_call_arg_value_2_5 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 749;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_12, tmp_kw_call_arg_value_1_8, tmp_kw_call_arg_value_2_5};
    tmp_args_element_value_156 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

if (tmp_args_element_value_156 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_74);

exception_lineno = 749;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 747;
{
    PyObject *call_args[] = {tmp_args_element_value_155, tmp_args_element_value_156};
    tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_74, call_args);
}

CHECK_OBJECT(tmp_called_value_74);
Py_DECREF(tmp_called_value_74);
CHECK_OBJECT(tmp_args_element_value_156);
Py_DECREF(tmp_args_element_value_156);
if (tmp_call_result_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 747;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_45);
Py_DECREF(tmp_call_result_45);
}
branch_no_66:;
{
PyObject *tmp_assign_source_110;
PyObject *tmp_called_value_75;
PyObject *tmp_kw_call_arg_value_0_13;
PyObject *tmp_kw_call_arg_value_1_9;
PyObject *tmp_kw_call_arg_value_2_6;
PyObject *tmp_kw_call_arg_value_3_4;
PyObject *tmp_kw_call_arg_value_4_4;
PyObject *tmp_kw_call_arg_value_5_4;
bool tmp_condition_result_76;
int tmp_or_left_truth_5;
bool tmp_or_left_value_5;
bool tmp_or_right_value_5;
PyObject *tmp_operand_value_27;
PyObject *tmp_cmp_expr_left_57;
PyObject *tmp_cmp_expr_right_57;
PyObject *tmp_list_element_8;
PyObject *tmp_kw_call_dict_value_0_4;
tmp_called_value_75 = module_var_accessor_charset_normalizer$api$CharsetMatch(tstate);
if (unlikely(tmp_called_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatch);
}

if (tmp_called_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 754;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (par_sequences == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequences);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 755;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_0_13 = par_sequences;
CHECK_OBJECT(var_encoding_iana);
tmp_kw_call_arg_value_1_9 = var_encoding_iana;
CHECK_OBJECT(var_mean_mess_ratio);
tmp_kw_call_arg_value_2_6 = var_mean_mess_ratio;
CHECK_OBJECT(var_bom_or_sig_available);
tmp_kw_call_arg_value_3_4 = var_bom_or_sig_available;
CHECK_OBJECT(var_cd_ratios_merged);
tmp_kw_call_arg_value_4_4 = var_cd_ratios_merged;
CHECK_OBJECT(var_is_too_large_sequence);
tmp_operand_value_27 = var_is_too_large_sequence;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_27);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 763;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_5 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_5 = tmp_or_left_value_5 != false ? 1 : 0;
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_57 = var_encoding_iana;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 764;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_element_8 = var_specified_encoding;
tmp_cmp_expr_right_57 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_cmp_expr_right_57, 0, tmp_list_element_8);
tmp_list_element_8 = const_str_plain_ascii;
PyList_SET_ITEM0(tmp_cmp_expr_right_57, 1, tmp_list_element_8);
tmp_list_element_8 = mod_consts.const_str_plain_utf_8;
PyList_SET_ITEM0(tmp_cmp_expr_right_57, 2, tmp_list_element_8);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_57, tmp_cmp_expr_left_57);
CHECK_OBJECT(tmp_cmp_expr_right_57);
Py_DECREF(tmp_cmp_expr_right_57);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 764;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_5 = (tmp_res == 1) ? true : false;
tmp_condition_result_76 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_condition_result_76 = tmp_or_left_value_5;
or_end_5:;
if (tmp_condition_result_76 != false) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 761;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_arg_value_5_4 = var_decoded_payload;
goto condexpr_end_10;
condexpr_false_10:;
tmp_kw_call_arg_value_5_4 = Py_None;
condexpr_end_10:;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 768;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_0_4 = var_specified_encoding;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 754;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_13, tmp_kw_call_arg_value_1_9, tmp_kw_call_arg_value_2_6, tmp_kw_call_arg_value_3_4, tmp_kw_call_arg_value_4_4, tmp_kw_call_arg_value_5_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS6_KW_SPLIT(tstate, tmp_called_value_75, args, kw_values, mod_consts.const_tuple_str_plain_preemptive_declaration_tuple);
}

if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 754;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_current_match;
    var_current_match = tmp_assign_source_110;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_76;
PyObject *tmp_expression_value_57;
PyObject *tmp_call_result_46;
PyObject *tmp_args_element_value_157;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 771;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_57 = var_results;
tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_append);
if (tmp_called_value_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_current_match);
tmp_args_element_value_157 = var_current_match;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 771;
tmp_call_result_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_157);
CHECK_OBJECT(tmp_called_value_76);
Py_DECREF(tmp_called_value_76);
if (tmp_call_result_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 771;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_46);
Py_DECREF(tmp_call_result_46);
}
{
bool tmp_condition_result_77;
int tmp_and_left_truth_29;
bool tmp_and_left_value_29;
bool tmp_and_right_value_29;
PyObject *tmp_cmp_expr_left_58;
PyObject *tmp_cmp_expr_right_58;
PyObject *tmp_operand_value_28;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 774;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_58 = var_decoded_payload;
tmp_cmp_expr_right_58 = Py_None;
tmp_and_left_value_29 = (tmp_cmp_expr_left_58 != tmp_cmp_expr_right_58) ? true : false;
tmp_and_left_truth_29 = tmp_and_left_value_29 != false ? 1 : 0;
if (tmp_and_left_truth_29 == 1) {
    goto and_right_29;
} else {
    goto and_left_29;
}
and_right_29:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_28 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_28);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 774;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_29 = (tmp_res == 0) ? true : false;
tmp_condition_result_77 = tmp_and_right_value_29;
goto and_end_29;
and_left_29:;
tmp_condition_result_77 = tmp_and_left_value_29;
and_end_29:;
if (tmp_condition_result_77 != false) {
    goto branch_yes_67;
} else {
    goto branch_no_67;
}
}
branch_yes_67:;
{
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_key_value_3;
PyObject *tmp_hash_arg_3;
PyObject *tmp_default_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_capi_result_4;
if (var_payload_result_cache == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_payload_result_cache);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 775;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_dict_arg_value_3 = var_payload_result_cache;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 776;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_hash_arg_3 = var_decoded_payload;
tmp_key_value_3 = BUILTIN_HASH(tstate, tmp_hash_arg_3);
if (tmp_key_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 776;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_mean_mess_ratio);
tmp_tuple_element_2 = var_mean_mess_ratio;
tmp_default_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_default_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_cd_ratios_merged);
tmp_tuple_element_2 = var_cd_ratios_merged;
PyTuple_SET_ITEM0(tmp_default_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = Py_True;
PyTuple_SET_ITEM0(tmp_default_value_2, 2, tmp_tuple_element_2);
tmp_capi_result_4 = DICT_SETDEFAULT3(tstate, tmp_dict_arg_value_3, tmp_key_value_3, tmp_default_value_2);
CHECK_OBJECT(tmp_key_value_3);
Py_DECREF(tmp_key_value_3);
CHECK_OBJECT(tmp_default_value_2);
Py_DECREF(tmp_default_value_2);
assert(!(tmp_capi_result_4 == NULL));
CHECK_OBJECT(tmp_capi_result_4);
Py_DECREF(tmp_capi_result_4);
}
branch_no_67:;
{
nuitka_bool tmp_condition_result_78;
int tmp_and_left_truth_30;
nuitka_bool tmp_and_left_value_30;
nuitka_bool tmp_and_right_value_30;
int tmp_truth_name_29;
int tmp_and_left_truth_31;
nuitka_bool tmp_and_left_value_31;
nuitka_bool tmp_and_right_value_31;
PyObject *tmp_operand_value_29;
PyObject *tmp_cmp_expr_left_59;
PyObject *tmp_cmp_expr_right_59;
if (var_definitive_match_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_definitive_match_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 786;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_29 = CHECK_IF_TRUE(var_definitive_match_found);
if (tmp_truth_name_29 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_30 = tmp_truth_name_29 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_30 = tmp_and_left_value_30 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_30 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 786;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_30 == 1) {
    goto and_right_30;
} else {
    goto and_left_30;
}
and_right_30:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_29 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_29);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 787;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_31 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_31 = tmp_and_left_value_31 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_31 == 1) {
    goto and_right_31;
} else {
    goto and_left_31;
}
and_right_31:;
CHECK_OBJECT(var_mean_mess_ratio);
tmp_cmp_expr_left_59 = var_mean_mess_ratio;
tmp_cmp_expr_right_59 = mod_consts.const_float_0_02;
tmp_and_right_value_31 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_59, tmp_cmp_expr_right_59);
if (tmp_and_right_value_31 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 788;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_30 = tmp_and_right_value_31;
goto and_end_31;
and_left_31:;
tmp_and_right_value_30 = tmp_and_left_value_31;
and_end_31:;
tmp_condition_result_78 = tmp_and_right_value_30;
goto and_end_30;
and_left_30:;
tmp_condition_result_78 = tmp_and_left_value_30;
and_end_30:;
if (tmp_condition_result_78 == NUITKA_BOOL_TRUE) {
    goto branch_yes_68;
} else {
    goto branch_no_68;
}
}
branch_yes_68:;
{
PyObject *tmp_assign_source_111;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_post_definitive_sb_success_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_post_definitive_sb_success_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_iadd_expr_left_2 = var_post_definitive_sb_success_count;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 790;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_111 = tmp_iadd_expr_left_2;
var_post_definitive_sb_success_count = tmp_assign_source_111;

}
branch_no_68:;
{
nuitka_bool tmp_condition_result_79;
int tmp_and_left_truth_32;
nuitka_bool tmp_and_left_value_32;
nuitka_bool tmp_and_right_value_32;
PyObject *tmp_cmp_expr_left_60;
PyObject *tmp_cmp_expr_right_60;
PyObject *tmp_list_element_9;
PyObject *tmp_cmp_expr_left_61;
PyObject *tmp_cmp_expr_right_61;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_60 = var_encoding_iana;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 793;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_list_element_9 = var_specified_encoding;
tmp_cmp_expr_right_60 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_cmp_expr_right_60, 0, tmp_list_element_9);
tmp_list_element_9 = const_str_plain_ascii;
PyList_SET_ITEM0(tmp_cmp_expr_right_60, 1, tmp_list_element_9);
tmp_list_element_9 = mod_consts.const_str_plain_utf_8;
PyList_SET_ITEM0(tmp_cmp_expr_right_60, 2, tmp_list_element_9);
tmp_res = PySequence_Contains(tmp_cmp_expr_right_60, tmp_cmp_expr_left_60);
CHECK_OBJECT(tmp_cmp_expr_right_60);
Py_DECREF(tmp_cmp_expr_right_60);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 793;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_32 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_32 = tmp_and_left_value_32 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_32 == 1) {
    goto and_right_32;
} else {
    goto and_left_32;
}
and_right_32:;
CHECK_OBJECT(var_mean_mess_ratio);
tmp_cmp_expr_left_61 = var_mean_mess_ratio;
tmp_cmp_expr_right_61 = mod_consts.const_float_0_1;
tmp_and_right_value_32 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_61, tmp_cmp_expr_right_61);
if (tmp_and_right_value_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_79 = tmp_and_right_value_32;
goto and_end_32;
and_left_32:;
tmp_condition_result_79 = tmp_and_left_value_32;
and_end_32:;
if (tmp_condition_result_79 == NUITKA_BOOL_TRUE) {
    goto branch_yes_69;
} else {
    goto branch_no_69;
}
}
branch_yes_69:;
{
nuitka_bool tmp_condition_result_80;
PyObject *tmp_cmp_expr_left_62;
PyObject *tmp_cmp_expr_right_62;
CHECK_OBJECT(var_mean_mess_ratio);
tmp_cmp_expr_left_62 = var_mean_mess_ratio;
tmp_cmp_expr_right_62 = const_float_0_0;
tmp_condition_result_80 = RICH_COMPARE_EQ_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_62, tmp_cmp_expr_right_62);
if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 797;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
    goto branch_yes_70;
} else {
    goto branch_no_70;
}
}
branch_yes_70:;
{
PyObject *tmp_called_value_77;
PyObject *tmp_expression_value_58;
PyObject *tmp_call_result_47;
PyObject *tmp_args_element_value_158;
PyObject *tmp_args_element_value_159;
PyObject *tmp_expression_value_59;
tmp_expression_value_58 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_debug);
if (tmp_called_value_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_158 = mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f;
CHECK_OBJECT(var_current_match);
tmp_expression_value_59 = var_current_match;
tmp_args_element_value_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, const_str_plain_encoding);
if (tmp_args_element_value_159 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_77);

exception_lineno = 800;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 798;
{
    PyObject *call_args[] = {tmp_args_element_value_158, tmp_args_element_value_159};
    tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_77, call_args);
}

CHECK_OBJECT(tmp_called_value_77);
Py_DECREF(tmp_called_value_77);
CHECK_OBJECT(tmp_args_element_value_159);
Py_DECREF(tmp_args_element_value_159);
if (tmp_call_result_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_47);
Py_DECREF(tmp_call_result_47);
}
{
nuitka_bool tmp_condition_result_81;
int tmp_truth_name_30;
CHECK_OBJECT(par_explain);
tmp_truth_name_30 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_30 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 802;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_81 = tmp_truth_name_30 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
    goto branch_yes_71;
} else {
    goto branch_no_71;
}
}
branch_yes_71:;
{
PyObject *tmp_called_value_78;
PyObject *tmp_expression_value_60;
PyObject *tmp_call_result_48;
PyObject *tmp_args_element_value_160;
tmp_expression_value_60 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 803;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_removeHandler);
if (tmp_called_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_160 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_160 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_160 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_78);

exception_lineno = 803;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 803;
tmp_call_result_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_160);
CHECK_OBJECT(tmp_called_value_78);
Py_DECREF(tmp_called_value_78);
if (tmp_call_result_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_48);
Py_DECREF(tmp_call_result_48);
}
{
PyObject *tmp_called_value_79;
PyObject *tmp_expression_value_61;
PyObject *tmp_call_result_49;
PyObject *tmp_args_element_value_161;
tmp_expression_value_61 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 804;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 804;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_previous_logger_level == NULL) {
Py_DECREF(tmp_called_value_79);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_logger_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 804;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_161 = var_previous_logger_level;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 804;
tmp_call_result_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_161);
CHECK_OBJECT(tmp_called_value_79);
Py_DECREF(tmp_called_value_79);
if (tmp_call_result_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 804;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_49);
Py_DECREF(tmp_call_result_49);
}
branch_no_71:;
{
PyObject *tmp_called_value_80;
PyObject *tmp_args_element_value_162;
PyObject *tmp_list_element_10;
tmp_called_value_80 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 805;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_current_match);
tmp_list_element_10 = var_current_match;
tmp_args_element_value_162 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_162, 0, tmp_list_element_10);
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 805;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_162);
CHECK_OBJECT(tmp_args_element_value_162);
Py_DECREF(tmp_args_element_value_162);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 805;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto try_return_handler_8;
}
branch_no_70:;
{
PyObject *tmp_called_value_81;
PyObject *tmp_expression_value_62;
PyObject *tmp_call_result_50;
PyObject *tmp_args_element_value_163;
if (var_early_stop_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 807;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_62 = var_early_stop_results;
tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_append);
if (tmp_called_value_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 807;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_current_match);
tmp_args_element_value_163 = var_current_match;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 807;
tmp_call_result_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_163);
CHECK_OBJECT(tmp_called_value_81);
Py_DECREF(tmp_called_value_81);
if (tmp_call_result_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 807;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_50);
Py_DECREF(tmp_call_result_50);
}
branch_no_69:;
{
bool tmp_condition_result_82;
int tmp_and_left_truth_33;
bool tmp_and_left_value_33;
bool tmp_and_right_value_33;
PyObject *tmp_len_arg_15;
PyObject *tmp_capi_result_5;
int tmp_and_left_truth_34;
bool tmp_and_left_value_34;
bool tmp_and_right_value_34;
int tmp_or_left_truth_6;
bool tmp_or_left_value_6;
bool tmp_or_right_value_6;
PyObject *tmp_cmp_expr_left_63;
PyObject *tmp_cmp_expr_right_63;
PyObject *tmp_cmp_expr_left_64;
PyObject *tmp_cmp_expr_right_64;
int tmp_and_left_truth_35;
bool tmp_and_left_value_35;
bool tmp_and_right_value_35;
PyObject *tmp_cmp_expr_left_65;
PyObject *tmp_cmp_expr_right_65;
PyObject *tmp_cmp_expr_left_66;
PyObject *tmp_cmp_expr_right_66;
if (var_early_stop_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 810;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_15 = var_early_stop_results;
tmp_capi_result_5 = BUILTIN_LEN(tstate, tmp_len_arg_15);
if (tmp_capi_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 810;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_33 = CHECK_IF_TRUE(tmp_capi_result_5) == 1;
CHECK_OBJECT(tmp_capi_result_5);
Py_DECREF(tmp_capi_result_5);
tmp_and_left_truth_33 = tmp_and_left_value_33 != false ? 1 : 0;
if (tmp_and_left_truth_33 == 1) {
    goto and_right_33;
} else {
    goto and_left_33;
}
and_right_33:;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 811;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_63 = var_specified_encoding;
tmp_cmp_expr_right_63 = Py_None;
tmp_or_left_value_6 = (tmp_cmp_expr_left_63 == tmp_cmp_expr_right_63) ? true : false;
tmp_or_left_truth_6 = tmp_or_left_value_6 != false ? 1 : 0;
if (tmp_or_left_truth_6 == 1) {
    goto or_left_6;
} else {
    goto or_right_6;
}
or_right_6:;
if (var_specified_encoding == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_specified_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 811;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_64 = var_specified_encoding;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 811;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_64 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_64, tmp_cmp_expr_left_64);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 811;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_6 = (tmp_res == 1) ? true : false;
tmp_and_left_value_34 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_and_left_value_34 = tmp_or_left_value_6;
or_end_6:;
tmp_and_left_truth_34 = tmp_and_left_value_34 != false ? 1 : 0;
if (tmp_and_left_truth_34 == 1) {
    goto and_right_34;
} else {
    goto and_left_34;
}
and_right_34:;
tmp_cmp_expr_left_65 = const_str_plain_ascii;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 812;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_65 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_65, tmp_cmp_expr_left_65);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 812;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_35 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_35 = tmp_and_left_value_35 != false ? 1 : 0;
if (tmp_and_left_truth_35 == 1) {
    goto and_right_35;
} else {
    goto and_left_35;
}
and_right_35:;
tmp_cmp_expr_left_66 = mod_consts.const_str_plain_utf_8;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_66 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_66, tmp_cmp_expr_left_66);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 813;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_35 = (tmp_res == 1) ? true : false;
tmp_and_right_value_34 = tmp_and_right_value_35;
goto and_end_35;
and_left_35:;
tmp_and_right_value_34 = tmp_and_left_value_35;
and_end_35:;
tmp_and_right_value_33 = tmp_and_right_value_34;
goto and_end_34;
and_left_34:;
tmp_and_right_value_33 = tmp_and_left_value_34;
and_end_34:;
tmp_condition_result_82 = tmp_and_right_value_33;
goto and_end_33;
and_left_33:;
tmp_condition_result_82 = tmp_and_left_value_33;
and_end_33:;
if (tmp_condition_result_82 != false) {
    goto branch_yes_72;
} else {
    goto branch_no_72;
}
}
branch_yes_72:;
{
PyObject *tmp_assign_source_112;
PyObject *tmp_called_instance_5;
if (var_early_stop_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_early_stop_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 815;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_5 = var_early_stop_results;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 815;
tmp_assign_source_112 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_best);
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 815;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = var_probable_result;
    var_probable_result = tmp_assign_source_112;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_82;
PyObject *tmp_expression_value_63;
PyObject *tmp_call_result_51;
PyObject *tmp_args_element_value_164;
PyObject *tmp_args_element_value_165;
PyObject *tmp_expression_value_64;
tmp_expression_value_63 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_debug);
if (tmp_called_value_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_164 = mod_consts.const_str_digest_7ceeda47cc72ef6d31a8fadc19a9b14f;
CHECK_OBJECT(var_probable_result);
tmp_expression_value_64 = var_probable_result;
tmp_args_element_value_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, const_str_plain_encoding);
if (tmp_args_element_value_165 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_82);

exception_lineno = 818;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 816;
{
    PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165};
    tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_82, call_args);
}

CHECK_OBJECT(tmp_called_value_82);
Py_DECREF(tmp_called_value_82);
CHECK_OBJECT(tmp_args_element_value_165);
Py_DECREF(tmp_args_element_value_165);
if (tmp_call_result_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 816;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_51);
Py_DECREF(tmp_call_result_51);
}
{
nuitka_bool tmp_condition_result_83;
int tmp_truth_name_31;
CHECK_OBJECT(par_explain);
tmp_truth_name_31 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_31 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 820;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_83 = tmp_truth_name_31 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_83 == NUITKA_BOOL_TRUE) {
    goto branch_yes_73;
} else {
    goto branch_no_73;
}
}
branch_yes_73:;
{
PyObject *tmp_called_value_83;
PyObject *tmp_expression_value_65;
PyObject *tmp_call_result_52;
PyObject *tmp_args_element_value_166;
tmp_expression_value_65 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 821;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_removeHandler);
if (tmp_called_value_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 821;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_166 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_166 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_166 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_83);

exception_lineno = 821;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 821;
tmp_call_result_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_166);
CHECK_OBJECT(tmp_called_value_83);
Py_DECREF(tmp_called_value_83);
if (tmp_call_result_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 821;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_52);
Py_DECREF(tmp_call_result_52);
}
{
PyObject *tmp_called_value_84;
PyObject *tmp_expression_value_66;
PyObject *tmp_call_result_53;
PyObject *tmp_args_element_value_167;
tmp_expression_value_66 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 822;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 822;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_previous_logger_level == NULL) {
Py_DECREF(tmp_called_value_84);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_logger_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 822;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_167 = var_previous_logger_level;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 822;
tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_167);
CHECK_OBJECT(tmp_called_value_84);
Py_DECREF(tmp_called_value_84);
if (tmp_call_result_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 822;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_53);
Py_DECREF(tmp_call_result_53);
}
branch_no_73:;
{
PyObject *tmp_called_value_85;
PyObject *tmp_args_element_value_168;
PyObject *tmp_list_element_11;
tmp_called_value_85 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_85 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_85 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 824;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_probable_result);
tmp_list_element_11 = var_probable_result;
tmp_args_element_value_168 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_168, 0, tmp_list_element_11);
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 824;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_168);
CHECK_OBJECT(tmp_args_element_value_168);
Py_DECREF(tmp_args_element_value_168);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 824;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto try_return_handler_8;
}
branch_no_72:;
{
bool tmp_condition_result_84;
int tmp_and_left_truth_36;
bool tmp_and_left_value_36;
bool tmp_and_right_value_36;
PyObject *tmp_operand_value_30;
PyObject *tmp_operand_value_31;
if (var_definitive_match_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_definitive_match_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 833;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_operand_value_30 = var_definitive_match_found;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_30);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 833;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_36 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_36 = tmp_and_left_value_36 != false ? 1 : 0;
if (tmp_and_left_truth_36 == 1) {
    goto and_right_36;
} else {
    goto and_left_36;
}
and_right_36:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_operand_value_31 = var_is_multi_byte_decoder;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_31);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 833;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_36 = (tmp_res == 0) ? true : false;
tmp_condition_result_84 = tmp_and_right_value_36;
goto and_end_36;
and_left_36:;
tmp_condition_result_84 = tmp_and_left_value_36;
and_end_36:;
if (tmp_condition_result_84 != false) {
    goto branch_yes_74;
} else {
    goto branch_no_74;
}
}
branch_yes_74:;
{
PyObject *tmp_assign_source_113;
nuitka_bool tmp_condition_result_85;
int tmp_truth_name_32;
PyObject *tmp_called_value_86;
PyObject *tmp_kw_call_arg_value_0_14;
CHECK_OBJECT(var_cd_ratios_merged);
tmp_truth_name_32 = CHECK_IF_TRUE(var_cd_ratios_merged);
if (tmp_truth_name_32 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 836;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_85 = tmp_truth_name_32 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
tmp_called_value_86 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_86 != NULL);
{
PyObject *tmp_assign_source_114;
PyObject *tmp_iter_arg_8;
CHECK_OBJECT(var_cd_ratios_merged);
tmp_iter_arg_8 = var_cd_ratios_merged;
tmp_assign_source_114 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 835;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_114;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_kw_call_arg_value_0_14 = MAKE_GENERATOR_charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_30;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 835;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_14};
    tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_86,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_float_0_0_tuple, 0),
        mod_consts.const_tuple_str_plain_default_tuple
    );
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_14);
Py_DECREF(tmp_kw_call_arg_value_0_14);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 835;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_assign_source_113 = const_float_0_0;
Py_INCREF(tmp_assign_source_113);
condexpr_end_11:;
{
    PyObject *old = var_best_coherence;
    var_best_coherence = tmp_assign_source_113;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_86;
int tmp_and_left_truth_37;
nuitka_bool tmp_and_left_value_37;
nuitka_bool tmp_and_right_value_37;
PyObject *tmp_cmp_expr_left_67;
PyObject *tmp_cmp_expr_right_67;
int tmp_and_left_truth_38;
nuitka_bool tmp_and_left_value_38;
nuitka_bool tmp_and_right_value_38;
PyObject *tmp_cmp_expr_left_68;
PyObject *tmp_cmp_expr_right_68;
PyObject *tmp_cmp_expr_left_69;
PyObject *tmp_cmp_expr_right_69;
CHECK_OBJECT(var_best_coherence);
tmp_cmp_expr_left_67 = var_best_coherence;
tmp_cmp_expr_right_67 = mod_consts.const_float_0_5;
tmp_and_left_value_37 = RICH_COMPARE_GE_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_67, tmp_cmp_expr_right_67);
if (tmp_and_left_value_37 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_truth_37 = tmp_and_left_value_37 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_37 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_37 == 1) {
    goto and_right_37;
} else {
    goto and_left_37;
}
and_right_37:;
tmp_cmp_expr_left_68 = const_str_plain_ascii;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_68 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_68, tmp_cmp_expr_left_68);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_38 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_38 = tmp_and_left_value_38 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_38 == 1) {
    goto and_right_38;
} else {
    goto and_left_38;
}
and_right_38:;
tmp_cmp_expr_left_69 = mod_consts.const_str_plain_utf_8;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_69 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_69, tmp_cmp_expr_left_69);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 839;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_38 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_37 = tmp_and_right_value_38;
goto and_end_38;
and_left_38:;
tmp_and_right_value_37 = tmp_and_left_value_38;
and_end_38:;
tmp_condition_result_86 = tmp_and_right_value_37;
goto and_end_37;
and_left_37:;
tmp_condition_result_86 = tmp_and_left_value_37;
and_end_37:;
if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
    goto branch_yes_75;
} else {
    goto branch_no_75;
}
}
branch_yes_75:;
{
PyObject *tmp_assign_source_115;
tmp_assign_source_115 = Py_True;
{
    PyObject *old = var_definitive_match_found;
    var_definitive_match_found = tmp_assign_source_115;
    Py_INCREF(var_definitive_match_found);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_87;
PyObject *tmp_expression_value_67;
PyObject *tmp_call_result_54;
PyObject *tmp_args_element_value_169;
if (var_definitive_target_languages == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_definitive_target_languages);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 841;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_67 = var_definitive_target_languages;
tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_update);
if (tmp_called_value_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 841;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(var_target_languages);
tmp_args_element_value_169 = var_target_languages;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 841;
tmp_call_result_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_169);
CHECK_OBJECT(tmp_called_value_87);
Py_DECREF(tmp_called_value_87);
if (tmp_call_result_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 841;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_54);
Py_DECREF(tmp_call_result_54);
}
{
PyObject *tmp_called_value_88;
PyObject *tmp_expression_value_68;
PyObject *tmp_call_result_55;
PyObject *tmp_args_element_value_170;
PyObject *tmp_args_element_value_171;
PyObject *tmp_args_element_value_172;
PyObject *tmp_args_element_value_173;
PyObject *tmp_args_element_value_174;
tmp_expression_value_68 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_log);
if (tmp_called_value_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_170 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_170 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_170 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_88);

exception_lineno = 843;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_171 = mod_consts.const_str_digest_aaeb8948e6316096e35e05a7e581c12c;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_172 = var_encoding_iana;
CHECK_OBJECT(var_mean_mess_ratio);
tmp_args_element_value_173 = var_mean_mess_ratio;
CHECK_OBJECT(var_best_coherence);
tmp_args_element_value_174 = var_best_coherence;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 842;
{
    PyObject *call_args[] = {tmp_args_element_value_170, tmp_args_element_value_171, tmp_args_element_value_172, tmp_args_element_value_173, tmp_args_element_value_174};
    tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_88, call_args);
}

CHECK_OBJECT(tmp_called_value_88);
Py_DECREF(tmp_called_value_88);
if (tmp_call_result_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 842;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_55);
Py_DECREF(tmp_call_result_55);
}
branch_no_75:;
branch_no_74:;
{
nuitka_bool tmp_condition_result_87;
int tmp_and_left_truth_39;
nuitka_bool tmp_and_left_value_39;
nuitka_bool tmp_and_right_value_39;
PyObject *tmp_operand_value_32;
int tmp_and_left_truth_40;
nuitka_bool tmp_and_left_value_40;
nuitka_bool tmp_and_right_value_40;
int tmp_truth_name_33;
int tmp_and_left_truth_41;
nuitka_bool tmp_and_left_value_41;
nuitka_bool tmp_and_right_value_41;
int tmp_truth_name_34;
int tmp_and_left_truth_42;
nuitka_bool tmp_and_left_value_42;
nuitka_bool tmp_and_right_value_42;
PyObject *tmp_cmp_expr_left_70;
PyObject *tmp_cmp_expr_right_70;
int tmp_and_left_truth_43;
nuitka_bool tmp_and_left_value_43;
nuitka_bool tmp_and_right_value_43;
PyObject *tmp_cmp_expr_left_71;
PyObject *tmp_cmp_expr_right_71;
PyObject *tmp_len_arg_16;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
int tmp_and_left_truth_44;
nuitka_bool tmp_and_left_value_44;
nuitka_bool tmp_and_right_value_44;
PyObject *tmp_cmp_expr_left_72;
PyObject *tmp_cmp_expr_right_72;
int tmp_and_left_truth_45;
nuitka_bool tmp_and_left_value_45;
nuitka_bool tmp_and_right_value_45;
PyObject *tmp_cmp_expr_left_73;
PyObject *tmp_cmp_expr_right_73;
PyObject *tmp_cmp_expr_left_74;
PyObject *tmp_cmp_expr_right_74;
if (var_mb_definitive_match_found == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mb_definitive_match_found);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 855;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_operand_value_32 = var_mb_definitive_match_found;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_32);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 855;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_39 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_39 = tmp_and_left_value_39 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_39 == 1) {
    goto and_right_39;
} else {
    goto and_left_39;
}
and_right_39:;
CHECK_OBJECT(var_is_multi_byte_decoder);
tmp_truth_name_33 = CHECK_IF_TRUE(var_is_multi_byte_decoder);
if (tmp_truth_name_33 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 856;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_40 = tmp_truth_name_33 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_40 = tmp_and_left_value_40 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_40 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 856;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_40 == 1) {
    goto and_right_40;
} else {
    goto and_left_40;
}
and_right_40:;
CHECK_OBJECT(var_multi_byte_bonus);
tmp_truth_name_34 = CHECK_IF_TRUE(var_multi_byte_bonus);
if (tmp_truth_name_34 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_41 = tmp_truth_name_34 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_41 = tmp_and_left_value_41 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_41 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 857;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_41 == 1) {
    goto and_right_41;
} else {
    goto and_left_41;
}
and_right_41:;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 858;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_left_70 = var_decoded_payload;
tmp_cmp_expr_right_70 = Py_None;
tmp_and_left_value_42 = (tmp_cmp_expr_left_70 != tmp_cmp_expr_right_70) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_42 = tmp_and_left_value_42 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_42 == 1) {
    goto and_right_42;
} else {
    goto and_left_42;
}
and_right_42:;
if (var_decoded_payload == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_16 = var_decoded_payload;
tmp_cmp_expr_left_71 = BUILTIN_LEN(tstate, tmp_len_arg_16);
if (tmp_cmp_expr_left_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_length == NULL) {
Py_DECREF(tmp_cmp_expr_left_71);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_mult_expr_left_5 = var_length;
tmp_mult_expr_right_5 = mod_consts.const_float_0_98;
tmp_cmp_expr_right_71 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
if (tmp_cmp_expr_right_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_71);

exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_43 = RICH_COMPARE_LT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_71, tmp_cmp_expr_right_71);
CHECK_OBJECT(tmp_cmp_expr_left_71);
Py_DECREF(tmp_cmp_expr_left_71);
CHECK_OBJECT(tmp_cmp_expr_right_71);
Py_DECREF(tmp_cmp_expr_right_71);
if (tmp_and_left_value_43 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_truth_43 = tmp_and_left_value_43 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_43 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 859;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_43 == 1) {
    goto and_right_43;
} else {
    goto and_left_43;
}
and_right_43:;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_72 = var_encoding_iana;
tmp_cmp_expr_right_72 = mod_consts.const_frozenset_bd82cbb0e8e60d316828dfdcde7ee48b;
tmp_res = PySet_Contains(tmp_cmp_expr_right_72, tmp_cmp_expr_left_72);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 861;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_44 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_44 = tmp_and_left_value_44 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_44 == 1) {
    goto and_right_44;
} else {
    goto and_left_44;
}
and_right_44:;
tmp_cmp_expr_left_73 = const_str_plain_ascii;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_73 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_73, tmp_cmp_expr_left_73);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 872;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_45 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_45 = tmp_and_left_value_45 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_45 == 1) {
    goto and_right_45;
} else {
    goto and_left_45;
}
and_right_45:;
tmp_cmp_expr_left_74 = mod_consts.const_str_plain_utf_8;
if (var_tested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 873;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_74 = var_tested;
tmp_res = PySet_Contains(tmp_cmp_expr_right_74, tmp_cmp_expr_left_74);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 873;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_45 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_44 = tmp_and_right_value_45;
goto and_end_45;
and_left_45:;
tmp_and_right_value_44 = tmp_and_left_value_45;
and_end_45:;
tmp_and_right_value_43 = tmp_and_right_value_44;
goto and_end_44;
and_left_44:;
tmp_and_right_value_43 = tmp_and_left_value_44;
and_end_44:;
tmp_and_right_value_42 = tmp_and_right_value_43;
goto and_end_43;
and_left_43:;
tmp_and_right_value_42 = tmp_and_left_value_43;
and_end_43:;
tmp_and_right_value_41 = tmp_and_right_value_42;
goto and_end_42;
and_left_42:;
tmp_and_right_value_41 = tmp_and_left_value_42;
and_end_42:;
tmp_and_right_value_40 = tmp_and_right_value_41;
goto and_end_41;
and_left_41:;
tmp_and_right_value_40 = tmp_and_left_value_41;
and_end_41:;
tmp_and_right_value_39 = tmp_and_right_value_40;
goto and_end_40;
and_left_40:;
tmp_and_right_value_39 = tmp_and_left_value_40;
and_end_40:;
tmp_condition_result_87 = tmp_and_right_value_39;
goto and_end_39;
and_left_39:;
tmp_condition_result_87 = tmp_and_left_value_39;
and_end_39:;
if (tmp_condition_result_87 == NUITKA_BOOL_TRUE) {
    goto branch_yes_76;
} else {
    goto branch_no_76;
}
}
branch_yes_76:;
{
PyObject *tmp_assign_source_116;
tmp_assign_source_116 = Py_True;
{
    PyObject *old = var_mb_definitive_match_found;
    var_mb_definitive_match_found = tmp_assign_source_116;
    Py_INCREF(var_mb_definitive_match_found);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_89;
PyObject *tmp_expression_value_69;
PyObject *tmp_call_result_56;
PyObject *tmp_args_element_value_175;
PyObject *tmp_args_element_value_176;
PyObject *tmp_args_element_value_177;
PyObject *tmp_args_element_value_178;
PyObject *tmp_args_element_value_179;
PyObject *tmp_len_arg_17;
PyObject *tmp_args_element_value_180;
PyObject *tmp_args_element_value_181;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_truediv_expr_left_6;
PyObject *tmp_truediv_expr_right_6;
PyObject *tmp_len_arg_18;
tmp_expression_value_69 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain_log);
if (tmp_called_value_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_175 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_175 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_175 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_89);

exception_lineno = 877;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_176 = mod_consts.const_str_digest_4648d1cb5c6098315b07a493a38d43d6;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_177 = var_encoding_iana;
CHECK_OBJECT(var_mean_mess_ratio);
tmp_args_element_value_178 = var_mean_mess_ratio;
if (var_decoded_payload == NULL) {
Py_DECREF(tmp_called_value_89);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 881;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_17 = var_decoded_payload;
tmp_args_element_value_179 = BUILTIN_LEN(tstate, tmp_len_arg_17);
if (tmp_args_element_value_179 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_89);

exception_lineno = 881;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_length == NULL) {
Py_DECREF(tmp_called_value_89);
Py_DECREF(tmp_args_element_value_179);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 882;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_180 = var_length;
if (var_decoded_payload == NULL) {
Py_DECREF(tmp_called_value_89);
Py_DECREF(tmp_args_element_value_179);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_decoded_payload);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_len_arg_18 = var_decoded_payload;
tmp_truediv_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_18);
if (tmp_truediv_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_89);
Py_DECREF(tmp_args_element_value_179);

exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_length == NULL) {
Py_DECREF(tmp_called_value_89);
Py_DECREF(tmp_args_element_value_179);
Py_DECREF(tmp_truediv_expr_left_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_truediv_expr_right_6 = var_length;
tmp_mult_expr_left_6 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
CHECK_OBJECT(tmp_truediv_expr_left_6);
Py_DECREF(tmp_truediv_expr_left_6);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_89);
Py_DECREF(tmp_args_element_value_179);

exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_mult_expr_right_6 = mod_consts.const_int_pos_100;
tmp_args_element_value_181 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_left_6);
Py_DECREF(tmp_mult_expr_left_6);
if (tmp_args_element_value_181 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_89);
Py_DECREF(tmp_args_element_value_179);

exception_lineno = 883;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 876;
{
    PyObject *call_args[] = {tmp_args_element_value_175, tmp_args_element_value_176, tmp_args_element_value_177, tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180, tmp_args_element_value_181};
    tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_89, call_args);
}

CHECK_OBJECT(tmp_called_value_89);
Py_DECREF(tmp_called_value_89);
CHECK_OBJECT(tmp_args_element_value_179);
Py_DECREF(tmp_args_element_value_179);
CHECK_OBJECT(tmp_args_element_value_181);
Py_DECREF(tmp_args_element_value_181);
if (tmp_call_result_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 876;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_56);
Py_DECREF(tmp_call_result_56);
}
branch_no_76:;
{
nuitka_bool tmp_condition_result_88;
PyObject *tmp_cmp_expr_left_75;
PyObject *tmp_cmp_expr_right_75;
CHECK_OBJECT(var_encoding_iana);
tmp_cmp_expr_left_75 = var_encoding_iana;
CHECK_OBJECT(var_sig_encoding);
tmp_cmp_expr_right_75 = var_sig_encoding;
tmp_condition_result_88 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_75, tmp_cmp_expr_right_75);
if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 886;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
    goto branch_yes_77;
} else {
    goto branch_no_77;
}
}
branch_yes_77:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_57;
PyObject *tmp_args_element_value_182;
PyObject *tmp_args_element_value_183;
tmp_called_instance_6 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 887;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_182 = mod_consts.const_str_digest_d4a1adbdb5cb9c226fa09997d1abf7c5;
CHECK_OBJECT(var_encoding_iana);
tmp_args_element_value_183 = var_encoding_iana;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 887;
{
    PyObject *call_args[] = {tmp_args_element_value_182, tmp_args_element_value_183};
    tmp_call_result_57 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_6,
        mod_consts.const_str_plain_debug,
        call_args
    );
}

if (tmp_call_result_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 887;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_57);
Py_DECREF(tmp_call_result_57);
}
{
nuitka_bool tmp_condition_result_89;
int tmp_truth_name_35;
CHECK_OBJECT(par_explain);
tmp_truth_name_35 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_35 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 892;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_89 = tmp_truth_name_35 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
    goto branch_yes_78;
} else {
    goto branch_no_78;
}
}
branch_yes_78:;
{
PyObject *tmp_called_value_90;
PyObject *tmp_expression_value_70;
PyObject *tmp_call_result_58;
PyObject *tmp_args_element_value_184;
tmp_expression_value_70 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_removeHandler);
if (tmp_called_value_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_184 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_184 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_184 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_90);

exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 893;
tmp_call_result_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_184);
CHECK_OBJECT(tmp_called_value_90);
Py_DECREF(tmp_called_value_90);
if (tmp_call_result_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 893;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_58);
Py_DECREF(tmp_call_result_58);
}
{
PyObject *tmp_called_value_91;
PyObject *tmp_expression_value_71;
PyObject *tmp_call_result_59;
PyObject *tmp_args_element_value_185;
tmp_expression_value_71 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 894;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 894;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_previous_logger_level == NULL) {
Py_DECREF(tmp_called_value_91);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_logger_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 894;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_185 = var_previous_logger_level;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 894;
tmp_call_result_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_185);
CHECK_OBJECT(tmp_called_value_91);
Py_DECREF(tmp_called_value_91);
if (tmp_call_result_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 894;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_59);
Py_DECREF(tmp_call_result_59);
}
branch_no_78:;
{
PyObject *tmp_called_value_92;
PyObject *tmp_args_element_value_186;
PyObject *tmp_list_element_12;
PyObject *tmp_expression_value_72;
PyObject *tmp_subscript_value_11;
tmp_called_value_92 = module_var_accessor_charset_normalizer$api$CharsetMatches(tstate);
if (unlikely(tmp_called_value_92 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_called_value_92 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 895;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 895;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_72 = var_results;
CHECK_OBJECT(var_encoding_iana);
tmp_subscript_value_11 = var_encoding_iana;
tmp_list_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_11);
if (tmp_list_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 895;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_186 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_args_element_value_186, 0, tmp_list_element_12);
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 895;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_186);
CHECK_OBJECT(tmp_args_element_value_186);
Py_DECREF(tmp_args_element_value_186);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 895;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto try_return_handler_8;
}
branch_no_77:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_15;
// Return handler code:
try_return_handler_8:;
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
try_except_handler_8:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_90;
PyObject *tmp_cmp_expr_left_76;
nuitka_digit tmp_cmp_expr_right_76;
PyObject *tmp_len_arg_19;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_19 = var_results;
tmp_cmp_expr_left_76 = BUILTIN_LEN(tstate, tmp_len_arg_19);
if (tmp_cmp_expr_left_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 897;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_76 = 0;
tmp_condition_result_90 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_76, tmp_cmp_expr_right_76);
CHECK_OBJECT(tmp_cmp_expr_left_76);
Py_DECREF(tmp_cmp_expr_left_76);
if (tmp_condition_result_90 != false) {
    goto branch_yes_79;
} else {
    goto branch_no_79;
}
}
branch_yes_79:;
{
nuitka_bool tmp_condition_result_91;
int tmp_or_left_truth_7;
nuitka_bool tmp_or_left_value_7;
nuitka_bool tmp_or_right_value_7;
int tmp_truth_name_36;
int tmp_or_left_truth_8;
nuitka_bool tmp_or_left_value_8;
nuitka_bool tmp_or_right_value_8;
int tmp_truth_name_37;
int tmp_truth_name_38;
if (var_fallback_u8 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_u8);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_36 = CHECK_IF_TRUE(var_fallback_u8);
if (tmp_truth_name_36 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_7 = tmp_truth_name_36 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_7 = tmp_or_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_7 == 1) {
    goto or_left_7;
} else {
    goto or_right_7;
}
or_right_7:;
if (var_fallback_ascii == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_ascii);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_37 = CHECK_IF_TRUE(var_fallback_ascii);
if (tmp_truth_name_37 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_8 = tmp_truth_name_37 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_8 = tmp_or_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_8 == 1) {
    goto or_left_8;
} else {
    goto or_right_8;
}
or_right_8:;
if (var_fallback_specified == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_specified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_38 = CHECK_IF_TRUE(var_fallback_specified);
if (tmp_truth_name_38 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 898;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_8 = tmp_truth_name_38 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_right_value_7 = tmp_or_right_value_8;
goto or_end_8;
or_left_8:;
tmp_or_right_value_7 = tmp_or_left_value_8;
or_end_8:;
tmp_condition_result_91 = tmp_or_right_value_7;
goto or_end_7;
or_left_7:;
tmp_condition_result_91 = tmp_or_left_value_7;
or_end_7:;
if (tmp_condition_result_91 == NUITKA_BOOL_TRUE) {
    goto branch_yes_80;
} else {
    goto branch_no_80;
}
}
branch_yes_80:;
{
PyObject *tmp_called_value_93;
PyObject *tmp_expression_value_73;
PyObject *tmp_call_result_60;
PyObject *tmp_args_element_value_187;
PyObject *tmp_args_element_value_188;
tmp_expression_value_73 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 899;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain_log);
if (tmp_called_value_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 899;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_187 = module_var_accessor_charset_normalizer$api$TRACE(tstate);
if (unlikely(tmp_args_element_value_187 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRACE);
}

if (tmp_args_element_value_187 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_93);

exception_lineno = 900;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_188 = mod_consts.const_str_digest_11b47e446d82b048bd97f0dc52fcb489;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 899;
{
    PyObject *call_args[] = {tmp_args_element_value_187, tmp_args_element_value_188};
    tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_93, call_args);
}

CHECK_OBJECT(tmp_called_value_93);
Py_DECREF(tmp_called_value_93);
if (tmp_call_result_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 899;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_60);
Py_DECREF(tmp_call_result_60);
}
branch_no_80:;
{
nuitka_bool tmp_condition_result_92;
int tmp_truth_name_39;
if (var_fallback_specified == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_specified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 904;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_39 = CHECK_IF_TRUE(var_fallback_specified);
if (tmp_truth_name_39 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 904;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_92 = tmp_truth_name_39 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
    goto branch_yes_81;
} else {
    goto branch_no_81;
}
}
branch_yes_81:;
{
PyObject *tmp_called_value_94;
PyObject *tmp_expression_value_74;
PyObject *tmp_call_result_61;
PyObject *tmp_args_element_value_189;
PyObject *tmp_args_element_value_190;
PyObject *tmp_expression_value_75;
tmp_expression_value_74 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 905;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_debug);
if (tmp_called_value_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_189 = mod_consts.const_str_digest_9fdf25b9fb16fb8ccbbd1939e0ed9a3a;
if (var_fallback_specified == NULL) {
Py_DECREF(tmp_called_value_94);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_specified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 907;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_75 = var_fallback_specified;
tmp_args_element_value_190 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, const_str_plain_encoding);
if (tmp_args_element_value_190 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_94);

exception_lineno = 907;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 905;
{
    PyObject *call_args[] = {tmp_args_element_value_189, tmp_args_element_value_190};
    tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_94, call_args);
}

CHECK_OBJECT(tmp_called_value_94);
Py_DECREF(tmp_called_value_94);
CHECK_OBJECT(tmp_args_element_value_190);
Py_DECREF(tmp_args_element_value_190);
if (tmp_call_result_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 905;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_61);
Py_DECREF(tmp_call_result_61);
}
{
PyObject *tmp_called_value_95;
PyObject *tmp_expression_value_76;
PyObject *tmp_call_result_62;
PyObject *tmp_args_element_value_191;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 909;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_76 = var_results;
tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_append);
if (tmp_called_value_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 909;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_fallback_specified == NULL) {
Py_DECREF(tmp_called_value_95);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_specified);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 909;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_191 = var_fallback_specified;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 909;
tmp_call_result_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_191);
CHECK_OBJECT(tmp_called_value_95);
Py_DECREF(tmp_called_value_95);
if (tmp_call_result_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 909;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_62);
Py_DECREF(tmp_call_result_62);
}
goto branch_end_81;
branch_no_81:;
{
nuitka_bool tmp_condition_result_93;
int tmp_or_left_truth_9;
nuitka_bool tmp_or_left_value_9;
nuitka_bool tmp_or_right_value_9;
int tmp_and_left_truth_46;
nuitka_bool tmp_and_left_value_46;
nuitka_bool tmp_and_right_value_46;
int tmp_truth_name_40;
PyObject *tmp_cmp_expr_left_77;
PyObject *tmp_cmp_expr_right_77;
int tmp_or_left_truth_10;
nuitka_bool tmp_or_left_value_10;
nuitka_bool tmp_or_right_value_10;
int tmp_and_left_truth_47;
nuitka_bool tmp_and_left_value_47;
nuitka_bool tmp_and_right_value_47;
int tmp_truth_name_41;
int tmp_and_left_truth_48;
nuitka_bool tmp_and_left_value_48;
nuitka_bool tmp_and_right_value_48;
int tmp_truth_name_42;
PyObject *tmp_cmp_expr_left_78;
PyObject *tmp_cmp_expr_right_78;
PyObject *tmp_expression_value_77;
PyObject *tmp_expression_value_78;
PyObject *tmp_cmp_expr_left_79;
PyObject *tmp_cmp_expr_right_79;
if (var_fallback_u8 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_u8);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_40 = CHECK_IF_TRUE(var_fallback_u8);
if (tmp_truth_name_40 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_46 = tmp_truth_name_40 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_46 = tmp_and_left_value_46 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_46 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_46 == 1) {
    goto and_right_46;
} else {
    goto and_left_46;
}
and_right_46:;
if (var_fallback_ascii == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_ascii);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_77 = var_fallback_ascii;
tmp_cmp_expr_right_77 = Py_None;
tmp_and_right_value_46 = (tmp_cmp_expr_left_77 == tmp_cmp_expr_right_77) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_value_9 = tmp_and_right_value_46;
goto and_end_46;
and_left_46:;
tmp_or_left_value_9 = tmp_and_left_value_46;
and_end_46:;
tmp_or_left_truth_9 = tmp_or_left_value_9 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 911;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_9 == 1) {
    goto or_left_9;
} else {
    goto or_right_9;
}
or_right_9:;
if (var_fallback_u8 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_u8);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 913;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_41 = CHECK_IF_TRUE(var_fallback_u8);
if (tmp_truth_name_41 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 913;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_47 = tmp_truth_name_41 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_47 = tmp_and_left_value_47 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_47 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 913;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_47 == 1) {
    goto and_right_47;
} else {
    goto and_left_47;
}
and_right_47:;
if (var_fallback_ascii == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_ascii);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 914;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_42 = CHECK_IF_TRUE(var_fallback_ascii);
if (tmp_truth_name_42 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 914;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_48 = tmp_truth_name_42 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_48 = tmp_and_left_value_48 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_48 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 914;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_48 == 1) {
    goto and_right_48;
} else {
    goto and_left_48;
}
and_right_48:;
if (var_fallback_u8 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_u8);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 915;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_77 = var_fallback_u8;
tmp_cmp_expr_left_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_fingerprint);
if (tmp_cmp_expr_left_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 915;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_fallback_ascii == NULL) {
Py_DECREF(tmp_cmp_expr_left_78);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_ascii);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 915;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_78 = var_fallback_ascii;
tmp_cmp_expr_right_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_fingerprint);
if (tmp_cmp_expr_right_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_78);

exception_lineno = 915;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_48 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_78, tmp_cmp_expr_right_78);
CHECK_OBJECT(tmp_cmp_expr_left_78);
Py_DECREF(tmp_cmp_expr_left_78);
CHECK_OBJECT(tmp_cmp_expr_right_78);
Py_DECREF(tmp_cmp_expr_right_78);
if (tmp_and_right_value_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 915;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_47 = tmp_and_right_value_48;
goto and_end_48;
and_left_48:;
tmp_and_right_value_47 = tmp_and_left_value_48;
and_end_48:;
tmp_or_left_value_10 = tmp_and_right_value_47;
goto and_end_47;
and_left_47:;
tmp_or_left_value_10 = tmp_and_left_value_47;
and_end_47:;
tmp_or_left_truth_10 = tmp_or_left_value_10 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 915;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_10 == 1) {
    goto or_left_10;
} else {
    goto or_right_10;
}
or_right_10:;
if (var_fallback_u8 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_u8);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 917;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_79 = var_fallback_u8;
tmp_cmp_expr_right_79 = Py_None;
tmp_or_right_value_10 = (tmp_cmp_expr_left_79 != tmp_cmp_expr_right_79) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_9 = tmp_or_right_value_10;
goto or_end_10;
or_left_10:;
tmp_or_right_value_9 = tmp_or_left_value_10;
or_end_10:;
tmp_condition_result_93 = tmp_or_right_value_9;
goto or_end_9;
or_left_9:;
tmp_condition_result_93 = tmp_or_left_value_9;
or_end_9:;
if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
    goto branch_yes_82;
} else {
    goto branch_no_82;
}
}
branch_yes_82:;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_63;
tmp_called_instance_7 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 919;
tmp_call_result_63 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_7,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_835f68db5f319ecdea7ed7bee50f15fb_tuple, 0)
);

if (tmp_call_result_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 919;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_63);
Py_DECREF(tmp_call_result_63);
}
{
PyObject *tmp_called_value_96;
PyObject *tmp_expression_value_79;
PyObject *tmp_call_result_64;
PyObject *tmp_args_element_value_192;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 920;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_79 = var_results;
tmp_called_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_append);
if (tmp_called_value_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_fallback_u8 == NULL) {
Py_DECREF(tmp_called_value_96);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_u8);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 920;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_192 = var_fallback_u8;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 920;
tmp_call_result_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_192);
CHECK_OBJECT(tmp_called_value_96);
Py_DECREF(tmp_called_value_96);
if (tmp_call_result_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 920;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_64);
Py_DECREF(tmp_call_result_64);
}
goto branch_end_82;
branch_no_82:;
{
nuitka_bool tmp_condition_result_94;
int tmp_truth_name_43;
if (var_fallback_ascii == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_ascii);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 921;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_43 = CHECK_IF_TRUE(var_fallback_ascii);
if (tmp_truth_name_43 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 921;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_94 = tmp_truth_name_43 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
    goto branch_yes_83;
} else {
    goto branch_no_83;
}
}
branch_yes_83:;
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_65;
tmp_called_instance_8 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 922;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 922;
tmp_call_result_65 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_8,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_7c73640fdd4b11a8a01e8b1ffb84d345_tuple, 0)
);

if (tmp_call_result_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 922;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_65);
Py_DECREF(tmp_call_result_65);
}
{
PyObject *tmp_called_value_97;
PyObject *tmp_expression_value_80;
PyObject *tmp_call_result_66;
PyObject *tmp_args_element_value_193;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_80 = var_results;
tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain_append);
if (tmp_called_value_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_fallback_ascii == NULL) {
Py_DECREF(tmp_called_value_97);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fallback_ascii);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_193 = var_fallback_ascii;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 923;
tmp_call_result_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_193);
CHECK_OBJECT(tmp_called_value_97);
Py_DECREF(tmp_called_value_97);
if (tmp_call_result_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 923;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_66);
Py_DECREF(tmp_call_result_66);
}
branch_no_83:;
branch_end_82:;
branch_end_81:;
branch_no_79:;
{
nuitka_bool tmp_condition_result_95;
int tmp_truth_name_44;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 925;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_44 = CHECK_IF_TRUE(var_results);
if (tmp_truth_name_44 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 925;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_95 = tmp_truth_name_44 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_95 == NUITKA_BOOL_TRUE) {
    goto branch_yes_84;
} else {
    goto branch_no_84;
}
}
branch_yes_84:;
{
PyObject *tmp_called_value_98;
PyObject *tmp_expression_value_81;
PyObject *tmp_call_result_67;
PyObject *tmp_args_element_value_194;
PyObject *tmp_args_element_value_195;
PyObject *tmp_expression_value_82;
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_196;
PyObject *tmp_sub_expr_left_1;
nuitka_digit tmp_sub_expr_right_1;
PyObject *tmp_len_arg_20;
tmp_expression_value_81 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 926;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_debug);
if (tmp_called_value_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_194 = mod_consts.const_str_digest_430850dd2a6c98048f5c599250181605;
if (var_results == NULL) {
Py_DECREF(tmp_called_value_98);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 928;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_9 = var_results;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 928;
tmp_expression_value_82 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts.const_str_plain_best);
if (tmp_expression_value_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_98);

exception_lineno = 928;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, const_str_plain_encoding);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
if (tmp_args_element_value_195 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_98);

exception_lineno = 928;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_results == NULL) {
Py_DECREF(tmp_called_value_98);
Py_DECREF(tmp_args_element_value_195);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 929;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_20 = var_results;
tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_20);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_98);
Py_DECREF(tmp_args_element_value_195);

exception_lineno = 929;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = 1;
tmp_args_element_value_196 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
assert(!(tmp_args_element_value_196 == NULL));
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 926;
{
    PyObject *call_args[] = {tmp_args_element_value_194, tmp_args_element_value_195, tmp_args_element_value_196};
    tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_98, call_args);
}

CHECK_OBJECT(tmp_called_value_98);
Py_DECREF(tmp_called_value_98);
CHECK_OBJECT(tmp_args_element_value_195);
Py_DECREF(tmp_args_element_value_195);
CHECK_OBJECT(tmp_args_element_value_196);
Py_DECREF(tmp_args_element_value_196);
if (tmp_call_result_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 926;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_67);
Py_DECREF(tmp_call_result_67);
}
goto branch_end_84;
branch_no_84:;
{
PyObject *tmp_called_instance_10;
PyObject *tmp_call_result_68;
tmp_called_instance_10 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 932;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 932;
tmp_call_result_68 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_10,
    mod_consts.const_str_plain_debug,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_430409dfb8f3e447a7605e94ccc69c0b_tuple, 0)
);

if (tmp_call_result_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 932;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_68);
Py_DECREF(tmp_call_result_68);
}
branch_end_84:;
{
nuitka_bool tmp_condition_result_96;
int tmp_truth_name_45;
CHECK_OBJECT(par_explain);
tmp_truth_name_45 = CHECK_IF_TRUE(par_explain);
if (tmp_truth_name_45 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 934;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_96 = tmp_truth_name_45 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
    goto branch_yes_85;
} else {
    goto branch_no_85;
}
}
branch_yes_85:;
{
PyObject *tmp_called_value_99;
PyObject *tmp_expression_value_83;
PyObject *tmp_call_result_69;
PyObject *tmp_args_element_value_197;
tmp_expression_value_83 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_83 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 935;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_removeHandler);
if (tmp_called_value_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 935;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_197 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
if (unlikely(tmp_args_element_value_197 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_explain_handler);
}

if (tmp_args_element_value_197 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_99);

exception_lineno = 935;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 935;
tmp_call_result_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_99, tmp_args_element_value_197);
CHECK_OBJECT(tmp_called_value_99);
Py_DECREF(tmp_called_value_99);
if (tmp_call_result_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 935;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_69);
Py_DECREF(tmp_call_result_69);
}
{
PyObject *tmp_called_value_100;
PyObject *tmp_expression_value_84;
PyObject *tmp_call_result_70;
PyObject *tmp_args_element_value_198;
tmp_expression_value_84 = module_var_accessor_charset_normalizer$api$logger(tstate);
if (unlikely(tmp_expression_value_84 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_84 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 936;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain_setLevel);
if (tmp_called_value_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 936;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_previous_logger_level == NULL) {
Py_DECREF(tmp_called_value_100);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_previous_logger_level);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 936;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_198 = var_previous_logger_level;
frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame.f_lineno = 936;
tmp_call_result_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_198);
CHECK_OBJECT(tmp_called_value_100);
Py_DECREF(tmp_called_value_100);
if (tmp_call_result_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 936;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_70);
Py_DECREF(tmp_call_result_70);
}
branch_no_85:;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 938;
type_description_1 = "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_results;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$api$$$function__2_from_bytes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__2_from_bytes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$api$$$function__2_from_bytes,
    type_description_1,
    par_sequences,
    par_steps,
    par_chunk_size,
    par_threshold,
    par_cp_isolation,
    par_cp_exclusion,
    par_preemptive_behaviour,
    par_explain,
    par_language_threshold,
    par_enable_fallback,
    var_previous_logger_level,
    var_length,
    var_is_too_small_sequence,
    var_is_too_large_sequence,
    var_prioritized_encodings,
    var_specified_encoding,
    var_tested,
    var_tested_but_hard_failure,
    var_tested_but_soft_failure,
    var_soft_failure_skip,
    var_success_fast_tracked,
    var_payload_result_cache,
    var_definitive_match_found,
    var_definitive_target_languages,
    var_post_definitive_sb_success_count,
    var_POST_DEFINITIVE_SB_CAP,
    var_mb_definitive_match_found,
    var_fallback_ascii,
    var_fallback_u8,
    var_fallback_specified,
    var_results,
    var_early_stop_results,
    var_decoded_payload,
    var_bom_or_sig_available,
    var_strip_sig_or_bom,
    var_is_multi_byte_decoder,
    var_deferred_decoding,
    var_multi_byte_bonus,
    var_max_chunk_gave_up,
    var_early_stop_count,
    var_md_chunks,
    var_mean_mess_ratio,
    var_payload_hash,
    var_probable_result,
    var_target_languages,
    var_lg_inclusion,
    var_cached_mess_ratio,
    var_cached_coherence_ratio,
    var_sig_encoding,
    var_sig_payload,
    var_encoding_iana,
    var_enc_languages,
    var_e,
    var_r_,
    var_lazy_str_hard_failure,
    var_md_ratios,
    var_chunk,
    var_fallback_entry,
    var_cached,
    var_cached_mess,
    var_cached_cd,
    var_cached_passed,
    var_fast_match,
    var_cd_ratios,
    var_chunk_languages,
    var_cd_ratios_merged,
    var_current_match,
    var_best_coherence
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$api$$$function__2_from_bytes == cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes);
    cache_frame_frame_charset_normalizer$api$$$function__2_from_bytes = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$api$$$function__2_from_bytes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_steps);
par_steps = NULL;
Py_XDECREF(par_chunk_size);
par_chunk_size = NULL;
Py_XDECREF(par_cp_isolation);
par_cp_isolation = NULL;
CHECK_OBJECT(par_cp_exclusion);
CHECK_OBJECT(par_cp_exclusion);
Py_DECREF(par_cp_exclusion);
par_cp_exclusion = NULL;
Py_XDECREF(var_previous_logger_level);
var_previous_logger_level = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_is_too_small_sequence);
var_is_too_small_sequence = NULL;
Py_XDECREF(var_is_too_large_sequence);
var_is_too_large_sequence = NULL;
Py_XDECREF(var_prioritized_encodings);
var_prioritized_encodings = NULL;
Py_XDECREF(var_specified_encoding);
var_specified_encoding = NULL;
Py_XDECREF(var_tested);
var_tested = NULL;
Py_XDECREF(var_tested_but_hard_failure);
var_tested_but_hard_failure = NULL;
Py_XDECREF(var_tested_but_soft_failure);
var_tested_but_soft_failure = NULL;
Py_XDECREF(var_soft_failure_skip);
var_soft_failure_skip = NULL;
Py_XDECREF(var_success_fast_tracked);
var_success_fast_tracked = NULL;
Py_XDECREF(var_payload_result_cache);
var_payload_result_cache = NULL;
Py_XDECREF(var_definitive_match_found);
var_definitive_match_found = NULL;
Py_XDECREF(var_definitive_target_languages);
var_definitive_target_languages = NULL;
Py_XDECREF(var_post_definitive_sb_success_count);
var_post_definitive_sb_success_count = NULL;
Py_XDECREF(var_POST_DEFINITIVE_SB_CAP);
var_POST_DEFINITIVE_SB_CAP = NULL;
Py_XDECREF(var_mb_definitive_match_found);
var_mb_definitive_match_found = NULL;
Py_XDECREF(var_fallback_ascii);
var_fallback_ascii = NULL;
Py_XDECREF(var_fallback_u8);
var_fallback_u8 = NULL;
Py_XDECREF(var_fallback_specified);
var_fallback_specified = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_early_stop_results);
var_early_stop_results = NULL;
Py_XDECREF(var_decoded_payload);
var_decoded_payload = NULL;
Py_XDECREF(var_bom_or_sig_available);
var_bom_or_sig_available = NULL;
Py_XDECREF(var_strip_sig_or_bom);
var_strip_sig_or_bom = NULL;
Py_XDECREF(var_is_multi_byte_decoder);
var_is_multi_byte_decoder = NULL;
Py_XDECREF(var_deferred_decoding);
var_deferred_decoding = NULL;
Py_XDECREF(var_multi_byte_bonus);
var_multi_byte_bonus = NULL;
Py_XDECREF(var_max_chunk_gave_up);
var_max_chunk_gave_up = NULL;
Py_XDECREF(var_early_stop_count);
var_early_stop_count = NULL;
Py_XDECREF(var_md_chunks);
var_md_chunks = NULL;
Py_XDECREF(var_mean_mess_ratio);
var_mean_mess_ratio = NULL;
Py_XDECREF(var_payload_hash);
var_payload_hash = NULL;
Py_XDECREF(var_probable_result);
var_probable_result = NULL;
Py_XDECREF(var_target_languages);
var_target_languages = NULL;
Py_XDECREF(var_lg_inclusion);
var_lg_inclusion = NULL;
Py_XDECREF(var_cached_mess_ratio);
var_cached_mess_ratio = NULL;
Py_XDECREF(var_cached_coherence_ratio);
var_cached_coherence_ratio = NULL;
Py_XDECREF(var_sig_encoding);
var_sig_encoding = NULL;
Py_XDECREF(var_sig_payload);
var_sig_payload = NULL;
Py_XDECREF(var_encoding_iana);
var_encoding_iana = NULL;
Py_XDECREF(var_enc_languages);
var_enc_languages = NULL;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_r_);
var_r_ = NULL;
Py_XDECREF(var_lazy_str_hard_failure);
var_lazy_str_hard_failure = NULL;
Py_XDECREF(var_md_ratios);
var_md_ratios = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_fallback_entry);
var_fallback_entry = NULL;
Py_XDECREF(var_cached);
var_cached = NULL;
Py_XDECREF(var_cached_mess);
var_cached_mess = NULL;
Py_XDECREF(var_cached_cd);
var_cached_cd = NULL;
Py_XDECREF(var_cached_passed);
var_cached_passed = NULL;
Py_XDECREF(var_fast_match);
var_fast_match = NULL;
Py_XDECREF(var_cd_ratios);
var_cd_ratios = NULL;
Py_XDECREF(var_chunk_languages);
var_chunk_languages = NULL;
Py_XDECREF(var_cd_ratios_merged);
var_cd_ratios_merged = NULL;
Py_XDECREF(var_current_match);
var_current_match = NULL;
Py_XDECREF(var_best_coherence);
var_best_coherence = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_steps);
par_steps = NULL;
Py_XDECREF(par_chunk_size);
par_chunk_size = NULL;
Py_XDECREF(par_cp_isolation);
par_cp_isolation = NULL;
Py_XDECREF(par_cp_exclusion);
par_cp_exclusion = NULL;
Py_XDECREF(var_previous_logger_level);
var_previous_logger_level = NULL;
Py_XDECREF(var_length);
var_length = NULL;
Py_XDECREF(var_is_too_small_sequence);
var_is_too_small_sequence = NULL;
Py_XDECREF(var_is_too_large_sequence);
var_is_too_large_sequence = NULL;
Py_XDECREF(var_prioritized_encodings);
var_prioritized_encodings = NULL;
Py_XDECREF(var_specified_encoding);
var_specified_encoding = NULL;
Py_XDECREF(var_tested);
var_tested = NULL;
Py_XDECREF(var_tested_but_hard_failure);
var_tested_but_hard_failure = NULL;
Py_XDECREF(var_tested_but_soft_failure);
var_tested_but_soft_failure = NULL;
Py_XDECREF(var_soft_failure_skip);
var_soft_failure_skip = NULL;
Py_XDECREF(var_success_fast_tracked);
var_success_fast_tracked = NULL;
Py_XDECREF(var_payload_result_cache);
var_payload_result_cache = NULL;
Py_XDECREF(var_definitive_match_found);
var_definitive_match_found = NULL;
Py_XDECREF(var_definitive_target_languages);
var_definitive_target_languages = NULL;
Py_XDECREF(var_post_definitive_sb_success_count);
var_post_definitive_sb_success_count = NULL;
Py_XDECREF(var_POST_DEFINITIVE_SB_CAP);
var_POST_DEFINITIVE_SB_CAP = NULL;
Py_XDECREF(var_mb_definitive_match_found);
var_mb_definitive_match_found = NULL;
Py_XDECREF(var_fallback_ascii);
var_fallback_ascii = NULL;
Py_XDECREF(var_fallback_u8);
var_fallback_u8 = NULL;
Py_XDECREF(var_fallback_specified);
var_fallback_specified = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_early_stop_results);
var_early_stop_results = NULL;
Py_XDECREF(var_decoded_payload);
var_decoded_payload = NULL;
Py_XDECREF(var_bom_or_sig_available);
var_bom_or_sig_available = NULL;
Py_XDECREF(var_strip_sig_or_bom);
var_strip_sig_or_bom = NULL;
Py_XDECREF(var_is_multi_byte_decoder);
var_is_multi_byte_decoder = NULL;
Py_XDECREF(var_deferred_decoding);
var_deferred_decoding = NULL;
Py_XDECREF(var_multi_byte_bonus);
var_multi_byte_bonus = NULL;
Py_XDECREF(var_max_chunk_gave_up);
var_max_chunk_gave_up = NULL;
Py_XDECREF(var_early_stop_count);
var_early_stop_count = NULL;
Py_XDECREF(var_md_chunks);
var_md_chunks = NULL;
Py_XDECREF(var_mean_mess_ratio);
var_mean_mess_ratio = NULL;
Py_XDECREF(var_payload_hash);
var_payload_hash = NULL;
Py_XDECREF(var_probable_result);
var_probable_result = NULL;
Py_XDECREF(var_target_languages);
var_target_languages = NULL;
Py_XDECREF(var_lg_inclusion);
var_lg_inclusion = NULL;
Py_XDECREF(var_cached_mess_ratio);
var_cached_mess_ratio = NULL;
Py_XDECREF(var_cached_coherence_ratio);
var_cached_coherence_ratio = NULL;
Py_XDECREF(var_sig_encoding);
var_sig_encoding = NULL;
Py_XDECREF(var_sig_payload);
var_sig_payload = NULL;
Py_XDECREF(var_encoding_iana);
var_encoding_iana = NULL;
Py_XDECREF(var_enc_languages);
var_enc_languages = NULL;
Py_XDECREF(var_e);
var_e = NULL;
Py_XDECREF(var_r_);
var_r_ = NULL;
Py_XDECREF(var_lazy_str_hard_failure);
var_lazy_str_hard_failure = NULL;
Py_XDECREF(var_md_ratios);
var_md_ratios = NULL;
Py_XDECREF(var_chunk);
var_chunk = NULL;
Py_XDECREF(var_fallback_entry);
var_fallback_entry = NULL;
Py_XDECREF(var_cached);
var_cached = NULL;
Py_XDECREF(var_cached_mess);
var_cached_mess = NULL;
Py_XDECREF(var_cached_cd);
var_cached_cd = NULL;
Py_XDECREF(var_cached_passed);
var_cached_passed = NULL;
Py_XDECREF(var_fast_match);
var_fast_match = NULL;
Py_XDECREF(var_cd_ratios);
var_cd_ratios = NULL;
Py_XDECREF(var_chunk_languages);
var_chunk_languages = NULL;
Py_XDECREF(var_cd_ratios_merged);
var_cd_ratios_merged = NULL;
Py_XDECREF(var_current_match);
var_current_match = NULL;
Py_XDECREF(var_best_coherence);
var_best_coherence = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sequences);
Py_DECREF(par_sequences);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sequences);
Py_DECREF(par_sequences);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr_locals {
PyObject *var__;
PyObject *var_v;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr_locals *generator_heap = (struct charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var__ = NULL;
generator_heap->var_v = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ee3446bd73cc052cccb60fd5c86d00c9, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 835;
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


generator_heap->exception_lineno = 835;
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



generator_heap->exception_lineno = 835;
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



generator_heap->exception_lineno = 835;
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



generator_heap->exception_lineno = 835;
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
    PyObject *old = generator_heap->var__;
    generator_heap->var__ = tmp_assign_source_5;
    Py_INCREF(generator_heap->var__);
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
    PyObject *old = generator_heap->var_v;
    generator_heap->var_v = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_v);
tmp_expression_value_1 = generator_heap->var_v;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 835;
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


generator_heap->exception_lineno = 835;
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
    generator_heap->var__,
    generator_heap->var_v
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

Py_XDECREF(generator_heap->var__);
generator_heap->var__ = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var__);
generator_heap->var__ = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr_context,
        module_charset_normalizer$api,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_bf36e44462d169f1fb198435587ea17f,
#endif
        code_objects_ee3446bd73cc052cccb60fd5c86d00c9,
        closure,
        1,
#if 1
        sizeof(struct charset_normalizer$api$$$function__2_from_bytes$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_charset_normalizer$api$$$function__3_from_fp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_fp = python_pars[0];
PyObject *par_steps = python_pars[1];
PyObject *par_chunk_size = python_pars[2];
PyObject *par_threshold = python_pars[3];
PyObject *par_cp_isolation = python_pars[4];
PyObject *par_cp_exclusion = python_pars[5];
PyObject *par_preemptive_behaviour = python_pars[6];
PyObject *par_explain = python_pars[7];
PyObject *par_language_threshold = python_pars[8];
PyObject *par_enable_fallback = python_pars[9];
struct Nuitka_FrameObject *frame_frame_charset_normalizer$api$$$function__3_from_fp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$api$$$function__3_from_fp = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_charset_normalizer$api$$$function__3_from_fp)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$api$$$function__3_from_fp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$api$$$function__3_from_fp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$api$$$function__3_from_fp = MAKE_FUNCTION_FRAME(tstate, code_objects_57edc95c756625795321d812d0fbaea4, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$api$$$function__3_from_fp->m_type_description == NULL);
frame_frame_charset_normalizer$api$$$function__3_from_fp = cache_frame_frame_charset_normalizer$api$$$function__3_from_fp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$api$$$function__3_from_fp);
assert(Py_REFCNT(frame_frame_charset_normalizer$api$$$function__3_from_fp) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_1 = module_var_accessor_charset_normalizer$api$from_bytes(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_bytes);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 957;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fp);
tmp_called_instance_1 = par_fp;
frame_frame_charset_normalizer$api$$$function__3_from_fp->m_frame.f_lineno = 958;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_read);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 958;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_steps);
tmp_args_element_value_2 = par_steps;
CHECK_OBJECT(par_chunk_size);
tmp_args_element_value_3 = par_chunk_size;
CHECK_OBJECT(par_threshold);
tmp_args_element_value_4 = par_threshold;
CHECK_OBJECT(par_cp_isolation);
tmp_args_element_value_5 = par_cp_isolation;
CHECK_OBJECT(par_cp_exclusion);
tmp_args_element_value_6 = par_cp_exclusion;
CHECK_OBJECT(par_preemptive_behaviour);
tmp_args_element_value_7 = par_preemptive_behaviour;
CHECK_OBJECT(par_explain);
tmp_args_element_value_8 = par_explain;
CHECK_OBJECT(par_language_threshold);
tmp_args_element_value_9 = par_language_threshold;
CHECK_OBJECT(par_enable_fallback);
tmp_args_element_value_10 = par_enable_fallback;
frame_frame_charset_normalizer$api$$$function__3_from_fp->m_frame.f_lineno = 957;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 957;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__3_from_fp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$api$$$function__3_from_fp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__3_from_fp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$api$$$function__3_from_fp,
    type_description_1,
    par_fp,
    par_steps,
    par_chunk_size,
    par_threshold,
    par_cp_isolation,
    par_cp_exclusion,
    par_preemptive_behaviour,
    par_explain,
    par_language_threshold,
    par_enable_fallback
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$api$$$function__3_from_fp == cache_frame_frame_charset_normalizer$api$$$function__3_from_fp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$api$$$function__3_from_fp);
    cache_frame_frame_charset_normalizer$api$$$function__3_from_fp = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$api$$$function__3_from_fp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_cp_isolation);
Py_DECREF(par_cp_isolation);
CHECK_OBJECT(par_cp_exclusion);
Py_DECREF(par_cp_exclusion);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_fp);
Py_DECREF(par_fp);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_cp_isolation);
Py_DECREF(par_cp_isolation);
CHECK_OBJECT(par_cp_exclusion);
Py_DECREF(par_cp_exclusion);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$api$$$function__4_from_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *par_steps = python_pars[1];
PyObject *par_chunk_size = python_pars[2];
PyObject *par_threshold = python_pars[3];
PyObject *par_cp_isolation = python_pars[4];
PyObject *par_cp_exclusion = python_pars[5];
PyObject *par_preemptive_behaviour = python_pars[6];
PyObject *par_explain = python_pars[7];
PyObject *par_language_threshold = python_pars[8];
PyObject *par_enable_fallback = python_pars[9];
PyObject *var_fp = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$api$$$function__4_from_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$api$$$function__4_from_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$api$$$function__4_from_path)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$api$$$function__4_from_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$api$$$function__4_from_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$api$$$function__4_from_path = MAKE_FUNCTION_FRAME(tstate, code_objects_de8c7cef865d3e53703f23deac0e40f8, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$api$$$function__4_from_path->m_type_description == NULL);
frame_frame_charset_normalizer$api$$$function__4_from_path = cache_frame_frame_charset_normalizer$api$$$function__4_from_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$api$$$function__4_from_path);
assert(Py_REFCNT(frame_frame_charset_normalizer$api$$$function__4_from_path) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(par_path);
tmp_open_filename_1 = par_path;
tmp_open_mode_1 = const_str_plain_rb;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 987;
type_description_1 = "ooooooooooo";
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


exception_lineno = 987;
type_description_1 = "ooooooooooo";
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


exception_lineno = 987;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame.f_lineno = 987;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 987;
type_description_1 = "ooooooooooo";
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
    PyObject *old = var_fp;
    var_fp = tmp_assign_source_5;
    Py_INCREF(var_fp);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_2 = module_var_accessor_charset_normalizer$api$from_fp(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_fp);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 988;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_fp);
tmp_args_element_value_1 = var_fp;
CHECK_OBJECT(par_steps);
tmp_args_element_value_2 = par_steps;
CHECK_OBJECT(par_chunk_size);
tmp_args_element_value_3 = par_chunk_size;
CHECK_OBJECT(par_threshold);
tmp_args_element_value_4 = par_threshold;
CHECK_OBJECT(par_cp_isolation);
tmp_args_element_value_5 = par_cp_isolation;
CHECK_OBJECT(par_cp_exclusion);
tmp_args_element_value_6 = par_cp_exclusion;
CHECK_OBJECT(par_preemptive_behaviour);
tmp_args_element_value_7 = par_preemptive_behaviour;
CHECK_OBJECT(par_explain);
tmp_args_element_value_8 = par_explain;
CHECK_OBJECT(par_language_threshold);
tmp_args_element_value_9 = par_language_threshold;
CHECK_OBJECT(par_enable_fallback);
tmp_args_element_value_10 = par_enable_fallback;
frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame.f_lineno = 988;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 988;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__4_from_path, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__4_from_path, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
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
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_11 = EXC_TYPE(tstate);
tmp_args_element_value_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_12); 
tmp_args_element_value_13 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_13 == NULL) {
    tmp_args_element_value_13 = Py_None;
}
frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame.f_lineno = 987;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 987;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 987;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
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
    exception_lineno = 987;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 987;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame)) {
        frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_5;
branch_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_3;
// Return handler code:
try_return_handler_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame.f_lineno = 987;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 987;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame.f_lineno = 987;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 987;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
goto try_end_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__4_from_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$api$$$function__4_from_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__4_from_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$api$$$function__4_from_path,
    type_description_1,
    par_path,
    par_steps,
    par_chunk_size,
    par_threshold,
    par_cp_isolation,
    par_cp_exclusion,
    par_preemptive_behaviour,
    par_explain,
    par_language_threshold,
    par_enable_fallback,
    var_fp
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$api$$$function__4_from_path == cache_frame_frame_charset_normalizer$api$$$function__4_from_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$api$$$function__4_from_path);
    cache_frame_frame_charset_normalizer$api$$$function__4_from_path = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$api$$$function__4_from_path);

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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_fp);
CHECK_OBJECT(var_fp);
Py_DECREF(var_fp);
var_fp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fp);
var_fp = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_cp_isolation);
Py_DECREF(par_cp_isolation);
CHECK_OBJECT(par_cp_exclusion);
Py_DECREF(par_cp_exclusion);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_cp_isolation);
Py_DECREF(par_cp_isolation);
CHECK_OBJECT(par_cp_exclusion);
Py_DECREF(par_cp_exclusion);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_charset_normalizer$api$$$function__5_is_binary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_fp_or_path_or_payload = python_pars[0];
PyObject *par_steps = python_pars[1];
PyObject *par_chunk_size = python_pars[2];
PyObject *par_threshold = python_pars[3];
PyObject *par_cp_isolation = python_pars[4];
PyObject *par_cp_exclusion = python_pars[5];
PyObject *par_preemptive_behaviour = python_pars[6];
PyObject *par_explain = python_pars[7];
PyObject *par_language_threshold = python_pars[8];
PyObject *par_enable_fallback = python_pars[9];
PyObject *var_guesses = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$api$$$function__5_is_binary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_charset_normalizer$api$$$function__5_is_binary = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_charset_normalizer$api$$$function__5_is_binary)) {
    Py_XDECREF(cache_frame_frame_charset_normalizer$api$$$function__5_is_binary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_charset_normalizer$api$$$function__5_is_binary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_charset_normalizer$api$$$function__5_is_binary = MAKE_FUNCTION_FRAME(tstate, code_objects_1105410c447262331db03bf6ac19613d, module_charset_normalizer$api, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_charset_normalizer$api$$$function__5_is_binary->m_type_description == NULL);
frame_frame_charset_normalizer$api$$$function__5_is_binary = cache_frame_frame_charset_normalizer$api$$$function__5_is_binary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$api$$$function__5_is_binary);
assert(Py_REFCNT(frame_frame_charset_normalizer$api$$$function__5_is_binary) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_fp_or_path_or_payload);
tmp_isinstance_inst_1 = par_fp_or_path_or_payload;
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_charset_normalizer$api$PathLike(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PathLike);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1019;
type_description_1 = "ooooooooooo";
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


exception_lineno = 1019;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
tmp_called_value_1 = module_var_accessor_charset_normalizer$api$from_path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1020;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fp_or_path_or_payload);
tmp_kw_call_arg_value_0_1 = par_fp_or_path_or_payload;
CHECK_OBJECT(par_steps);
tmp_kw_call_dict_value_0_1 = par_steps;
CHECK_OBJECT(par_chunk_size);
tmp_kw_call_dict_value_1_1 = par_chunk_size;
CHECK_OBJECT(par_threshold);
tmp_kw_call_dict_value_2_1 = par_threshold;
CHECK_OBJECT(par_cp_isolation);
tmp_kw_call_dict_value_3_1 = par_cp_isolation;
CHECK_OBJECT(par_cp_exclusion);
tmp_kw_call_dict_value_4_1 = par_cp_exclusion;
CHECK_OBJECT(par_preemptive_behaviour);
tmp_kw_call_dict_value_5_1 = par_preemptive_behaviour;
CHECK_OBJECT(par_explain);
tmp_kw_call_dict_value_6_1 = par_explain;
CHECK_OBJECT(par_language_threshold);
tmp_kw_call_dict_value_7_1 = par_language_threshold;
CHECK_OBJECT(par_enable_fallback);
tmp_kw_call_dict_value_8_1 = par_enable_fallback;
frame_frame_charset_normalizer$api$$$function__5_is_binary->m_frame.f_lineno = 1020;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1020;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_guesses;
    var_guesses = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_fp_or_path_or_payload);
tmp_isinstance_inst_2 = par_fp_or_path_or_payload;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1032;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_kw_call_dict_value_3_2;
PyObject *tmp_kw_call_dict_value_4_2;
PyObject *tmp_kw_call_dict_value_5_2;
PyObject *tmp_kw_call_dict_value_6_2;
PyObject *tmp_kw_call_dict_value_7_2;
PyObject *tmp_kw_call_dict_value_8_2;
tmp_called_value_2 = module_var_accessor_charset_normalizer$api$from_bytes(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_bytes);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1039;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fp_or_path_or_payload);
tmp_kw_call_arg_value_0_2 = par_fp_or_path_or_payload;
CHECK_OBJECT(par_steps);
tmp_kw_call_dict_value_0_2 = par_steps;
CHECK_OBJECT(par_chunk_size);
tmp_kw_call_dict_value_1_2 = par_chunk_size;
CHECK_OBJECT(par_threshold);
tmp_kw_call_dict_value_2_2 = par_threshold;
CHECK_OBJECT(par_cp_isolation);
tmp_kw_call_dict_value_3_2 = par_cp_isolation;
CHECK_OBJECT(par_cp_exclusion);
tmp_kw_call_dict_value_4_2 = par_cp_exclusion;
CHECK_OBJECT(par_preemptive_behaviour);
tmp_kw_call_dict_value_5_2 = par_preemptive_behaviour;
CHECK_OBJECT(par_explain);
tmp_kw_call_dict_value_6_2 = par_explain;
CHECK_OBJECT(par_language_threshold);
tmp_kw_call_dict_value_7_2 = par_language_threshold;
CHECK_OBJECT(par_enable_fallback);
tmp_kw_call_dict_value_8_2 = par_enable_fallback;
frame_frame_charset_normalizer$api$$$function__5_is_binary->m_frame.f_lineno = 1039;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2, tmp_kw_call_dict_value_5_2, tmp_kw_call_dict_value_6_2, tmp_kw_call_dict_value_7_2, tmp_kw_call_dict_value_8_2};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1039;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_guesses;
    var_guesses = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_kw_call_dict_value_2_3;
PyObject *tmp_kw_call_dict_value_3_3;
PyObject *tmp_kw_call_dict_value_4_3;
PyObject *tmp_kw_call_dict_value_5_3;
PyObject *tmp_kw_call_dict_value_6_3;
PyObject *tmp_kw_call_dict_value_7_3;
PyObject *tmp_kw_call_dict_value_8_3;
tmp_called_value_3 = module_var_accessor_charset_normalizer$api$from_fp(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_fp);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1052;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fp_or_path_or_payload);
tmp_kw_call_arg_value_0_3 = par_fp_or_path_or_payload;
CHECK_OBJECT(par_steps);
tmp_kw_call_dict_value_0_3 = par_steps;
CHECK_OBJECT(par_chunk_size);
tmp_kw_call_dict_value_1_3 = par_chunk_size;
CHECK_OBJECT(par_threshold);
tmp_kw_call_dict_value_2_3 = par_threshold;
CHECK_OBJECT(par_cp_isolation);
tmp_kw_call_dict_value_3_3 = par_cp_isolation;
CHECK_OBJECT(par_cp_exclusion);
tmp_kw_call_dict_value_4_3 = par_cp_exclusion;
CHECK_OBJECT(par_preemptive_behaviour);
tmp_kw_call_dict_value_5_3 = par_preemptive_behaviour;
CHECK_OBJECT(par_explain);
tmp_kw_call_dict_value_6_3 = par_explain;
CHECK_OBJECT(par_language_threshold);
tmp_kw_call_dict_value_7_3 = par_language_threshold;
CHECK_OBJECT(par_enable_fallback);
tmp_kw_call_dict_value_8_3 = par_enable_fallback;
frame_frame_charset_normalizer$api$$$function__5_is_binary->m_frame.f_lineno = 1052;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[9] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3, tmp_kw_call_dict_value_4_3, tmp_kw_call_dict_value_5_3, tmp_kw_call_dict_value_6_3, tmp_kw_call_dict_value_7_3, tmp_kw_call_dict_value_8_3};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_6fa2f4b7d8763bb47ed3760b3258bff5_tuple);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1052;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_guesses;
    var_guesses = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_guesses);
tmp_operand_value_1 = var_guesses;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1065;
type_description_1 = "ooooooooooo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api$$$function__5_is_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$api$$$function__5_is_binary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api$$$function__5_is_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_charset_normalizer$api$$$function__5_is_binary,
    type_description_1,
    par_fp_or_path_or_payload,
    par_steps,
    par_chunk_size,
    par_threshold,
    par_cp_isolation,
    par_cp_exclusion,
    par_preemptive_behaviour,
    par_explain,
    par_language_threshold,
    par_enable_fallback,
    var_guesses
);


// Release cached frame if used for exception.
if (frame_frame_charset_normalizer$api$$$function__5_is_binary == cache_frame_frame_charset_normalizer$api$$$function__5_is_binary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_charset_normalizer$api$$$function__5_is_binary);
    cache_frame_frame_charset_normalizer$api$$$function__5_is_binary = NULL;
}

assertFrameObject(frame_frame_charset_normalizer$api$$$function__5_is_binary);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_guesses);
CHECK_OBJECT(var_guesses);
Py_DECREF(var_guesses);
var_guesses = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_guesses);
var_guesses = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_fp_or_path_or_payload);
Py_DECREF(par_fp_or_path_or_payload);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_cp_isolation);
Py_DECREF(par_cp_isolation);
CHECK_OBJECT(par_cp_exclusion);
Py_DECREF(par_cp_exclusion);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_fp_or_path_or_payload);
Py_DECREF(par_fp_or_path_or_payload);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);
CHECK_OBJECT(par_chunk_size);
Py_DECREF(par_chunk_size);
CHECK_OBJECT(par_threshold);
Py_DECREF(par_threshold);
CHECK_OBJECT(par_cp_isolation);
Py_DECREF(par_cp_isolation);
CHECK_OBJECT(par_cp_exclusion);
Py_DECREF(par_cp_exclusion);
CHECK_OBJECT(par_preemptive_behaviour);
Py_DECREF(par_preemptive_behaviour);
CHECK_OBJECT(par_explain);
Py_DECREF(par_explain);
CHECK_OBJECT(par_language_threshold);
Py_DECREF(par_language_threshold);
CHECK_OBJECT(par_enable_fallback);
Py_DECREF(par_enable_fallback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_976d5addd46db99887e42d64c2a3ac8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_charset_normalizer$api,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__2_from_bytes(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__2_from_bytes,
        mod_consts.const_str_plain_from_bytes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7fce404aab87146560afe9a288cae124,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts.const_str_digest_53a87fa1d88648de9fe0e0a50b999d3a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__3_from_fp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__3_from_fp,
        mod_consts.const_str_plain_from_fp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_57edc95c756625795321d812d0fbaea4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts.const_str_digest_3ea5c437cdd511f982671e3b76b758da,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__4_from_path(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__4_from_path,
        mod_consts.const_str_plain_from_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_de8c7cef865d3e53703f23deac0e40f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts.const_str_digest_abaa23a8d807105d2803e0cc164fa6fb,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_charset_normalizer$api$$$function__5_is_binary(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_charset_normalizer$api$$$function__5_is_binary,
        mod_consts.const_str_plain_is_binary,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1105410c447262331db03bf6ac19613d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_charset_normalizer$api,
        mod_consts.const_str_digest_99580df93a3cc940a175c4c6e0bdef9e,
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

static function_impl_code const function_table_charset_normalizer$api[] = {
impl_charset_normalizer$api$$$function__1_lambda,
impl_charset_normalizer$api$$$function__2_from_bytes,
impl_charset_normalizer$api$$$function__3_from_fp,
impl_charset_normalizer$api$$$function__4_from_path,
impl_charset_normalizer$api$$$function__5_is_binary,
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

    return Nuitka_Function_GetFunctionState(function, function_table_charset_normalizer$api);
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
        module_charset_normalizer$api,
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
        function_table_charset_normalizer$api,
        sizeof(function_table_charset_normalizer$api) / sizeof(function_impl_code)
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
static char const *module_full_name = "charset_normalizer.api";
#endif

// Internal entry point for module code.
PyObject *module_code_charset_normalizer$api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("charset_normalizer$api");

    // Store the module for future use.
    module_charset_normalizer$api = module;

    moduledict_charset_normalizer$api = MODULE_DICT(module_charset_normalizer$api);

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
        PRINT_STRING("charset_normalizer$api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("charset_normalizer$api: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("charset_normalizer$api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer.api" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcharset_normalizer$api\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_charset_normalizer$api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_charset_normalizer$api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_charset_normalizer$api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_charset_normalizer$api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_charset_normalizer$api);
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

        UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_charset_normalizer$api;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_charset_normalizer$api = MAKE_MODULE_FRAME(code_objects_e24aded9a8bce952c9b74c92304c57b4, module_charset_normalizer$api);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_charset_normalizer$api);
assert(Py_REFCNT(frame_frame_charset_normalizer$api) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_charset_normalizer$api$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_charset_normalizer$api$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_1 = (PyObject *)moduledict_charset_normalizer$api;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_charset_normalizer$api->m_frame.f_lineno = 3;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_OS();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_PathLike,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_PathLike);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_PathLike, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_BinaryIO,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_BinaryIO);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_BinaryIO, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_cd;
tmp_globals_arg_value_2 = (PyObject *)moduledict_charset_normalizer$api;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_5ebaf309111f2eca303438c5b6cf25b6_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_charset_normalizer$api->m_frame.f_lineno = 8;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_coherence_ratio,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_coherence_ratio);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_coherence_ratio, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_encoding_languages,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_encoding_languages);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_encoding_languages, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_mb_encoding_languages,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_mb_encoding_languages);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mb_encoding_languages, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_merge_coherence_ratios,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_merge_coherence_ratios);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_merge_coherence_ratios, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_constant;
tmp_globals_arg_value_3 = (PyObject *)moduledict_charset_normalizer$api;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_2b3095ee2b0b616e5e84d5d75b4dd970_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_charset_normalizer$api->m_frame.f_lineno = 14;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_IANA_SUPPORTED,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_IANA_SUPPORTED);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_SIMILAR, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_TOO_BIG_SEQUENCE,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_TOO_BIG_SEQUENCE);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_BIG_SEQUENCE, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_TOO_SMALL_SEQUENCE,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_TOO_SMALL_SEQUENCE);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TOO_SMALL_SEQUENCE, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_TRACE,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_TRACE);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_TRACE, tmp_assign_source_21);
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
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_md;
tmp_globals_arg_value_4 = (PyObject *)moduledict_charset_normalizer$api;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_mess_ratio_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_charset_normalizer$api->m_frame.f_lineno = 21;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_mess_ratio,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_mess_ratio);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_mess_ratio, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_models;
tmp_globals_arg_value_5 = (PyObject *)moduledict_charset_normalizer$api;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_CharsetMatch_str_plain_CharsetMatches_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_charset_normalizer$api->m_frame.f_lineno = 22;
tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_CharsetMatch,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_CharsetMatch);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatch, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_CharsetMatches,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_CharsetMatches);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_CharsetMatches, tmp_assign_source_25);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_charset_normalizer$api;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_b92287d58414a94f5f69115f56d701d4_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_charset_normalizer$api->m_frame.f_lineno = 23;
tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_any_specified_encoding,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_any_specified_encoding);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_any_specified_encoding, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_cut_sequence_chunks,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_cut_sequence_chunks);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_cut_sequence_chunks, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_18 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_iana_name,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_iana_name);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_iana_name, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_identify_sig_or_bom,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_identify_sig_or_bom);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_identify_sig_or_bom, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_is_multi_byte_encoding,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_is_multi_byte_encoding);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_is_multi_byte_encoding, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_21 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_charset_normalizer$api,
        mod_consts.const_str_plain_should_strip_sig_or_bom,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_should_strip_sig_or_bom);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_should_strip_sig_or_bom, tmp_assign_source_32);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_charset_normalizer$api$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api->m_frame.f_lineno = 32;
tmp_assign_source_33 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_charset_normalizer_tuple, 0)
);

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_charset_normalizer$api$logging(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api->m_frame.f_lineno = 33;
tmp_assign_source_34 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_StreamHandler);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_explain_handler, tmp_assign_source_34);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_3;
tmp_expression_value_1 = module_var_accessor_charset_normalizer$api$explain_handler(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_setFormatter);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_called_instance_3 = module_var_accessor_charset_normalizer$api$logging(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 35;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api->m_frame.f_lineno = 35;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_Formatter,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ef5a70c0803e49dd3e197d45f17aa590_tuple, 0)
);

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 35;

    goto frame_exception_exit_1;
}
frame_frame_charset_normalizer$api->m_frame.f_lineno = 34;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_2 != NULL);
tmp_kw_call_arg_value_0_1 = module_var_accessor_charset_normalizer$api$IANA_SUPPORTED(tstate);
if (unlikely(tmp_kw_call_arg_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_IANA_SUPPORTED);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_charset_normalizer$api$$$function__1_lambda(tstate);

frame_frame_charset_normalizer$api->m_frame.f_lineno = 45;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST, tmp_assign_source_35);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_e457754874b2ab64235a137685f8363a;
tmp_ass_subscribed_1 = module_var_accessor_charset_normalizer$api$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_IANA_SUPPORTED_MB_FIRST;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_charset_normalizer$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_charset_normalizer$api->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_charset_normalizer$api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_charset_normalizer$api);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3f63aad899e7665be40d3fe683aac44d);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_36 = MAKE_FUNCTION_charset_normalizer$api$$$function__2_from_bytes(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_bytes, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_401f10c7d082fd00523753e337052f56);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_37 = MAKE_FUNCTION_charset_normalizer$api$$$function__3_from_fp(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_fp, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_3;
tmp_defaults_3 = mod_consts.const_tuple_4460d2d3eedad71de305944b7e53f66d_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_965802b7ee7c0db7b7086a96673a1534);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_38 = MAKE_FUNCTION_charset_normalizer$api$$$function__4_from_path(tstate, tmp_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_from_path, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_4;
tmp_defaults_4 = mod_consts.const_tuple_12402516bcb764e0670745750952a144_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_57090b1bab40ee452949405fa9be224f);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_39 = MAKE_FUNCTION_charset_normalizer$api$$$function__5_is_binary(tstate, tmp_defaults_4, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_charset_normalizer$api, (Nuitka_StringObject *)mod_consts.const_str_plain_is_binary, tmp_assign_source_39);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("charset_normalizer$api", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "charset_normalizer.api" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_charset_normalizer$api);
    return module_charset_normalizer$api;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_charset_normalizer$api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("charset_normalizer$api", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
