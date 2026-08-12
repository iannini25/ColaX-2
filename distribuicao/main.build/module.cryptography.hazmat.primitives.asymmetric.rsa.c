/* Generated code for Python module 'cryptography$hazmat$primitives$asymmetric$rsa'
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



/* The "module_cryptography$hazmat$primitives$asymmetric$rsa" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$rsa;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$rsa;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__verify_rsa_parameters;
PyObject *const_str_plain_rust_openssl;
PyObject *const_str_plain_rsa;
PyObject *const_str_plain_generate_private_key;
PyObject *const_tuple_int_pos_3_int_pos_65537_tuple;
PyObject *const_str_digest_e1bffb30b51729ce76a63da4aac57dcb;
PyObject *const_int_pos_1024;
PyObject *const_str_digest_a83daae3f3d607198428f46283748c43;
PyObject *const_tuple_int_pos_1_int_0_tuple;
PyObject *const_str_plain_a;
PyObject *const_str_plain_x1;
PyObject *const_str_plain_x2;
PyObject *const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53;
PyObject *const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e;
PyObject *const_str_plain__modinv;
PyObject *const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd;
PyObject *const_str_digest_a5487c1878a8ec9c52821e7efc63e723;
PyObject *const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2;
PyObject *const_str_plain_lcm;
PyObject *const_str_digest_b80fcb16d69ec64a12726d6a22d9f258;
PyObject *const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484;
PyObject *const_int_pos_17;
PyObject *const_str_plain_pow;
PyObject *const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9;
PyObject *const_str_plain_t;
PyObject *const_int_pos_2;
PyObject *const_str_plain_spotted;
PyObject *const_str_plain_tries;
PyObject *const_str_plain__MAX_RECOVERY_ATTEMPTS;
PyObject *const_str_plain_random;
PyObject *const_str_plain_randint;
PyObject *const_str_plain_n;
PyObject *const_str_plain_k;
PyObject *const_str_plain_gcd;
PyObject *const_str_digest_2771761c63fa422db11e30be6e5dbf5f;
PyObject *const_str_plain_p;
PyObject *const_str_plain_sorted;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_reverse_tuple;
PyObject *const_str_digest_2dd5d95679764eb8edd2becf53bb25f7;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_math;
PyObject *const_tuple_str_plain_gcd_str_plain_lcm_tuple;
PyObject *const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
PyObject *const_tuple_str_plain_openssl_tuple;
PyObject *const_str_plain_openssl;
PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
PyObject *const_tuple_str_plain__serialization_str_plain_hashes_tuple;
PyObject *const_str_plain__serialization;
PyObject *const_str_plain_hashes;
PyObject *const_str_digest_b4ea483018ff6c9646e3f512393f4c4a;
PyObject *const_tuple_str_plain_AsymmetricPadding_tuple;
PyObject *const_str_plain_AsymmetricPadding;
PyObject *const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_str_plain_utils;
PyObject *const_str_plain_asym_utils;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84;
PyObject *const_str_plain_RSAPrivateKey;
PyObject *const_int_pos_18;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_abstractmethod;
PyObject *const_dict_635695148f0b37ab67be360f44f0edff;
PyObject *const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d;
PyObject *const_str_plain_decrypt;
PyObject *const_str_digest_6aa7034c8b49c6486afaca8e909cf3db;
PyObject *const_str_plain_property;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_a3bd0013ab8b1489d2925838771953a7;
PyObject *const_str_plain_key_size;
PyObject *const_str_digest_7471940600646871894b4f6bb68b4c5a;
PyObject *const_dict_49ac0f689087446800344aa694789791;
PyObject *const_str_digest_d670eb1f77329f1e7a7610e90978c76d;
PyObject *const_str_plain_public_key;
PyObject *const_str_digest_aec6920adcef7c4fd692f374a8ab376c;
PyObject *const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb;
PyObject *const_str_digest_39792731a6cc32ace1e09ef566a341d2;
PyObject *const_str_plain_sign;
PyObject *const_str_digest_4b3f72ab186381987495e6ddc389f82d;
PyObject *const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b;
PyObject *const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b;
PyObject *const_str_plain_private_numbers;
PyObject *const_str_digest_5820437db902f0738310b49fe4b286d2;
PyObject *const_dict_efc8da0e94d28ac00c67fdffcef957e4;
PyObject *const_str_digest_6aab55c26a1ed998ca3af322fce98750;
PyObject *const_str_plain_private_bytes;
PyObject *const_str_digest_140a7e53118339a97c197e7bac7885f9;
PyObject *const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37;
PyObject *const_str_digest_cc3df6912c981aa061591898fe7aea76;
PyObject *const_str_plain___copy__;
PyObject *const_str_digest_595f0ecf44724794ce8679a67c7032cc;
PyObject *const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5;
PyObject *const_str_digest_e1722681f6bc2735f23ae0e518f47436;
PyObject *const_str_plain___deepcopy__;
PyObject *const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_RSAPrivateKeyWithSerialization;
PyObject *const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple;
PyObject *const_str_plain_RSAPublicKey;
PyObject *const_int_pos_85;
PyObject *const_dict_5068a9d2d5be4c5c455ecaa42dabea5d;
PyObject *const_str_digest_d44703f1a88e19a59acd963bba3aae0f;
PyObject *const_str_plain_encrypt;
PyObject *const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289;
PyObject *const_str_digest_eeda0e0c69c7030a304d27c1d94f843f;
PyObject *const_dict_4934560da38eec01377a5894bd3cc292;
PyObject *const_str_digest_aa699dd548ebffe3f889c2f0b52978ab;
PyObject *const_str_plain_public_numbers;
PyObject *const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac;
PyObject *const_dict_c44861dc21ab09a200a6d15af811a095;
PyObject *const_str_plain_public_bytes;
PyObject *const_str_digest_f94030bd436a018c5fc49e08c081af11;
PyObject *const_dict_b1159bc35a95cad1308bdc375de03689;
PyObject *const_str_digest_b65598126c9dc80c52681ec668ff8678;
PyObject *const_str_plain_verify;
PyObject *const_str_digest_05e64e7c1e42944ef485dc16540dacfd;
PyObject *const_dict_beaf28de68084d7b60d00f4098641ae2;
PyObject *const_str_digest_d31b35e6c21388cff566d4240826ceea;
PyObject *const_str_plain_recover_data_from_signature;
PyObject *const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a;
PyObject *const_dict_48da6b0499a992d8a0861b3c7131d274;
PyObject *const_str_digest_a0bfeac94e21ff744538259cfd62359c;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27;
PyObject *const_str_digest_168b87804a81de222c18f92a13048509;
PyObject *const_dict_cebf9da8fe8e5765ae502501c06a67f4;
PyObject *const_str_digest_64225be077ae0f53df0e3b43bf7d21a9;
PyObject *const_str_plain_RSAPublicKeyWithSerialization;
PyObject *const_str_plain_RSAPrivateNumbers;
PyObject *const_str_plain_RSAPublicNumbers;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4;
PyObject *const_dict_74a2013fbb317c82b7873d286fa8c1c6;
PyObject *const_dict_cc6aff875b169243bda65be746cf7205;
PyObject *const_dict_b34421cce4b30b91a0ffc3ced13cee1b;
PyObject *const_str_plain_rsa_crt_iqmp;
PyObject *const_dict_a5b6d9d2479995e02dcaa53466342b11;
PyObject *const_str_plain_rsa_crt_dmp1;
PyObject *const_dict_d908f68da422f1816dfdecf5dea7c489;
PyObject *const_str_plain_rsa_crt_dmq1;
PyObject *const_dict_a5b5e549321e357e2744489a9a57ce7a;
PyObject *const_str_plain_rsa_recover_private_exponent;
PyObject *const_int_pos_500;
PyObject *const_dict_634d719b3c87335f10aa49adeafa1d04;
PyObject *const_str_plain_rsa_recover_prime_factors;
PyObject *const_str_digest_5162bc18c317fcc61255415fa6d40e04;
PyObject *const_str_digest_c9006139b28a949a28a39a3e7c58cdb0;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_memo_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_18ef8b290364f63868010090347d52c2_tuple;
PyObject *const_tuple_str_plain_public_exponent_str_plain_key_size_tuple;
PyObject *const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple;
PyObject *const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple;
PyObject *const_tuple_d467d3c501938bc72b984469c3930eb5_tuple;
PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
PyObject *const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple;
PyObject *const_tuple_str_plain_private_exponent_str_plain_p_tuple;
PyObject *const_tuple_str_plain_private_exponent_str_plain_q_tuple;
PyObject *const_tuple_str_plain_p_str_plain_q_tuple;
PyObject *const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple;
PyObject *const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple;
PyObject *const_tuple_c7ec265320af4c45beec923a8df09399_tuple;
PyObject *const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[177];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.primitives.asymmetric.rsa"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 177) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 177 values, got %d\n",
                    UN_TRANSLATE("cryptography.hazmat.primitives.asymmetric.rsa"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__verify_rsa_parameters", mod_consts.const_str_plain__verify_rsa_parameters);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__verify_rsa_parameters);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rust_openssl", mod_consts.const_str_plain_rust_openssl);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa", mod_consts.const_str_plain_rsa);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_generate_private_key", mod_consts.const_str_plain_generate_private_key);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_private_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple", mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb", mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43", mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_0_tuple", mod_consts.const_tuple_int_pos_1_int_0_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_a", mod_consts.const_str_plain_a);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x1", mod_consts.const_str_plain_x1);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_x1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x2", mod_consts.const_str_plain_x2);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_x2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53", mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e", mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modinv", mod_consts.const_str_plain__modinv);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__modinv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd", mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723", mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2", mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lcm", mod_consts.const_str_plain_lcm);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_lcm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258", mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484", mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pow", mod_consts.const_str_plain_pow);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_pow);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9", mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_t", mod_consts.const_str_plain_t);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_spotted", mod_consts.const_str_plain_spotted);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_spotted);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tries", mod_consts.const_str_plain_tries);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_tries);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS", mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_random", mod_consts.const_str_plain_random);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_random);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_randint", mod_consts.const_str_plain_randint);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_randint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n", mod_consts.const_str_plain_n);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_k", mod_consts.const_str_plain_k);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gcd", mod_consts.const_str_plain_gcd);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_gcd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f", mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_p", mod_consts.const_str_plain_p);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_p);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sorted", mod_consts.const_str_plain_sorted);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_sorted);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_reverse_tuple", mod_consts.const_tuple_str_plain_reverse_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reverse_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7", mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abc", mod_consts.const_str_plain_abc);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_math", mod_consts.const_str_plain_math);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple", mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl", mod_consts.const_str_plain_openssl);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple", mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__serialization", mod_consts.const_str_plain__serialization);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__serialization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a", mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple", mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsymmetricPadding", mod_consts.const_str_plain_AsymmetricPadding);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsymmetricPadding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_asym_utils", mod_consts.const_str_plain_asym_utils);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_metaclass", mod_consts.const_str_plain_metaclass);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABCMeta", mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84", mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateKey", mod_consts.const_str_plain_RSAPrivateKey);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abstractmethod", mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_635695148f0b37ab67be360f44f0edff", mod_consts.const_dict_635695148f0b37ab67be360f44f0edff);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_635695148f0b37ab67be360f44f0edff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d", mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt", mod_consts.const_str_plain_decrypt);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db", mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7", mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_size", mod_consts.const_str_plain_key_size);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a", mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_49ac0f689087446800344aa694789791", mod_consts.const_dict_49ac0f689087446800344aa694789791);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_49ac0f689087446800344aa694789791);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d", mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_key", mod_consts.const_str_plain_public_key);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c", mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb", mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2", mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sign", mod_consts.const_str_plain_sign);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d", mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b", mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b", mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_numbers", mod_consts.const_str_plain_private_numbers);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_numbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2", mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4", mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750", mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_bytes", mod_consts.const_str_plain_private_bytes);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9", mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37", mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76", mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___copy__", mod_consts.const_str_plain___copy__);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain___copy__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc", mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5", mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436", mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___deepcopy__", mod_consts.const_str_plain___deepcopy__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain___deepcopy__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d", mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateKeyWithSerialization", mod_consts.const_str_plain_RSAPrivateKeyWithSerialization);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateKeyWithSerialization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicKey", mod_consts.const_str_plain_RSAPublicKey);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_85);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d", mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f", mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt", mod_consts.const_str_plain_encrypt);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289", mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f", mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4934560da38eec01377a5894bd3cc292", mod_consts.const_dict_4934560da38eec01377a5894bd3cc292);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_dict_4934560da38eec01377a5894bd3cc292);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab", mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_numbers", mod_consts.const_str_plain_public_numbers);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_numbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac", mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095", mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_bytes", mod_consts.const_str_plain_public_bytes);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11", mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689", mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678", mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify", mod_consts.const_str_plain_verify);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd", mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2", mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea", mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recover_data_from_signature", mod_consts.const_str_plain_recover_data_from_signature);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_recover_data_from_signature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a", mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274", mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c", mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27", mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_168b87804a81de222c18f92a13048509", mod_consts.const_str_digest_168b87804a81de222c18f92a13048509);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_168b87804a81de222c18f92a13048509);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4", mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9", mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicKeyWithSerialization", mod_consts.const_str_plain_RSAPublicKeyWithSerialization);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicKeyWithSerialization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateNumbers", mod_consts.const_str_plain_RSAPrivateNumbers);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateNumbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicNumbers", mod_consts.const_str_plain_RSAPublicNumbers);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicNumbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4", mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6", mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc6aff875b169243bda65be746cf7205", mod_consts.const_dict_cc6aff875b169243bda65be746cf7205);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_cc6aff875b169243bda65be746cf7205);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b", mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_crt_iqmp", mod_consts.const_str_plain_rsa_crt_iqmp);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_crt_iqmp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11", mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_crt_dmp1", mod_consts.const_str_plain_rsa_crt_dmp1);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_crt_dmp1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489", mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_crt_dmq1", mod_consts.const_str_plain_rsa_crt_dmq1);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_crt_dmq1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a", mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_recover_private_exponent", mod_consts.const_str_plain_rsa_recover_private_exponent);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_recover_private_exponent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_500", mod_consts.const_int_pos_500);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_int_pos_500);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04", mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_recover_prime_factors", mod_consts.const_str_plain_rsa_recover_prime_factors);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_recover_prime_factors);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04", mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0", mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple", mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple", mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple", mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple", mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple", mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple", mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple", mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple", mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple", mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_p_str_plain_q_tuple", mod_consts.const_tuple_str_plain_p_str_plain_q_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_p_str_plain_q_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple", mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple", mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple", mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple", mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple);
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
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$rsa(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__verify_rsa_parameters", mod_consts.const_str_plain__verify_rsa_parameters);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__verify_rsa_parameters) && "mod_consts.const_str_plain__verify_rsa_parameters");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rust_openssl", mod_consts.const_str_plain_rust_openssl);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl) && "mod_consts.const_str_plain_rust_openssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa", mod_consts.const_str_plain_rsa);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa) && "mod_consts.const_str_plain_rsa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_generate_private_key", mod_consts.const_str_plain_generate_private_key);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_private_key) && "mod_consts.const_str_plain_generate_private_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple", mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple) && "mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb", mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb) && "mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1024", mod_consts.const_int_pos_1024);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024) && "mod_consts.const_int_pos_1024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43", mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43) && "mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_1_int_0_tuple", mod_consts.const_tuple_int_pos_1_int_0_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_int_0_tuple) && "mod_consts.const_tuple_int_pos_1_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_a", mod_consts.const_str_plain_a);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_a) && "mod_consts.const_str_plain_a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x1", mod_consts.const_str_plain_x1);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_x1) && "mod_consts.const_str_plain_x1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x2", mod_consts.const_str_plain_x2);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_x2) && "mod_consts.const_str_plain_x2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53", mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53) && "mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e", mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e) && "mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__modinv", mod_consts.const_str_plain__modinv);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__modinv) && "mod_consts.const_str_plain__modinv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd", mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd) && "mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723", mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723) && "mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2", mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2) && "mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lcm", mod_consts.const_str_plain_lcm);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_lcm) && "mod_consts.const_str_plain_lcm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258", mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258) && "mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484", mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484) && "mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_17", mod_consts.const_int_pos_17);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_int_pos_17) && "mod_consts.const_int_pos_17");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pow", mod_consts.const_str_plain_pow);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_pow) && "mod_consts.const_str_plain_pow");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9", mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9) && "mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_t", mod_consts.const_str_plain_t);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_t) && "mod_consts.const_str_plain_t");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_spotted", mod_consts.const_str_plain_spotted);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_spotted) && "mod_consts.const_str_plain_spotted");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tries", mod_consts.const_str_plain_tries);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_tries) && "mod_consts.const_str_plain_tries");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS", mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS) && "mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_random", mod_consts.const_str_plain_random);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_random) && "mod_consts.const_str_plain_random");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_randint", mod_consts.const_str_plain_randint);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_randint) && "mod_consts.const_str_plain_randint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_n", mod_consts.const_str_plain_n);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_n) && "mod_consts.const_str_plain_n");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_k", mod_consts.const_str_plain_k);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_k) && "mod_consts.const_str_plain_k");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_gcd", mod_consts.const_str_plain_gcd);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_gcd) && "mod_consts.const_str_plain_gcd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f", mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f) && "mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_p", mod_consts.const_str_plain_p);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_p) && "mod_consts.const_str_plain_p");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sorted", mod_consts.const_str_plain_sorted);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_sorted) && "mod_consts.const_str_plain_sorted");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_reverse_tuple", mod_consts.const_tuple_str_plain_reverse_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_reverse_tuple) && "mod_consts.const_tuple_str_plain_reverse_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7", mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7) && "mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abc", mod_consts.const_str_plain_abc);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc) && "mod_consts.const_str_plain_abc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_math", mod_consts.const_str_plain_math);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_math) && "mod_consts.const_str_plain_math");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple", mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple) && "mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e) && "mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple) && "mod_consts.const_tuple_str_plain_openssl_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl", mod_consts.const_str_plain_openssl);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl) && "mod_consts.const_str_plain_openssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087) && "mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple", mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple) && "mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__serialization", mod_consts.const_str_plain__serialization);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__serialization) && "mod_consts.const_str_plain__serialization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashes) && "mod_consts.const_str_plain_hashes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a", mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a) && "mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple", mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple) && "mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsymmetricPadding", mod_consts.const_str_plain_AsymmetricPadding);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsymmetricPadding) && "mod_consts.const_str_plain_AsymmetricPadding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47) && "mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple) && "mod_consts.const_tuple_str_plain_utils_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_asym_utils", mod_consts.const_str_plain_asym_utils);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils) && "mod_consts.const_str_plain_asym_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_metaclass", mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass) && "mod_consts.const_str_plain_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABCMeta", mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta) && "mod_consts.const_str_plain_ABCMeta");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple) && "mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84", mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84) && "mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateKey", mod_consts.const_str_plain_RSAPrivateKey);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateKey) && "mod_consts.const_str_plain_RSAPrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_int_pos_18) && "mod_consts.const_int_pos_18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abstractmethod", mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod) && "mod_consts.const_str_plain_abstractmethod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_635695148f0b37ab67be360f44f0edff", mod_consts.const_dict_635695148f0b37ab67be360f44f0edff);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_635695148f0b37ab67be360f44f0edff) && "mod_consts.const_dict_635695148f0b37ab67be360f44f0edff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d", mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d) && "mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt", mod_consts.const_str_plain_decrypt);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt) && "mod_consts.const_str_plain_decrypt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db", mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db) && "mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_property) && "mod_consts.const_str_plain_property");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261) && "mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7", mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7) && "mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_size", mod_consts.const_str_plain_key_size);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_size) && "mod_consts.const_str_plain_key_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a", mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a) && "mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_49ac0f689087446800344aa694789791", mod_consts.const_dict_49ac0f689087446800344aa694789791);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_49ac0f689087446800344aa694789791) && "mod_consts.const_dict_49ac0f689087446800344aa694789791");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d", mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d) && "mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_key", mod_consts.const_str_plain_public_key);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_key) && "mod_consts.const_str_plain_public_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c", mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c) && "mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb", mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb) && "mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2", mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2) && "mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sign", mod_consts.const_str_plain_sign);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign) && "mod_consts.const_str_plain_sign");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d", mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d) && "mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b", mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b) && "mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b", mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b) && "mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_numbers", mod_consts.const_str_plain_private_numbers);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_numbers) && "mod_consts.const_str_plain_private_numbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2", mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2) && "mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4", mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4) && "mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750", mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750) && "mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_bytes", mod_consts.const_str_plain_private_bytes);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_bytes) && "mod_consts.const_str_plain_private_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9", mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9) && "mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37", mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37) && "mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76", mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76) && "mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___copy__", mod_consts.const_str_plain___copy__);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain___copy__) && "mod_consts.const_str_plain___copy__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc", mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc) && "mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5", mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5) && "mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436", mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436) && "mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___deepcopy__", mod_consts.const_str_plain___deepcopy__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain___deepcopy__) && "mod_consts.const_str_plain___deepcopy__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d", mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d) && "mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateKeyWithSerialization", mod_consts.const_str_plain_RSAPrivateKeyWithSerialization);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateKeyWithSerialization) && "mod_consts.const_str_plain_RSAPrivateKeyWithSerialization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple) && "mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicKey", mod_consts.const_str_plain_RSAPublicKey);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicKey) && "mod_consts.const_str_plain_RSAPublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_85", mod_consts.const_int_pos_85);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_85) && "mod_consts.const_int_pos_85");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d", mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d) && "mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f", mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f) && "mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt", mod_consts.const_str_plain_encrypt);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt) && "mod_consts.const_str_plain_encrypt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289", mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289) && "mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f", mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f) && "mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4934560da38eec01377a5894bd3cc292", mod_consts.const_dict_4934560da38eec01377a5894bd3cc292);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_dict_4934560da38eec01377a5894bd3cc292) && "mod_consts.const_dict_4934560da38eec01377a5894bd3cc292");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab", mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab) && "mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_numbers", mod_consts.const_str_plain_public_numbers);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_numbers) && "mod_consts.const_str_plain_public_numbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac", mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac) && "mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095", mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095) && "mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_bytes", mod_consts.const_str_plain_public_bytes);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes) && "mod_consts.const_str_plain_public_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11", mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11) && "mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689", mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689) && "mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678", mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678) && "mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify", mod_consts.const_str_plain_verify);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify) && "mod_consts.const_str_plain_verify");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd", mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd) && "mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2", mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2) && "mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea", mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea) && "mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_recover_data_from_signature", mod_consts.const_str_plain_recover_data_from_signature);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_recover_data_from_signature) && "mod_consts.const_str_plain_recover_data_from_signature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a", mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a) && "mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274", mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274) && "mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c", mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c) && "mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__) && "mod_consts.const_str_plain___eq__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27", mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27) && "mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_168b87804a81de222c18f92a13048509", mod_consts.const_str_digest_168b87804a81de222c18f92a13048509);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_168b87804a81de222c18f92a13048509) && "mod_consts.const_str_digest_168b87804a81de222c18f92a13048509");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4", mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4) && "mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9", mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9) && "mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicKeyWithSerialization", mod_consts.const_str_plain_RSAPublicKeyWithSerialization);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicKeyWithSerialization) && "mod_consts.const_str_plain_RSAPublicKeyWithSerialization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPrivateNumbers", mod_consts.const_str_plain_RSAPrivateNumbers);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPrivateNumbers) && "mod_consts.const_str_plain_RSAPrivateNumbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RSAPublicNumbers", mod_consts.const_str_plain_RSAPublicNumbers);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAPublicNumbers) && "mod_consts.const_str_plain_RSAPublicNumbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4", mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4) && "mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6", mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6) && "mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc6aff875b169243bda65be746cf7205", mod_consts.const_dict_cc6aff875b169243bda65be746cf7205);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_cc6aff875b169243bda65be746cf7205) && "mod_consts.const_dict_cc6aff875b169243bda65be746cf7205");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b", mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b) && "mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_crt_iqmp", mod_consts.const_str_plain_rsa_crt_iqmp);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_crt_iqmp) && "mod_consts.const_str_plain_rsa_crt_iqmp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11", mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11) && "mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_crt_dmp1", mod_consts.const_str_plain_rsa_crt_dmp1);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_crt_dmp1) && "mod_consts.const_str_plain_rsa_crt_dmp1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489", mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489) && "mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_crt_dmq1", mod_consts.const_str_plain_rsa_crt_dmq1);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_crt_dmq1) && "mod_consts.const_str_plain_rsa_crt_dmq1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a", mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a) && "mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_recover_private_exponent", mod_consts.const_str_plain_rsa_recover_private_exponent);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_recover_private_exponent) && "mod_consts.const_str_plain_rsa_recover_private_exponent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_500", mod_consts.const_int_pos_500);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_int_pos_500) && "mod_consts.const_int_pos_500");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04", mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04) && "mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_recover_prime_factors", mod_consts.const_str_plain_rsa_recover_prime_factors);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_recover_prime_factors) && "mod_consts.const_str_plain_rsa_recover_prime_factors");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04", mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04) && "mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0", mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0) && "mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple", mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_other_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple", mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple) && "mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple", mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple) && "mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple", mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple) && "mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple", mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple) && "mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple", mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple", mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple) && "mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple", mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple) && "mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple", mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple) && "mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_p_str_plain_q_tuple", mod_consts.const_tuple_str_plain_p_str_plain_q_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_p_str_plain_q_tuple) && "mod_consts.const_tuple_str_plain_p_str_plain_q_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple", mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple) && "mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple", mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple) && "mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple", mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple) && "mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple", mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple) && "mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$RSAPrivateKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPrivateKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RSAPrivateKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RSAPrivateKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RSAPrivateKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RSAPrivateKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPrivateKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPrivateKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPrivateKey);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$RSAPublicKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPublicKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RSAPublicKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RSAPublicKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RSAPublicKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RSAPublicKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPublicKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPublicKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPublicKey);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$_MAX_RECOVERY_ATTEMPTS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$_modinv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__modinv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__modinv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__modinv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__modinv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__modinv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__modinv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__modinv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__modinv);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$_verify_rsa_parameters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_rsa_parameters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__verify_rsa_parameters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__verify_rsa_parameters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__verify_rsa_parameters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__verify_rsa_parameters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_rsa_parameters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_rsa_parameters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_rsa_parameters);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$gcd(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_gcd);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gcd);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gcd, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gcd);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gcd, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_gcd);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_gcd);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_gcd);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$lcm(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_lcm);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lcm);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lcm, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lcm);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lcm, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_lcm);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_lcm);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lcm);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$random(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$rust_openssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$rsa->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rust_openssl);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rust_openssl, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rust_openssl);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rust_openssl, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_64b3e160a82e3321b420a1d6394c8dcd;
static PyCodeObject *code_objects_eaadfdb9feaa354b2d0354d50c722132;
static PyCodeObject *code_objects_edd06a992447a55f8332c827493a34b4;
static PyCodeObject *code_objects_43244eb4e736c70fdd4b97b4bfd759ce;
static PyCodeObject *code_objects_3bf0df8f47c12570e7908ded4a7ec0f1;
static PyCodeObject *code_objects_261066d18a2eff61311f84ab1b2e175e;
static PyCodeObject *code_objects_c368c4b14a6e3743cf4951c3056ea7bf;
static PyCodeObject *code_objects_73e594f24bffdc4ef8a2cb0b20a86870;
static PyCodeObject *code_objects_250df35345d43aa9b70707533e671d7b;
static PyCodeObject *code_objects_e64dfde8c909fb595cf75ba41e9a0701;
static PyCodeObject *code_objects_99452a5094358f6ce7ee53a96aa8b2b1;
static PyCodeObject *code_objects_fbb2e3bdba5093e2b1c9814d0fb6b03b;
static PyCodeObject *code_objects_f01ebae6c0799ef88098697346933db1;
static PyCodeObject *code_objects_60b6187668b3f5a49cf00d2b1888dbcf;
static PyCodeObject *code_objects_d4e7afd95e0d95d3d44d62c8276a6ce2;
static PyCodeObject *code_objects_c0ed615bce9fba92b2f1d710453fee3b;
static PyCodeObject *code_objects_3ffc8d950679983233c57bc0e42bb289;
static PyCodeObject *code_objects_f267b45480c483c5d2e12713dcd6f392;
static PyCodeObject *code_objects_8a53136106ac742f13f9100ea3f88457;
static PyCodeObject *code_objects_42e46260f49ed557bccbe24b147f4440;
static PyCodeObject *code_objects_c44cd495aff3d3985ed08b00bbc465c3;
static PyCodeObject *code_objects_7ec4a331c250b684593136b1311dde8e;
static PyCodeObject *code_objects_da5ec126f212028fe2246be57266d510;
static PyCodeObject *code_objects_74a915f77bf1151ace6c7fccc47bb61f;
static PyCodeObject *code_objects_61924d80f868e42e9e6c14565a1067ff;
static PyCodeObject *code_objects_df69b0cb7be4725d738c9dd6e344c516;
static PyCodeObject *code_objects_a4fd4e9bc1b79e18fe66c121c0bfed23;
static PyCodeObject *code_objects_8ce7e322506d6b05ec5a484ed2c76249;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5162bc18c317fcc61255415fa6d40e04); CHECK_OBJECT(module_filename_obj);
code_objects_64b3e160a82e3321b420a1d6394c8dcd = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0, mod_consts.const_str_digest_c9006139b28a949a28a39a3e7c58cdb0, NULL, NULL, 0, 0, 0);
code_objects_eaadfdb9feaa354b2d0354d50c722132 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RSAPrivateKey, mod_consts.const_str_plain_RSAPrivateKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_edd06a992447a55f8332c827493a34b4 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RSAPublicKey, mod_consts.const_str_plain_RSAPublicKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_43244eb4e736c70fdd4b97b4bfd759ce = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___copy__, mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3bf0df8f47c12570e7908ded4a7ec0f1 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___copy__, mod_consts.const_str_digest_168b87804a81de222c18f92a13048509, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_261066d18a2eff61311f84ab1b2e175e = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___deepcopy__, mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple, NULL, 2, 0, 0);
code_objects_c368c4b14a6e3743cf4951c3056ea7bf = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___deepcopy__, mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple, NULL, 2, 0, 0);
code_objects_73e594f24bffdc4ef8a2cb0b20a86870 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_250df35345d43aa9b70707533e671d7b = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__modinv, mod_consts.const_str_plain__modinv, mod_consts.const_tuple_18ef8b290364f63868010090347d52c2_tuple, NULL, 2, 0, 0);
code_objects_e64dfde8c909fb595cf75ba41e9a0701 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__verify_rsa_parameters, mod_consts.const_str_plain__verify_rsa_parameters, mod_consts.const_tuple_str_plain_public_exponent_str_plain_key_size_tuple, NULL, 2, 0, 0);
code_objects_99452a5094358f6ce7ee53a96aa8b2b1 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_decrypt, mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db, mod_consts.const_tuple_str_plain_self_str_plain_ciphertext_str_plain_padding_tuple, NULL, 3, 0, 0);
code_objects_fbb2e3bdba5093e2b1c9814d0fb6b03b = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_encrypt, mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289, mod_consts.const_tuple_str_plain_self_str_plain_plaintext_str_plain_padding_tuple, NULL, 3, 0, 0);
code_objects_f01ebae6c0799ef88098697346933db1 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_generate_private_key, mod_consts.const_str_plain_generate_private_key, mod_consts.const_tuple_d467d3c501938bc72b984469c3930eb5_tuple, NULL, 3, 0, 0);
code_objects_60b6187668b3f5a49cf00d2b1888dbcf = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_size, mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d4e7afd95e0d95d3d44d62c8276a6ce2 = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_size, mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c0ed615bce9fba92b2f1d710453fee3b = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_private_bytes, mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, NULL, 4, 0, 0);
code_objects_3ffc8d950679983233c57bc0e42bb289 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_private_numbers, mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f267b45480c483c5d2e12713dcd6f392 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_bytes, mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, NULL, 3, 0, 0);
code_objects_8a53136106ac742f13f9100ea3f88457 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_key, mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_42e46260f49ed557bccbe24b147f4440 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_numbers, mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c44cd495aff3d3985ed08b00bbc465c3 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_recover_data_from_signature, mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a, mod_consts.const_tuple_d7cd3dd1f0c1b3c745f9dc0754b00ddb_tuple, NULL, 4, 0, 0);
code_objects_7ec4a331c250b684593136b1311dde8e = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rsa_crt_dmp1, mod_consts.const_str_plain_rsa_crt_dmp1, mod_consts.const_tuple_str_plain_private_exponent_str_plain_p_tuple, NULL, 2, 0, 0);
code_objects_da5ec126f212028fe2246be57266d510 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rsa_crt_dmq1, mod_consts.const_str_plain_rsa_crt_dmq1, mod_consts.const_tuple_str_plain_private_exponent_str_plain_q_tuple, NULL, 2, 0, 0);
code_objects_74a915f77bf1151ace6c7fccc47bb61f = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rsa_crt_iqmp, mod_consts.const_str_plain_rsa_crt_iqmp, mod_consts.const_tuple_str_plain_p_str_plain_q_tuple, NULL, 2, 0, 0);
code_objects_61924d80f868e42e9e6c14565a1067ff = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rsa_recover_prime_factors, mod_consts.const_str_plain_rsa_recover_prime_factors, mod_consts.const_tuple_09fc25b5150b5ab17e2ecb55b0acec6c_tuple, NULL, 3, 0, 0);
code_objects_df69b0cb7be4725d738c9dd6e344c516 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rsa_recover_private_exponent, mod_consts.const_str_plain_rsa_recover_private_exponent, mod_consts.const_tuple_str_plain_e_str_plain_p_str_plain_q_tuple, NULL, 3, 0, 0);
code_objects_a4fd4e9bc1b79e18fe66c121c0bfed23 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sign, mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d, mod_consts.const_tuple_c7ec265320af4c45beec923a8df09399_tuple, NULL, 4, 0, 0);
code_objects_8ce7e322506d6b05ec5a484ed2c76249 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_verify, mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd, mod_consts.const_tuple_d38d0a393082ae0bfc8342fb83a4f614_tuple, NULL, 5, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__10_key_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__11_public_numbers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__12_public_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__13_verify(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__14_recover_data_from_signature(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__15___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__16___copy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__17___deepcopy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__1_decrypt(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__2_key_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__3_public_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__4_sign(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__5_private_numbers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__6_private_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__7___copy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__8___deepcopy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__9_encrypt(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_public_exponent = python_pars[0];
PyObject *par_key_size = python_pars[1];
PyObject *par_backend = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key = MAKE_FUNCTION_FRAME(tstate, code_objects_f01ebae6c0799ef88098697346933db1, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$_verify_rsa_parameters(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__verify_rsa_parameters);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_exponent);
tmp_args_element_value_1 = par_public_exponent;
CHECK_OBJECT(par_key_size);
tmp_args_element_value_2 = par_key_size;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key->m_frame.f_lineno = 169;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_rsa);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_public_exponent);
tmp_args_element_value_3 = par_public_exponent;
CHECK_OBJECT(par_key_size);
tmp_args_element_value_4 = par_key_size;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_generate_private_key,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key,
    type_description_1,
    par_public_exponent,
    par_key_size,
    par_backend
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_public_exponent);
Py_DECREF(par_public_exponent);
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_public_exponent);
Py_DECREF(par_public_exponent);
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_public_exponent = python_pars[0];
PyObject *par_key_size = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters = MAKE_FUNCTION_FRAME(tstate, code_objects_e64dfde8c909fb595cf75ba41e9a0701, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_public_exponent);
tmp_cmp_expr_left_1 = par_public_exponent;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_int_pos_3_int_pos_65537_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e1bffb30b51729ce76a63da4aac57dcb;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters->m_frame.f_lineno = 175;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 175;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_key_size);
tmp_cmp_expr_left_2 = par_key_size;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_1024;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_a83daae3f3d607198428f46283748c43;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters->m_frame.f_lineno = 181;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 181;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters,
    type_description_1,
    par_public_exponent,
    par_key_size
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters);

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
CHECK_OBJECT(par_public_exponent);
Py_DECREF(par_public_exponent);
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_public_exponent);
Py_DECREF(par_public_exponent);
CHECK_OBJECT(par_key_size);
Py_DECREF(par_key_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_e = python_pars[0];
PyObject *par_m = python_pars[1];
PyObject *var_x1 = NULL;
PyObject *var_x2 = NULL;
PyObject *var_a = NULL;
PyObject *var_b = NULL;
PyObject *var_q = NULL;
PyObject *var_r = NULL;
PyObject *var_xn = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__element_3 = NULL;
PyObject *tmp_tuple_unpack_4__element_4 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv;
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
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_int_pos_1_int_0_tuple;
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv = MAKE_FUNCTION_FRAME(tstate, code_objects_250df35345d43aa9b70707533e671d7b, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv) == 2);

// Framed code:
// Tried code:
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
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
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
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
    PyObject *old = var_x1;
    var_x1 = tmp_assign_source_4;
    Py_INCREF(var_x1);
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
    PyObject *old = var_x2;
    var_x2 = tmp_assign_source_5;
    Py_INCREF(var_x2);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_e);
tmp_tuple_element_1 = par_e;
tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_2, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_m);
tmp_tuple_element_1 = par_m;
PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_6 == NULL));
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_a;
    var_a = tmp_assign_source_9;
    Py_INCREF(var_a);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_10;
    Py_INCREF(var_b);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_b == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_b;
tmp_cmp_expr_right_1 = const_int_0;
tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
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
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
PyObject *tmp_divmod_expr_left_1;
PyObject *tmp_divmod_expr_right_1;
if (var_a == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_a);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_divmod_expr_left_1 = var_a;
if (var_b == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}

tmp_divmod_expr_right_1 = var_b;
tmp_iter_arg_3 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_OBJECT(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_13;
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



exception_lineno = 191;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_q;
    var_q = tmp_assign_source_14;
    Py_INCREF(var_q);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_r;
    var_r = tmp_assign_source_15;
    Py_INCREF(var_r);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_16;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
if (var_x1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = var_x1;
CHECK_OBJECT(var_q);
tmp_mult_expr_left_1 = var_q;
if (var_x2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_mult_expr_right_1 = var_x2;
tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_16 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_xn;
    var_xn = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_4;
PyObject *tmp_tuple_element_2;
if (var_b == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_8;
}

tmp_tuple_element_2 = var_b;
tmp_iter_arg_4 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_iter_arg_4, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_r);
tmp_tuple_element_2 = var_r;
PyTuple_SET_ITEM0(tmp_iter_arg_4, 1, tmp_tuple_element_2);
if (var_x2 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x2);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_2 = var_x2;
PyTuple_SET_ITEM0(tmp_iter_arg_4, 2, tmp_tuple_element_2);
CHECK_OBJECT(var_xn);
tmp_tuple_element_2 = var_xn;
PyTuple_SET_ITEM0(tmp_iter_arg_4, 3, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_iter_arg_4);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_17 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
assert(!(tmp_assign_source_17 == NULL));
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 4);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 2, 4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_3;
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 3, 4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_4;
    tmp_tuple_unpack_4__element_4 = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "ooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_4__element_4);
tmp_tuple_unpack_4__element_4 = NULL;
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
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_22 = tmp_tuple_unpack_4__element_1;
{
    PyObject *old = var_a;
    var_a = tmp_assign_source_22;
    Py_INCREF(var_a);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_23 = tmp_tuple_unpack_4__element_2;
{
    PyObject *old = var_b;
    var_b = tmp_assign_source_23;
    Py_INCREF(var_b);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
tmp_assign_source_24 = tmp_tuple_unpack_4__element_3;
{
    PyObject *old = var_x1;
    var_x1 = tmp_assign_source_24;
    Py_INCREF(var_x1);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_3);
tmp_tuple_unpack_4__element_3 = NULL;

{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_4__element_4);
tmp_assign_source_25 = tmp_tuple_unpack_4__element_4;
{
    PyObject *old = var_x2;
    var_x2 = tmp_assign_source_25;
    Py_INCREF(var_x2);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_4__element_4);
tmp_tuple_unpack_4__element_4 = NULL;

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
if (var_x1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_x1);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 194;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_left_1 = var_x1;
CHECK_OBJECT(par_m);
tmp_mod_expr_right_1 = par_m;
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv,
    type_description_1,
    par_e,
    par_m,
    var_x1,
    var_x2,
    var_a,
    var_b,
    var_q,
    var_r,
    var_xn
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_x1);
var_x1 = NULL;
Py_XDECREF(var_x2);
var_x2 = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_r);
var_r = NULL;
Py_XDECREF(var_xn);
var_xn = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_x1);
var_x1 = NULL;
Py_XDECREF(var_x2);
var_x2 = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_b);
var_b = NULL;
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_r);
var_r = NULL;
Py_XDECREF(var_xn);
var_xn = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_m);
Py_DECREF(par_m);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_m);
Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_p = python_pars[0];
PyObject *par_q = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp = MAKE_FUNCTION_FRAME(tstate, code_objects_74a915f77bf1151ace6c7fccc47bb61f, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_p);
tmp_cmp_expr_left_1 = par_p;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_q);
tmp_cmp_expr_left_2 = par_q;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp->m_frame.f_lineno = 202;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 202;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$_modinv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__modinv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_args_element_value_1 = par_q;
CHECK_OBJECT(par_p);
tmp_args_element_value_2 = par_p;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp->m_frame.f_lineno = 203;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp,
    type_description_1,
    par_p,
    par_q
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_private_exponent = python_pars[0];
PyObject *par_p = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1 = MAKE_FUNCTION_FRAME(tstate, code_objects_7ec4a331c250b684593136b1311dde8e, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1 = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_private_exponent);
tmp_cmp_expr_left_1 = par_private_exponent;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_p);
tmp_cmp_expr_left_2 = par_p;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1->m_frame.f_lineno = 212;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 212;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_private_exponent);
tmp_mod_expr_left_1 = par_private_exponent;
CHECK_OBJECT(par_p);
tmp_sub_expr_left_1 = par_p;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mod_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1,
    type_description_1,
    par_private_exponent,
    par_p
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1 == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1 = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_private_exponent);
Py_DECREF(par_private_exponent);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_private_exponent);
Py_DECREF(par_private_exponent);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_private_exponent = python_pars[0];
PyObject *par_q = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1 = MAKE_FUNCTION_FRAME(tstate, code_objects_da5ec126f212028fe2246be57266d510, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1 = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_private_exponent);
tmp_cmp_expr_left_1 = par_private_exponent;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_q);
tmp_cmp_expr_left_2 = par_q;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1->m_frame.f_lineno = 222;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 222;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_private_exponent);
tmp_mod_expr_left_1 = par_private_exponent;
CHECK_OBJECT(par_q);
tmp_sub_expr_left_1 = par_q;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mod_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_mod_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1,
    type_description_1,
    par_private_exponent,
    par_q
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1 == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1 = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_private_exponent);
Py_DECREF(par_private_exponent);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_private_exponent);
Py_DECREF(par_private_exponent);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_e = python_pars[0];
PyObject *par_p = python_pars[1];
PyObject *par_q = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent = MAKE_FUNCTION_FRAME(tstate, code_objects_df69b0cb7be4725d738c9dd6e344c516, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_e);
tmp_cmp_expr_left_1 = par_e;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_p);
tmp_cmp_expr_left_2 = par_p;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_left_value_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_q);
tmp_cmp_expr_left_3 = par_q;
tmp_cmp_expr_right_3 = const_int_pos_1;
tmp_or_right_value_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_78ad4fd7c8828c52feabbcd76f2b013e;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent->m_frame.f_lineno = 241;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 241;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$_modinv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__modinv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_e);
tmp_args_element_value_1 = par_e;
tmp_called_value_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$lcm(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lcm);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_p);
tmp_sub_expr_left_1 = par_p;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_q);
tmp_sub_expr_left_2 = par_q;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 242;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent->m_frame.f_lineno = 242;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent->m_frame.f_lineno = 242;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent,
    type_description_1,
    par_e,
    par_p,
    par_q
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_p);
Py_DECREF(par_p);
CHECK_OBJECT(par_q);
Py_DECREF(par_q);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_n = python_pars[0];
PyObject *par_e = python_pars[1];
PyObject *par_d = python_pars[2];
PyObject *var_ktot = NULL;
PyObject *var_t = NULL;
PyObject *var_spotted = NULL;
PyObject *var_tries = NULL;
PyObject *var_a = NULL;
PyObject *var_k = NULL;
PyObject *var_cand = NULL;
PyObject *var_p = NULL;
PyObject *var_q = NULL;
PyObject *var_r = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors = MAKE_FUNCTION_FRAME(tstate, code_objects_61924d80f868e42e9e6c14565a1067ff, module_cryptography$hazmat$primitives$asymmetric$rsa, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_d);
tmp_cmp_expr_left_1 = par_d;
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_or_left_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_e);
tmp_cmp_expr_left_2 = par_e;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_abf1d0f4e5044288bbeb430f1f4f5484;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 257;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 257;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_args_element_value_3;
tmp_cmp_expr_left_3 = mod_consts.const_int_pos_17;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = mod_consts.const_int_pos_17;
CHECK_OBJECT(par_e);
tmp_mult_expr_left_1 = par_e;
CHECK_OBJECT(par_d);
tmp_mult_expr_right_1 = par_d;
tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_args_element_value_3 = par_n;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 258;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_cmp_expr_right_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_abe117ac4af5dc5ef2c9bd77e03050e9;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 259;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 259;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
CHECK_OBJECT(par_d);
tmp_mult_expr_left_2 = par_d;
CHECK_OBJECT(par_e);
tmp_mult_expr_right_2 = par_e;
tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ktot;
    var_ktot = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(var_ktot);
tmp_assign_source_2 = var_ktot;
{
    PyObject *old = var_t;
    var_t = tmp_assign_source_2;
    Py_INCREF(var_t);
    Py_XDECREF(old);
}

}
loop_start_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
if (var_t == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_mod_expr_left_1 = var_t;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_2;
tmp_cmp_expr_left_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = const_int_0;
tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooo";
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
goto loop_end_1;
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
if (var_t == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_floordiv_expr_left_1 = var_t;
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_t;
    var_t = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_False;
{
    PyObject *old = var_spotted;
    var_spotted = tmp_assign_source_4;
    Py_INCREF(var_spotted);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = const_int_0;
{
    PyObject *old = var_tries;
    var_tries = tmp_assign_source_5;
    Py_INCREF(var_tries);
    Py_XDECREF(old);
}

}
loop_start_2:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_operand_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_spotted == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_spotted);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = var_spotted;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooooo";
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
if (var_tries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = var_tries;
tmp_cmp_expr_right_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$_MAX_RECOVERY_ATTEMPTS(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_and_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_operand_value_2 = tmp_and_left_value_1;
and_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooooo";
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
goto loop_end_2;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$random(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_random);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_randint);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = mod_consts.const_int_pos_2;
if (par_n == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_2 = par_n;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_args_element_value_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 275;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_a;
    var_a = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_tries == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tries);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_tries;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_7 = tmp_iadd_expr_left_1;
var_tries = tmp_assign_source_7;

}
{
PyObject *tmp_assign_source_8;
if (var_t == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 277;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_8 = var_t;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_8;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
loop_start_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
if (var_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_6 = var_k;
CHECK_OBJECT(var_ktot);
tmp_cmp_expr_right_6 = var_ktot;
tmp_operand_value_4 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooooooo";
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
goto loop_end_3;
branch_no_5:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(var_a);
tmp_args_element_value_6 = var_a;
if (var_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = var_k;
if (par_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = par_n;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 280;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_cand;
    var_cand = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(var_cand);
tmp_cmp_expr_left_7 = var_cand;
tmp_cmp_expr_right_7 = const_int_pos_1;
tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_cand);
tmp_cmp_expr_left_8 = var_cand;
if (par_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_3 = par_n;
tmp_sub_expr_right_3 = const_int_pos_1;
tmp_cmp_expr_right_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(var_cand);
tmp_args_element_value_9 = var_cand;
tmp_args_element_value_10 = mod_consts.const_int_pos_2;
if (par_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_11 = par_n;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = const_int_pos_1;
tmp_and_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_6 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_6 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_12;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_args_element_value_13;
tmp_called_value_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$gcd(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gcd);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cand);
tmp_add_expr_left_1 = var_cand;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_n == NULL) {
Py_DECREF(tmp_args_element_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_13 = par_n;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 285;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_p;
    var_p = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_True;
{
    PyObject *old = var_spotted;
    var_spotted = tmp_assign_source_11;
    Py_INCREF(var_spotted);
    Py_XDECREF(old);
}

}
goto loop_end_3;
branch_no_6:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
if (var_k == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 288;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_imult_expr_left_1 = var_k;
tmp_imult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_LONG(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = tmp_imult_expr_left_1;
var_k = tmp_assign_source_12;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_5;
if (var_spotted == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_spotted);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 289;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_5 = var_spotted;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_2771761c63fa422db11e30be6e5dbf5f;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 290;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 290;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_1;
PyObject *tmp_divmod_expr_left_1;
PyObject *tmp_divmod_expr_right_1;
if (par_n == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_divmod_expr_left_1 = par_n;
if (var_p == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_divmod_expr_right_1 = var_p;
tmp_iter_arg_1 = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_OBJECT(tmp_divmod_expr_left_1, tmp_divmod_expr_right_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;
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



exception_lineno = 292;
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
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_16 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_q;
    var_q = tmp_assign_source_16;
    Py_INCREF(var_q);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_17 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_r;
    var_r = tmp_assign_source_17;
    Py_INCREF(var_r);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_6;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_r);
tmp_cmp_expr_left_10 = var_r;
tmp_cmp_expr_right_10 = const_int_0;
tmp_operand_value_6 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_raise_type_4;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 293;
tmp_raise_type_4 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 293;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_8:;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts.const_str_plain_sorted);
assert(tmp_called_value_6 != NULL);
if (var_p == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_p);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}

tmp_tuple_element_1 = var_p;
tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_q);
tmp_tuple_element_1 = var_q;
PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 1, tmp_tuple_element_1);
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame.f_lineno = 294;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_6,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0),
        mod_consts.const_tuple_str_plain_reverse_tuple
    );
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "ooooooooooooo";
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
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors,
    type_description_1,
    par_n,
    par_e,
    par_d,
    var_ktot,
    var_t,
    var_spotted,
    var_tries,
    var_a,
    var_k,
    var_cand,
    var_p,
    var_q,
    var_r
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_p;
    var_p = tmp_assign_source_21;
    Py_INCREF(var_p);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_q;
    assert(old != NULL);
    var_q = tmp_assign_source_22;
    Py_INCREF(var_q);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_p);
tmp_tuple_element_2 = var_p;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_q);
tmp_tuple_element_2 = var_q;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ktot);
CHECK_OBJECT(var_ktot);
Py_DECREF(var_ktot);
var_ktot = NULL;
Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_spotted);
var_spotted = NULL;
Py_XDECREF(var_tries);
var_tries = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_cand);
var_cand = NULL;
CHECK_OBJECT(var_p);
CHECK_OBJECT(var_p);
Py_DECREF(var_p);
var_p = NULL;
CHECK_OBJECT(var_q);
CHECK_OBJECT(var_q);
Py_DECREF(var_q);
var_q = NULL;
CHECK_OBJECT(var_r);
CHECK_OBJECT(var_r);
Py_DECREF(var_r);
var_r = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ktot);
var_ktot = NULL;
Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_spotted);
var_spotted = NULL;
Py_XDECREF(var_tries);
var_tries = NULL;
Py_XDECREF(var_a);
var_a = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_cand);
var_cand = NULL;
Py_XDECREF(var_p);
var_p = NULL;
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_r);
var_r = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_d);
Py_DECREF(par_d);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
CHECK_OBJECT(par_e);
Py_DECREF(par_e);
CHECK_OBJECT(par_d);
Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__10_key_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_key_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eeda0e0c69c7030a304d27c1d94f843f,
#endif
        code_objects_d4e7afd95e0d95d3d44d62c8276a6ce2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__11_public_numbers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_numbers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_46a3dd743fa2e4dc0cfc7ce64f569aac,
#endif
        code_objects_42e46260f49ed557bccbe24b147f4440,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_aa699dd548ebffe3f889c2f0b52978ab,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__12_public_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f94030bd436a018c5fc49e08c081af11,
#endif
        code_objects_f267b45480c483c5d2e12713dcd6f392,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__13_verify(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_verify,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_05e64e7c1e42944ef485dc16540dacfd,
#endif
        code_objects_8ce7e322506d6b05ec5a484ed2c76249,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__14_recover_data_from_signature(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_recover_data_from_signature,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_58566dc8f3a94c16cc1c0b5cc214c66a,
#endif
        code_objects_c44cd495aff3d3985ed08b00bbc465c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_d31b35e6c21388cff566d4240826ceea,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__15___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c6f65e6ce2175a6bb78ea384abe8ed27,
#endif
        code_objects_73e594f24bffdc4ef8a2cb0b20a86870,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__16___copy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___copy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_168b87804a81de222c18f92a13048509,
#endif
        code_objects_3bf0df8f47c12570e7908ded4a7ec0f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__17___deepcopy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___deepcopy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64225be077ae0f53df0e3b43bf7d21a9,
#endif
        code_objects_c368c4b14a6e3743cf4951c3056ea7bf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key,
        mod_consts.const_str_plain_generate_private_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f01ebae6c0799ef88098697346933db1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters,
        mod_consts.const_str_plain__verify_rsa_parameters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e64dfde8c909fb595cf75ba41e9a0701,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__1_decrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_decrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6aa7034c8b49c6486afaca8e909cf3db,
#endif
        code_objects_99452a5094358f6ce7ee53a96aa8b2b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_e68c6a2ab70b3661b6d0bd0e6a69703d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv,
        mod_consts.const_str_plain__modinv,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_250df35345d43aa9b70707533e671d7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_daf13eb8179ceb07dfcfa5ab4a2d1b53,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp,
        mod_consts.const_str_plain_rsa_crt_iqmp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_74a915f77bf1151ace6c7fccc47bb61f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_d0b76fc7b756d672194e42a6d5a4b9fd,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1,
        mod_consts.const_str_plain_rsa_crt_dmp1,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7ec4a331c250b684593136b1311dde8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_a5487c1878a8ec9c52821e7efc63e723,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1,
        mod_consts.const_str_plain_rsa_crt_dmq1,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_da5ec126f212028fe2246be57266d510,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_60c25c1730a0f8ab78ce9a31a87b93a2,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent,
        mod_consts.const_str_plain_rsa_recover_private_exponent,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_df69b0cb7be4725d738c9dd6e344c516,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_b80fcb16d69ec64a12726d6a22d9f258,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors,
        mod_consts.const_str_plain_rsa_recover_prime_factors,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_61924d80f868e42e9e6c14565a1067ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_2dd5d95679764eb8edd2becf53bb25f7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__2_key_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_key_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7471940600646871894b4f6bb68b4c5a,
#endif
        code_objects_60b6187668b3f5a49cf00d2b1888dbcf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_a3bd0013ab8b1489d2925838771953a7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__3_public_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aec6920adcef7c4fd692f374a8ab376c,
#endif
        code_objects_8a53136106ac742f13f9100ea3f88457,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_d670eb1f77329f1e7a7610e90978c76d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__4_sign(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_sign,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4b3f72ab186381987495e6ddc389f82d,
#endif
        code_objects_a4fd4e9bc1b79e18fe66c121c0bfed23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_39792731a6cc32ace1e09ef566a341d2,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__5_private_numbers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_private_numbers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5820437db902f0738310b49fe4b286d2,
#endif
        code_objects_3ffc8d950679983233c57bc0e42bb289,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_c85229bbb4a25d0a3bea361fe3c8830b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__6_private_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_private_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_140a7e53118339a97c197e7bac7885f9,
#endif
        code_objects_c0ed615bce9fba92b2f1d710453fee3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__7___copy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___copy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_595f0ecf44724794ce8679a67c7032cc,
#endif
        code_objects_43244eb4e736c70fdd4b97b4bfd759ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__8___deepcopy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___deepcopy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b7b5529d9f85ad1b71987718cb9cd1d,
#endif
        code_objects_261066d18a2eff61311f84ab1b2e175e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__9_encrypt(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_encrypt,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9f9a22ec0791f2f75a2e182f0be7f289,
#endif
        code_objects_fbb2e3bdba5093e2b1c9814d0fb6b03b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_digest_d44703f1a88e19a59acd963bba3aae0f,
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

static function_impl_code const function_table_cryptography$hazmat$primitives$asymmetric$rsa[] = {
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key,
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters,
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv,
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp,
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1,
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1,
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent,
impl_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$primitives$asymmetric$rsa);
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
        module_cryptography$hazmat$primitives$asymmetric$rsa,
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
        function_table_cryptography$hazmat$primitives$asymmetric$rsa,
        sizeof(function_table_cryptography$hazmat$primitives$asymmetric$rsa) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.primitives.asymmetric.rsa";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$primitives$asymmetric$rsa(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$primitives$asymmetric$rsa");

    // Store the module for future use.
    module_cryptography$hazmat$primitives$asymmetric$rsa = module;

    moduledict_cryptography$hazmat$primitives$asymmetric$rsa = MODULE_DICT(module_cryptography$hazmat$primitives$asymmetric$rsa);

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
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$rsa: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$rsa: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$primitives$asymmetric$rsa: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.rsa" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$primitives$asymmetric$rsa\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$asymmetric$rsa);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$primitives$asymmetric$rsa);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa;
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
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa = MAKE_MODULE_FRAME(code_objects_64b3e160a82e3321b420a1d6394c8dcd, module_cryptography$hazmat$primitives$asymmetric$rsa);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 7;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_random;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_random, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_gcd_str_plain_lcm_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 10;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_plain_gcd,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_gcd);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_gcd, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_plain_lcm,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_lcm);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_lcm, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
tmp_globals_arg_value_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_openssl_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 12;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_plain_openssl,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_openssl);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
tmp_globals_arg_value_5 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 13;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_plain__serialization,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__serialization);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__serialization, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_plain_hashes,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_hashes);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a;
tmp_globals_arg_value_6 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 14;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_plain_AsymmetricPadding,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_AsymmetricPadding);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_AsymmetricPadding, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
tmp_globals_arg_value_7 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 15;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$rsa,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils, tmp_assign_source_17);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_assign_source_18 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_19 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_assign_source_19 == NULL) {
    tmp_assign_source_19 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_19);
}
assert(!(tmp_assign_source_19 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_19);
condexpr_end_1:;
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_19;
}
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_3;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_1__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_RSAPrivateKey_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 18;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_1;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_1 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
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


exception_lineno = 18;

    goto try_except_handler_3;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 18;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 18;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
}
branch_end_2:;
{
PyObject *tmp_assign_source_22;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_RSAPrivateKey;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_5;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2 = MAKE_CLASS_FRAME(tstate, code_objects_eaadfdb9feaa354b2d0354d50c722132, module_cryptography$hazmat$primitives$asymmetric$rsa, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2, locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_635695148f0b37ab67be360f44f0edff);

tmp_args_element_value_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__1_decrypt(tstate, tmp_annotations_1);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 19;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_decrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_2;
tmp_called_value_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_3 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__2_key_size(tstate, tmp_annotations_2);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 26;
tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 25;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_key_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_3;
tmp_called_instance_3 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_49ac0f689087446800344aa694789791);

tmp_args_element_value_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__3_public_key(tstate, tmp_annotations_3);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 32;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_public_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_4;
tmp_called_instance_4 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_032aa02ba1c8fa5cb1ada7df13fc54fb);

tmp_args_element_value_5 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__4_sign(tstate, tmp_annotations_4);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 38;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_sign, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_5;
tmp_called_instance_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_b36ed3e63e617f7fb9a5bdea17f0b08b);

tmp_args_element_value_6 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__5_private_numbers(tstate, tmp_annotations_5);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 51;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_private_numbers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_6;
tmp_called_instance_6 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);

tmp_args_element_value_7 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__6_private_bytes(tstate, tmp_annotations_6);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 57;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_private_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_7;
tmp_called_instance_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_c08786d9d3b5b05231e5cc9cc7bdaf37);

tmp_args_element_value_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__7___copy__(tstate, tmp_annotations_7);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 68;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain___copy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_8;
tmp_called_instance_8 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain_abc);

if (tmp_called_instance_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_8 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_16af5c7dd4fc4a5d83dabbb721c0bee5);

tmp_args_element_value_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__8___deepcopy__(tstate, tmp_annotations_8);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame.f_lineno = 74;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain___deepcopy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_5;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_9;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_1 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = mod_consts.const_str_plain_RSAPrivateKey;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_4 = locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_1, tmp_dict_arg_value_4);
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_22 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18);
locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18);
locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__1_RSAPrivateKey_18 = NULL;
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
exception_lineno = 18;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPrivateKey, tmp_assign_source_22);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$RSAPrivateKey(tstate);
if (unlikely(tmp_assign_source_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RSAPrivateKey);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPrivateKeyWithSerialization, tmp_assign_source_24);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$RSAPrivateKey(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RSAPrivateKey);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_register);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_rsa);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_RSAPrivateKey);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 82;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 82;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_10;
tmp_dict_key_2 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_10 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_assign_source_25 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
bool tmp_condition_result_5;
PyObject *tmp_key_value_4;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_key_value_5;
tmp_key_value_4 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_5 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_5, tmp_key_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_6 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_key_value_5 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_26 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_6, tmp_key_value_5);
if (tmp_assign_source_26 == NULL) {
    tmp_assign_source_26 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_26);
}
assert(!(tmp_assign_source_26 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_26 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_26);
condexpr_end_2:;
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_26;
}
{
bool tmp_condition_result_6;
PyObject *tmp_key_value_6;
PyObject *tmp_dict_arg_value_7;
tmp_key_value_6 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_7 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_7, tmp_key_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_2__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_args_value_2 = mod_consts.const_tuple_str_plain_RSAPublicKey_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 85;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_27;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_6;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 85;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 85;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_28;
}
branch_end_5:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_97cd6fd5c8579a7068d86fbfd40e2f84;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_RSAPublicKey;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_85;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3 = MAKE_CLASS_FRAME(tstate, code_objects_edd06a992447a55f8332c827493a34b4, module_cryptography$hazmat$primitives$asymmetric$rsa, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3, locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3) == 2);

// Framed code:
{
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_9;
tmp_called_instance_9 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_9 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_5068a9d2d5be4c5c455ecaa42dabea5d);

tmp_args_element_value_11 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__9_encrypt(tstate, tmp_annotations_9);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 86;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_encrypt, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_instance_10;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_10;
tmp_called_value_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_instance_10 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_10 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_13 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__10_key_size(tstate, tmp_annotations_10);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 93;
tmp_args_element_value_12 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 92;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_key_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_11;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_11;
tmp_called_instance_11 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_11 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_4934560da38eec01377a5894bd3cc292);

tmp_args_element_value_14 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__11_public_numbers(tstate, tmp_annotations_11);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 99;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_instance_11);
Py_DECREF(tmp_called_instance_11);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_public_numbers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_12;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_12;
tmp_called_instance_12 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_12 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);

tmp_args_element_value_15 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__12_public_bytes(tstate, tmp_annotations_12);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 105;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_instance_12);
Py_DECREF(tmp_called_instance_12);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_public_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_13;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_13;
tmp_called_instance_13 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_13 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_b1159bc35a95cad1308bdc375de03689);

tmp_args_element_value_16 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__13_verify(tstate, tmp_annotations_13);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 115;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_instance_13);
Py_DECREF(tmp_called_instance_13);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_verify, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_14;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_14;
tmp_called_instance_14 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_14 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_beaf28de68084d7b60d00f4098641ae2);

tmp_args_element_value_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__14_recover_data_from_signature(tstate, tmp_annotations_14);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 127;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_instance_14);
Py_DECREF(tmp_called_instance_14);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_recover_data_from_signature, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_15;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_15;
tmp_called_instance_15 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_15 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);

tmp_args_element_value_18 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__15___eq__(tstate, tmp_annotations_15);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 138;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_15, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_instance_15);
Py_DECREF(tmp_called_instance_15);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_16;
PyObject *tmp_args_element_value_19;
PyObject *tmp_annotations_16;
tmp_called_instance_16 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_16 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_49ac0f689087446800344aa694789791);

tmp_args_element_value_19 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__16___copy__(tstate, tmp_annotations_16);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 144;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_instance_16);
Py_DECREF(tmp_called_instance_16);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain___copy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_17;
PyObject *tmp_args_element_value_20;
PyObject *tmp_annotations_17;
tmp_called_instance_17 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain_abc);

if (tmp_called_instance_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_17 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$abc(tstate);
if (unlikely(tmp_called_instance_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_cebf9da8fe8e5765ae502501c06a67f4);

tmp_args_element_value_20 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__17___deepcopy__(tstate, tmp_annotations_17);

frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame.f_lineno = 150;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_instance_17);
Py_DECREF(tmp_called_instance_17);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain___deepcopy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_8;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain_RSAPublicKey;
tmp_bases_value_2 = const_tuple_empty;
tmp_dict_arg_value_8 = locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_2, tmp_dict_arg_value_8);
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_8;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_29 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85);
locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85);
locals_cryptography$hazmat$primitives$asymmetric$rsa$$$class__2_RSAPublicKey_85 = NULL;
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
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPublicKey, tmp_assign_source_29);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$RSAPublicKey(tstate);
if (unlikely(tmp_assign_source_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RSAPublicKey);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPublicKeyWithSerialization, tmp_assign_source_31);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_21;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
tmp_expression_value_16 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$RSAPublicKey(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RSAPublicKey);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_register);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_expression_value_18 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_rsa);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_RSAPublicKey);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 158;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame.f_lineno = 158;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;

    goto frame_exception_exit_1;
}
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_rsa);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto frame_exception_exit_1;
}
tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_RSAPrivateNumbers);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPrivateNumbers, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
tmp_expression_value_22 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$rsa$rust_openssl(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_rsa);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_RSAPublicNumbers);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAPublicNumbers, tmp_assign_source_33);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$rsa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$rsa, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$rsa);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_18;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_6e0b0c2cf5e2373dc0eddf4dfda77ab4);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_34 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__18_generate_private_key(tstate, tmp_defaults_1, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_private_key, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_74a2013fbb317c82b7873d286fa8c1c6);

tmp_assign_source_35 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__19__verify_rsa_parameters(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__verify_rsa_parameters, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_cc6aff875b169243bda65be746cf7205);

tmp_assign_source_36 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__20__modinv(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__modinv, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_b34421cce4b30b91a0ffc3ced13cee1b);

tmp_assign_source_37 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__21_rsa_crt_iqmp(tstate, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa_crt_iqmp, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_a5b6d9d2479995e02dcaa53466342b11);

tmp_assign_source_38 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__22_rsa_crt_dmp1(tstate, tmp_annotations_22);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa_crt_dmp1, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_d908f68da422f1816dfdecf5dea7c489);

tmp_assign_source_39 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__23_rsa_crt_dmq1(tstate, tmp_annotations_23);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa_crt_dmq1, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_a5b5e549321e357e2744489a9a57ce7a);

tmp_assign_source_40 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__24_rsa_recover_private_exponent(tstate, tmp_annotations_24);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa_recover_private_exponent, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = mod_consts.const_int_pos_500;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_RECOVERY_ATTEMPTS, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_634d719b3c87335f10aa49adeafa1d04);

tmp_assign_source_42 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$rsa$$$function__25_rsa_recover_prime_factors(tstate, tmp_annotations_25);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa_recover_prime_factors, tmp_assign_source_42);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$rsa", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.rsa" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$primitives$asymmetric$rsa);
    return module_cryptography$hazmat$primitives$asymmetric$rsa;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$rsa, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$rsa", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
