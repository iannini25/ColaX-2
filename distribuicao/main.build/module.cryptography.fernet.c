/* Generated code for Python module 'cryptography$fernet'
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



/* The "module_cryptography$fernet" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$fernet;
PyDictObject *moduledict_cryptography$fernet;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_base64;
PyObject *const_str_plain_urlsafe_b64decode;
PyObject *const_str_plain_binascii;
PyObject *const_str_plain_Error;
PyObject *const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6;
PyObject *const_slice_none_int_pos_16_none;
PyObject *const_str_plain__signing_key;
PyObject *const_slice_int_pos_16_none_none;
PyObject *const_str_plain__encryption_key;
PyObject *const_str_plain_algorithms;
PyObject *const_str_plain_AES;
PyObject *const_str_plain__aes;
PyObject *const_str_plain_urlsafe_b64encode;
PyObject *const_str_plain_urandom;
PyObject *const_tuple_int_pos_32_tuple;
PyObject *const_str_plain_encrypt_at_time;
PyObject *const_str_plain_time;
PyObject *const_tuple_int_pos_16_tuple;
PyObject *const_str_plain__encrypt_from_parts;
PyObject *const_str_plain_utils;
PyObject *const_str_plain__check_bytes;
PyObject *const_str_plain_data;
PyObject *const_str_plain__PKCS7_128;
PyObject *const_str_plain_padder;
PyObject *const_str_plain_update;
PyObject *const_str_plain_finalize;
PyObject *const_str_plain_Cipher;
PyObject *const_str_plain_modes;
PyObject *const_str_plain_CBC;
PyObject *const_str_plain_encryptor;
PyObject *const_bytes_chr_128;
PyObject *const_str_plain_to_bytes;
PyObject *const_tuple_int_pos_8_str_plain_big_tuple;
PyObject *const_tuple_str_plain_length_str_plain_byteorder_tuple;
PyObject *const_str_plain_HMAC;
PyObject *const_str_plain__SHA256;
PyObject *const_str_plain_Fernet;
PyObject *const_str_plain__get_unverified_token_data;
PyObject *const_str_plain__decrypt_data;
PyObject *const_str_digest_cbc4344439b26706ab3638234db8e0a4;
PyObject *const_str_plain__verify_signature;
PyObject *const_tuple_type_str_type_bytes_tuple;
PyObject *const_str_digest_4c5440a2609ed101a7675f82f7be1e46;
PyObject *const_str_plain_InvalidToken;
PyObject *const_int_pos_128;
PyObject *const_str_plain_from_bytes;
PyObject *const_slice_int_pos_1_int_pos_9_none;
PyObject *const_tuple_str_plain_big_tuple;
PyObject *const_tuple_str_plain_byteorder_tuple;
PyObject *const_slice_none_int_neg_32_none;
PyObject *const_str_plain_verify;
PyObject *const_slice_int_neg_32_none_none;
PyObject *const_str_plain_InvalidSignature;
PyObject *const_str_plain__MAX_CLOCK_SKEW;
PyObject *const_slice_int_pos_9_int_pos_25_none;
PyObject *const_slice_int_pos_25_int_neg_32_none;
PyObject *const_str_plain_decryptor;
PyObject *const_str_plain_unpadder;
PyObject *const_str_digest_eefb46136d416eb8d111f03b15b6d39b;
PyObject *const_str_plain__fernets;
PyObject *const_str_plain_timestamp;
PyObject *const_str_plain_p;
PyObject *const_str_plain_time_info;
PyObject *const_str_plain_ttl;
PyObject *const_str_plain_current_time;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Iterable_tuple;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_cryptography;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
PyObject *const_tuple_str_plain_InvalidSignature_tuple;
PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
PyObject *const_tuple_str_plain_hashes_str_plain_padding_tuple;
PyObject *const_str_plain_hashes;
PyObject *const_str_plain_padding;
PyObject *const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
PyObject *const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple;
PyObject *const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff;
PyObject *const_tuple_str_plain_HMAC_tuple;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_06f332e3369e80d912dd88e2445816a8;
PyObject *const_int_pos_21;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_60;
PyObject *const_str_plain_PKCS7;
PyObject *const_tuple_int_pos_128_tuple;
PyObject *const_str_plain_SHA256;
PyObject *const_int_pos_32;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_7df07a4850a3b0120dbe4fda0c79d089;
PyObject *const_str_digest_4f129e9d2cffc4550be47c9454ab49ab;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_plain_generate_key;
PyObject *const_str_digest_f9f3d08f0cb790922d7024ed28602f02;
PyObject *const_dict_f027067e1a1a50ee3c3a247a3244796e;
PyObject *const_str_plain_encrypt;
PyObject *const_str_digest_8c1f97733e9b1aebea160699ff6f5943;
PyObject *const_dict_8346f1bbaa8e3071227f32f823543aaf;
PyObject *const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c;
PyObject *const_dict_f1e9c14c2aa557eff55473f2aa69b422;
PyObject *const_str_digest_48179f980a5ff440e661dd2d472f6785;
PyObject *const_dict_61353b9b8f272ac85974ff126059bff4;
PyObject *const_str_plain_decrypt;
PyObject *const_str_digest_dfee1def3dac1cb809c88f740f2eb81a;
PyObject *const_dict_756af92400dd42d5a4729cda8fd511cb;
PyObject *const_str_plain_decrypt_at_time;
PyObject *const_str_digest_753e95d772e6e1285667d09f03adf4cc;
PyObject *const_dict_bdd8412ed16fcffe3d2448fb67fbbb64;
PyObject *const_str_plain_extract_timestamp;
PyObject *const_str_digest_c8d7f50ec830138c25eec62b9c358531;
PyObject *const_dict_873f3f1828f4d73c8bbe452e41c78774;
PyObject *const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e;
PyObject *const_dict_9c5c92330abf414287a7c5a37dc41725;
PyObject *const_str_digest_c024051e61b501558bf0e65a42dc89f9;
PyObject *const_dict_589a36203d91598b4d08b48217089550;
PyObject *const_str_digest_70fced7985baa0af6074e98bd73244b7;
PyObject *const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple;
PyObject *const_str_plain_MultiFernet;
PyObject *const_int_pos_172;
PyObject *const_dict_43cd6a9aeba5e69a331700a44279f90b;
PyObject *const_str_digest_88cae74badcdfbd85eea2367072c2ed8;
PyObject *const_dict_58b2417f86f6515f103b5c8929be989a;
PyObject *const_str_digest_6616dd812f529676dff2d1324e816963;
PyObject *const_dict_7b83a68a751e9a540a89d0e65a491fa8;
PyObject *const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395;
PyObject *const_dict_cc94591d7a3a43c05c7f07177f2a0b1e;
PyObject *const_str_plain_rotate;
PyObject *const_str_digest_97ba4a32ddda86421758835163f0f822;
PyObject *const_dict_cc6ba16396af64badcad18446ec18557;
PyObject *const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc;
PyObject *const_dict_c9605920262212a5d26ee54844a27c98;
PyObject *const_str_digest_66e4f9d18e2965d6dfa31be57b90a170;
PyObject *const_dict_04505222df09e46c3122e14fd42f6b97;
PyObject *const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0;
PyObject *const_tuple_str_plain__fernets_tuple;
PyObject *const_str_digest_a398480770b150f746abc2ad4a30cd15;
PyObject *const_str_digest_c046fa0f886205f729b26341641bfc98;
PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple;
PyObject *const_tuple_str_plain_self_str_plain_fernets_tuple;
PyObject *const_tuple_d011871ba41616be37d09d08cba2025d_tuple;
PyObject *const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple;
PyObject *const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple;
PyObject *const_tuple_e8cfc78aaadb737029d39dde32949642_tuple;
PyObject *const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple;
PyObject *const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple;
PyObject *const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_tuple;
PyObject *const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple;
PyObject *const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple;
PyObject *const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple;
PyObject *const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple;
PyObject *const_tuple_str_plain_cls_tuple;
PyObject *const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[167];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.fernet"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 167) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 167 values, got %d\n",
                    UN_TRANSLATE("cryptography.fernet"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsafe_b64decode", mod_consts.const_str_plain_urlsafe_b64decode);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binascii", mod_consts.const_str_plain_binascii);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_binascii);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Error", mod_consts.const_str_plain_Error);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Error);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6", mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_16_none", mod_consts.const_slice_none_int_pos_16_none);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_16_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__signing_key", mod_consts.const_str_plain__signing_key);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__signing_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_16_none_none", mod_consts.const_slice_int_pos_16_none_none);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_16_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encryption_key", mod_consts.const_str_plain__encryption_key);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__encryption_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithms", mod_consts.const_str_plain_algorithms);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_algorithms);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AES", mod_consts.const_str_plain_AES);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_AES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__aes", mod_consts.const_str_plain__aes);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__aes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsafe_b64encode", mod_consts.const_str_plain_urlsafe_b64encode);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urandom", mod_consts.const_str_plain_urandom);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_urandom);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_32_tuple", mod_consts.const_tuple_int_pos_32_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_32_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt_at_time", mod_consts.const_str_plain_encrypt_at_time);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_at_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_16_tuple", mod_consts.const_tuple_int_pos_16_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encrypt_from_parts", mod_consts.const_str_plain__encrypt_from_parts);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__encrypt_from_parts);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__check_bytes", mod_consts.const_str_plain__check_bytes);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__check_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PKCS7_128", mod_consts.const_str_plain__PKCS7_128);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS7_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padder", mod_consts.const_str_plain_padder);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_padder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_finalize", mod_consts.const_str_plain_finalize);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_finalize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cipher", mod_consts.const_str_plain_Cipher);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cipher);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_modes", mod_consts.const_str_plain_modes);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_modes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CBC", mod_consts.const_str_plain_CBC);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_CBC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encryptor", mod_consts.const_str_plain_encryptor);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_encryptor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_128", mod_consts.const_bytes_chr_128);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_bytes", mod_consts.const_str_plain_to_bytes);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8_str_plain_big_tuple", mod_consts.const_tuple_int_pos_8_str_plain_big_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_str_plain_big_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple", mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HMAC", mod_consts.const_str_plain_HMAC);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_HMAC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SHA256", mod_consts.const_str_plain__SHA256);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain__SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fernet", mod_consts.const_str_plain_Fernet);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fernet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_unverified_token_data", mod_consts.const_str_plain__get_unverified_token_data);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_unverified_token_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decrypt_data", mod_consts.const_str_plain__decrypt_data);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__decrypt_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4", mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__verify_signature", mod_consts.const_str_plain__verify_signature);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__verify_signature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_type_bytes_tuple", mod_consts.const_tuple_type_str_type_bytes_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46", mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidToken", mod_consts.const_str_plain_InvalidToken);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidToken);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_bytes", mod_consts.const_str_plain_from_bytes);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_int_pos_9_none", mod_consts.const_slice_int_pos_1_int_pos_9_none);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_pos_9_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_big_tuple", mod_consts.const_tuple_str_plain_big_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_big_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_byteorder_tuple", mod_consts.const_tuple_str_plain_byteorder_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_byteorder_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_neg_32_none", mod_consts.const_slice_none_int_neg_32_none);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_32_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify", mod_consts.const_str_plain_verify);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_neg_32_none_none", mod_consts.const_slice_int_neg_32_none_none);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_32_none_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidSignature", mod_consts.const_str_plain_InvalidSignature);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSignature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAX_CLOCK_SKEW", mod_consts.const_str_plain__MAX_CLOCK_SKEW);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_CLOCK_SKEW);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_9_int_pos_25_none", mod_consts.const_slice_int_pos_9_int_pos_25_none);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_9_int_pos_25_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_25_int_neg_32_none", mod_consts.const_slice_int_pos_25_int_neg_32_none);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_25_int_neg_32_none);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decryptor", mod_consts.const_str_plain_decryptor);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_decryptor);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpadder", mod_consts.const_str_plain_unpadder);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpadder);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b", mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fernets", mod_consts.const_str_plain__fernets);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain__fernets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timestamp", mod_consts.const_str_plain_timestamp);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_timestamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_p", mod_consts.const_str_plain_p);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_p);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time_info", mod_consts.const_str_plain_time_info);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_time_info);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ttl", mod_consts.const_str_plain_ttl);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_ttl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_current_time", mod_consts.const_str_plain_current_time);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Iterable_tuple", mod_consts.const_tuple_str_plain_Iterable_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterable_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterable", mod_consts.const_str_plain_Iterable);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c", mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_InvalidSignature_tuple", mod_consts.const_tuple_str_plain_InvalidSignature_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidSignature_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padding", mod_consts.const_str_plain_padding);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_padding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5", mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple", mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff", mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HMAC_tuple", mod_consts.const_tuple_str_plain_HMAC_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HMAC_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_Exception_tuple", mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8", mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_60", mod_consts.const_int_pos_60);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_int_pos_60);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7", mod_consts.const_str_plain_PKCS7);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_128_tuple", mod_consts.const_tuple_int_pos_128_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA256", mod_consts.const_str_plain_SHA256);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089", mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab", mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_generate_key", mod_consts.const_str_plain_generate_key);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02", mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e", mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt", mod_consts.const_str_plain_encrypt);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943", mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf", mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c", mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422", mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785", mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4", mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt", mod_consts.const_str_plain_decrypt);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a", mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb", mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt_at_time", mod_consts.const_str_plain_decrypt_at_time);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_at_time);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc", mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64", mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_timestamp", mod_consts.const_str_plain_extract_timestamp);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_extract_timestamp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531", mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774", mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e", mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725", mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9", mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_589a36203d91598b4d08b48217089550", mod_consts.const_dict_589a36203d91598b4d08b48217089550);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_dict_589a36203d91598b4d08b48217089550);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7", mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple", mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MultiFernet", mod_consts.const_str_plain_MultiFernet);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_MultiFernet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_172", mod_consts.const_int_pos_172);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_172);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b", mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8", mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a", mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963", mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8", mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395", mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e", mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rotate", mod_consts.const_str_plain_rotate);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_rotate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822", mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc6ba16396af64badcad18446ec18557", mod_consts.const_dict_cc6ba16396af64badcad18446ec18557);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_dict_cc6ba16396af64badcad18446ec18557);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc", mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c9605920262212a5d26ee54844a27c98", mod_consts.const_dict_c9605920262212a5d26ee54844a27c98);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_c9605920262212a5d26ee54844a27c98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170", mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97", mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0", mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__fernets_tuple", mod_consts.const_tuple_str_plain__fernets_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__fernets_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15", mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98", mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple", mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple", mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple", mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple", mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple", mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple", mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple", mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple", mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple", mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple", mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple", mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_tuple", mod_consts.const_tuple_str_plain_cls_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple", mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple);
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
void checkModuleConstants_cryptography$fernet(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64) && "mod_consts.const_str_plain_base64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsafe_b64decode", mod_consts.const_str_plain_urlsafe_b64decode);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64decode) && "mod_consts.const_str_plain_urlsafe_b64decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binascii", mod_consts.const_str_plain_binascii);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_binascii) && "mod_consts.const_str_plain_binascii");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Error", mod_consts.const_str_plain_Error);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Error) && "mod_consts.const_str_plain_Error");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6", mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6) && "mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_pos_16_none", mod_consts.const_slice_none_int_pos_16_none);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_16_none) && "mod_consts.const_slice_none_int_pos_16_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__signing_key", mod_consts.const_str_plain__signing_key);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__signing_key) && "mod_consts.const_str_plain__signing_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_16_none_none", mod_consts.const_slice_int_pos_16_none_none);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_16_none_none) && "mod_consts.const_slice_int_pos_16_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encryption_key", mod_consts.const_str_plain__encryption_key);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__encryption_key) && "mod_consts.const_str_plain__encryption_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithms", mod_consts.const_str_plain_algorithms);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_algorithms) && "mod_consts.const_str_plain_algorithms");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AES", mod_consts.const_str_plain_AES);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_AES) && "mod_consts.const_str_plain_AES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__aes", mod_consts.const_str_plain__aes);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__aes) && "mod_consts.const_str_plain__aes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsafe_b64encode", mod_consts.const_str_plain_urlsafe_b64encode);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64encode) && "mod_consts.const_str_plain_urlsafe_b64encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urandom", mod_consts.const_str_plain_urandom);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_urandom) && "mod_consts.const_str_plain_urandom");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_32_tuple", mod_consts.const_tuple_int_pos_32_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_32_tuple) && "mod_consts.const_tuple_int_pos_32_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt_at_time", mod_consts.const_str_plain_encrypt_at_time);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_at_time) && "mod_consts.const_str_plain_encrypt_at_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time", mod_consts.const_str_plain_time);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_time) && "mod_consts.const_str_plain_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_16_tuple", mod_consts.const_tuple_int_pos_16_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple) && "mod_consts.const_tuple_int_pos_16_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encrypt_from_parts", mod_consts.const_str_plain__encrypt_from_parts);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__encrypt_from_parts) && "mod_consts.const_str_plain__encrypt_from_parts");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__check_bytes", mod_consts.const_str_plain__check_bytes);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__check_bytes) && "mod_consts.const_str_plain__check_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_data) && "mod_consts.const_str_plain_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__PKCS7_128", mod_consts.const_str_plain__PKCS7_128);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__PKCS7_128) && "mod_consts.const_str_plain__PKCS7_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padder", mod_consts.const_str_plain_padder);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_padder) && "mod_consts.const_str_plain_padder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_update", mod_consts.const_str_plain_update);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_update) && "mod_consts.const_str_plain_update");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_finalize", mod_consts.const_str_plain_finalize);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_finalize) && "mod_consts.const_str_plain_finalize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cipher", mod_consts.const_str_plain_Cipher);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cipher) && "mod_consts.const_str_plain_Cipher");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_modes", mod_consts.const_str_plain_modes);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_modes) && "mod_consts.const_str_plain_modes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CBC", mod_consts.const_str_plain_CBC);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_CBC) && "mod_consts.const_str_plain_CBC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encryptor", mod_consts.const_str_plain_encryptor);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_encryptor) && "mod_consts.const_str_plain_encryptor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_chr_128", mod_consts.const_bytes_chr_128);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_128) && "mod_consts.const_bytes_chr_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_bytes", mod_consts.const_str_plain_to_bytes);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes) && "mod_consts.const_str_plain_to_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_8_str_plain_big_tuple", mod_consts.const_tuple_int_pos_8_str_plain_big_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_8_str_plain_big_tuple) && "mod_consts.const_tuple_int_pos_8_str_plain_big_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple", mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple) && "mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HMAC", mod_consts.const_str_plain_HMAC);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_HMAC) && "mod_consts.const_str_plain_HMAC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__SHA256", mod_consts.const_str_plain__SHA256);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain__SHA256) && "mod_consts.const_str_plain__SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fernet", mod_consts.const_str_plain_Fernet);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fernet) && "mod_consts.const_str_plain_Fernet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__get_unverified_token_data", mod_consts.const_str_plain__get_unverified_token_data);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_unverified_token_data) && "mod_consts.const_str_plain__get_unverified_token_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decrypt_data", mod_consts.const_str_plain__decrypt_data);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__decrypt_data) && "mod_consts.const_str_plain__decrypt_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4", mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4) && "mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__verify_signature", mod_consts.const_str_plain__verify_signature);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__verify_signature) && "mod_consts.const_str_plain__verify_signature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_type_bytes_tuple", mod_consts.const_tuple_type_str_type_bytes_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple) && "mod_consts.const_tuple_type_str_type_bytes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46", mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46) && "mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidToken", mod_consts.const_str_plain_InvalidToken);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidToken) && "mod_consts.const_str_plain_InvalidToken");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_128", mod_consts.const_int_pos_128);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_int_pos_128) && "mod_consts.const_int_pos_128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_bytes", mod_consts.const_str_plain_from_bytes);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_bytes) && "mod_consts.const_str_plain_from_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_1_int_pos_9_none", mod_consts.const_slice_int_pos_1_int_pos_9_none);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_int_pos_9_none) && "mod_consts.const_slice_int_pos_1_int_pos_9_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_big_tuple", mod_consts.const_tuple_str_plain_big_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_big_tuple) && "mod_consts.const_tuple_str_plain_big_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_byteorder_tuple", mod_consts.const_tuple_str_plain_byteorder_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_byteorder_tuple) && "mod_consts.const_tuple_str_plain_byteorder_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_none_int_neg_32_none", mod_consts.const_slice_none_int_neg_32_none);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_32_none) && "mod_consts.const_slice_none_int_neg_32_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify", mod_consts.const_str_plain_verify);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify) && "mod_consts.const_str_plain_verify");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_neg_32_none_none", mod_consts.const_slice_int_neg_32_none_none);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_32_none_none) && "mod_consts.const_slice_int_neg_32_none_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidSignature", mod_consts.const_str_plain_InvalidSignature);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSignature) && "mod_consts.const_str_plain_InvalidSignature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAX_CLOCK_SKEW", mod_consts.const_str_plain__MAX_CLOCK_SKEW);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_CLOCK_SKEW) && "mod_consts.const_str_plain__MAX_CLOCK_SKEW");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_9_int_pos_25_none", mod_consts.const_slice_int_pos_9_int_pos_25_none);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_9_int_pos_25_none) && "mod_consts.const_slice_int_pos_9_int_pos_25_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_slice_int_pos_25_int_neg_32_none", mod_consts.const_slice_int_pos_25_int_neg_32_none);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_25_int_neg_32_none) && "mod_consts.const_slice_int_pos_25_int_neg_32_none");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decryptor", mod_consts.const_str_plain_decryptor);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_decryptor) && "mod_consts.const_str_plain_decryptor");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpadder", mod_consts.const_str_plain_unpadder);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpadder) && "mod_consts.const_str_plain_unpadder");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b", mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b) && "mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fernets", mod_consts.const_str_plain__fernets);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain__fernets) && "mod_consts.const_str_plain__fernets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_timestamp", mod_consts.const_str_plain_timestamp);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_timestamp) && "mod_consts.const_str_plain_timestamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_p", mod_consts.const_str_plain_p);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_p) && "mod_consts.const_str_plain_p");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_time_info", mod_consts.const_str_plain_time_info);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_time_info) && "mod_consts.const_str_plain_time_info");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ttl", mod_consts.const_str_plain_ttl);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_ttl) && "mod_consts.const_str_plain_ttl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_current_time", mod_consts.const_str_plain_current_time);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_time) && "mod_consts.const_str_plain_current_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e", mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e) && "mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Iterable_tuple", mod_consts.const_tuple_str_plain_Iterable_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterable_tuple) && "mod_consts.const_tuple_str_plain_Iterable_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Iterable", mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable) && "mod_consts.const_str_plain_Iterable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography) && "mod_consts.const_str_plain_cryptography");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple) && "mod_consts.const_tuple_str_plain_utils_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c", mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c) && "mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_InvalidSignature_tuple", mod_consts.const_tuple_str_plain_InvalidSignature_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InvalidSignature_tuple) && "mod_consts.const_tuple_str_plain_InvalidSignature_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087) && "mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple) && "mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashes) && "mod_consts.const_str_plain_hashes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_padding", mod_consts.const_str_plain_padding);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_padding) && "mod_consts.const_str_plain_padding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5", mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5) && "mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple", mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple) && "mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff", mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff) && "mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HMAC_tuple", mod_consts.const_tuple_str_plain_HMAC_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HMAC_tuple) && "mod_consts.const_tuple_str_plain_HMAC_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_Exception_tuple", mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple) && "mod_consts.const_tuple_type_Exception_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8", mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8) && "mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_21", mod_consts.const_int_pos_21);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_21) && "mod_consts.const_int_pos_21");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_60", mod_consts.const_int_pos_60);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_int_pos_60) && "mod_consts.const_int_pos_60");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS7", mod_consts.const_str_plain_PKCS7);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS7) && "mod_consts.const_str_plain_PKCS7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_128_tuple", mod_consts.const_tuple_int_pos_128_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_128_tuple) && "mod_consts.const_tuple_int_pos_128_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA256", mod_consts.const_str_plain_SHA256);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256) && "mod_consts.const_str_plain_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_32", mod_consts.const_int_pos_32);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_int_pos_32) && "mod_consts.const_int_pos_32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089", mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089) && "mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab", mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab) && "mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_2366cb3246e451cebe4ed21878030053", mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053) && "mod_consts.const_dict_2366cb3246e451cebe4ed21878030053");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_generate_key", mod_consts.const_str_plain_generate_key);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_key) && "mod_consts.const_str_plain_generate_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02", mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02) && "mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e", mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e) && "mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt", mod_consts.const_str_plain_encrypt);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt) && "mod_consts.const_str_plain_encrypt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943", mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943) && "mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf", mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf) && "mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c", mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c) && "mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422", mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422) && "mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785", mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785) && "mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4", mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4) && "mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt", mod_consts.const_str_plain_decrypt);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt) && "mod_consts.const_str_plain_decrypt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a", mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a) && "mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb", mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb) && "mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt_at_time", mod_consts.const_str_plain_decrypt_at_time);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_at_time) && "mod_consts.const_str_plain_decrypt_at_time");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc", mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc) && "mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64", mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64) && "mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_extract_timestamp", mod_consts.const_str_plain_extract_timestamp);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_extract_timestamp) && "mod_consts.const_str_plain_extract_timestamp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531", mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531) && "mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774", mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774) && "mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e", mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e) && "mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725", mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725) && "mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9", mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9) && "mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_589a36203d91598b4d08b48217089550", mod_consts.const_dict_589a36203d91598b4d08b48217089550);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_dict_589a36203d91598b4d08b48217089550) && "mod_consts.const_dict_589a36203d91598b4d08b48217089550");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7", mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7) && "mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple", mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple) && "mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MultiFernet", mod_consts.const_str_plain_MultiFernet);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_MultiFernet) && "mod_consts.const_str_plain_MultiFernet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_172", mod_consts.const_int_pos_172);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_172) && "mod_consts.const_int_pos_172");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b", mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b) && "mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8", mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8) && "mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a", mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a) && "mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963", mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963) && "mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8", mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8) && "mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395", mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395) && "mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e", mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e) && "mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rotate", mod_consts.const_str_plain_rotate);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_rotate) && "mod_consts.const_str_plain_rotate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822", mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822) && "mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc6ba16396af64badcad18446ec18557", mod_consts.const_dict_cc6ba16396af64badcad18446ec18557);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_dict_cc6ba16396af64badcad18446ec18557) && "mod_consts.const_dict_cc6ba16396af64badcad18446ec18557");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc", mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc) && "mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c9605920262212a5d26ee54844a27c98", mod_consts.const_dict_c9605920262212a5d26ee54844a27c98);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_c9605920262212a5d26ee54844a27c98) && "mod_consts.const_dict_c9605920262212a5d26ee54844a27c98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170", mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170) && "mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97", mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97) && "mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0", mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0) && "mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__fernets_tuple", mod_consts.const_tuple_str_plain__fernets_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__fernets_tuple) && "mod_consts.const_tuple_str_plain__fernets_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15", mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15) && "mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98", mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98) && "mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple", mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple", mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple", mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple) && "mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple", mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple) && "mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple", mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple) && "mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple", mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple) && "mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple", mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple) && "mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple", mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple) && "mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple", mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple) && "mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple", mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple) && "mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple", mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple", mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple) && "mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple", mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple) && "mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_tuple", mod_consts.const_tuple_str_plain_cls_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_tuple) && "mod_consts.const_tuple_str_plain_cls_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple", mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple) && "mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_cryptography$fernet$Cipher(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Cipher);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Cipher);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Cipher, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Cipher);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Cipher, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Cipher);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Cipher);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Cipher);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$Fernet(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fernet);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fernet, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Fernet);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Fernet, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$HMAC(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_HMAC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HMAC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HMAC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HMAC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HMAC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_HMAC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_HMAC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HMAC);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$InvalidSignature(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSignature);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidSignature);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidSignature, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidSignature);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidSignature, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSignature);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSignature);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSignature);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$InvalidToken(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidToken);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidToken, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidToken);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidToken, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$_MAX_CLOCK_SKEW(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_CLOCK_SKEW);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_CLOCK_SKEW);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_CLOCK_SKEW, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_CLOCK_SKEW);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_CLOCK_SKEW, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_CLOCK_SKEW);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_CLOCK_SKEW);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_CLOCK_SKEW);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$_PKCS7_128(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS7_128);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS7_128);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS7_128, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__PKCS7_128);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__PKCS7_128, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS7_128);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS7_128);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS7_128);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$_SHA256(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__SHA256);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SHA256);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SHA256, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SHA256);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SHA256, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__SHA256);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__SHA256);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SHA256);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$algorithms(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_algorithms);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_algorithms);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_algorithms, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_algorithms);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_algorithms, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_algorithms);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_algorithms);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_algorithms);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$base64(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base64);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base64, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$binascii(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binascii);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binascii, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binascii);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binascii, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$hashes(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hashes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hashes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$modes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_modes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_modes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_modes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_modes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_modes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_modes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_modes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_modes);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$padding(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_padding);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_padding);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_padding, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_padding);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_padding, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_padding);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_padding);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_padding);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$fernet$utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$fernet->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$fernet->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$fernet->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_99731659eedc4d4789a2c6b4828ec3d8;
static PyCodeObject *code_objects_6f63de8691d41868d7253208a16479c7;
static PyCodeObject *code_objects_e8ce7e66d9b72a8f854288c67d209037;
static PyCodeObject *code_objects_03f913c59c8adcd8e6c21f70ec142094;
static PyCodeObject *code_objects_b620ff3a0b140543b6195a4febdb90b5;
static PyCodeObject *code_objects_0b53a1cfc6677eba8c98bf1f8abb96c3;
static PyCodeObject *code_objects_24fb04a8847005951c2b22ba5401429f;
static PyCodeObject *code_objects_5bbb528f1d52a0c90326b0e46b5b906d;
static PyCodeObject *code_objects_f2db3ff8a353e0d6f04e6bf358eeea44;
static PyCodeObject *code_objects_a57b970e3045270e947ec32a341b2300;
static PyCodeObject *code_objects_318b4dd9e2805c2b32adeff6ce61f080;
static PyCodeObject *code_objects_bdc0339f4dd8145747c4d023eee4f7c9;
static PyCodeObject *code_objects_d12d50bd02fd13a348cce9200ee8a2ed;
static PyCodeObject *code_objects_0517fc3636367275ac96eacd60865a41;
static PyCodeObject *code_objects_9765e0d91dedb2af6f23e06d7668cadb;
static PyCodeObject *code_objects_63e22991101df540fff6a547355313e2;
static PyCodeObject *code_objects_f6c3d09421433ece0f5e75d30e343627;
static PyCodeObject *code_objects_565555b435f0f1913215c7866e66caeb;
static PyCodeObject *code_objects_eb42d502e8f49d8586f21e209c7cd40f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a398480770b150f746abc2ad4a30cd15); CHECK_OBJECT(module_filename_obj);
code_objects_99731659eedc4d4789a2c6b4828ec3d8 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98, mod_consts.const_str_digest_c046fa0f886205f729b26341641bfc98, NULL, NULL, 0, 0, 0);
code_objects_6f63de8691d41868d7253208a16479c7 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab, mod_consts.const_tuple_str_plain_self_str_plain_key_str_plain_backend_str_plain_exc_tuple, NULL, 3, 0, 0);
code_objects_e8ce7e66d9b72a8f854288c67d209037 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8, mod_consts.const_tuple_str_plain_self_str_plain_fernets_tuple, NULL, 2, 0, 0);
code_objects_03f913c59c8adcd8e6c21f70ec142094 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__decrypt_data, mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7, mod_consts.const_tuple_d011871ba41616be37d09d08cba2025d_tuple, NULL, 4, 0, 0);
code_objects_b620ff3a0b140543b6195a4febdb90b5 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__encrypt_from_parts, mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785, mod_consts.const_tuple_2f640488fbedd2756f4cae7c8e94d103_tuple, NULL, 4, 0, 0);
code_objects_0b53a1cfc6677eba8c98bf1f8abb96c3 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_unverified_token_data, mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e, mod_consts.const_tuple_str_plain_token_str_plain_data_str_plain_timestamp_tuple, NULL, 1, 0, 0);
code_objects_24fb04a8847005951c2b22ba5401429f = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__verify_signature, mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_h_tuple, NULL, 2, 0, 0);
code_objects_5bbb528f1d52a0c90326b0e46b5b906d = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decrypt, mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a, mod_consts.const_tuple_e8cfc78aaadb737029d39dde32949642_tuple, NULL, 3, 0, 0);
code_objects_f2db3ff8a353e0d6f04e6bf358eeea44 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decrypt, mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc, mod_consts.const_tuple_5a5efdf3f9e35bb9878cc67515ca1845_tuple, NULL, 3, 0, 0);
code_objects_a57b970e3045270e947ec32a341b2300 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decrypt_at_time, mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc, mod_consts.const_tuple_69fc90a43bd781e4407cbce34ff49a6d_tuple, NULL, 4, 0, 0);
code_objects_318b4dd9e2805c2b32adeff6ce61f080 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decrypt_at_time, mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170, mod_consts.const_tuple_787ba6cb03dc5ab375bc316a4ed440db_tuple, NULL, 4, 0, 0);
code_objects_bdc0339f4dd8145747c4d023eee4f7c9 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encrypt, mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_d12d50bd02fd13a348cce9200ee8a2ed = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encrypt, mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963, mod_consts.const_tuple_str_plain_self_str_plain_msg_tuple, NULL, 2, 0, 0);
code_objects_0517fc3636367275ac96eacd60865a41 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encrypt_at_time, mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c, mod_consts.const_tuple_9285af8f2593b5bccc87f996f0b80950_tuple, NULL, 3, 0, 0);
code_objects_9765e0d91dedb2af6f23e06d7668cadb = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encrypt_at_time, mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395, mod_consts.const_tuple_str_plain_self_str_plain_msg_str_plain_current_time_tuple, NULL, 3, 0, 0);
code_objects_63e22991101df540fff6a547355313e2 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_extract_timestamp, mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531, mod_consts.const_tuple_3c003f2cc621eb8d1b2b1669dc4df1ee_tuple, NULL, 2, 0, 0);
code_objects_f6c3d09421433ece0f5e75d30e343627 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_extract_timestamp, mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0, mod_consts.const_tuple_58c3758b0c2e63fedbcabaae68676c1f_tuple, NULL, 2, 0, 0);
code_objects_565555b435f0f1913215c7866e66caeb = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_generate_key, mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02, mod_consts.const_tuple_str_plain_cls_tuple, NULL, 1, 0, 0);
code_objects_eb42d502e8f49d8586f21e209c7cd40f = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rotate, mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822, mod_consts.const_tuple_b655038a5a288940dc4ce9c9c08808c1_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__10__verify_signature(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__11__decrypt_data(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__12___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__13_encrypt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__14_encrypt_at_time(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__15_rotate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__16_decrypt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__17_decrypt_at_time(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__18_extract_timestamp(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__2_generate_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__3_encrypt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__4_encrypt_at_time(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__5__encrypt_from_parts(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__6_decrypt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__7_decrypt_at_time(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__8_extract_timestamp(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__9__get_unverified_token_data(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$fernet$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_key = python_pars[1];
PyObject *par_backend = python_pars[2];
PyObject *var_exc = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6f63de8691d41868d7253208a16479c7, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__1___init__->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__1___init__ = cache_frame_frame_cryptography$fernet$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__1___init__);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__1___init__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$base64(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_key);
tmp_args_element_value_1 = par_key;
frame_frame_cryptography$fernet$$$function__1___init__->m_frame.f_lineno = 39;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlsafe_b64decode, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_key;
    assert(old != NULL);
    par_key = tmp_assign_source_1;
    Py_DECREF(old);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__1___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__1___init__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_1 = module_var_accessor_cryptography$fernet$binascii(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binascii);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Error);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooo";
    goto try_except_handler_3;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_exc;
    var_exc = tmp_assign_source_2;
    Py_INCREF(var_exc);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6;
frame_frame_cryptography$fernet$$$function__1___init__->m_frame.f_lineno = 41;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_exc);
tmp_raise_cause_1 = var_exc;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 43;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
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

Py_XDECREF(var_exc);
var_exc = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 38;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__1___init__->m_frame)) {
        frame_frame_cryptography$fernet$$$function__1___init__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
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
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_key);
tmp_len_arg_1 = par_key;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = 32;
tmp_condition_result_2 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_b1b611559f152796d1f0f7e82bc5b4a6;
frame_frame_cryptography$fernet$$$function__1___init__->m_frame.f_lineno = 45;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_key);
tmp_expression_value_2 = par_key;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_16_none;
tmp_ass_attr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__signing_key, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_key);
tmp_expression_value_3 = par_key;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_16_none_none;
tmp_ass_attr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__encryption_key, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_ass_attr_target_3;
tmp_expression_value_4 = module_var_accessor_cryptography$fernet$algorithms(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_algorithms);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AES);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__encryption_key);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 51;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__1___init__->m_frame.f_lineno = 51;
tmp_ass_attr_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__aes, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__1___init__,
    type_description_1,
    par_self,
    par_key,
    par_backend,
    var_exc
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__1___init__ == cache_frame_frame_cryptography$fernet$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__1___init__);
    cache_frame_frame_cryptography$fernet$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__1___init__);

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
CHECK_OBJECT(par_key);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
par_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_key);
par_key = NULL;
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
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__2_generate_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__2_generate_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__2_generate_key = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__2_generate_key)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__2_generate_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__2_generate_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__2_generate_key = MAKE_FUNCTION_FRAME(tstate, code_objects_565555b435f0f1913215c7866e66caeb, module_cryptography$fernet, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__2_generate_key->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__2_generate_key = cache_frame_frame_cryptography$fernet$$$function__2_generate_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__2_generate_key);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__2_generate_key) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_cryptography$fernet$base64(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_urlsafe_b64encode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_cryptography$fernet$$$function__2_generate_key->m_frame.f_lineno = 55;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_urandom,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_32_tuple, 0)
);

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 55;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__2_generate_key->m_frame.f_lineno = 55;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__2_generate_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__2_generate_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__2_generate_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__2_generate_key,
    type_description_1,
    par_cls
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__2_generate_key == cache_frame_frame_cryptography$fernet$$$function__2_generate_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__2_generate_key);
    cache_frame_frame_cryptography$fernet$$$function__2_generate_key = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__2_generate_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__3_encrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__3_encrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__3_encrypt = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__3_encrypt)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__3_encrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__3_encrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__3_encrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_bdc0339f4dd8145747c4d023eee4f7c9, module_cryptography$fernet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__3_encrypt->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__3_encrypt = cache_frame_frame_cryptography$fernet$$$function__3_encrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__3_encrypt);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__3_encrypt) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encrypt_at_time);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__3_encrypt->m_frame.f_lineno = 58;
tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__3_encrypt->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__3_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__3_encrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__3_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__3_encrypt,
    type_description_1,
    par_self,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__3_encrypt == cache_frame_frame_cryptography$fernet$$$function__3_encrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__3_encrypt);
    cache_frame_frame_cryptography$fernet$$$function__3_encrypt = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__3_encrypt);

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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__4_encrypt_at_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_current_time = python_pars[2];
PyObject *var_iv = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__4_encrypt_at_time;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time = MAKE_FUNCTION_FRAME(tstate, code_objects_0517fc3636367275ac96eacd60865a41, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__4_encrypt_at_time = cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__4_encrypt_at_time);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__4_encrypt_at_time) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_cryptography$fernet$$$function__4_encrypt_at_time->m_frame.f_lineno = 61;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_urandom,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_16_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_iv;
    var_iv = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
CHECK_OBJECT(par_current_time);
tmp_args_element_value_2 = par_current_time;
CHECK_OBJECT(var_iv);
tmp_args_element_value_3 = var_iv;
frame_frame_cryptography$fernet$$$function__4_encrypt_at_time->m_frame.f_lineno = 62;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__encrypt_from_parts,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__4_encrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__4_encrypt_at_time->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__4_encrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__4_encrypt_at_time,
    type_description_1,
    par_self,
    par_data,
    par_current_time,
    var_iv
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__4_encrypt_at_time == cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time);
    cache_frame_frame_cryptography$fernet$$$function__4_encrypt_at_time = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__4_encrypt_at_time);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_iv);
CHECK_OBJECT(var_iv);
Py_DECREF(var_iv);
var_iv = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_iv);
var_iv = NULL;
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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__5__encrypt_from_parts(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_current_time = python_pars[2];
PyObject *par_iv = python_pars[3];
PyObject *var_padder = NULL;
PyObject *var_padded_data = NULL;
PyObject *var_encryptor = NULL;
PyObject *var_ciphertext = NULL;
PyObject *var_basic_parts = NULL;
PyObject *var_h = NULL;
PyObject *var_hmac = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts = MAKE_FUNCTION_FRAME(tstate, code_objects_b620ff3a0b140543b6195a4febdb90b5, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts = cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__check_bytes,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_cryptography$fernet$_PKCS7_128(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PKCS7_128);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 69;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_padder);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_padder;
    var_padder = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_padder);
tmp_expression_value_1 = var_padder;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_3 = par_data;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 70;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_padder);
tmp_called_instance_3 = var_padder;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 70;
tmp_add_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_finalize);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_padded_data;
    var_padded_data = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_2 = module_var_accessor_cryptography$fernet$Cipher(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Cipher);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__aes);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_5 = module_var_accessor_cryptography$fernet$modes(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_modes);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iv);
tmp_args_element_value_6 = par_iv;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 71;
tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_CBC, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 71;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_called_instance_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 71;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_encryptor);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_encryptor;
    var_encryptor = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_encryptor);
tmp_expression_value_3 = var_encryptor;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_padded_data);
tmp_args_element_value_7 = var_padded_data;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 72;
tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_encryptor);
tmp_called_instance_6 = var_encryptor;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 72;
tmp_add_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_finalize);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 72;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ciphertext;
    var_ciphertext = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
tmp_add_expr_left_5 = mod_consts.const_bytes_chr_128;
CHECK_OBJECT(par_current_time);
tmp_expression_value_4 = par_current_time;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_to_bytes);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 76;
tmp_add_expr_right_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_8_str_plain_big_tuple, 0), mod_consts.const_tuple_str_plain_length_str_plain_byteorder_tuple);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_add_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_BYTES_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_right_5);
Py_DECREF(tmp_add_expr_right_5);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_iv);
tmp_add_expr_right_4 = par_iv;
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ciphertext);
tmp_add_expr_right_3 = var_ciphertext;
tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_basic_parts;
    var_basic_parts = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_9;
tmp_called_value_5 = module_var_accessor_cryptography$fernet$HMAC(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HMAC);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__signing_key);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = module_var_accessor_cryptography$fernet$_SHA256(tstate);
if (unlikely(tmp_args_element_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SHA256);
}

if (tmp_args_element_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_8);

exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 81;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_h;
    var_h = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_h);
tmp_expression_value_6 = var_h;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_update);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_basic_parts);
tmp_args_element_value_10 = var_basic_parts;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 82;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_7;
CHECK_OBJECT(var_h);
tmp_called_instance_7 = var_h;
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 83;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_finalize);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_hmac;
    var_hmac = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_11;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
tmp_expression_value_7 = module_var_accessor_cryptography$fernet$base64(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_urlsafe_b64encode);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_basic_parts);
tmp_add_expr_left_6 = var_basic_parts;
CHECK_OBJECT(var_hmac);
tmp_add_expr_right_6 = var_hmac;
tmp_args_element_value_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 84;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame.f_lineno = 84;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts,
    type_description_1,
    par_self,
    par_data,
    par_current_time,
    par_iv,
    var_padder,
    var_padded_data,
    var_encryptor,
    var_ciphertext,
    var_basic_parts,
    var_h,
    var_hmac
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts == cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts);
    cache_frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__5__encrypt_from_parts);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_padder);
CHECK_OBJECT(var_padder);
Py_DECREF(var_padder);
var_padder = NULL;
CHECK_OBJECT(var_padded_data);
CHECK_OBJECT(var_padded_data);
Py_DECREF(var_padded_data);
var_padded_data = NULL;
CHECK_OBJECT(var_encryptor);
CHECK_OBJECT(var_encryptor);
Py_DECREF(var_encryptor);
var_encryptor = NULL;
CHECK_OBJECT(var_ciphertext);
CHECK_OBJECT(var_ciphertext);
Py_DECREF(var_ciphertext);
var_ciphertext = NULL;
CHECK_OBJECT(var_basic_parts);
CHECK_OBJECT(var_basic_parts);
Py_DECREF(var_basic_parts);
var_basic_parts = NULL;
CHECK_OBJECT(var_h);
CHECK_OBJECT(var_h);
Py_DECREF(var_h);
var_h = NULL;
CHECK_OBJECT(var_hmac);
CHECK_OBJECT(var_hmac);
Py_DECREF(var_hmac);
var_hmac = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_padder);
var_padder = NULL;
Py_XDECREF(var_padded_data);
var_padded_data = NULL;
Py_XDECREF(var_encryptor);
var_encryptor = NULL;
Py_XDECREF(var_ciphertext);
var_ciphertext = NULL;
Py_XDECREF(var_basic_parts);
var_basic_parts = NULL;
Py_XDECREF(var_h);
var_h = NULL;
Py_XDECREF(var_hmac);
var_hmac = NULL;
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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);
CHECK_OBJECT(par_iv);
Py_DECREF(par_iv);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);
CHECK_OBJECT(par_iv);
Py_DECREF(par_iv);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__6_decrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token = python_pars[1];
PyObject *par_ttl = python_pars[2];
PyObject *var_timestamp = NULL;
PyObject *var_data = NULL;
PyObject *var_time_info = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__6_decrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__6_decrypt = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__6_decrypt)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__6_decrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__6_decrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__6_decrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_5bbb528f1d52a0c90326b0e46b5b906d, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__6_decrypt->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__6_decrypt = cache_frame_frame_cryptography$fernet$$$function__6_decrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__6_decrypt);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__6_decrypt) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$Fernet(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token);
tmp_args_element_value_1 = par_token;
frame_frame_cryptography$fernet$$$function__6_decrypt->m_frame.f_lineno = 87;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_unverified_token_data, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooo";
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



exception_lineno = 87;
type_description_1 = "oooooo";
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



exception_lineno = 87;
type_description_1 = "oooooo";
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



exception_lineno = 87;
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
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_4;
    Py_INCREF(var_timestamp);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_ttl);
tmp_cmp_expr_left_1 = par_ttl;
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
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_None;
{
    PyObject *old = var_time_info;
    var_time_info = tmp_assign_source_6;
    Py_INCREF(var_time_info);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ttl);
tmp_tuple_element_1 = par_ttl;
tmp_assign_source_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_int_arg_1;
PyObject *tmp_called_instance_2;
PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
tmp_called_instance_2 = module_var_accessor_cryptography$fernet$time(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
frame_frame_cryptography$fernet$$$function__6_decrypt->m_frame.f_lineno = 91;
tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_time);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_7, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_time_info;
    var_time_info = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
branch_end_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
CHECK_OBJECT(var_timestamp);
tmp_args_element_value_3 = var_timestamp;
CHECK_OBJECT(var_time_info);
tmp_args_element_value_4 = var_time_info;
frame_frame_cryptography$fernet$$$function__6_decrypt->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain__decrypt_data,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__6_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__6_decrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__6_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__6_decrypt,
    type_description_1,
    par_self,
    par_token,
    par_ttl,
    var_timestamp,
    var_data,
    var_time_info
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__6_decrypt == cache_frame_frame_cryptography$fernet$$$function__6_decrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__6_decrypt);
    cache_frame_frame_cryptography$fernet$$$function__6_decrypt = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__6_decrypt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_timestamp);
CHECK_OBJECT(var_timestamp);
Py_DECREF(var_timestamp);
var_timestamp = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_time_info);
CHECK_OBJECT(var_time_info);
Py_DECREF(var_time_info);
var_time_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_time_info);
var_time_info = NULL;
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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__7_decrypt_at_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token = python_pars[1];
PyObject *par_ttl = python_pars[2];
PyObject *par_current_time = python_pars[3];
PyObject *var_timestamp = NULL;
PyObject *var_data = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__7_decrypt_at_time;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time = MAKE_FUNCTION_FRAME(tstate, code_objects_a57b970e3045270e947ec32a341b2300, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__7_decrypt_at_time = cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__7_decrypt_at_time);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__7_decrypt_at_time) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_ttl);
tmp_cmp_expr_left_1 = par_ttl;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4;
frame_frame_cryptography$fernet$$$function__7_decrypt_at_time->m_frame.f_lineno = 98;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 98;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$Fernet(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token);
tmp_args_element_value_1 = par_token;
frame_frame_cryptography$fernet$$$function__7_decrypt_at_time->m_frame.f_lineno = 101;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_unverified_token_data, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooo";
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



exception_lineno = 101;
type_description_1 = "oooooo";
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



exception_lineno = 101;
type_description_1 = "oooooo";
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
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_4;
    Py_INCREF(var_timestamp);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
CHECK_OBJECT(var_timestamp);
tmp_args_element_value_3 = var_timestamp;
CHECK_OBJECT(par_ttl);
tmp_tuple_element_1 = par_ttl;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_current_time);
tmp_tuple_element_1 = par_current_time;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_1);
frame_frame_cryptography$fernet$$$function__7_decrypt_at_time->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain__decrypt_data,
        call_args
    );
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__7_decrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__7_decrypt_at_time->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__7_decrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__7_decrypt_at_time,
    type_description_1,
    par_self,
    par_token,
    par_ttl,
    par_current_time,
    var_timestamp,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__7_decrypt_at_time == cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time);
    cache_frame_frame_cryptography$fernet$$$function__7_decrypt_at_time = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__7_decrypt_at_time);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_timestamp);
CHECK_OBJECT(var_timestamp);
Py_DECREF(var_timestamp);
var_timestamp = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__8_extract_timestamp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_token = python_pars[1];
PyObject *var_timestamp = NULL;
PyObject *var_data = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__8_extract_timestamp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp = MAKE_FUNCTION_FRAME(tstate, code_objects_63e22991101df540fff6a547355313e2, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__8_extract_timestamp = cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__8_extract_timestamp);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__8_extract_timestamp) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$Fernet(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token);
tmp_args_element_value_1 = par_token;
frame_frame_cryptography$fernet$$$function__8_extract_timestamp->m_frame.f_lineno = 105;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_unverified_token_data, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooo";
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



exception_lineno = 105;
type_description_1 = "oooo";
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



exception_lineno = 105;
type_description_1 = "oooo";
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



exception_lineno = 105;
type_description_1 = "oooo";
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
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_4;
    Py_INCREF(var_timestamp);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
frame_frame_cryptography$fernet$$$function__8_extract_timestamp->m_frame.f_lineno = 107;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__verify_signature, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__8_extract_timestamp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__8_extract_timestamp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__8_extract_timestamp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__8_extract_timestamp,
    type_description_1,
    par_self,
    par_token,
    var_timestamp,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__8_extract_timestamp == cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp);
    cache_frame_frame_cryptography$fernet$$$function__8_extract_timestamp = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__8_extract_timestamp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_timestamp);
tmp_return_value = var_timestamp;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_timestamp);
CHECK_OBJECT(var_timestamp);
Py_DECREF(var_timestamp);
var_timestamp = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__9__get_unverified_token_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token = python_pars[0];
PyObject *var_data = NULL;
PyObject *var_timestamp = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data = MAKE_FUNCTION_FRAME(tstate, code_objects_0b53a1cfc6677eba8c98bf1f8abb96c3, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data = cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_token);
tmp_isinstance_inst_1 = par_token;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4c5440a2609ed101a7675f82f7be1e46;
frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data->m_frame.f_lineno = 113;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 113;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$base64(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_token);
tmp_args_element_value_1 = par_token;
frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data->m_frame.f_lineno = 116;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlsafe_b64decode, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_1 = PyExc_TypeError;
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_cryptography$fernet$binascii(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binascii);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Error);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_3;
}
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 115;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data->m_frame)) {
        frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
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
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_data);
tmp_operand_value_2 = var_data;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
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
CHECK_OBJECT(var_data);
tmp_expression_value_2 = var_data;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_128;
tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_2;
tmp_raise_type_input_2 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 121;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_data);
tmp_len_arg_1 = var_data;
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 9;
tmp_condition_result_4 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_3;
tmp_raise_type_input_3 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 124;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
tmp_expression_value_3 = (PyObject *)&PyLong_Type;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_from_bytes);
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(var_data);
tmp_expression_value_4 = var_data;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_int_pos_9_none;
tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 126;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data->m_frame.f_lineno = 126;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_1,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_big_tuple, 0),
        mod_consts.const_tuple_str_plain_byteorder_tuple
    );
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_2;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data,
    type_description_1,
    par_token,
    var_data,
    var_timestamp
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data == cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data);
    cache_frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__9__get_unverified_token_data);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_timestamp);
tmp_tuple_element_2 = var_timestamp;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_data);
tmp_tuple_element_2 = var_data;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_timestamp);
CHECK_OBJECT(var_timestamp);
Py_DECREF(var_timestamp);
var_timestamp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__10__verify_signature(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *var_h = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__10__verify_signature;
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
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__10__verify_signature = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__10__verify_signature)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__10__verify_signature);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__10__verify_signature == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__10__verify_signature = MAKE_FUNCTION_FRAME(tstate, code_objects_24fb04a8847005951c2b22ba5401429f, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__10__verify_signature->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__10__verify_signature = cache_frame_frame_cryptography$fernet$$$function__10__verify_signature;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__10__verify_signature);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__10__verify_signature) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_cryptography$fernet$HMAC(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HMAC);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__signing_key);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_cryptography$fernet$_SHA256(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SHA256);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 130;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__10__verify_signature->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_h;
    var_h = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_h);
tmp_expression_value_2 = var_h;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = (PyObject *)&PyMemoryView_Type;
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
frame_frame_cryptography$fernet$$$function__10__verify_signature->m_frame.f_lineno = 131;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 131;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_32_none;
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 131;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__10__verify_signature->m_frame.f_lineno = 131;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_h);
tmp_expression_value_4 = var_h;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_verify);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_data);
tmp_expression_value_5 = par_data;
tmp_subscript_value_2 = mod_consts.const_slice_int_neg_32_none_none;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 133;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
frame_frame_cryptography$fernet$$$function__10__verify_signature->m_frame.f_lineno = 133;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__10__verify_signature, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__10__verify_signature, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = module_var_accessor_cryptography$fernet$InvalidSignature(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidSignature);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooo";
    goto try_except_handler_3;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 135;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto try_except_handler_3;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 132;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__10__verify_signature->m_frame)) {
        frame_frame_cryptography$fernet$$$function__10__verify_signature->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_1:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__10__verify_signature, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__10__verify_signature->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__10__verify_signature, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__10__verify_signature,
    type_description_1,
    par_self,
    par_data,
    var_h
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__10__verify_signature == cache_frame_frame_cryptography$fernet$$$function__10__verify_signature) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__10__verify_signature);
    cache_frame_frame_cryptography$fernet$$$function__10__verify_signature = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__10__verify_signature);

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
CHECK_OBJECT(var_h);
CHECK_OBJECT(var_h);
Py_DECREF(var_h);
var_h = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_h);
var_h = NULL;
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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__11__decrypt_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_timestamp = python_pars[2];
PyObject *par_time_info = python_pars[3];
PyObject *var_ttl = NULL;
PyObject *var_current_time = NULL;
PyObject *var_mv = NULL;
PyObject *var_iv = NULL;
PyObject *var_ciphertext = NULL;
PyObject *var_decryptor = NULL;
PyObject *var_plaintext_padded = NULL;
PyObject *var_unpadder = NULL;
PyObject *var_unpadded = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__11__decrypt_data;
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
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data = MAKE_FUNCTION_FRAME(tstate, code_objects_03f913c59c8adcd8e6c21f70ec142094, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__11__decrypt_data = cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__11__decrypt_data);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__11__decrypt_data) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_time_info);
tmp_cmp_expr_left_1 = par_time_info;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_time_info);
tmp_iter_arg_1 = par_time_info;
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooooooooo";
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



exception_lineno = 144;
type_description_1 = "ooooooooooooo";
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



exception_lineno = 144;
type_description_1 = "ooooooooooooo";
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



exception_lineno = 144;
type_description_1 = "ooooooooooooo";
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
    PyObject *old = var_ttl;
    var_ttl = tmp_assign_source_4;
    Py_INCREF(var_ttl);
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
    PyObject *old = var_current_time;
    var_current_time = tmp_assign_source_5;
    Py_INCREF(var_current_time);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(par_timestamp);
tmp_add_expr_left_1 = par_timestamp;
CHECK_OBJECT(var_ttl);
tmp_add_expr_right_1 = var_ttl;
tmp_cmp_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_current_time);
tmp_cmp_expr_right_2 = var_current_time;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
CHECK_OBJECT(var_current_time);
tmp_add_expr_left_2 = var_current_time;
tmp_add_expr_right_2 = module_var_accessor_cryptography$fernet$_MAX_CLOCK_SKEW(tstate);
if (unlikely(tmp_add_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_CLOCK_SKEW);
}

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timestamp);
tmp_cmp_expr_right_3 = par_timestamp;
tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
tmp_raise_type_input_2 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 149;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 151;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__verify_signature, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = (PyObject *)&PyMemoryView_Type;
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 153;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_mv;
    var_mv = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_data);
tmp_expression_value_1 = par_data;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_9_int_pos_25_none;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_iv;
    var_iv = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_mv);
tmp_expression_value_2 = var_mv;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_25_int_neg_32_none;
tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ciphertext;
    var_ciphertext = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_cryptography$fernet$Cipher(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Cipher);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__aes);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_3 = module_var_accessor_cryptography$fernet$modes(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_modes);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_3);

exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_iv);
tmp_args_element_value_5 = var_iv;
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 156;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_CBC, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 156;
tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_decryptor);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_decryptor;
    var_decryptor = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(var_decryptor);
tmp_expression_value_4 = var_decryptor;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ciphertext);
tmp_args_element_value_6 = var_ciphertext;
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 157;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_plaintext_padded;
    var_plaintext_padded = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(var_plaintext_padded);
tmp_iadd_expr_left_1 = var_plaintext_padded;
CHECK_OBJECT(var_decryptor);
tmp_called_instance_4 = var_decryptor;
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 159;
tmp_iadd_expr_right_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_finalize);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_11 = tmp_iadd_expr_left_1;
var_plaintext_padded = tmp_assign_source_11;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__11__decrypt_data, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__11__decrypt_data, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ValueError;
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
PyObject *tmp_raise_type_3;
PyObject *tmp_raise_type_input_3;
tmp_raise_type_input_3 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_raise_type_3 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
if (tmp_raise_type_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 161;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto try_except_handler_5;
}
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 158;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame)) {
        frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooo";
goto try_except_handler_5;
branch_end_4:;
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
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_cryptography$fernet$_PKCS7_128(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__PKCS7_128);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 162;
tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_unpadder);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_unpadder;
    var_unpadder = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_unpadder);
tmp_expression_value_5 = var_unpadder;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_update);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_plaintext_padded);
tmp_args_element_value_7 = var_plaintext_padded;
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 164;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_unpadded;
    var_unpadded = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
PyObject *tmp_called_instance_6;
CHECK_OBJECT(var_unpadded);
tmp_iadd_expr_left_2 = var_unpadded;
CHECK_OBJECT(var_unpadder);
tmp_called_instance_6 = var_unpadder;
frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = 166;
tmp_iadd_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_finalize);
if (tmp_iadd_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
CHECK_OBJECT(tmp_iadd_expr_right_2);
Py_DECREF(tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_14 = tmp_iadd_expr_left_2;
var_unpadded = tmp_assign_source_14;

}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__11__decrypt_data, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__11__decrypt_data, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_ValueError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
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
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_4;
tmp_raise_type_input_4 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 168;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto try_except_handler_7;
}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 165;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame)) {
        frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooo";
goto try_except_handler_7;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__11__decrypt_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__11__decrypt_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__11__decrypt_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__11__decrypt_data,
    type_description_1,
    par_self,
    par_data,
    par_timestamp,
    par_time_info,
    var_ttl,
    var_current_time,
    var_mv,
    var_iv,
    var_ciphertext,
    var_decryptor,
    var_plaintext_padded,
    var_unpadder,
    var_unpadded
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__11__decrypt_data == cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data);
    cache_frame_frame_cryptography$fernet$$$function__11__decrypt_data = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__11__decrypt_data);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_unpadded);
tmp_return_value = var_unpadded;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_ttl);
var_ttl = NULL;
Py_XDECREF(var_current_time);
var_current_time = NULL;
CHECK_OBJECT(var_mv);
CHECK_OBJECT(var_mv);
Py_DECREF(var_mv);
var_mv = NULL;
CHECK_OBJECT(var_iv);
CHECK_OBJECT(var_iv);
Py_DECREF(var_iv);
var_iv = NULL;
CHECK_OBJECT(var_ciphertext);
CHECK_OBJECT(var_ciphertext);
Py_DECREF(var_ciphertext);
var_ciphertext = NULL;
CHECK_OBJECT(var_decryptor);
CHECK_OBJECT(var_decryptor);
Py_DECREF(var_decryptor);
var_decryptor = NULL;
CHECK_OBJECT(var_plaintext_padded);
CHECK_OBJECT(var_plaintext_padded);
Py_DECREF(var_plaintext_padded);
var_plaintext_padded = NULL;
CHECK_OBJECT(var_unpadder);
CHECK_OBJECT(var_unpadder);
Py_DECREF(var_unpadder);
var_unpadder = NULL;
CHECK_OBJECT(var_unpadded);
CHECK_OBJECT(var_unpadded);
Py_DECREF(var_unpadded);
var_unpadded = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ttl);
var_ttl = NULL;
Py_XDECREF(var_current_time);
var_current_time = NULL;
Py_XDECREF(var_mv);
var_mv = NULL;
Py_XDECREF(var_iv);
var_iv = NULL;
Py_XDECREF(var_ciphertext);
var_ciphertext = NULL;
Py_XDECREF(var_decryptor);
var_decryptor = NULL;
Py_XDECREF(var_plaintext_padded);
var_plaintext_padded = NULL;
Py_XDECREF(var_unpadder);
var_unpadder = NULL;
Py_XDECREF(var_unpadded);
var_unpadded = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_timestamp);
Py_DECREF(par_timestamp);
CHECK_OBJECT(par_time_info);
Py_DECREF(par_time_info);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_timestamp);
Py_DECREF(par_timestamp);
CHECK_OBJECT(par_time_info);
Py_DECREF(par_time_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_fernets = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__12___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__12___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__12___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__12___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__12___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__12___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e8ce7e66d9b72a8f854288c67d209037, module_cryptography$fernet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__12___init__->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__12___init__ = cache_frame_frame_cryptography$fernet$$$function__12___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__12___init__);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__12___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(par_fernets);
tmp_list_arg_1 = par_fernets;
tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_fernets;
    assert(old != NULL);
    par_fernets = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_fernets);
tmp_operand_value_1 = par_fernets;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_eefb46136d416eb8d111f03b15b6d39b;
frame_frame_cryptography$fernet$$$function__12___init__->m_frame.f_lineno = 176;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 176;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_fernets);
tmp_ass_attr_value_1 = par_fernets;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__fernets, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__12___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__12___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__12___init__,
    type_description_1,
    par_self,
    par_fernets
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__12___init__ == cache_frame_frame_cryptography$fernet$$$function__12___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__12___init__);
    cache_frame_frame_cryptography$fernet$$$function__12___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__12___init__);

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
CHECK_OBJECT(par_fernets);
CHECK_OBJECT(par_fernets);
Py_DECREF(par_fernets);
par_fernets = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_fernets);
par_fernets = NULL;
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


static PyObject *impl_cryptography$fernet$$$function__13_encrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__13_encrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__13_encrypt = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__13_encrypt)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__13_encrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__13_encrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__13_encrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_d12d50bd02fd13a348cce9200ee8a2ed, module_cryptography$fernet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__13_encrypt->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__13_encrypt = cache_frame_frame_cryptography$fernet$$$function__13_encrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__13_encrypt);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__13_encrypt) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_int_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encrypt_at_time);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_msg);
tmp_args_element_value_1 = par_msg;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__13_encrypt->m_frame.f_lineno = 182;
tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet$$$function__13_encrypt->m_frame.f_lineno = 182;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__13_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__13_encrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__13_encrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__13_encrypt,
    type_description_1,
    par_self,
    par_msg
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__13_encrypt == cache_frame_frame_cryptography$fernet$$$function__13_encrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__13_encrypt);
    cache_frame_frame_cryptography$fernet$$$function__13_encrypt = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__13_encrypt);

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
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__14_encrypt_at_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *par_current_time = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__14_encrypt_at_time;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time = MAKE_FUNCTION_FRAME(tstate, code_objects_9765e0d91dedb2af6f23e06d7668cadb, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__14_encrypt_at_time = cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__14_encrypt_at_time);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__14_encrypt_at_time) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fernets);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_called_instance_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_msg);
tmp_args_element_value_1 = par_msg;
CHECK_OBJECT(par_current_time);
tmp_args_element_value_2 = par_current_time;
frame_frame_cryptography$fernet$$$function__14_encrypt_at_time->m_frame.f_lineno = 185;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_encrypt_at_time,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__14_encrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__14_encrypt_at_time->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__14_encrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__14_encrypt_at_time,
    type_description_1,
    par_self,
    par_msg,
    par_current_time
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__14_encrypt_at_time == cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time);
    cache_frame_frame_cryptography$fernet$$$function__14_encrypt_at_time = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__14_encrypt_at_time);

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
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__15_rotate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *var_timestamp = NULL;
PyObject *var_data = NULL;
PyObject *var_f = NULL;
PyObject *var_p = NULL;
PyObject *var_iv = NULL;
nuitka_bool tmp_for_loop_1__break_indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__15_rotate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__15_rotate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__15_rotate)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__15_rotate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__15_rotate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__15_rotate = MAKE_FUNCTION_FRAME(tstate, code_objects_eb42d502e8f49d8586f21e209c7cd40f, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__15_rotate->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__15_rotate = cache_frame_frame_cryptography$fernet$$$function__15_rotate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__15_rotate);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__15_rotate) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$Fernet(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_msg);
tmp_args_element_value_1 = par_msg;
frame_frame_cryptography$fernet$$$function__15_rotate->m_frame.f_lineno = 188;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_unverified_token_data, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooo";
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



exception_lineno = 188;
type_description_1 = "ooooooo";
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



exception_lineno = 188;
type_description_1 = "ooooooo";
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



exception_lineno = 188;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_4;
    Py_INCREF(var_timestamp);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
tmp_for_loop_1__break_indicator = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fernets);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_value_value_1;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_value_value_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_assign_source_8 == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = exception_keeper_name_3.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopIteration;
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
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_for_loop_1__break_indicator = tmp_assign_source_9;
}
RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
branch_end_1:;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_f;
    var_f = tmp_assign_source_10;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_f);
tmp_expression_value_2 = var_f;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__decrypt_data);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
if (var_data == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_2 = var_data;
if (var_timestamp == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}

tmp_args_element_value_3 = var_timestamp;
tmp_args_element_value_4 = Py_None;
frame_frame_cryptography$fernet$$$function__15_rotate->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = var_p;
    var_p = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
goto loop_end_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__15_rotate, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__15_rotate, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooo";
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
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 190;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__15_rotate->m_frame)) {
        frame_frame_cryptography$fernet$$$function__15_rotate->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_7;
branch_no_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_for_loop_1__break_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_for_loop_1__break_indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 196;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_cryptography$fernet$$$function__15_rotate->m_frame.f_lineno = 198;
tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_urandom,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_16_tuple, 0)
);

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_iv;
    var_iv = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fernets);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__encrypt_from_parts);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (var_p == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = var_p;
if (var_timestamp == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 199;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = var_timestamp;
CHECK_OBJECT(var_iv);
tmp_args_element_value_7 = var_iv;
frame_frame_cryptography$fernet$$$function__15_rotate->m_frame.f_lineno = 199;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__15_rotate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__15_rotate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__15_rotate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__15_rotate,
    type_description_1,
    par_self,
    par_msg,
    var_timestamp,
    var_data,
    var_f,
    var_p,
    var_iv
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__15_rotate == cache_frame_frame_cryptography$fernet$$$function__15_rotate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__15_rotate);
    cache_frame_frame_cryptography$fernet$$$function__15_rotate = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__15_rotate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_p);
var_p = NULL;
CHECK_OBJECT(var_iv);
CHECK_OBJECT(var_iv);
Py_DECREF(var_iv);
var_iv = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_iv);
var_iv = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__16_decrypt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *par_ttl = python_pars[2];
PyObject *var_time_info = NULL;
PyObject *var_timestamp = NULL;
PyObject *var_data = NULL;
PyObject *var_f = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__16_decrypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__16_decrypt = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__16_decrypt)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__16_decrypt);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__16_decrypt == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__16_decrypt = MAKE_FUNCTION_FRAME(tstate, code_objects_f2db3ff8a353e0d6f04e6bf358eeea44, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__16_decrypt->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__16_decrypt = cache_frame_frame_cryptography$fernet$$$function__16_decrypt;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__16_decrypt);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__16_decrypt) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_ttl);
tmp_cmp_expr_left_1 = par_ttl;
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
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_time_info;
    var_time_info = tmp_assign_source_1;
    Py_INCREF(var_time_info);
    Py_XDECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_ttl);
tmp_tuple_element_1 = par_ttl;
tmp_assign_source_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_int_arg_1;
PyObject *tmp_called_instance_1;
PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
frame_frame_cryptography$fernet$$$function__16_decrypt->m_frame.f_lineno = 205;
tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_2, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_time_info;
    var_time_info = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
branch_end_1:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_cryptography$fernet$Fernet(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_msg);
tmp_args_element_value_1 = par_msg;
frame_frame_cryptography$fernet$$$function__16_decrypt->m_frame.f_lineno = 207;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__get_unverified_token_data, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
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



exception_lineno = 207;
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



exception_lineno = 207;
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



exception_lineno = 207;
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
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_6;
    Py_INCREF(var_timestamp);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_7;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fernets);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 208;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_10 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_f;
    var_f = tmp_assign_source_10;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_f);
tmp_expression_value_2 = var_f;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__decrypt_data);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
if (var_data == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_2 = var_data;
if (var_timestamp == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_3 = var_timestamp;
if (var_time_info == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time_info);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 210;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_4 = var_time_info;
frame_frame_cryptography$fernet$$$function__16_decrypt->m_frame.f_lineno = 210;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__16_decrypt, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__16_decrypt, exception_keeper_lineno_3);
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
tmp_cmp_expr_right_2 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
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
    exception_lineno = 209;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__16_decrypt->m_frame)) {
        frame_frame_cryptography$fernet$$$function__16_decrypt->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_6;
branch_no_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Return handler code:
try_return_handler_4:;
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
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 213;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__16_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__16_decrypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__16_decrypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__16_decrypt,
    type_description_1,
    par_self,
    par_msg,
    par_ttl,
    var_time_info,
    var_timestamp,
    var_data,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__16_decrypt == cache_frame_frame_cryptography$fernet$$$function__16_decrypt) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__16_decrypt);
    cache_frame_frame_cryptography$fernet$$$function__16_decrypt = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__16_decrypt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_time_info);
var_time_info = NULL;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_f);
CHECK_OBJECT(var_f);
Py_DECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_time_info);
var_time_info = NULL;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__17_decrypt_at_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *par_ttl = python_pars[2];
PyObject *par_current_time = python_pars[3];
PyObject *var_timestamp = NULL;
PyObject *var_data = NULL;
PyObject *var_f = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__17_decrypt_at_time;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time = MAKE_FUNCTION_FRAME(tstate, code_objects_318b4dd9e2805c2b32adeff6ce61f080, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__17_decrypt_at_time = cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__17_decrypt_at_time);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__17_decrypt_at_time) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_ttl);
tmp_cmp_expr_left_1 = par_ttl;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_cbc4344439b26706ab3638234db8e0a4;
frame_frame_cryptography$fernet$$$function__17_decrypt_at_time->m_frame.f_lineno = 219;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 219;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$Fernet(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_msg);
tmp_args_element_value_1 = par_msg;
frame_frame_cryptography$fernet$$$function__17_decrypt_at_time->m_frame.f_lineno = 223;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_unverified_token_data, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "ooooooo";
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



exception_lineno = 223;
type_description_1 = "ooooooo";
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



exception_lineno = 223;
type_description_1 = "ooooooo";
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



exception_lineno = 223;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_4;
    Py_INCREF(var_timestamp);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fernets);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
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
type_description_1 = "ooooooo";
exception_lineno = 224;
        goto try_except_handler_4;
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
    PyObject *old = var_f;
    var_f = tmp_assign_source_8;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_f);
tmp_expression_value_2 = var_f;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__decrypt_data);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
if (var_data == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_2 = var_data;
if (var_timestamp == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timestamp);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_3 = var_timestamp;
if (par_ttl == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ttl);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}

tmp_tuple_element_1 = par_ttl;
tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
if (par_current_time == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_time);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = par_current_time;
PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_4);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_cryptography$fernet$$$function__17_decrypt_at_time->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__17_decrypt_at_time, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__17_decrypt_at_time, exception_keeper_lineno_3);
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
tmp_cmp_expr_right_2 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
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
    exception_lineno = 225;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__17_decrypt_at_time->m_frame)) {
        frame_frame_cryptography$fernet$$$function__17_decrypt_at_time->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_6;
branch_no_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Return handler code:
try_return_handler_4:;
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
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 229;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__17_decrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__17_decrypt_at_time->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__17_decrypt_at_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__17_decrypt_at_time,
    type_description_1,
    par_self,
    par_msg,
    par_ttl,
    par_current_time,
    var_timestamp,
    var_data,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__17_decrypt_at_time == cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time);
    cache_frame_frame_cryptography$fernet$$$function__17_decrypt_at_time = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__17_decrypt_at_time);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_f);
CHECK_OBJECT(var_f);
Py_DECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_ttl);
Py_DECREF(par_ttl);
CHECK_OBJECT(par_current_time);
Py_DECREF(par_current_time);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$fernet$$$function__18_extract_timestamp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_msg = python_pars[1];
PyObject *var_timestamp = NULL;
PyObject *var_data = NULL;
PyObject *var_f = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet$$$function__18_extract_timestamp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp)) {
    Py_XDECREF(cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp = MAKE_FUNCTION_FRAME(tstate, code_objects_f6c3d09421433ece0f5e75d30e343627, module_cryptography$fernet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp->m_type_description == NULL);
frame_frame_cryptography$fernet$$$function__18_extract_timestamp = cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet$$$function__18_extract_timestamp);
assert(Py_REFCNT(frame_frame_cryptography$fernet$$$function__18_extract_timestamp) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$Fernet(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_msg);
tmp_args_element_value_1 = par_msg;
frame_frame_cryptography$fernet$$$function__18_extract_timestamp->m_frame.f_lineno = 233;
tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_unverified_token_data, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
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



exception_lineno = 233;
type_description_1 = "ooooo";
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



exception_lineno = 233;
type_description_1 = "ooooo";
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



exception_lineno = 233;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_timestamp;
    var_timestamp = tmp_assign_source_4;
    Py_INCREF(var_timestamp);
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
    PyObject *old = var_data;
    var_data = tmp_assign_source_5;
    Py_INCREF(var_data);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fernets);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
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
type_description_1 = "ooooo";
exception_lineno = 234;
        goto try_except_handler_4;
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
    PyObject *old = var_f;
    var_f = tmp_assign_source_8;
    Py_INCREF(var_f);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_f);
tmp_expression_value_2 = var_f;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__verify_signature);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
if (var_data == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_2 = var_data;
frame_frame_cryptography$fernet$$$function__18_extract_timestamp->m_frame.f_lineno = 236;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
CHECK_OBJECT(var_timestamp);
tmp_return_value = var_timestamp;
Py_INCREF(tmp_return_value);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__18_extract_timestamp, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__18_extract_timestamp, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooo";
    goto try_except_handler_6;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 235;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$fernet$$$function__18_extract_timestamp->m_frame)) {
        frame_frame_cryptography$fernet$$$function__18_extract_timestamp->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_6;
branch_no_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_5;
// Return handler code:
try_return_handler_4:;
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
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_cryptography$fernet$InvalidToken(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 240;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet$$$function__18_extract_timestamp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet$$$function__18_extract_timestamp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet$$$function__18_extract_timestamp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$fernet$$$function__18_extract_timestamp,
    type_description_1,
    par_self,
    par_msg,
    var_timestamp,
    var_data,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$fernet$$$function__18_extract_timestamp == cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp);
    cache_frame_frame_cryptography$fernet$$$function__18_extract_timestamp = NULL;
}

assertFrameObject(frame_frame_cryptography$fernet$$$function__18_extract_timestamp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_timestamp);
CHECK_OBJECT(var_timestamp);
Py_DECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
CHECK_OBJECT(var_f);
CHECK_OBJECT(var_f);
Py_DECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__10__verify_signature(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__10__verify_signature,
        mod_consts.const_str_plain__verify_signature,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c024051e61b501558bf0e65a42dc89f9,
#endif
        code_objects_24fb04a8847005951c2b22ba5401429f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__11__decrypt_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__11__decrypt_data,
        mod_consts.const_str_plain__decrypt_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_70fced7985baa0af6074e98bd73244b7,
#endif
        code_objects_03f913c59c8adcd8e6c21f70ec142094,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__12___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__12___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_88cae74badcdfbd85eea2367072c2ed8,
#endif
        code_objects_e8ce7e66d9b72a8f854288c67d209037,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__13_encrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__13_encrypt,
        mod_consts.const_str_plain_encrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6616dd812f529676dff2d1324e816963,
#endif
        code_objects_d12d50bd02fd13a348cce9200ee8a2ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__14_encrypt_at_time(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__14_encrypt_at_time,
        mod_consts.const_str_plain_encrypt_at_time,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3705c2c71d1c663afc4dbdf09c3f9395,
#endif
        code_objects_9765e0d91dedb2af6f23e06d7668cadb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__15_rotate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__15_rotate,
        mod_consts.const_str_plain_rotate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_97ba4a32ddda86421758835163f0f822,
#endif
        code_objects_eb42d502e8f49d8586f21e209c7cd40f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__16_decrypt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__16_decrypt,
        mod_consts.const_str_plain_decrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ace585c9472f6b75ccda0c1b9ef82cc,
#endif
        code_objects_f2db3ff8a353e0d6f04e6bf358eeea44,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__17_decrypt_at_time(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__17_decrypt_at_time,
        mod_consts.const_str_plain_decrypt_at_time,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_66e4f9d18e2965d6dfa31be57b90a170,
#endif
        code_objects_318b4dd9e2805c2b32adeff6ce61f080,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__18_extract_timestamp(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__18_extract_timestamp,
        mod_consts.const_str_plain_extract_timestamp,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0d0ed3044a1989ea9759e04f7dccacc0,
#endif
        code_objects_f6c3d09421433ece0f5e75d30e343627,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4f129e9d2cffc4550be47c9454ab49ab,
#endif
        code_objects_6f63de8691d41868d7253208a16479c7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__2_generate_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__2_generate_key,
        mod_consts.const_str_plain_generate_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f9f3d08f0cb790922d7024ed28602f02,
#endif
        code_objects_565555b435f0f1913215c7866e66caeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__3_encrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__3_encrypt,
        mod_consts.const_str_plain_encrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8c1f97733e9b1aebea160699ff6f5943,
#endif
        code_objects_bdc0339f4dd8145747c4d023eee4f7c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__4_encrypt_at_time(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__4_encrypt_at_time,
        mod_consts.const_str_plain_encrypt_at_time,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1dfea6e6ae5ac1a670d39b221146b17c,
#endif
        code_objects_0517fc3636367275ac96eacd60865a41,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__5__encrypt_from_parts(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__5__encrypt_from_parts,
        mod_consts.const_str_plain__encrypt_from_parts,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_48179f980a5ff440e661dd2d472f6785,
#endif
        code_objects_b620ff3a0b140543b6195a4febdb90b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__6_decrypt(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__6_decrypt,
        mod_consts.const_str_plain_decrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dfee1def3dac1cb809c88f740f2eb81a,
#endif
        code_objects_5bbb528f1d52a0c90326b0e46b5b906d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__7_decrypt_at_time(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__7_decrypt_at_time,
        mod_consts.const_str_plain_decrypt_at_time,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_753e95d772e6e1285667d09f03adf4cc,
#endif
        code_objects_a57b970e3045270e947ec32a341b2300,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__8_extract_timestamp(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__8_extract_timestamp,
        mod_consts.const_str_plain_extract_timestamp,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c8d7f50ec830138c25eec62b9c358531,
#endif
        code_objects_63e22991101df540fff6a547355313e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$fernet$$$function__9__get_unverified_token_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$fernet$$$function__9__get_unverified_token_data,
        mod_consts.const_str_plain__get_unverified_token_data,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_db63ee44d3a0e0981e0997fe7b4af98e,
#endif
        code_objects_0b53a1cfc6677eba8c98bf1f8abb96c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$fernet,
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

static function_impl_code const function_table_cryptography$fernet[] = {
impl_cryptography$fernet$$$function__1___init__,
impl_cryptography$fernet$$$function__2_generate_key,
impl_cryptography$fernet$$$function__3_encrypt,
impl_cryptography$fernet$$$function__4_encrypt_at_time,
impl_cryptography$fernet$$$function__5__encrypt_from_parts,
impl_cryptography$fernet$$$function__6_decrypt,
impl_cryptography$fernet$$$function__7_decrypt_at_time,
impl_cryptography$fernet$$$function__8_extract_timestamp,
impl_cryptography$fernet$$$function__9__get_unverified_token_data,
impl_cryptography$fernet$$$function__10__verify_signature,
impl_cryptography$fernet$$$function__11__decrypt_data,
impl_cryptography$fernet$$$function__12___init__,
impl_cryptography$fernet$$$function__13_encrypt,
impl_cryptography$fernet$$$function__14_encrypt_at_time,
impl_cryptography$fernet$$$function__15_rotate,
impl_cryptography$fernet$$$function__16_decrypt,
impl_cryptography$fernet$$$function__17_decrypt_at_time,
impl_cryptography$fernet$$$function__18_extract_timestamp,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$fernet);
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
        module_cryptography$fernet,
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
        function_table_cryptography$fernet,
        sizeof(function_table_cryptography$fernet) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.fernet";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$fernet(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$fernet");

    // Store the module for future use.
    module_cryptography$fernet = module;

    moduledict_cryptography$fernet = MODULE_DICT(module_cryptography$fernet);

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
        PRINT_STRING("cryptography$fernet: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$fernet: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$fernet: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.fernet" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$fernet\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$fernet,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$fernet,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$fernet,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$fernet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$fernet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$fernet);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$fernet);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$fernet;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_cryptography$fernet$$$class__1_InvalidToken_21 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_cryptography$fernet$$$class__2_Fernet_32 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_cryptography$fernet$$$class__3_MultiFernet_172 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$fernet = MAKE_MODULE_FRAME(code_objects_99731659eedc4d4789a2c6b4828ec3d8, module_cryptography$fernet);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$fernet);
assert(Py_REFCNT(frame_frame_cryptography$fernet) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$fernet$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$fernet$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 7;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_binascii;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_binascii, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 10;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Iterable_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 12;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_cryptography;
tmp_globals_arg_value_5 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 14;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_utils, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c;
tmp_globals_arg_value_6 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_InvalidSignature_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 15;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_InvalidSignature,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_InvalidSignature);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSignature, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
tmp_globals_arg_value_7 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_hashes_str_plain_padding_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 16;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_hashes,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_hashes);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_padding,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_padding);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_padding, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
tmp_globals_arg_value_8 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Cipher_str_plain_algorithms_str_plain_modes_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 17;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_Cipher,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Cipher);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Cipher, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_algorithms,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_algorithms);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_algorithms, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_modes,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_modes);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_modes, tmp_assign_source_20);
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
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_903d36dae69b0a3e82a4f2b0be3683ff;
tmp_globals_arg_value_9 = (PyObject *)moduledict_cryptography$fernet;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_HMAC_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_cryptography$fernet->m_frame.f_lineno = 18;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_cryptography$fernet,
        mod_consts.const_str_plain_HMAC,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_HMAC);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_HMAC, tmp_assign_source_21);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_InvalidToken;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_cryptography$fernet->m_frame.f_lineno = 21;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

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
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_10, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
frame_frame_cryptography$fernet->m_frame.f_lineno = 21;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 21;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
branch_end_1:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_cryptography$fernet$$$class__1_InvalidToken_21 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8;
tmp_res = PyObject_SetItem(locals_cryptography$fernet$$$class__1_InvalidToken_21, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidToken;
tmp_res = PyObject_SetItem(locals_cryptography$fernet$$$class__1_InvalidToken_21, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_21;
tmp_res = PyObject_SetItem(locals_cryptography$fernet$$$class__1_InvalidToken_21, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$fernet$$$class__1_InvalidToken_21, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_cryptography$fernet$$$class__1_InvalidToken_21, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain_InvalidToken;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_cryptography$fernet$$$class__1_InvalidToken_21;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_27 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_cryptography$fernet$$$class__1_InvalidToken_21);
locals_cryptography$fernet$$$class__1_InvalidToken_21 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$fernet$$$class__1_InvalidToken_21);
locals_cryptography$fernet$$$class__1_InvalidToken_21 = NULL;
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
exception_lineno = 21;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken, tmp_assign_source_27);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
try_end_3:;
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
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = mod_consts.const_int_pos_60;
UPDATE_STRING_DICT0(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_CLOCK_SKEW, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_cryptography$fernet$padding(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_padding);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet->m_frame.f_lineno = 28;
tmp_assign_source_30 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_PKCS7,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_128_tuple, 0)
);

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__PKCS7_128, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_cryptography$fernet$hashes(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$fernet->m_frame.f_lineno = 29;
tmp_assign_source_31 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_SHA256);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain__SHA256, tmp_assign_source_31);
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
locals_cryptography$fernet$$$class__2_Fernet_32 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Fernet;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_7df07a4850a3b0120dbe4fda0c79d089);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_classmethod_arg_1;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$fernet$$$function__2_generate_key(tstate, tmp_annotations_2);

tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
CHECK_OBJECT(tmp_classmethod_arg_1);
Py_DECREF(tmp_classmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain_generate_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f027067e1a1a50ee3c3a247a3244796e);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__3_encrypt(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain_encrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_8346f1bbaa8e3071227f32f823543aaf);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__4_encrypt_at_time(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain_encrypt_at_time, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_f1e9c14c2aa557eff55473f2aa69b422);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__5__encrypt_from_parts(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain__encrypt_from_parts, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_6;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_61353b9b8f272ac85974ff126059bff4);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__6_decrypt(tstate, tmp_defaults_2, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain_decrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_756af92400dd42d5a4729cda8fd511cb);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__7_decrypt_at_time(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain_decrypt_at_time, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_bdd8412ed16fcffe3d2448fb67fbbb64);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__8_extract_timestamp(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain_extract_timestamp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_staticmethod_arg_1;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_873f3f1828f4d73c8bbe452e41c78774);

tmp_staticmethod_arg_1 = MAKE_FUNCTION_cryptography$fernet$$$function__9__get_unverified_token_data(tstate, tmp_annotations_9);

tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
CHECK_OBJECT(tmp_staticmethod_arg_1);
Py_DECREF(tmp_staticmethod_arg_1);
assert(!(tmp_dictset_value == NULL));
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain__get_unverified_token_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_9c5c92330abf414287a7c5a37dc41725);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__10__verify_signature(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain__verify_signature, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_589a36203d91598b4d08b48217089550);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__11__decrypt_data(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain__decrypt_data, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_9c1bd882df6ff53934a559e2a99870f1_tuple;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__2_Fernet_32, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
tmp_name_value_12 = mod_consts.const_str_plain_Fernet;
tmp_bases_value_3 = const_tuple_empty;
tmp_dict_arg_value_2 = locals_cryptography$fernet$$$class__2_Fernet_32;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_3, tmp_dict_arg_value_2);
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto try_except_handler_8;
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
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_cryptography$fernet$$$class__2_Fernet_32);
locals_cryptography$fernet$$$class__2_Fernet_32 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$fernet$$$class__2_Fernet_32);
locals_cryptography$fernet$$$class__2_Fernet_32 = NULL;
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
exception_lineno = 32;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet, tmp_assign_source_34);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_cryptography$fernet$$$class__3_MultiFernet_172 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_MultiFernet;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_172;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_43cd6a9aeba5e69a331700a44279f90b);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__12___init__(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_58b2417f86f6515f103b5c8929be989a);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__13_encrypt(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain_encrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_7b83a68a751e9a540a89d0e65a491fa8);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__14_encrypt_at_time(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain_encrypt_at_time, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_cc94591d7a3a43c05c7f07177f2a0b1e);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__15_rotate(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain_rotate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_16;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_cc6ba16396af64badcad18446ec18557);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__16_decrypt(tstate, tmp_defaults_3, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain_decrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_c9605920262212a5d26ee54844a27c98);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__17_decrypt_at_time(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain_decrypt_at_time, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_04505222df09e46c3122e14fd42f6b97);

tmp_dictset_value = MAKE_FUNCTION_cryptography$fernet$$$function__18_extract_timestamp(tstate, tmp_annotations_18);

tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain_extract_timestamp, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__fernets_tuple;
tmp_result = DICT_SET_ITEM(locals_cryptography$fernet$$$class__3_MultiFernet_172, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_13;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
tmp_name_value_13 = mod_consts.const_str_plain_MultiFernet;
tmp_bases_value_4 = const_tuple_empty;
tmp_dict_arg_value_3 = locals_cryptography$fernet$$$class__3_MultiFernet_172;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_13, tmp_bases_value_4, tmp_dict_arg_value_3);
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto try_except_handler_11;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_38 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_cryptography$fernet$$$class__3_MultiFernet_172);
locals_cryptography$fernet$$$class__3_MultiFernet_172 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$fernet$$$class__3_MultiFernet_172);
locals_cryptography$fernet$$$class__3_MultiFernet_172 = NULL;
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
exception_lineno = 172;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_cryptography$fernet, (Nuitka_StringObject *)mod_consts.const_str_plain_MultiFernet, tmp_assign_source_38);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$fernet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$fernet->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$fernet, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$fernet);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$fernet", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.fernet" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$fernet);
    return module_cryptography$fernet;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$fernet, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$fernet", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
