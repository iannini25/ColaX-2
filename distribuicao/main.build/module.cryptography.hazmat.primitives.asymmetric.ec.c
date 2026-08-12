/* Generated code for Python module 'cryptography$hazmat$primitives$asymmetric$ec'
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



/* The "module_cryptography$hazmat$primitives$asymmetric$ec" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$ec;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$ec;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_utils;
PyObject *const_str_plain__check_bytes;
PyObject *const_str_plain_data;
PyObject *const_str_digest_3c88421968c6b8038a7f79f32d667557;
PyObject *const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple;
PyObject *const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e;
PyObject *const_str_plain_rust_openssl;
PyObject *const_str_plain_ec;
PyObject *const_str_plain_from_public_bytes;
PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
PyObject *const_tuple_str_plain_backend_tuple;
PyObject *const_str_plain_backend;
PyObject *const_str_plain_ecdsa_deterministic_supported;
PyObject *const_str_plain_UnsupportedAlgorithm;
PyObject *const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c;
PyObject *const_str_plain__Reasons;
PyObject *const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM;
PyObject *const_str_plain__algorithm;
PyObject *const_str_plain__deterministic_signing;
PyObject *const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a;
PyObject *const_str_digest_542729c625481529de7c47bb8d546552;
PyObject *const_str_plain_derive_private_key;
PyObject *const_str_plain__OID_TO_CURVE;
PyObject *const_str_digest_3dc40e53dd4b24847b544b6f257eb244;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_cryptography;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
PyObject *const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
PyObject *const_str_digest_1ad2cf3b84b8bacd26104238bca76891;
PyObject *const_tuple_str_plain_ObjectIdentifier_tuple;
PyObject *const_str_plain_ObjectIdentifier;
PyObject *const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
PyObject *const_tuple_str_plain_openssl_tuple;
PyObject *const_str_plain_openssl;
PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
PyObject *const_tuple_str_plain__serialization_str_plain_hashes_tuple;
PyObject *const_str_plain__serialization;
PyObject *const_str_plain_hashes;
PyObject *const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
PyObject *const_str_plain_asym_utils;
PyObject *const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
PyObject *const_str_plain_EllipticCurveOID;
PyObject *const_int_pos_18;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple;
PyObject *const_str_plain_SECP192R1;
PyObject *const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple;
PyObject *const_str_plain_SECP224R1;
PyObject *const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple;
PyObject *const_str_plain_SECP256K1;
PyObject *const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple;
PyObject *const_str_plain_SECP256R1;
PyObject *const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple;
PyObject *const_str_plain_SECP384R1;
PyObject *const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple;
PyObject *const_str_plain_SECP521R1;
PyObject *const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple;
PyObject *const_str_plain_BRAINPOOLP256R1;
PyObject *const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple;
PyObject *const_str_plain_BRAINPOOLP384R1;
PyObject *const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple;
PyObject *const_str_plain_BRAINPOOLP512R1;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_ABCMeta;
PyObject *const_str_plain___prepare__;
PyObject *const_tuple_str_plain_EllipticCurve_tuple_empty_tuple;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain_EllipticCurve;
PyObject *const_int_pos_30;
PyObject *const_str_plain_property;
PyObject *const_str_plain_abstractmethod;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_b128a0c0c2355b33397068f00626e7b7;
PyObject *const_str_digest_4406b8e90239f9f2eb32b15a2097e57b;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006;
PyObject *const_str_plain_key_size;
PyObject *const_str_digest_65de0cd613cc062a354bda533ccef4dd;
PyObject *const_str_digest_26da7eb0d0684f1314e272a477b18c3a;
PyObject *const_str_plain_group_order;
PyObject *const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a;
PyObject *const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple;
PyObject *const_str_plain_EllipticCurveSignatureAlgorithm;
PyObject *const_int_pos_53;
PyObject *const_dict_b8bbe546a4a29bed2b8e55337e17fba2;
PyObject *const_str_digest_cf3b69844ed754ef316e3abcad2ca920;
PyObject *const_str_plain_algorithm;
PyObject *const_str_digest_2d122639fdcc2f5110407d997490a42d;
PyObject *const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple;
PyObject *const_str_plain_EllipticCurvePrivateKey;
PyObject *const_int_pos_64;
PyObject *const_dict_a40f9fc415f6a24574247feb779430fa;
PyObject *const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d;
PyObject *const_str_plain_exchange;
PyObject *const_str_digest_401bc1698fe3f6bc05049f741b6991ce;
PyObject *const_dict_150c5095ae79d66fca40afd8102dc1a7;
PyObject *const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b;
PyObject *const_str_plain_public_key;
PyObject *const_str_digest_1505a5dafe10728b5cbd5288744e1f4d;
PyObject *const_dict_96b5d760612f3fdf8e34321dc75fc0bb;
PyObject *const_str_digest_484588cccf7a1a4effedf3c6dea34f92;
PyObject *const_str_plain_curve;
PyObject *const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f;
PyObject *const_str_digest_e49766636c1afdf5fcb3f8965746e2a7;
PyObject *const_dict_0b11ec7f2f63ea4a31536acb7292c749;
PyObject *const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3;
PyObject *const_str_plain_sign;
PyObject *const_str_digest_67c18d580eaa25ac26cd81bd7a949e99;
PyObject *const_dict_bd7dedc46f308be89a3ce2ab8dcb885a;
PyObject *const_str_digest_e8a476e682a05164134346f648a89f24;
PyObject *const_str_plain_private_numbers;
PyObject *const_str_digest_4c34e531c2321a614499af11b4e95004;
PyObject *const_dict_efc8da0e94d28ac00c67fdffcef957e4;
PyObject *const_str_digest_6aab55c26a1ed998ca3af322fce98750;
PyObject *const_str_plain_private_bytes;
PyObject *const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357;
PyObject *const_dict_dabfc928496387ddcb7c08aa0a380883;
PyObject *const_str_digest_cc3df6912c981aa061591898fe7aea76;
PyObject *const_str_plain___copy__;
PyObject *const_str_digest_1ccf53067c93406646b552524ab96e25;
PyObject *const_dict_5c81730c557cb7b226aa7b16420e5b19;
PyObject *const_str_digest_e1722681f6bc2735f23ae0e518f47436;
PyObject *const_str_plain___deepcopy__;
PyObject *const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3;
PyObject *const_str_plain_EllipticCurvePrivateKeyWithSerialization;
PyObject *const_str_plain_ECPrivateKey;
PyObject *const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple;
PyObject *const_str_plain_EllipticCurvePublicKey;
PyObject *const_int_pos_138;
PyObject *const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a;
PyObject *const_str_digest_9ab849a4a25015df4f4e3ca5e993669d;
PyObject *const_dict_201950ee0bf5e1fbc2c09aeb0f93628a;
PyObject *const_str_digest_6c6903ebbde096b3c24dda5204199c5c;
PyObject *const_str_plain_public_numbers;
PyObject *const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6;
PyObject *const_dict_c44861dc21ab09a200a6d15af811a095;
PyObject *const_str_plain_public_bytes;
PyObject *const_str_digest_d89f0251aa11175ca09207d7e7fca0e0;
PyObject *const_dict_7664e149ab3649f244ee7b5a4ade6851;
PyObject *const_str_digest_b65598126c9dc80c52681ec668ff8678;
PyObject *const_str_plain_verify;
PyObject *const_str_digest_ebdddf4957d04c73bfc693bb62c1c282;
PyObject *const_dict_4f4c21241b15b2d31a3de6c61c6e024a;
PyObject *const_str_plain_from_encoded_point;
PyObject *const_str_digest_35fee4aade0496aafc615216b4c52625;
PyObject *const_dict_48da6b0499a992d8a0861b3c7131d274;
PyObject *const_str_digest_a0bfeac94e21ff744538259cfd62359c;
PyObject *const_str_plain___eq__;
PyObject *const_str_digest_e7a52e5a74d28ed5791917727be41eaf;
PyObject *const_str_digest_9602f355538c8fc0a0981516eee71729;
PyObject *const_dict_9205c735e08e10a41d2f3e3386899c6e;
PyObject *const_str_digest_d38eea9c95b79f50f433cdbe496a0b20;
PyObject *const_str_plain_EllipticCurvePublicKeyWithSerialization;
PyObject *const_str_plain_ECPublicKey;
PyObject *const_str_plain_EllipticCurvePrivateNumbers;
PyObject *const_str_plain_EllipticCurvePublicNumbers;
PyObject *const_int_pos_220;
PyObject *const_str_plain_secp521r1;
PyObject *const_int_pos_521;
PyObject *const_d658af7fedc28d8a0b5fd591bb053f0a;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_226;
PyObject *const_str_plain_secp384r1;
PyObject *const_int_pos_384;
PyObject *const_bacc44f3363aca579b87ac41be2c3c07;
PyObject *const_int_pos_232;
PyObject *const_str_plain_secp256r1;
PyObject *const_int_pos_256;
PyObject *const_03a30a8fed8c07a8516b1a9af4d4ff4a;
PyObject *const_int_pos_240;
PyObject *const_str_plain_secp256k1;
PyObject *const_15bb2a5664347e6b1eecad30a0f6fc19;
PyObject *const_int_pos_248;
PyObject *const_str_plain_secp224r1;
PyObject *const_int_pos_224;
PyObject *const_4f9b5cff8ed46ac1bcd198b524fc0f4e;
PyObject *const_int_pos_254;
PyObject *const_str_plain_secp192r1;
PyObject *const_int_pos_192;
PyObject *const_cd9f860f2c6e912de4526cdb192218b7;
PyObject *const_str_plain_BrainpoolP256R1;
PyObject *const_int_pos_260;
PyObject *const_str_plain_brainpoolP256r1;
PyObject *const_2b21a0777c2b3df21c8ea1873dd8fa1d;
PyObject *const_str_plain_BrainpoolP384R1;
PyObject *const_int_pos_268;
PyObject *const_str_plain_brainpoolP384r1;
PyObject *const_cdb25142c21336a59dc2ccd4632b5336;
PyObject *const_str_plain_BrainpoolP512R1;
PyObject *const_int_pos_274;
PyObject *const_str_plain_brainpoolP512r1;
PyObject *const_int_pos_512;
PyObject *const_536b0dde581f6df749a45aef3b875bd1;
PyObject *const_str_plain_prime192v1;
PyObject *const_str_plain_prime256v1;
PyObject *const_str_plain__CURVE_TYPES;
PyObject *const_str_digest_ef3d49944f59d99ad11b3870d09aeb26;
PyObject *const_str_plain_ECDSA;
PyObject *const_int_pos_295;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_c8658d26e498da6c90925a8d14e437d3;
PyObject *const_str_digest_465331b0e3d9a0109c5a75eddffe62ab;
PyObject *const_str_digest_add37f53f67de8513afc4618ef3c10b3;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_deterministic_signing;
PyObject *const_str_digest_ca6ffb90370171c0f37ebf770f675513;
PyObject *const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple;
PyObject *const_str_plain_generate_private_key;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_f523698371a7f7cfa6d7b816ea02d3fc;
PyObject *const_str_plain_ECDH;
PyObject *const_int_pos_345;
PyObject *const_dict_96b818b79a66aeb77fa8ad12e479c640;
PyObject *const_str_plain_get_curve_for_oid;
PyObject *const_str_digest_c6be2a207db8a85362d0b4f436654d67;
PyObject *const_str_digest_a16ca6848a0687233aa378d6bdbd74c2;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_memo_tuple;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple;
PyObject *const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple;
PyObject *const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple;
PyObject *const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple;
PyObject *const_tuple_str_plain_oid_tuple;
PyObject *const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple;
PyObject *const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[237];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.primitives.asymmetric.ec"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 237) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 237 values, got %d\n",
                    UN_TRANSLATE("cryptography.hazmat.primitives.asymmetric.ec"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__check_bytes", mod_consts.const_str_plain__check_bytes);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__check_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557", mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple", mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e", mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rust_openssl", mod_consts.const_str_plain_rust_openssl);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ec", mod_consts.const_str_plain_ec);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_public_bytes", mod_consts.const_str_plain_from_public_bytes);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_public_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e", mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_backend_tuple", mod_consts.const_tuple_str_plain_backend_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ecdsa_deterministic_supported", mod_consts.const_str_plain_ecdsa_deterministic_supported);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_ecdsa_deterministic_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnsupportedAlgorithm", mod_consts.const_str_plain_UnsupportedAlgorithm);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedAlgorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c", mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Reasons", mod_consts.const_str_plain__Reasons);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__Reasons);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM", mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__algorithm", mod_consts.const_str_plain__algorithm);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__algorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__deterministic_signing", mod_consts.const_str_plain__deterministic_signing);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__deterministic_signing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a", mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_542729c625481529de7c47bb8d546552", mod_consts.const_str_digest_542729c625481529de7c47bb8d546552);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_542729c625481529de7c47bb8d546552);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_derive_private_key", mod_consts.const_str_plain_derive_private_key);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_derive_private_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__OID_TO_CURVE", mod_consts.const_str_plain__OID_TO_CURVE);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__OID_TO_CURVE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244", mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abc", mod_consts.const_str_plain_abc);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c", mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple", mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891", mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple", mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ObjectIdentifier", mod_consts.const_str_plain_ObjectIdentifier);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectIdentifier);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl", mod_consts.const_str_plain_openssl);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple", mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__serialization", mod_consts.const_str_plain__serialization);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__serialization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_asym_utils", mod_consts.const_str_plain_asym_utils);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837", mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurveOID", mod_consts.const_str_plain_EllipticCurveOID);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurveOID);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple", mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP192R1", mod_consts.const_str_plain_SECP192R1);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP192R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple", mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP224R1", mod_consts.const_str_plain_SECP224R1);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP224R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple", mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP256K1", mod_consts.const_str_plain_SECP256K1);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP256K1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple", mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP256R1", mod_consts.const_str_plain_SECP256R1);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP256R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple", mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP384R1", mod_consts.const_str_plain_SECP384R1);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP384R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple", mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP521R1", mod_consts.const_str_plain_SECP521R1);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP521R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple", mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BRAINPOOLP256R1", mod_consts.const_str_plain_BRAINPOOLP256R1);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_BRAINPOOLP256R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple", mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BRAINPOOLP384R1", mod_consts.const_str_plain_BRAINPOOLP384R1);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_BRAINPOOLP384R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple", mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BRAINPOOLP512R1", mod_consts.const_str_plain_BRAINPOOLP512R1);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_BRAINPOOLP512R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_metaclass", mod_consts.const_str_plain_metaclass);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABCMeta", mod_consts.const_str_plain_ABCMeta);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurve", mod_consts.const_str_plain_EllipticCurve);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurve);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_int_pos_30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abstractmethod", mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7", mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b", mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006", mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_size", mod_consts.const_str_plain_key_size);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd", mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a", mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group_order", mod_consts.const_str_plain_group_order);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_group_order);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a", mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm", mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_53", mod_consts.const_int_pos_53);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_53);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2", mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920", mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithm", mod_consts.const_str_plain_algorithm);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d", mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateKey", mod_consts.const_str_plain_EllipticCurvePrivateKey);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa", mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d", mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exchange", mod_consts.const_str_plain_exchange);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_exchange);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce", mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7", mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b", mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_key", mod_consts.const_str_plain_public_key);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d", mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb", mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92", mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_curve", mod_consts.const_str_plain_curve);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_curve);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f", mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7", mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749", mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3", mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sign", mod_consts.const_str_plain_sign);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_sign);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99", mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a", mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24", mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_numbers", mod_consts.const_str_plain_private_numbers);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_numbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004", mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4", mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750", mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_bytes", mod_consts.const_str_plain_private_bytes);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_private_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357", mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883", mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76", mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___copy__", mod_consts.const_str_plain___copy__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___copy__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25", mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19", mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436", mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___deepcopy__", mod_consts.const_str_plain___deepcopy__);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___deepcopy__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3", mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization", mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECPrivateKey", mod_consts.const_str_plain_ECPrivateKey);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECPrivateKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicKey", mod_consts.const_str_plain_EllipticCurvePublicKey);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_138", mod_consts.const_int_pos_138);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_138);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a", mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d", mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a", mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c", mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_numbers", mod_consts.const_str_plain_public_numbers);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_numbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6", mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095", mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_bytes", mod_consts.const_str_plain_public_bytes);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0", mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851", mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678", mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify", mod_consts.const_str_plain_verify);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282", mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a", mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_encoded_point", mod_consts.const_str_plain_from_encoded_point);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_encoded_point);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625", mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274", mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c", mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___eq__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf", mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729", mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e", mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20", mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization", mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECPublicKey", mod_consts.const_str_plain_ECPublicKey);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECPublicKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateNumbers", mod_consts.const_str_plain_EllipticCurvePrivateNumbers);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateNumbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicNumbers", mod_consts.const_str_plain_EllipticCurvePublicNumbers);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicNumbers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_220", mod_consts.const_int_pos_220);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_220);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp521r1", mod_consts.const_str_plain_secp521r1);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_secp521r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_521", mod_consts.const_int_pos_521);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_521);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a", mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_226", mod_consts.const_int_pos_226);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_int_pos_226);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp384r1", mod_consts.const_str_plain_secp384r1);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_secp384r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_384", mod_consts.const_int_pos_384);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_int_pos_384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bacc44f3363aca579b87ac41be2c3c07", mod_consts.const_bacc44f3363aca579b87ac41be2c3c07);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_bacc44f3363aca579b87ac41be2c3c07);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_232", mod_consts.const_int_pos_232);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_int_pos_232);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp256r1", mod_consts.const_str_plain_secp256r1);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_secp256r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a", mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_240", mod_consts.const_int_pos_240);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_int_pos_240);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp256k1", mod_consts.const_str_plain_secp256k1);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_secp256k1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19", mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_248", mod_consts.const_int_pos_248);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_int_pos_248);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp224r1", mod_consts.const_str_plain_secp224r1);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_secp224r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_224", mod_consts.const_int_pos_224);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_int_pos_224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e", mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_int_pos_254);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp192r1", mod_consts.const_str_plain_secp192r1);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_secp192r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_192", mod_consts.const_int_pos_192);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_int_pos_192);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_cd9f860f2c6e912de4526cdb192218b7", mod_consts.const_cd9f860f2c6e912de4526cdb192218b7);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_cd9f860f2c6e912de4526cdb192218b7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrainpoolP256R1", mod_consts.const_str_plain_BrainpoolP256R1);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_BrainpoolP256R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_260", mod_consts.const_int_pos_260);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_int_pos_260);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brainpoolP256r1", mod_consts.const_str_plain_brainpoolP256r1);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_brainpoolP256r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d", mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrainpoolP384R1", mod_consts.const_str_plain_BrainpoolP384R1);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_BrainpoolP384R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_268", mod_consts.const_int_pos_268);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_int_pos_268);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brainpoolP384r1", mod_consts.const_str_plain_brainpoolP384r1);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_brainpoolP384r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_cdb25142c21336a59dc2ccd4632b5336", mod_consts.const_cdb25142c21336a59dc2ccd4632b5336);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_cdb25142c21336a59dc2ccd4632b5336);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrainpoolP512R1", mod_consts.const_str_plain_BrainpoolP512R1);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_BrainpoolP512R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_274", mod_consts.const_int_pos_274);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_int_pos_274);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brainpoolP512r1", mod_consts.const_str_plain_brainpoolP512r1);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain_brainpoolP512r1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_536b0dde581f6df749a45aef3b875bd1", mod_consts.const_536b0dde581f6df749a45aef3b875bd1);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_536b0dde581f6df749a45aef3b875bd1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prime192v1", mod_consts.const_str_plain_prime192v1);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_prime192v1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prime256v1", mod_consts.const_str_plain_prime256v1);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_prime256v1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CURVE_TYPES", mod_consts.const_str_plain__CURVE_TYPES);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain__CURVE_TYPES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26", mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA", mod_consts.const_str_plain_ECDSA);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_295", mod_consts.const_int_pos_295);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_int_pos_295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3", mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab", mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3", mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deterministic_signing", mod_consts.const_str_plain_deterministic_signing);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_deterministic_signing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513", mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple", mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_generate_private_key", mod_consts.const_str_plain_generate_private_key);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_private_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc", mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDH", mod_consts.const_str_plain_ECDH);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_345", mod_consts.const_int_pos_345);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_int_pos_345);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640", mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_curve_for_oid", mod_consts.const_str_plain_get_curve_for_oid);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_curve_for_oid);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67", mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2", mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple", mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple", mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple", mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_oid_tuple", mod_consts.const_tuple_str_plain_oid_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_oid_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple", mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple", mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple", mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple);
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
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$ec(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__check_bytes", mod_consts.const_str_plain__check_bytes);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__check_bytes) && "mod_consts.const_str_plain__check_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_data) && "mod_consts.const_str_plain_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557", mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557) && "mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple", mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple) && "mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e", mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e) && "mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rust_openssl", mod_consts.const_str_plain_rust_openssl);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl) && "mod_consts.const_str_plain_rust_openssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ec", mod_consts.const_str_plain_ec);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_ec) && "mod_consts.const_str_plain_ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_public_bytes", mod_consts.const_str_plain_from_public_bytes);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_public_bytes) && "mod_consts.const_str_plain_from_public_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e", mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e) && "mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_backend_tuple", mod_consts.const_tuple_str_plain_backend_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_backend_tuple) && "mod_consts.const_tuple_str_plain_backend_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend) && "mod_consts.const_str_plain_backend");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ecdsa_deterministic_supported", mod_consts.const_str_plain_ecdsa_deterministic_supported);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_ecdsa_deterministic_supported) && "mod_consts.const_str_plain_ecdsa_deterministic_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnsupportedAlgorithm", mod_consts.const_str_plain_UnsupportedAlgorithm);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedAlgorithm) && "mod_consts.const_str_plain_UnsupportedAlgorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c", mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c) && "mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__Reasons", mod_consts.const_str_plain__Reasons);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__Reasons) && "mod_consts.const_str_plain__Reasons");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM", mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM) && "mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__algorithm", mod_consts.const_str_plain__algorithm);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__algorithm) && "mod_consts.const_str_plain__algorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__deterministic_signing", mod_consts.const_str_plain__deterministic_signing);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__deterministic_signing) && "mod_consts.const_str_plain__deterministic_signing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a", mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a) && "mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_542729c625481529de7c47bb8d546552", mod_consts.const_str_digest_542729c625481529de7c47bb8d546552);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_542729c625481529de7c47bb8d546552) && "mod_consts.const_str_digest_542729c625481529de7c47bb8d546552");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_derive_private_key", mod_consts.const_str_plain_derive_private_key);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_derive_private_key) && "mod_consts.const_str_plain_derive_private_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__OID_TO_CURVE", mod_consts.const_str_plain__OID_TO_CURVE);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__OID_TO_CURVE) && "mod_consts.const_str_plain__OID_TO_CURVE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244", mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244) && "mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abc", mod_consts.const_str_plain_abc);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc) && "mod_consts.const_str_plain_abc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cryptography", mod_consts.const_str_plain_cryptography);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_cryptography) && "mod_consts.const_str_plain_cryptography");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple) && "mod_consts.const_tuple_str_plain_utils_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c", mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c) && "mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple", mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple) && "mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891", mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891) && "mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple", mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple) && "mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ObjectIdentifier", mod_consts.const_str_plain_ObjectIdentifier);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectIdentifier) && "mod_consts.const_str_plain_ObjectIdentifier");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e) && "mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple) && "mod_consts.const_tuple_str_plain_openssl_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl", mod_consts.const_str_plain_openssl);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl) && "mod_consts.const_str_plain_openssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087) && "mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple", mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple) && "mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__serialization", mod_consts.const_str_plain__serialization);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__serialization) && "mod_consts.const_str_plain__serialization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashes) && "mod_consts.const_str_plain_hashes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47) && "mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_asym_utils", mod_consts.const_str_plain_asym_utils);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils) && "mod_consts.const_str_plain_asym_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837", mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837) && "mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurveOID", mod_consts.const_str_plain_EllipticCurveOID);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurveOID) && "mod_consts.const_str_plain_EllipticCurveOID");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_18", mod_consts.const_int_pos_18);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_18) && "mod_consts.const_int_pos_18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple", mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple) && "mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP192R1", mod_consts.const_str_plain_SECP192R1);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP192R1) && "mod_consts.const_str_plain_SECP192R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple", mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple) && "mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP224R1", mod_consts.const_str_plain_SECP224R1);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP224R1) && "mod_consts.const_str_plain_SECP224R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple", mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple) && "mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP256K1", mod_consts.const_str_plain_SECP256K1);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP256K1) && "mod_consts.const_str_plain_SECP256K1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple", mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple) && "mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP256R1", mod_consts.const_str_plain_SECP256R1);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP256R1) && "mod_consts.const_str_plain_SECP256R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple", mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple) && "mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP384R1", mod_consts.const_str_plain_SECP384R1);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP384R1) && "mod_consts.const_str_plain_SECP384R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple", mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple) && "mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP521R1", mod_consts.const_str_plain_SECP521R1);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP521R1) && "mod_consts.const_str_plain_SECP521R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple", mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple) && "mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BRAINPOOLP256R1", mod_consts.const_str_plain_BRAINPOOLP256R1);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_BRAINPOOLP256R1) && "mod_consts.const_str_plain_BRAINPOOLP256R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple", mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple) && "mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BRAINPOOLP384R1", mod_consts.const_str_plain_BRAINPOOLP384R1);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_BRAINPOOLP384R1) && "mod_consts.const_str_plain_BRAINPOOLP384R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple", mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple) && "mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BRAINPOOLP512R1", mod_consts.const_str_plain_BRAINPOOLP512R1);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_BRAINPOOLP512R1) && "mod_consts.const_str_plain_BRAINPOOLP512R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_metaclass", mod_consts.const_str_plain_metaclass);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_metaclass) && "mod_consts.const_str_plain_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ABCMeta", mod_consts.const_str_plain_ABCMeta);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABCMeta) && "mod_consts.const_str_plain_ABCMeta");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple) && "mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurve", mod_consts.const_str_plain_EllipticCurve);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurve) && "mod_consts.const_str_plain_EllipticCurve");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_30", mod_consts.const_int_pos_30);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_int_pos_30) && "mod_consts.const_int_pos_30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_property", mod_consts.const_str_plain_property);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_property) && "mod_consts.const_str_plain_property");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_abstractmethod", mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod) && "mod_consts.const_str_plain_abstractmethod");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b) && "mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7", mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7) && "mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b", mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b) && "mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261) && "mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006", mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006) && "mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_key_size", mod_consts.const_str_plain_key_size);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_size) && "mod_consts.const_str_plain_key_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd", mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd) && "mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a", mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a) && "mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_group_order", mod_consts.const_str_plain_group_order);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_group_order) && "mod_consts.const_str_plain_group_order");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a", mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a) && "mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple) && "mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm", mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm) && "mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_53", mod_consts.const_int_pos_53);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_53) && "mod_consts.const_int_pos_53");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2", mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2) && "mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920", mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920) && "mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithm", mod_consts.const_str_plain_algorithm);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm) && "mod_consts.const_str_plain_algorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d", mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d) && "mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple) && "mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateKey", mod_consts.const_str_plain_EllipticCurvePrivateKey);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateKey) && "mod_consts.const_str_plain_EllipticCurvePrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_64", mod_consts.const_int_pos_64);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_64) && "mod_consts.const_int_pos_64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa", mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa) && "mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d", mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d) && "mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exchange", mod_consts.const_str_plain_exchange);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_exchange) && "mod_consts.const_str_plain_exchange");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce", mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce) && "mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7", mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7) && "mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b", mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b) && "mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_key", mod_consts.const_str_plain_public_key);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_key) && "mod_consts.const_str_plain_public_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d", mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d) && "mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb", mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb) && "mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92", mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92) && "mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_curve", mod_consts.const_str_plain_curve);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_curve) && "mod_consts.const_str_plain_curve");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f", mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f) && "mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7", mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7) && "mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749", mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749) && "mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3", mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3) && "mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sign", mod_consts.const_str_plain_sign);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_sign) && "mod_consts.const_str_plain_sign");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99", mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99) && "mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a", mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a) && "mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24", mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24) && "mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_numbers", mod_consts.const_str_plain_private_numbers);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_numbers) && "mod_consts.const_str_plain_private_numbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004", mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004) && "mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4", mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4) && "mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750", mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750) && "mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_private_bytes", mod_consts.const_str_plain_private_bytes);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_private_bytes) && "mod_consts.const_str_plain_private_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357", mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357) && "mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883", mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883) && "mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76", mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76) && "mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___copy__", mod_consts.const_str_plain___copy__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___copy__) && "mod_consts.const_str_plain___copy__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25", mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25) && "mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19", mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19) && "mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436", mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436) && "mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___deepcopy__", mod_consts.const_str_plain___deepcopy__);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___deepcopy__) && "mod_consts.const_str_plain___deepcopy__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3", mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3) && "mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization", mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization) && "mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECPrivateKey", mod_consts.const_str_plain_ECPrivateKey);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECPrivateKey) && "mod_consts.const_str_plain_ECPrivateKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple", mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple) && "mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicKey", mod_consts.const_str_plain_EllipticCurvePublicKey);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicKey) && "mod_consts.const_str_plain_EllipticCurvePublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_138", mod_consts.const_int_pos_138);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_138) && "mod_consts.const_int_pos_138");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a", mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a) && "mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d", mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d) && "mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a", mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a) && "mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c", mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c) && "mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_numbers", mod_consts.const_str_plain_public_numbers);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_numbers) && "mod_consts.const_str_plain_public_numbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6", mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6) && "mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095", mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095) && "mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_public_bytes", mod_consts.const_str_plain_public_bytes);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_public_bytes) && "mod_consts.const_str_plain_public_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0", mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0) && "mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851", mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851) && "mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678", mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678) && "mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify", mod_consts.const_str_plain_verify);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify) && "mod_consts.const_str_plain_verify");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282", mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282) && "mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a", mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a) && "mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_from_encoded_point", mod_consts.const_str_plain_from_encoded_point);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_encoded_point) && "mod_consts.const_str_plain_from_encoded_point");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625", mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625) && "mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274", mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274) && "mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c", mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c) && "mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___eq__", mod_consts.const_str_plain___eq__);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___eq__) && "mod_consts.const_str_plain___eq__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf", mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf) && "mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729", mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729) && "mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e", mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e) && "mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20", mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20) && "mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization", mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization) && "mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECPublicKey", mod_consts.const_str_plain_ECPublicKey);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECPublicKey) && "mod_consts.const_str_plain_ECPublicKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePrivateNumbers", mod_consts.const_str_plain_EllipticCurvePrivateNumbers);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePrivateNumbers) && "mod_consts.const_str_plain_EllipticCurvePrivateNumbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_EllipticCurvePublicNumbers", mod_consts.const_str_plain_EllipticCurvePublicNumbers);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_EllipticCurvePublicNumbers) && "mod_consts.const_str_plain_EllipticCurvePublicNumbers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_220", mod_consts.const_int_pos_220);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_220) && "mod_consts.const_int_pos_220");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp521r1", mod_consts.const_str_plain_secp521r1);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_secp521r1) && "mod_consts.const_str_plain_secp521r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_521", mod_consts.const_int_pos_521);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_521) && "mod_consts.const_int_pos_521");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a", mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a) && "mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_226", mod_consts.const_int_pos_226);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_int_pos_226) && "mod_consts.const_int_pos_226");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp384r1", mod_consts.const_str_plain_secp384r1);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_secp384r1) && "mod_consts.const_str_plain_secp384r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_384", mod_consts.const_int_pos_384);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_int_pos_384) && "mod_consts.const_int_pos_384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bacc44f3363aca579b87ac41be2c3c07", mod_consts.const_bacc44f3363aca579b87ac41be2c3c07);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_bacc44f3363aca579b87ac41be2c3c07) && "mod_consts.const_bacc44f3363aca579b87ac41be2c3c07");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_232", mod_consts.const_int_pos_232);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_int_pos_232) && "mod_consts.const_int_pos_232");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp256r1", mod_consts.const_str_plain_secp256r1);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_secp256r1) && "mod_consts.const_str_plain_secp256r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_256", mod_consts.const_int_pos_256);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_int_pos_256) && "mod_consts.const_int_pos_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a", mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a) && "mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_240", mod_consts.const_int_pos_240);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_int_pos_240) && "mod_consts.const_int_pos_240");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp256k1", mod_consts.const_str_plain_secp256k1);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_secp256k1) && "mod_consts.const_str_plain_secp256k1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19", mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19) && "mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_248", mod_consts.const_int_pos_248);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_int_pos_248) && "mod_consts.const_int_pos_248");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp224r1", mod_consts.const_str_plain_secp224r1);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_secp224r1) && "mod_consts.const_str_plain_secp224r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_224", mod_consts.const_int_pos_224);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_int_pos_224) && "mod_consts.const_int_pos_224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e", mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e) && "mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_254", mod_consts.const_int_pos_254);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_int_pos_254) && "mod_consts.const_int_pos_254");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secp192r1", mod_consts.const_str_plain_secp192r1);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_secp192r1) && "mod_consts.const_str_plain_secp192r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_192", mod_consts.const_int_pos_192);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_int_pos_192) && "mod_consts.const_int_pos_192");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_cd9f860f2c6e912de4526cdb192218b7", mod_consts.const_cd9f860f2c6e912de4526cdb192218b7);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_cd9f860f2c6e912de4526cdb192218b7) && "mod_consts.const_cd9f860f2c6e912de4526cdb192218b7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrainpoolP256R1", mod_consts.const_str_plain_BrainpoolP256R1);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_BrainpoolP256R1) && "mod_consts.const_str_plain_BrainpoolP256R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_260", mod_consts.const_int_pos_260);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_int_pos_260) && "mod_consts.const_int_pos_260");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brainpoolP256r1", mod_consts.const_str_plain_brainpoolP256r1);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_brainpoolP256r1) && "mod_consts.const_str_plain_brainpoolP256r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d", mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d) && "mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrainpoolP384R1", mod_consts.const_str_plain_BrainpoolP384R1);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_BrainpoolP384R1) && "mod_consts.const_str_plain_BrainpoolP384R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_268", mod_consts.const_int_pos_268);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_int_pos_268) && "mod_consts.const_int_pos_268");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brainpoolP384r1", mod_consts.const_str_plain_brainpoolP384r1);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_brainpoolP384r1) && "mod_consts.const_str_plain_brainpoolP384r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_cdb25142c21336a59dc2ccd4632b5336", mod_consts.const_cdb25142c21336a59dc2ccd4632b5336);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_cdb25142c21336a59dc2ccd4632b5336) && "mod_consts.const_cdb25142c21336a59dc2ccd4632b5336");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BrainpoolP512R1", mod_consts.const_str_plain_BrainpoolP512R1);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_BrainpoolP512R1) && "mod_consts.const_str_plain_BrainpoolP512R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_274", mod_consts.const_int_pos_274);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_int_pos_274) && "mod_consts.const_int_pos_274");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brainpoolP512r1", mod_consts.const_str_plain_brainpoolP512r1);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain_brainpoolP512r1) && "mod_consts.const_str_plain_brainpoolP512r1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_512", mod_consts.const_int_pos_512);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_512) && "mod_consts.const_int_pos_512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_536b0dde581f6df749a45aef3b875bd1", mod_consts.const_536b0dde581f6df749a45aef3b875bd1);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_536b0dde581f6df749a45aef3b875bd1) && "mod_consts.const_536b0dde581f6df749a45aef3b875bd1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prime192v1", mod_consts.const_str_plain_prime192v1);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_prime192v1) && "mod_consts.const_str_plain_prime192v1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_prime256v1", mod_consts.const_str_plain_prime256v1);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_prime256v1) && "mod_consts.const_str_plain_prime256v1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__CURVE_TYPES", mod_consts.const_str_plain__CURVE_TYPES);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain__CURVE_TYPES) && "mod_consts.const_str_plain__CURVE_TYPES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26", mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26) && "mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA", mod_consts.const_str_plain_ECDSA);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA) && "mod_consts.const_str_plain_ECDSA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_295", mod_consts.const_int_pos_295);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_int_pos_295) && "mod_consts.const_int_pos_295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_tuple", mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple) && "mod_consts.const_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3", mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3) && "mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab", mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab) && "mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3", mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3) && "mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6) && "mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_deterministic_signing", mod_consts.const_str_plain_deterministic_signing);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_deterministic_signing) && "mod_consts.const_str_plain_deterministic_signing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513", mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513) && "mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple", mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple) && "mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_generate_private_key", mod_consts.const_str_plain_generate_private_key);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_private_key) && "mod_consts.const_str_plain_generate_private_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc", mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc) && "mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDH", mod_consts.const_str_plain_ECDH);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDH) && "mod_consts.const_str_plain_ECDH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_345", mod_consts.const_int_pos_345);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_int_pos_345) && "mod_consts.const_int_pos_345");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640", mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640) && "mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_curve_for_oid", mod_consts.const_str_plain_get_curve_for_oid);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_curve_for_oid) && "mod_consts.const_str_plain_get_curve_for_oid");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67", mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67) && "mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2", mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2) && "mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple", mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_other_tuple", mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_other_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple", mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple) && "mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple", mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple) && "mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple", mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple", mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple) && "mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_oid_tuple", mod_consts.const_tuple_str_plain_oid_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_oid_tuple) && "mod_consts.const_tuple_str_plain_oid_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple", mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple) && "mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple", mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple", mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple", mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple) && "mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 23
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
static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP256R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP256R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BrainpoolP256R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BrainpoolP256R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BrainpoolP256R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BrainpoolP256R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP256R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP256R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP256R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP384R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP384R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BrainpoolP384R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BrainpoolP384R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BrainpoolP384R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BrainpoolP384R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP384R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP384R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP384R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP512R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP512R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BrainpoolP512R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BrainpoolP512R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BrainpoolP512R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BrainpoolP512R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP512R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP512R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP512R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurve);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurve);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurve, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurve);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurve, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurve);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurve);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurve);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurveOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurveOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurveOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurveOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveOID);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurvePrivateKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePrivateKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurvePrivateKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurvePrivateKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurvePrivateKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurvePrivateKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePrivateKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePrivateKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePrivateKey);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurvePublicKey(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePublicKey);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurvePublicKey);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurvePublicKey, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurvePublicKey);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurvePublicKey, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePublicKey);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePublicKey);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePublicKey);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveSignatureAlgorithm(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectIdentifier);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ObjectIdentifier);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ObjectIdentifier, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ObjectIdentifier);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ObjectIdentifier, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectIdentifier);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectIdentifier);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectIdentifier);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP192R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP192R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP192R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP192R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP192R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP192R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP192R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP192R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP192R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP224R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP224R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP224R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP224R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP224R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP224R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP224R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP224R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP224R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP256K1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256K1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP256K1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP256K1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP256K1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP256K1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256K1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256K1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256K1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP256R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP256R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP256R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP256R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP256R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP384R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP384R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP384R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP384R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP384R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP384R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP384R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP384R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP384R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP521R1(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP521R1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP521R1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP521R1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SECP521R1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SECP521R1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP521R1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP521R1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP521R1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$UnsupportedAlgorithm(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedAlgorithm);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnsupportedAlgorithm);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnsupportedAlgorithm, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnsupportedAlgorithm);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnsupportedAlgorithm, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedAlgorithm);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedAlgorithm);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedAlgorithm);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$_OID_TO_CURVE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__OID_TO_CURVE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__OID_TO_CURVE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__OID_TO_CURVE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__OID_TO_CURVE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__OID_TO_CURVE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__OID_TO_CURVE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__OID_TO_CURVE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__OID_TO_CURVE);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$_Reasons(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__Reasons);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Reasons);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Reasons, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Reasons);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Reasons, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__Reasons);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__Reasons);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Reasons);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$primitives$asymmetric$ec->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_utils);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8730e0d98c2ac5f7434e6819c76aa101;
static PyCodeObject *code_objects_7230f2fbca87ebc495d4bab736a362ed;
static PyCodeObject *code_objects_b4189241eb0597264c47711bfc80d003;
static PyCodeObject *code_objects_5ce7d5e227352223c21fc02b04a1164c;
static PyCodeObject *code_objects_43f6c1b0422727bd9284513a8143b95e;
static PyCodeObject *code_objects_c17e5151bb755333afa9dcdf66fdb5e9;
static PyCodeObject *code_objects_ba4ff7d15bdfc7e4170e1160a6feca37;
static PyCodeObject *code_objects_ab7805dec7bb839f04879c5404d2aa30;
static PyCodeObject *code_objects_7423e46dc130fd30c334618ad8cbba6b;
static PyCodeObject *code_objects_35bed36e507b9f24300a50b3bb5e567f;
static PyCodeObject *code_objects_4c71143acccd29e2bc11c8e0dba766a8;
static PyCodeObject *code_objects_49d2d7ca5ace7f87ef4d668365f6b809;
static PyCodeObject *code_objects_05e88d1df21a505041ad49c8f3a1d378;
static PyCodeObject *code_objects_6ac73134824d071bb9d31eeb3a2ffc79;
static PyCodeObject *code_objects_fa79cfbb5115f93ecc25637c6c7d7c12;
static PyCodeObject *code_objects_8b7d93f5fa97583b5d451786fa4c2ba8;
static PyCodeObject *code_objects_67d109945fa2cc51158a404709b5d52f;
static PyCodeObject *code_objects_bd540492370597920f395420b0867df3;
static PyCodeObject *code_objects_08008871ca5f96ed827b98867c5d0c42;
static PyCodeObject *code_objects_e874156c245daa530f949d9222b9be8b;
static PyCodeObject *code_objects_6f2c29d7905e833936178075752494c3;
static PyCodeObject *code_objects_4be314fe019607d663875ba973dfbacd;
static PyCodeObject *code_objects_0e84fd8a3cec6a6a4c1764603557205d;
static PyCodeObject *code_objects_ce20d888355f84bf8cf6a3fff0b6ad58;
static PyCodeObject *code_objects_336d18f17bf206a0b4d9ff64a35fe0f5;
static PyCodeObject *code_objects_46f2ddb105b24d3b55a997d8fd79f545;
static PyCodeObject *code_objects_6f9169aa843bcbc9fcc4661f49d78173;
static PyCodeObject *code_objects_bac5e46bbea88d76d84f7b96aa253acf;
static PyCodeObject *code_objects_4670eefaa3cb0defe135f6a637b12e7d;
static PyCodeObject *code_objects_67d2cd64f5c14660417eec3bd16f0f67;
static PyCodeObject *code_objects_cf3e49a6ef5786adafc966c6ae69e41f;
static PyCodeObject *code_objects_fb0ff91c97309a6cbfd6fa1335a6deb6;
static PyCodeObject *code_objects_97285b6675c9ac5207e01bf37fb5dbce;
static PyCodeObject *code_objects_fad3894ec28ab954b36ab3ddaf5afbc4;
static PyCodeObject *code_objects_fca9faec37c3276c5dc4db61b4e6939f;
static PyCodeObject *code_objects_c3e53a69fe479c66e1b447c11ca22360;
static PyCodeObject *code_objects_17060bf8f69ac33012ece5a01569e961;
static PyCodeObject *code_objects_09d3d4693d41a0a92b24ed0f93925d71;
static PyCodeObject *code_objects_d33f830191a3f7a635af36f840e8f7a1;
static PyCodeObject *code_objects_42a9415f123e950d3da5af6a62785218;
static PyCodeObject *code_objects_8420649a58091c0fbc2d4a7bec8014af;
static PyCodeObject *code_objects_e83372a51fa2c8ebb2f02c22b48fde6f;
static PyCodeObject *code_objects_06df65a7e6b2423d6389e363ba40a9cf;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c6be2a207db8a85362d0b4f436654d67); CHECK_OBJECT(module_filename_obj);
code_objects_8730e0d98c2ac5f7434e6819c76aa101 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2, mod_consts.const_str_digest_a16ca6848a0687233aa378d6bdbd74c2, NULL, NULL, 0, 0, 0);
code_objects_7230f2fbca87ebc495d4bab736a362ed = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BrainpoolP256R1, mod_consts.const_str_plain_BrainpoolP256R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b4189241eb0597264c47711bfc80d003 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BrainpoolP384R1, mod_consts.const_str_plain_BrainpoolP384R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5ce7d5e227352223c21fc02b04a1164c = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BrainpoolP512R1, mod_consts.const_str_plain_BrainpoolP512R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_43f6c1b0422727bd9284513a8143b95e = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ECDSA, mod_consts.const_str_plain_ECDSA, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c17e5151bb755333afa9dcdf66fdb5e9 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EllipticCurve, mod_consts.const_str_plain_EllipticCurve, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ba4ff7d15bdfc7e4170e1160a6feca37 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EllipticCurveOID, mod_consts.const_str_plain_EllipticCurveOID, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ab7805dec7bb839f04879c5404d2aa30 = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EllipticCurvePrivateKey, mod_consts.const_str_plain_EllipticCurvePrivateKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7423e46dc130fd30c334618ad8cbba6b = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EllipticCurvePublicKey, mod_consts.const_str_plain_EllipticCurvePublicKey, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_35bed36e507b9f24300a50b3bb5e567f = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm, mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4c71143acccd29e2bc11c8e0dba766a8 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SECP192R1, mod_consts.const_str_plain_SECP192R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_49d2d7ca5ace7f87ef4d668365f6b809 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SECP224R1, mod_consts.const_str_plain_SECP224R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_05e88d1df21a505041ad49c8f3a1d378 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SECP256K1, mod_consts.const_str_plain_SECP256K1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6ac73134824d071bb9d31eeb3a2ffc79 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SECP256R1, mod_consts.const_str_plain_SECP256R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fa79cfbb5115f93ecc25637c6c7d7c12 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SECP384R1, mod_consts.const_str_plain_SECP384R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8b7d93f5fa97583b5d451786fa4c2ba8 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SECP521R1, mod_consts.const_str_plain_SECP521R1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_67d109945fa2cc51158a404709b5d52f = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___copy__, mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bd540492370597920f395420b0867df3 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___copy__, mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_08008871ca5f96ed827b98867c5d0c42 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___deepcopy__, mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple, NULL, 2, 0, 0);
code_objects_e874156c245daa530f949d9222b9be8b = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___deepcopy__, mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20, mod_consts.const_tuple_str_plain_self_str_plain_memo_tuple, NULL, 2, 0, 0);
code_objects_6f2c29d7905e833936178075752494c3 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___eq__, mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_4be314fe019607d663875ba973dfbacd = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab, mod_consts.const_tuple_b162ea99466e4e45abf2d2c92edd7400_tuple, NULL, 3, 0, 0);
code_objects_0e84fd8a3cec6a6a4c1764603557205d = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_algorithm, mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ce20d888355f84bf8cf6a3fff0b6ad58 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_algorithm, mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_336d18f17bf206a0b4d9ff64a35fe0f5 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_curve, mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_46f2ddb105b24d3b55a997d8fd79f545 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_curve, mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6f9169aa843bcbc9fcc4661f49d78173 = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_derive_private_key, mod_consts.const_str_plain_derive_private_key, mod_consts.const_tuple_str_plain_private_value_str_plain_curve_str_plain_backend_tuple, NULL, 3, 0, 0);
code_objects_bac5e46bbea88d76d84f7b96aa253acf = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deterministic_signing, mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4670eefaa3cb0defe135f6a637b12e7d = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_exchange, mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_peer_public_key_tuple, NULL, 3, 0, 0);
code_objects_67d2cd64f5c14660417eec3bd16f0f67 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_from_encoded_point, mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625, mod_consts.const_tuple_str_plain_cls_str_plain_curve_str_plain_data_tuple, NULL, 3, 0, 0);
code_objects_cf3e49a6ef5786adafc966c6ae69e41f = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_curve_for_oid, mod_consts.const_str_plain_get_curve_for_oid, mod_consts.const_tuple_str_plain_oid_tuple, NULL, 1, 0, 0);
code_objects_fb0ff91c97309a6cbfd6fa1335a6deb6 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_group_order, mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_97285b6675c9ac5207e01bf37fb5dbce = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_size, mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fad3894ec28ab954b36ab3ddaf5afbc4 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_size, mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fca9faec37c3276c5dc4db61b4e6939f = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_key_size, mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c3e53a69fe479c66e1b447c11ca22360 = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_name, mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_17060bf8f69ac33012ece5a01569e961 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_private_bytes, mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357, mod_consts.const_tuple_a451b13d28d4eefb324bb992f3b1c03b_tuple, NULL, 4, 0, 0);
code_objects_09d3d4693d41a0a92b24ed0f93925d71 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_private_numbers, mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d33f830191a3f7a635af36f840e8f7a1 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_bytes, mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0, mod_consts.const_tuple_str_plain_self_str_plain_encoding_str_plain_format_tuple, NULL, 3, 0, 0);
code_objects_42a9415f123e950d3da5af6a62785218 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_key, mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8420649a58091c0fbc2d4a7bec8014af = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_public_numbers, mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e83372a51fa2c8ebb2f02c22b48fde6f = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sign, mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain_signature_algorithm_tuple, NULL, 3, 0, 0);
code_objects_06df65a7e6b2423d6389e363ba40a9cf = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_verify, mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282, mod_consts.const_tuple_500c97f9b280c02cc782ba8c687cf2b8_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__10_private_numbers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__11_private_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__12___copy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__13___deepcopy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__14_curve(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__15_key_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__16_public_numbers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__17_public_bytes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__18_verify(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__1_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__20___eq__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__21___copy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__22___deepcopy__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__2_key_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__3_group_order(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__4_algorithm(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__5_exchange(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__6_public_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__7_curve(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__8_key_size(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__9_sign(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_curve = python_pars[1];
PyObject *par_data = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point = MAKE_FUNCTION_FRAME(tstate, code_objects_67d2cd64f5c14660417eec3bd16f0f67, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_data;
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point->m_frame.f_lineno = 184;
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


exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_data);
tmp_len_arg_1 = par_data;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 0;
tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3c88421968c6b8038a7f79f32d667557;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point->m_frame.f_lineno = 187;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 187;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_data);
tmp_expression_value_1 = par_data;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_int_pos_2_int_pos_3_int_pos_4_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_0de3f4b40f0ef4eb9c079a1682e5fb6e;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point->m_frame.f_lineno = 190;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 190;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ec);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_curve);
tmp_args_element_value_3 = par_curve;
CHECK_OBJECT(par_data);
tmp_args_element_value_4 = par_data;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_from_public_bytes,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point,
    type_description_1,
    par_cls,
    par_curve,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point);

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
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
PyObject *par_deterministic_signing = python_pars[2];
PyObject *var_backend = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4be314fe019607d663875ba973dfbacd, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__ = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_backend_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__->m_frame.f_lineno = 301;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain_backend,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_backend);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_backend;
    var_backend = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_deterministic_signing);
tmp_truth_name_1 = CHECK_IF_TRUE(par_deterministic_signing);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_backend);
tmp_called_instance_1 = var_backend;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__->m_frame.f_lineno = 305;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_ecdsa_deterministic_supported);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$UnsupportedAlgorithm(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnsupportedAlgorithm);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 307;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_3bf7bea57fec2df21b0f97d5ad79301c;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$_Reasons(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Reasons);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_UNSUPPORTED_PUBLIC_KEY_ALGORITHM);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__->m_frame.f_lineno = 307;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 307;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_algorithm);
tmp_ass_attr_value_1 = par_algorithm;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__algorithm, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_deterministic_signing);
tmp_ass_attr_value_2 = par_deterministic_signing;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__deterministic_signing, tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__,
    type_description_1,
    par_self,
    par_algorithm,
    par_deterministic_signing,
    var_backend
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__ == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__);

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
CHECK_OBJECT(var_backend);
CHECK_OBJECT(var_backend);
Py_DECREF(var_backend);
var_backend = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_backend);
var_backend = NULL;
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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
CHECK_OBJECT(par_deterministic_signing);
Py_DECREF(par_deterministic_signing);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
CHECK_OBJECT(par_deterministic_signing);
Py_DECREF(par_deterministic_signing);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm = MAKE_FUNCTION_FRAME(tstate, code_objects_0e84fd8a3cec6a6a4c1764603557205d, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__algorithm);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm);

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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing = MAKE_FUNCTION_FRAME(tstate, code_objects_bac5e46bbea88d76d84f7b96aa253acf, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__deterministic_signing);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing);

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


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_private_value = python_pars[0];
PyObject *par_curve = python_pars[1];
PyObject *par_backend = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key = MAKE_FUNCTION_FRAME(tstate, code_objects_6f9169aa843bcbc9fcc4661f49d78173, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_private_value);
tmp_isinstance_inst_1 = par_private_value;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_11e20910d4cc9a6eaaf2f0fe5c7be75a;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key->m_frame.f_lineno = 337;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 337;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_private_value);
tmp_cmp_expr_left_1 = par_private_value;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_542729c625481529de7c47bb8d546552;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key->m_frame.f_lineno = 340;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 340;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ec);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_private_value);
tmp_args_element_value_1 = par_private_value;
CHECK_OBJECT(par_curve);
tmp_args_element_value_2 = par_curve;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key->m_frame.f_lineno = 342;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_derive_private_key,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key,
    type_description_1,
    par_private_value,
    par_curve,
    par_backend
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_private_value);
Py_DECREF(par_private_value);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_private_value);
Py_DECREF(par_private_value);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);
CHECK_OBJECT(par_backend);
Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_oid = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid = MAKE_FUNCTION_FRAME(tstate, code_objects_cf3e49a6ef5786adafc966c6ae69e41f, module_cryptography$hazmat$primitives$asymmetric$ec, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid->m_type_description == NULL);
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid = cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$_OID_TO_CURVE(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__OID_TO_CURVE);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_oid);
tmp_subscript_value_1 = par_oid;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "o";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_KeyError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3dc40e53dd4b24847b544b6f257eb244;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid->m_frame.f_lineno = 366;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_LookupError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 366;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 363;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid->m_frame)) {
        frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid,
    type_description_1,
    par_oid
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid == cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid);
    cache_frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_oid);
Py_DECREF(par_oid);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_oid);
Py_DECREF(par_oid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__10_private_numbers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_private_numbers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c34e531c2321a614499af11b4e95004,
#endif
        code_objects_09d3d4693d41a0a92b24ed0f93925d71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_e8a476e682a05164134346f648a89f24,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__11_private_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_private_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cd09c5bf156afcfb9b1c8a9ef75f7357,
#endif
        code_objects_17060bf8f69ac33012ece5a01569e961,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__12___copy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___copy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1ccf53067c93406646b552524ab96e25,
#endif
        code_objects_67d109945fa2cc51158a404709b5d52f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__13___deepcopy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___deepcopy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f588d99892c3bd5beb9f9d96500b7c3,
#endif
        code_objects_08008871ca5f96ed827b98867c5d0c42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__14_curve(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_curve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a0fc6cf075cfa0e850e67d23f1a8341a,
#endif
        code_objects_46f2ddb105b24d3b55a997d8fd79f545,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__15_key_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_key_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ab849a4a25015df4f4e3ca5e993669d,
#endif
        code_objects_fca9faec37c3276c5dc4db61b4e6939f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__16_public_numbers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_numbers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b740ba666f84510ce4f9bb87e6e4bfe6,
#endif
        code_objects_8420649a58091c0fbc2d4a7bec8014af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_6c6903ebbde096b3c24dda5204199c5c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__17_public_bytes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_bytes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d89f0251aa11175ca09207d7e7fca0e0,
#endif
        code_objects_d33f830191a3f7a635af36f840e8f7a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_6aab55c26a1ed998ca3af322fce98750,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__18_verify(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_verify,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ebdddf4957d04c73bfc693bb62c1c282,
#endif
        code_objects_06df65a7e6b2423d6389e363ba40a9cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_b65598126c9dc80c52681ec668ff8678,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point,
        mod_consts.const_str_plain_from_encoded_point,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_35fee4aade0496aafc615216b4c52625,
#endif
        code_objects_67d2cd64f5c14660417eec3bd16f0f67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__1_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4406b8e90239f9f2eb32b15a2097e57b,
#endif
        code_objects_c3e53a69fe479c66e1b447c11ca22360,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_b128a0c0c2355b33397068f00626e7b7,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__20___eq__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___eq__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e7a52e5a74d28ed5791917727be41eaf,
#endif
        code_objects_6f2c29d7905e833936178075752494c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_a0bfeac94e21ff744538259cfd62359c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__21___copy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___copy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9602f355538c8fc0a0981516eee71729,
#endif
        code_objects_bd540492370597920f395420b0867df3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_cc3df6912c981aa061591898fe7aea76,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__22___deepcopy__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___deepcopy__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d38eea9c95b79f50f433cdbe496a0b20,
#endif
        code_objects_e874156c245daa530f949d9222b9be8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_e1722681f6bc2735f23ae0e518f47436,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_465331b0e3d9a0109c5a75eddffe62ab,
#endif
        code_objects_4be314fe019607d663875ba973dfbacd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm,
        mod_consts.const_str_plain_algorithm,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_add37f53f67de8513afc4618ef3c10b3,
#endif
        code_objects_0e84fd8a3cec6a6a4c1764603557205d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing,
        mod_consts.const_str_plain_deterministic_signing,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ca6ffb90370171c0f37ebf770f675513,
#endif
        code_objects_bac5e46bbea88d76d84f7b96aa253acf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key,
        mod_consts.const_str_plain_derive_private_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6f9169aa843bcbc9fcc4661f49d78173,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid,
        mod_consts.const_str_plain_get_curve_for_oid,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cf3e49a6ef5786adafc966c6ae69e41f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__2_key_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_key_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65de0cd613cc062a354bda533ccef4dd,
#endif
        code_objects_97285b6675c9ac5207e01bf37fb5dbce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__3_group_order(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_group_order,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7ee5b90355c6a94460ccb75bcee5d98a,
#endif
        code_objects_fb0ff91c97309a6cbfd6fa1335a6deb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_26da7eb0d0684f1314e272a477b18c3a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__4_algorithm(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_algorithm,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2d122639fdcc2f5110407d997490a42d,
#endif
        code_objects_ce20d888355f84bf8cf6a3fff0b6ad58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_cf3b69844ed754ef316e3abcad2ca920,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__5_exchange(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_exchange,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_401bc1698fe3f6bc05049f741b6991ce,
#endif
        code_objects_4670eefaa3cb0defe135f6a637b12e7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_98846b9e80cf66f26d4cbc1575cdb28d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__6_public_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_public_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1505a5dafe10728b5cbd5288744e1f4d,
#endif
        code_objects_42a9415f123e950d3da5af6a62785218,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_aa7df5450a8b1f5ceb98e656c51b2d2b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__7_curve(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_curve,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bcc8686d294f74fb8fb46da9c52d5a6f,
#endif
        code_objects_336d18f17bf206a0b4d9ff64a35fe0f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_484588cccf7a1a4effedf3c6dea34f92,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__8_key_size(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_key_size,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e49766636c1afdf5fcb3f8965746e2a7,
#endif
        code_objects_fad3894ec28ab954b36ab3ddaf5afbc4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_9c1aeb836a70ed95b2a8397fb70e4006,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__9_sign(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_sign,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67c18d580eaa25ac26cd81bd7a949e99,
#endif
        code_objects_e83372a51fa2c8ebb2f02c22b48fde6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_digest_51855bc3c34aba0a0813c30e95cf4bb3,
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

static function_impl_code const function_table_cryptography$hazmat$primitives$asymmetric$ec[] = {
impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point,
impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__,
impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm,
impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing,
impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key,
impl_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$primitives$asymmetric$ec);
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
        module_cryptography$hazmat$primitives$asymmetric$ec,
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
        function_table_cryptography$hazmat$primitives$asymmetric$ec,
        sizeof(function_table_cryptography$hazmat$primitives$asymmetric$ec) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.primitives.asymmetric.ec";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$primitives$asymmetric$ec(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$primitives$asymmetric$ec");

    // Store the module for future use.
    module_cryptography$hazmat$primitives$asymmetric$ec = module;

    moduledict_cryptography$hazmat$primitives$asymmetric$ec = MODULE_DICT(module_cryptography$hazmat$primitives$asymmetric$ec);

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
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$ec: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$primitives$asymmetric$ec: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$primitives$asymmetric$ec: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.ec" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$primitives$asymmetric$ec\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$ec,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$primitives$asymmetric$ec,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$ec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$primitives$asymmetric$ec);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$primitives$asymmetric$ec);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *outline_12_var___class__ = NULL;
PyObject *outline_13_var___class__ = NULL;
PyObject *outline_14_var___class__ = NULL;
PyObject *outline_15_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_12__bases = NULL;
PyObject *tmp_class_container$class_creation_12__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_12__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_12__metaclass = NULL;
PyObject *tmp_class_container$class_creation_12__prepared = NULL;
PyObject *tmp_class_container$class_creation_13__bases = NULL;
PyObject *tmp_class_container$class_creation_13__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_13__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_13__metaclass = NULL;
PyObject *tmp_class_container$class_creation_13__prepared = NULL;
PyObject *tmp_class_container$class_creation_14__bases = NULL;
PyObject *tmp_class_container$class_creation_14__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_14__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_14__metaclass = NULL;
PyObject *tmp_class_container$class_creation_14__prepared = NULL;
PyObject *tmp_class_container$class_creation_15__bases = NULL;
PyObject *tmp_class_container$class_creation_15__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_15__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_15__metaclass = NULL;
PyObject *tmp_class_container$class_creation_15__prepared = NULL;
PyObject *tmp_class_container$class_creation_16__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_16__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
int tmp_res;
PyObject *tmp_dictdel_dict;
PyObject *tmp_dictdel_key;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14;
NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15;
NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295 = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16;
NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
PyObject *locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec = MAKE_MODULE_FRAME(code_objects_8730e0d98c2ac5f7434e6819c76aa101, module_cryptography$hazmat$primitives$asymmetric$ec);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 7;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_cryptography;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_utils, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_82e5b7f1075745a8638e06059354d03c;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 11;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain_UnsupportedAlgorithm,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_UnsupportedAlgorithm);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_UnsupportedAlgorithm, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain__Reasons,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__Reasons);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__Reasons, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_1ad2cf3b84b8bacd26104238bca76891;
tmp_globals_arg_value_4 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ObjectIdentifier_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 12;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain_ObjectIdentifier,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ObjectIdentifier);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectIdentifier, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
tmp_globals_arg_value_5 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_openssl_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 13;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain_openssl,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_openssl);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
tmp_globals_arg_value_6 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__serialization_str_plain_hashes_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 14;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain__serialization,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__serialization);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__serialization, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain_hashes,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_hashes);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
tmp_globals_arg_value_7 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 15;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$ec,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils, tmp_assign_source_18);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_EllipticCurveOID;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_18;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2 = MAKE_CLASS_FRAME(tstate, code_objects_ba4ff7d15bdfc7e4170e1160a6feca37, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 19;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_5d9f5c68057f6bda68db87834d8c8486_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_SECP192R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 20;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_5f8986471195a2c6620c662ae960224d_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_SECP224R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 21;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_71604db97cd557151e77dc7b6e330582_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_SECP256K1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 22;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_6dce02eea2e5fbd78aa8484eb41bc7c6_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_SECP256R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 23;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_a39d4e9786867a0ed9cd6eb4b7286db4_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_SECP384R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 24;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_abebb11f759e62172f50a69356b78032_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_SECP521R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 25;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_digest_c5663714080ad9d26f42b5707c55d604_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_BRAINPOOLP256R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
tmp_called_value_8 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 26;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_digest_05c2a42c3e111fb4b7cbbcbc29aaf4bc_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_BRAINPOOLP384R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$ObjectIdentifier(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ObjectIdentifier);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame.f_lineno = 27;
tmp_dictset_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_digest_814981df5369fce8ded82ee3dce783a1_tuple);

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain_BRAINPOOLP512R1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_22;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_8 = mod_consts.const_str_plain_EllipticCurveOID;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_21 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_21);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__1_EllipticCurveOID_18 = NULL;
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
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveOID, tmp_assign_source_21);
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
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;

    goto try_except_handler_6;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
tmp_assign_source_23 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_23, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
bool tmp_condition_result_1;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_key_value_2;
tmp_key_value_1 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_2, tmp_key_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_key_value_2 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_24 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_3, tmp_key_value_2);
if (tmp_assign_source_24 == NULL) {
    tmp_assign_source_24 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_24);
}
assert(!(tmp_assign_source_24 == NULL));
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_24 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_24);
condexpr_end_1:;
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_2;
PyObject *tmp_key_value_3;
PyObject *tmp_dict_arg_value_4;
tmp_key_value_3 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dict_arg_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_4, tmp_key_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_2__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
tmp_args_value_1 = mod_consts.const_tuple_str_plain_EllipticCurve_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 30;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
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
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_1;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_1 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
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


exception_lineno = 30;

    goto try_except_handler_6;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 30;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 30;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
}
branch_end_2:;
{
PyObject *tmp_assign_source_27;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_EllipticCurve;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_30;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_8;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3 = MAKE_CLASS_FRAME(tstate, code_objects_c17e5151bb755333afa9dcdf66fdb5e9, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_1;
tmp_called_value_11 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_instance_1 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_abc);

if (tmp_called_instance_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__1_name(tstate, tmp_annotations_1);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3->m_frame.f_lineno = 32;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3->m_frame.f_lineno = 31;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_2;
tmp_called_value_12 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_instance_2 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_abc);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_12);

exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__2_key_size(tstate, tmp_annotations_2);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3->m_frame.f_lineno = 39;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_12);

exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3->m_frame.f_lineno = 38;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_key_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_3;
tmp_called_value_13 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_instance_3 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_abc);

if (tmp_called_instance_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_3 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_6 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__3_group_order(tstate, tmp_annotations_3);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3->m_frame.f_lineno = 46;
tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 46;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3->m_frame.f_lineno = 45;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain_group_order, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_8;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_10;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = mod_consts.const_str_plain_EllipticCurve;
tmp_bases_value_2 = const_tuple_empty;
tmp_dict_arg_value_5 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_10, tmp_bases_value_2, tmp_dict_arg_value_5);
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto try_except_handler_8;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_27 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__2_EllipticCurve_30 = NULL;
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
exception_lineno = 30;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurve, tmp_assign_source_27);
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
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_7;
tmp_dict_key_2 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto try_except_handler_9;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_9;
}
tmp_assign_source_29 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
bool tmp_condition_result_5;
PyObject *tmp_key_value_4;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_dict_arg_value_7;
PyObject *tmp_key_value_5;
tmp_key_value_4 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_6, tmp_key_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_7 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_key_value_5 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_30 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_7, tmp_key_value_5);
if (tmp_assign_source_30 == NULL) {
    tmp_assign_source_30 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_30);
}
assert(!(tmp_assign_source_30 == NULL));
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_30 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_30);
condexpr_end_2:;
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_30;
}
{
bool tmp_condition_result_6;
PyObject *tmp_key_value_6;
PyObject *tmp_dict_arg_value_8;
tmp_key_value_6 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dict_arg_value_8 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_8, tmp_key_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_3__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_9;
}
branch_no_4:;
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_2;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_9;
}
tmp_args_value_2 = mod_consts.const_tuple_str_plain_EllipticCurveSignatureAlgorithm_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 53;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_31;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_9;
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
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_11, tmp_default_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
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


exception_lineno = 53;

    goto try_except_handler_9;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 53;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 53;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_32;
}
branch_end_5:;
{
PyObject *tmp_assign_source_33;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_53;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_11;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4 = MAKE_CLASS_FRAME(tstate, code_objects_35bed36e507b9f24300a50b3bb5e567f, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_4;
tmp_called_value_15 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_called_instance_4 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53, mod_consts.const_str_plain_abc);

if (tmp_called_instance_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_4 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_instance_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2);

tmp_args_element_value_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__4_algorithm(tstate, tmp_annotations_4);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4->m_frame.f_lineno = 55;
tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4->m_frame.f_lineno = 54;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53, mod_consts.const_str_plain_algorithm, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4);


goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_4);


// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_11;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_3;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_3;
PyObject *tmp_dict_arg_value_9;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_3 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm;
tmp_bases_value_3 = const_tuple_empty;
tmp_dict_arg_value_9 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_3, tmp_dict_arg_value_9);
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_metaclass_value_3, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto try_except_handler_11;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_33 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_33);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__3_EllipticCurveSignatureAlgorithm_53 = NULL;
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
exception_lineno = 53;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm, tmp_assign_source_33);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_35;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_13;
tmp_dict_key_3 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_13 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_assign_source_35 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
bool tmp_condition_result_9;
PyObject *tmp_key_value_7;
PyObject *tmp_dict_arg_value_10;
PyObject *tmp_dict_arg_value_11;
PyObject *tmp_key_value_8;
tmp_key_value_7 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_dict_arg_value_10 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_10, tmp_key_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_dict_arg_value_11 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_key_value_8 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_36 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_11, tmp_key_value_8);
if (tmp_assign_source_36 == NULL) {
    tmp_assign_source_36 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_36);
}
assert(!(tmp_assign_source_36 == NULL));
goto condexpr_end_3;
condexpr_false_3:;
tmp_assign_source_36 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_36);
condexpr_end_3:;
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_10;
PyObject *tmp_key_value_9;
PyObject *tmp_dict_arg_value_12;
tmp_key_value_9 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_dict_arg_value_12 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_12, tmp_key_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_4__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
branch_no_7:;
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_3;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_args_value_3 = mod_consts.const_tuple_str_plain_EllipticCurvePrivateKey_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 64;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_13, tmp_default_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_3;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_3 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_3);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
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


exception_lineno = 64;

    goto try_except_handler_12;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 64;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_9:;
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_38;
}
branch_end_8:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_EllipticCurvePrivateKey;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_14;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5 = MAKE_CLASS_FRAME(tstate, code_objects_ab7805dec7bb839f04879c5404d2aa30, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5) == 2);

// Framed code:
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_5;
tmp_called_instance_5 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_a40f9fc415f6a24574247feb779430fa);

tmp_args_element_value_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__5_exchange(tstate, tmp_annotations_5);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 65;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_exchange, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_6;
tmp_called_instance_6 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7);

tmp_args_element_value_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__6_public_key(tstate, tmp_annotations_6);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 74;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_public_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_7;
tmp_called_value_17 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_called_instance_7 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_7 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_17);

exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb);

tmp_args_element_value_12 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__7_curve(tstate, tmp_annotations_7);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 81;
tmp_args_element_value_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 80;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_curve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_8;
tmp_called_value_18 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_property);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_called_instance_8 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_8 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_18);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_14 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__8_key_size(tstate, tmp_annotations_8);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 88;
tmp_args_element_value_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_18);

exception_lineno = 88;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 87;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_key_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_9;
tmp_called_instance_9 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_9 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_0b11ec7f2f63ea4a31536acb7292c749);

tmp_args_element_value_15 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__9_sign(tstate, tmp_annotations_9);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 94;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_sign, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_instance_10;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_10;
tmp_called_instance_10 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_10 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_bd7dedc46f308be89a3ce2ab8dcb885a);

tmp_args_element_value_16 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__10_private_numbers(tstate, tmp_annotations_10);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 104;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_private_numbers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_instance_11;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_11;
tmp_called_instance_11 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_11 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_efc8da0e94d28ac00c67fdffcef957e4);

tmp_args_element_value_17 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__11_private_bytes(tstate, tmp_annotations_11);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 110;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_instance_11);
Py_DECREF(tmp_called_instance_11);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_private_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_instance_12;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_12;
tmp_called_instance_12 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_12 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_dabfc928496387ddcb7c08aa0a380883);

tmp_args_element_value_18 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__12___copy__(tstate, tmp_annotations_12);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 121;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_12, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_instance_12);
Py_DECREF(tmp_called_instance_12);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain___copy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_instance_13;
PyObject *tmp_args_element_value_19;
PyObject *tmp_annotations_13;
tmp_called_instance_13 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain_abc);

if (tmp_called_instance_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_13 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_instance_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_5c81730c557cb7b226aa7b16420e5b19);

tmp_args_element_value_19 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__13___deepcopy__(tstate, tmp_annotations_13);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame.f_lineno = 127;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_instance_13);
Py_DECREF(tmp_called_instance_13);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain___deepcopy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5);


goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_5);


// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_14;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_14;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_13;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_14 = mod_consts.const_str_plain_EllipticCurvePrivateKey;
tmp_bases_value_4 = const_tuple_empty;
tmp_dict_arg_value_13 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_14, tmp_bases_value_4, tmp_dict_arg_value_13);
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_14;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_39 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__4_EllipticCurvePrivateKey_64 = NULL;
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
exception_lineno = 64;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePrivateKey, tmp_assign_source_39);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurvePrivateKey(tstate);
if (unlikely(tmp_assign_source_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurvePrivateKey);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePrivateKeyWithSerialization, tmp_assign_source_41);
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_19;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
tmp_expression_value_19 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurvePrivateKey(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurvePrivateKey);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_register);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_expression_value_21 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_19);

exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_ec);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_ECPrivateKey);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 135;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 135;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_22;
tmp_dict_key_4 = mod_consts.const_str_plain_metaclass;
tmp_expression_value_22 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto try_except_handler_15;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_ABCMeta);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
tmp_assign_source_42 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
bool tmp_condition_result_13;
PyObject *tmp_key_value_10;
PyObject *tmp_dict_arg_value_14;
PyObject *tmp_dict_arg_value_15;
PyObject *tmp_key_value_11;
tmp_key_value_10 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_dict_arg_value_14 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_14, tmp_key_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_13 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_dict_arg_value_15 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_key_value_11 = mod_consts.const_str_plain_metaclass;
tmp_assign_source_43 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_15, tmp_key_value_11);
if (tmp_assign_source_43 == NULL) {
    tmp_assign_source_43 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_43);
}
assert(!(tmp_assign_source_43 == NULL));
goto condexpr_end_4;
condexpr_false_4:;
tmp_assign_source_43 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_assign_source_43);
condexpr_end_4:;
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_43;
}
{
bool tmp_condition_result_14;
PyObject *tmp_key_value_12;
PyObject *tmp_dict_arg_value_16;
tmp_key_value_12 = mod_consts.const_str_plain_metaclass;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_dict_arg_value_16 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_16, tmp_key_value_12);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_dictdel_dict = tmp_class_container$class_creation_5__class_decl_dict;
tmp_dictdel_key = mod_consts.const_str_plain_metaclass;
tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
branch_no_10:;
{
bool tmp_condition_result_15;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
tmp_condition_result_15 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_4;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
tmp_args_value_4 = mod_consts.const_tuple_str_plain_EllipticCurvePublicKey_tuple_empty_tuple;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 138;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_44;
}
{
bool tmp_condition_result_16;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_16 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_15;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 138;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 138;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_45;
}
branch_end_11:;
{
PyObject *tmp_assign_source_46;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_EllipticCurvePublicKey;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_138;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_17;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6 = MAKE_CLASS_FRAME(tstate, code_objects_7423e46dc130fd30c334618ad8cbba6b, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6) == 2);

// Framed code:
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_instance_14;
PyObject *tmp_args_element_value_22;
PyObject *tmp_annotations_14;
tmp_called_value_21 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_property);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_called_instance_14 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_14 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_21);

exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_96b5d760612f3fdf8e34321dc75fc0bb);

tmp_args_element_value_22 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__14_curve(tstate, tmp_annotations_14);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 140;
tmp_args_element_value_21 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_14, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_instance_14);
Py_DECREF(tmp_called_instance_14);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 140;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 139;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_curve, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_called_instance_15;
PyObject *tmp_args_element_value_24;
PyObject *tmp_annotations_15;
tmp_called_value_22 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_property);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_called_instance_15 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_15 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_22);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_24 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__15_key_size(tstate, tmp_annotations_15);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 147;
tmp_args_element_value_23 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_15, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_instance_15);
Py_DECREF(tmp_called_instance_15);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_22);

exception_lineno = 147;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 146;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_key_size, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_instance_16;
PyObject *tmp_args_element_value_25;
PyObject *tmp_annotations_16;
tmp_called_instance_16 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_16 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_201950ee0bf5e1fbc2c09aeb0f93628a);

tmp_args_element_value_25 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__16_public_numbers(tstate, tmp_annotations_16);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 153;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_16, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_instance_16);
Py_DECREF(tmp_called_instance_16);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_public_numbers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_instance_17;
PyObject *tmp_args_element_value_26;
PyObject *tmp_annotations_17;
tmp_called_instance_17 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_17 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_c44861dc21ab09a200a6d15af811a095);

tmp_args_element_value_26 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__17_public_bytes(tstate, tmp_annotations_17);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 159;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_17, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_instance_17);
Py_DECREF(tmp_called_instance_17);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_public_bytes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_instance_18;
PyObject *tmp_args_element_value_27;
PyObject *tmp_annotations_18;
tmp_called_instance_18 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_18 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_7664e149ab3649f244ee7b5a4ade6851);

tmp_args_element_value_27 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__18_verify(tstate, tmp_annotations_18);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 169;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_18, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_instance_18);
Py_DECREF(tmp_called_instance_18);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_verify, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_28;
PyObject *tmp_annotations_19;
tmp_called_value_23 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, const_str_plain_classmethod);

if (tmp_called_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_23 = (PyObject *)&PyClassMethod_Type;
        Py_INCREF(tmp_called_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_4f4c21241b15b2d31a3de6c61c6e024a);

tmp_args_element_value_28 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__19_from_encoded_point(tstate, tmp_annotations_19);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 180;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_from_encoded_point, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_instance_19;
PyObject *tmp_args_element_value_29;
PyObject *tmp_annotations_20;
tmp_called_instance_19 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_19 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_48da6b0499a992d8a0861b3c7131d274);

tmp_args_element_value_29 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__20___eq__(tstate, tmp_annotations_20);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 194;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_19, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_instance_19);
Py_DECREF(tmp_called_instance_19);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain___eq__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_instance_20;
PyObject *tmp_args_element_value_30;
PyObject *tmp_annotations_21;
tmp_called_instance_20 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_20 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_150c5095ae79d66fca40afd8102dc1a7);

tmp_args_element_value_30 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__21___copy__(tstate, tmp_annotations_21);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 200;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_20, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_30);
CHECK_OBJECT(tmp_called_instance_20);
Py_DECREF(tmp_called_instance_20);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain___copy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_instance_21;
PyObject *tmp_args_element_value_31;
PyObject *tmp_annotations_22;
tmp_called_instance_21 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain_abc);

if (tmp_called_instance_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_21 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$abc(tstate);
if (unlikely(tmp_called_instance_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_called_instance_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_called_instance_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_9205c735e08e10a41d2f3e3386899c6e);

tmp_args_element_value_31 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__22___deepcopy__(tstate, tmp_annotations_22);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame.f_lineno = 206;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_21, mod_consts.const_str_plain_abstractmethod, tmp_args_element_value_31);
CHECK_OBJECT(tmp_called_instance_21);
Py_DECREF(tmp_called_instance_21);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain___deepcopy__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6);


goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_6);


// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_17;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_17;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_5;
PyObject *tmp_name_value_16;
PyObject *tmp_bases_value_5;
PyObject *tmp_dict_arg_value_17;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_metaclass_value_5 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_16 = mod_consts.const_str_plain_EllipticCurvePublicKey;
tmp_bases_value_5 = const_tuple_empty;
tmp_dict_arg_value_17 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_16, tmp_bases_value_5, tmp_dict_arg_value_17);
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_metaclass_value_5, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_17;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_46 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_46);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__5_EllipticCurvePublicKey_138 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 138;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePublicKey, tmp_assign_source_46);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurvePublicKey(tstate);
if (unlikely(tmp_assign_source_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurvePublicKey);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePublicKeyWithSerialization, tmp_assign_source_48);
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_32;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
tmp_expression_value_28 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurvePublicKey(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurvePublicKey);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;

    goto frame_exception_exit_1;
}
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_register);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;

    goto frame_exception_exit_1;
}
tmp_expression_value_30 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_24);

exception_lineno = 214;

    goto frame_exception_exit_1;
}
tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_ec);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 214;

    goto frame_exception_exit_1;
}
tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_ECPublicKey);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_args_element_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_24);

exception_lineno = 214;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 214;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_32);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
tmp_expression_value_32 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;

    goto frame_exception_exit_1;
}
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_ec);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto frame_exception_exit_1;
}
tmp_assign_source_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_EllipticCurvePrivateNumbers);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePrivateNumbers, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
tmp_expression_value_34 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;

    goto frame_exception_exit_1;
}
tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_ec);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;

    goto frame_exception_exit_1;
}
tmp_assign_source_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_EllipticCurvePublicNumbers);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_EllipticCurvePublicNumbers, tmp_assign_source_50);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_51;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;

    goto try_except_handler_18;
}
tmp_assign_source_51 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_52 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_1;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
tmp_condition_result_17 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_35 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_1, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_54;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_37;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_SECP521R1;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 220;
tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_55;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_38 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_39;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_17, tmp_default_value_5);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_40;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_40 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_18;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 220;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 220;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_56;
}
branch_end_13:;
{
PyObject *tmp_assign_source_57;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_SECP521R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_220;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_20;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7 = MAKE_CLASS_FRAME(tstate, code_objects_8b7d93f5fa97583b5d451786fa4c2ba8, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_secp521r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_dictset_value = mod_consts.const_int_pos_521;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_dictset_value = mod_consts.const_d658af7fedc28d8a0b5fd591bb053f0a;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_7;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7);


goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_7);


// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_20;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_20;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_20;
}
branch_no_15:;
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_7;
PyObject *tmp_name_value_18;
PyObject *tmp_bases_value_7;
PyObject *tmp_dict_arg_value_18;
PyObject *tmp_class_decl_dict_value_6;
PyObject *tmp_metaclass_args_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_metaclass_value_7 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_18 = mod_consts.const_str_plain_SECP521R1;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_6__bases;
tmp_dict_arg_value_18 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_decl_dict_value_6 = tmp_class_container$class_creation_6__class_decl_dict;
tmp_metaclass_args_6 = MAKE_TUPLE3(tstate, tmp_name_value_18, tmp_bases_value_7, tmp_dict_arg_value_18);
tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_metaclass_value_7, tmp_metaclass_args_6, tmp_class_decl_dict_value_6);
CHECK_OBJECT(tmp_metaclass_args_6);
Py_DECREF(tmp_metaclass_args_6);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_20;
}
{
    PyObject *old = outline_5_var___class__;
    outline_5_var___class__ = tmp_assign_source_58;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_57 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_57);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__6_SECP521R1_220 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 220;
goto try_except_handler_18;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP521R1, tmp_assign_source_57);
}
goto try_end_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_59;
PyObject *tmp_tuple_element_8;
tmp_tuple_element_8 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;

    goto try_except_handler_21;
}
tmp_assign_source_59 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_8);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_60 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_2;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
tmp_condition_result_21 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_41 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_2, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_62;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_43;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_43 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_SECP384R1;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 226;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_63;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_44 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_45;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_19, tmp_default_value_6);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_46;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_46 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_21;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 226;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 226;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_64;
}
branch_end_16:;
{
PyObject *tmp_assign_source_65;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain_SECP384R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_226;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_23;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8 = MAKE_CLASS_FRAME(tstate, code_objects_fa79cfbb5115f93ecc25637c6c7d7c12, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_secp384r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_384;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_bacc44f3363aca579b87ac41be2c3c07;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_8;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8);


goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_8);


// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_23;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_23;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_23;
}
branch_no_18:;
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_9;
PyObject *tmp_name_value_20;
PyObject *tmp_bases_value_9;
PyObject *tmp_dict_arg_value_19;
PyObject *tmp_class_decl_dict_value_7;
PyObject *tmp_metaclass_args_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_metaclass_value_9 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_20 = mod_consts.const_str_plain_SECP384R1;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_7__bases;
tmp_dict_arg_value_19 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_decl_dict_value_7 = tmp_class_container$class_creation_7__class_decl_dict;
tmp_metaclass_args_7 = MAKE_TUPLE3(tstate, tmp_name_value_20, tmp_bases_value_9, tmp_dict_arg_value_19);
tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_metaclass_value_9, tmp_metaclass_args_7, tmp_class_decl_dict_value_7);
CHECK_OBJECT(tmp_metaclass_args_7);
Py_DECREF(tmp_metaclass_args_7);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;

    goto try_except_handler_23;
}
{
    PyObject *old = outline_6_var___class__;
    outline_6_var___class__ = tmp_assign_source_66;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_65 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_65);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__7_SECP384R1_226 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 226;
goto try_except_handler_21;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP384R1, tmp_assign_source_65);
}
goto try_end_9;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_67;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto try_except_handler_24;
}
tmp_assign_source_67 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_68 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_3;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
tmp_condition_result_25 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_47 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_3, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_70;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_49;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_49 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_SECP256R1;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 232;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_71;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_50 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_51;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_51, tmp_name_value_21, tmp_default_value_7);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_52;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_52 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_24;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 232;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 232;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_72;
tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_72;
}
branch_end_19:;
{
PyObject *tmp_assign_source_73;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_plain_SECP256R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_232;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_26;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9 = MAKE_CLASS_FRAME(tstate, code_objects_6ac73134824d071bb9d31eeb3a2ffc79, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_secp256r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_03a30a8fed8c07a8516b1a9af4d4ff4a;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_9;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9);


goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_9);


// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_26;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_26;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_26;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_26;
}
branch_no_21:;
{
PyObject *tmp_assign_source_74;
PyObject *tmp_metaclass_value_11;
PyObject *tmp_name_value_22;
PyObject *tmp_bases_value_11;
PyObject *tmp_dict_arg_value_20;
PyObject *tmp_class_decl_dict_value_8;
PyObject *tmp_metaclass_args_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_metaclass_value_11 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_22 = mod_consts.const_str_plain_SECP256R1;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_8__bases;
tmp_dict_arg_value_20 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_decl_dict_value_8 = tmp_class_container$class_creation_8__class_decl_dict;
tmp_metaclass_args_8 = MAKE_TUPLE3(tstate, tmp_name_value_22, tmp_bases_value_11, tmp_dict_arg_value_20);
tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_metaclass_value_11, tmp_metaclass_args_8, tmp_class_decl_dict_value_8);
CHECK_OBJECT(tmp_metaclass_args_8);
Py_DECREF(tmp_metaclass_args_8);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;

    goto try_except_handler_26;
}
{
    PyObject *old = outline_7_var___class__;
    outline_7_var___class__ = tmp_assign_source_74;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_73 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_73);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__8_SECP256R1_232 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 232;
goto try_except_handler_24;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256R1, tmp_assign_source_73);
}
goto try_end_10;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_75;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;

    goto try_except_handler_27;
}
tmp_assign_source_75 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_76 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_4;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
tmp_condition_result_29 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_53 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_4, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_78;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_55;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_SECP256K1;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 240;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_79;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_56 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_57;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_57, tmp_name_value_23, tmp_default_value_8);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_58;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_58 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_27;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 240;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 240;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_80;
}
branch_end_22:;
{
PyObject *tmp_assign_source_81;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_SECP256K1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_240;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_29;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10 = MAKE_CLASS_FRAME(tstate, code_objects_05e88d1df21a505041ad49c8f3a1d378, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_secp256k1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_15bb2a5664347e6b1eecad30a0f6fc19;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_10;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10);


goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_10);


// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_29;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_29;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_29;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_29;
}
branch_no_24:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_metaclass_value_13;
PyObject *tmp_name_value_24;
PyObject *tmp_bases_value_13;
PyObject *tmp_dict_arg_value_21;
PyObject *tmp_class_decl_dict_value_9;
PyObject *tmp_metaclass_args_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_metaclass_value_13 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_24 = mod_consts.const_str_plain_SECP256K1;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_9__bases;
tmp_dict_arg_value_21 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_decl_dict_value_9 = tmp_class_container$class_creation_9__class_decl_dict;
tmp_metaclass_args_9 = MAKE_TUPLE3(tstate, tmp_name_value_24, tmp_bases_value_13, tmp_dict_arg_value_21);
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_metaclass_value_13, tmp_metaclass_args_9, tmp_class_decl_dict_value_9);
CHECK_OBJECT(tmp_metaclass_args_9);
Py_DECREF(tmp_metaclass_args_9);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;

    goto try_except_handler_29;
}
{
    PyObject *old = outline_8_var___class__;
    outline_8_var___class__ = tmp_assign_source_82;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_81 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_81);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__9_SECP256K1_240 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 240;
goto try_except_handler_27;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP256K1, tmp_assign_source_81);
}
goto try_end_11;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_tuple_element_17;
tmp_tuple_element_17 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 248;

    goto try_except_handler_30;
}
tmp_assign_source_83 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_83, 0, tmp_tuple_element_17);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_84 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_metaclass_value_14;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_5;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
tmp_condition_result_33 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_59 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_59, tmp_subscript_value_5, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_14);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
CHECK_OBJECT(tmp_metaclass_value_14);
Py_DECREF(tmp_metaclass_value_14);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_86;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_60;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_60, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_87;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_61;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_61 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
tmp_tuple_element_18 = mod_consts.const_str_plain_SECP224R1;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 248;
tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_87;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_62 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_63;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_63, tmp_name_value_25, tmp_default_value_9);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_64;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_64 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_64 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_19);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_30;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 248;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 248;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_88;
}
branch_end_25:;
{
PyObject *tmp_assign_source_89;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_SECP224R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_248;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_32;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11 = MAKE_CLASS_FRAME(tstate, code_objects_49d2d7ca5ace7f87ef4d668365f6b809, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_secp224r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_int_pos_224;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_4f9b5cff8ed46ac1bcd198b524fc0f4e;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_11;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11);


goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_11);


// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_32;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_32;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_32;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_32;
}
branch_no_27:;
{
PyObject *tmp_assign_source_90;
PyObject *tmp_metaclass_value_15;
PyObject *tmp_name_value_26;
PyObject *tmp_bases_value_15;
PyObject *tmp_dict_arg_value_22;
PyObject *tmp_class_decl_dict_value_10;
PyObject *tmp_metaclass_args_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_metaclass_value_15 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_26 = mod_consts.const_str_plain_SECP224R1;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_10__bases;
tmp_dict_arg_value_22 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_decl_dict_value_10 = tmp_class_container$class_creation_10__class_decl_dict;
tmp_metaclass_args_10 = MAKE_TUPLE3(tstate, tmp_name_value_26, tmp_bases_value_15, tmp_dict_arg_value_22);
tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_metaclass_value_15, tmp_metaclass_args_10, tmp_class_decl_dict_value_10);
CHECK_OBJECT(tmp_metaclass_args_10);
Py_DECREF(tmp_metaclass_args_10);
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto try_except_handler_32;
}
{
    PyObject *old = outline_9_var___class__;
    outline_9_var___class__ = tmp_assign_source_90;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_89 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_89);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__10_SECP224R1_248 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 248;
goto try_except_handler_30;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP224R1, tmp_assign_source_89);
}
goto try_end_12;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_91;
PyObject *tmp_tuple_element_20;
tmp_tuple_element_20 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;

    goto try_except_handler_33;
}
tmp_assign_source_91 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_91, 0, tmp_tuple_element_20);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_92 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_93;
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_metaclass_value_16;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_6;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
tmp_condition_result_37 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_65 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_65, tmp_subscript_value_6, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_16);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
CHECK_OBJECT(tmp_metaclass_value_16);
Py_DECREF(tmp_metaclass_value_16);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_94;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_66;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_66 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_66, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_67;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_67 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
tmp_tuple_element_21 = mod_consts.const_str_plain_SECP192R1;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 254;
tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_95;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_68 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_69;
PyObject *tmp_name_value_27;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_27 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_69, tmp_name_value_27, tmp_default_value_10);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_70;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_70 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_70);
Py_DECREF(tmp_expression_value_70);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_22);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_33;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_33;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 254;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 254;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_33;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_96;
tmp_assign_source_96 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_96;
}
branch_end_28:;
{
PyObject *tmp_assign_source_97;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_plain_SECP192R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_int_pos_254;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_35;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12 = MAKE_CLASS_FRAME(tstate, code_objects_4c71143acccd29e2bc11c8e0dba766a8, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_secp192r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_dictset_value = mod_consts.const_int_pos_192;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_dictset_value = mod_consts.const_cd9f860f2c6e912de4526cdb192218b7;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_12;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12);


goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_12);


// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_35;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_35;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_35;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_35;
}
branch_no_30:;
{
PyObject *tmp_assign_source_98;
PyObject *tmp_metaclass_value_17;
PyObject *tmp_name_value_28;
PyObject *tmp_bases_value_17;
PyObject *tmp_dict_arg_value_23;
PyObject *tmp_class_decl_dict_value_11;
PyObject *tmp_metaclass_args_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_metaclass_value_17 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_28 = mod_consts.const_str_plain_SECP192R1;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_11__bases;
tmp_dict_arg_value_23 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_decl_dict_value_11 = tmp_class_container$class_creation_11__class_decl_dict;
tmp_metaclass_args_11 = MAKE_TUPLE3(tstate, tmp_name_value_28, tmp_bases_value_17, tmp_dict_arg_value_23);
tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_metaclass_value_17, tmp_metaclass_args_11, tmp_class_decl_dict_value_11);
CHECK_OBJECT(tmp_metaclass_args_11);
Py_DECREF(tmp_metaclass_args_11);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;

    goto try_except_handler_35;
}
{
    PyObject *old = outline_10_var___class__;
    outline_10_var___class__ = tmp_assign_source_98;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_97 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_97);
goto try_return_handler_35;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254 = NULL;
goto try_return_handler_34;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__11_SECP192R1_254 = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_34;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 254;
goto try_except_handler_33;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_SECP192R1, tmp_assign_source_97);
}
goto try_end_13;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}
{
PyObject *tmp_outline_return_value_12;
// Tried code:
{
PyObject *tmp_assign_source_99;
PyObject *tmp_tuple_element_23;
tmp_tuple_element_23 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;

    goto try_except_handler_36;
}
tmp_assign_source_99 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_99, 0, tmp_tuple_element_23);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_99;
}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_100 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_100;
}
{
PyObject *tmp_assign_source_101;
tmp_assign_source_101 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_101;
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_metaclass_value_18;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_7;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_71;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
tmp_condition_result_41 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_71 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_71, tmp_subscript_value_7, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_18);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_102 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
CHECK_OBJECT(tmp_metaclass_value_18);
Py_DECREF(tmp_metaclass_value_18);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_102;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_72;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_72 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_72, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_103;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_73;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_73 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
tmp_tuple_element_24 = mod_consts.const_str_plain_BrainpoolP256R1;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 260;
tmp_assign_source_103 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_103;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_74;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_74 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_75;
PyObject *tmp_name_value_29;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_75 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_29 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_75, tmp_name_value_29, tmp_default_value_11);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_76;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_76 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_76 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_76);
Py_DECREF(tmp_expression_value_76);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_25);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_36;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_36;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 260;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 260;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_36;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_104;
tmp_assign_source_104 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_104;
}
branch_end_31:;
{
PyObject *tmp_assign_source_105;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_str_plain_BrainpoolP256R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_38;
}
tmp_dictset_value = mod_consts.const_int_pos_260;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_38;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13 = MAKE_CLASS_FRAME(tstate, code_objects_7230f2fbca87ebc495d4bab736a362ed, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_brainpoolP256r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_13;
}
tmp_dictset_value = mod_consts.const_2b21a0777c2b3df21c8ea1873dd8fa1d;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_13;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13);


goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_13);


// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_38;
skip_nested_handling_12:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_38;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_38;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_38;
}
branch_no_33:;
{
PyObject *tmp_assign_source_106;
PyObject *tmp_metaclass_value_19;
PyObject *tmp_name_value_30;
PyObject *tmp_bases_value_19;
PyObject *tmp_dict_arg_value_24;
PyObject *tmp_class_decl_dict_value_12;
PyObject *tmp_metaclass_args_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_metaclass_value_19 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_30 = mod_consts.const_str_plain_BrainpoolP256R1;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_19 = tmp_class_container$class_creation_12__bases;
tmp_dict_arg_value_24 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_decl_dict_value_12 = tmp_class_container$class_creation_12__class_decl_dict;
tmp_metaclass_args_12 = MAKE_TUPLE3(tstate, tmp_name_value_30, tmp_bases_value_19, tmp_dict_arg_value_24);
tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_metaclass_value_19, tmp_metaclass_args_12, tmp_class_decl_dict_value_12);
CHECK_OBJECT(tmp_metaclass_args_12);
Py_DECREF(tmp_metaclass_args_12);
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto try_except_handler_38;
}
{
    PyObject *old = outline_11_var___class__;
    outline_11_var___class__ = tmp_assign_source_106;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_105 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_105);
goto try_return_handler_38;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_38:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260 = NULL;
goto try_return_handler_37;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__12_BrainpoolP256R1_260 = NULL;
// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto try_except_handler_37;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_37:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 260;
goto try_except_handler_36;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP256R1, tmp_assign_source_105);
}
goto try_end_14;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
Py_DECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
Py_DECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
Py_DECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
Py_DECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
tmp_outline_return_value_12 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_12);
goto outline_result_23;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_23:;
CHECK_OBJECT(tmp_outline_return_value_12);
Py_DECREF(tmp_outline_return_value_12);
}
{
PyObject *tmp_outline_return_value_13;
// Tried code:
{
PyObject *tmp_assign_source_107;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;

    goto try_except_handler_39;
}
tmp_assign_source_107 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_107, 0, tmp_tuple_element_26);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_108 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
tmp_assign_source_109 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_109;
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_metaclass_value_20;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_8;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_77;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
tmp_condition_result_45 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_77 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_77, tmp_subscript_value_8, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_20);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_20 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_110 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
CHECK_OBJECT(tmp_metaclass_value_20);
Py_DECREF(tmp_metaclass_value_20);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_110;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_78;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_78 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
tmp_condition_result_46 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_46 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_assign_source_111;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_79;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_79 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
tmp_tuple_element_27 = mod_consts.const_str_plain_BrainpoolP384R1;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 268;
tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_111;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_80 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
assert(!(tmp_res == -1));
tmp_condition_result_47 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_47 != false) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_make_exception_arg_12;
PyObject *tmp_mod_expr_left_12;
PyObject *tmp_mod_expr_right_12;
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_81;
PyObject *tmp_name_value_31;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_31 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_81, tmp_name_value_31, tmp_default_value_12);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_82;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_82 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_82 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_82);
Py_DECREF(tmp_expression_value_82);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_28);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_39;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_39;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 268;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 268;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_39;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_112;
tmp_assign_source_112 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_112;
}
branch_end_34:;
{
PyObject *tmp_assign_source_113;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_str_plain_BrainpoolP384R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_41;
}
tmp_dictset_value = mod_consts.const_int_pos_268;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_41;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14 = MAKE_CLASS_FRAME(tstate, code_objects_b4189241eb0597264c47711bfc80d003, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_brainpoolP384r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_dictset_value = mod_consts.const_int_pos_384;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "o";
    goto frame_exception_exit_14;
}
tmp_dictset_value = mod_consts.const_cdb25142c21336a59dc2ccd4632b5336;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_2 = "o";
    goto frame_exception_exit_14;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14);


goto frame_no_exception_13;
frame_exception_exit_14:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14,
    type_description_2,
    outline_12_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_14);


// Return the error.
goto nested_frame_exit_13;
frame_no_exception_13:;
goto skip_nested_handling_13;
nested_frame_exit_13:;

goto try_except_handler_41;
skip_nested_handling_13:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_41;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_41;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_13__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_41;
}
branch_no_36:;
{
PyObject *tmp_assign_source_114;
PyObject *tmp_metaclass_value_21;
PyObject *tmp_name_value_32;
PyObject *tmp_bases_value_21;
PyObject *tmp_dict_arg_value_25;
PyObject *tmp_class_decl_dict_value_13;
PyObject *tmp_metaclass_args_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_metaclass_value_21 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_32 = mod_consts.const_str_plain_BrainpoolP384R1;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_21 = tmp_class_container$class_creation_13__bases;
tmp_dict_arg_value_25 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268;
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_decl_dict_value_13 = tmp_class_container$class_creation_13__class_decl_dict;
tmp_metaclass_args_13 = MAKE_TUPLE3(tstate, tmp_name_value_32, tmp_bases_value_21, tmp_dict_arg_value_25);
tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_metaclass_value_21, tmp_metaclass_args_13, tmp_class_decl_dict_value_13);
CHECK_OBJECT(tmp_metaclass_args_13);
Py_DECREF(tmp_metaclass_args_13);
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto try_except_handler_41;
}
{
    PyObject *old = outline_12_var___class__;
    outline_12_var___class__ = tmp_assign_source_114;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_113 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_113);
goto try_return_handler_41;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_41:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268 = NULL;
goto try_return_handler_40;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__13_BrainpoolP384R1_268 = NULL;
// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto try_except_handler_40;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_40:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 268;
goto try_except_handler_39;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP384R1, tmp_assign_source_113);
}
goto try_end_15;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
Py_DECREF(tmp_class_container$class_creation_13__bases_orig);
tmp_class_container$class_creation_13__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
Py_DECREF(tmp_class_container$class_creation_13__bases);
tmp_class_container$class_creation_13__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_container$class_creation_13__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
Py_DECREF(tmp_class_container$class_creation_13__metaclass);
tmp_class_container$class_creation_13__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
Py_DECREF(tmp_class_container$class_creation_13__prepared);
tmp_class_container$class_creation_13__prepared = NULL;
tmp_outline_return_value_13 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_13);
goto outline_result_25;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_25:;
CHECK_OBJECT(tmp_outline_return_value_13);
Py_DECREF(tmp_outline_return_value_13);
}
{
PyObject *tmp_outline_return_value_14;
// Tried code:
{
PyObject *tmp_assign_source_115;
PyObject *tmp_tuple_element_29;
tmp_tuple_element_29 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurve(tstate);
if (unlikely(tmp_tuple_element_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurve);
}

if (tmp_tuple_element_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;

    goto try_except_handler_42;
}
tmp_assign_source_115 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_115, 0, tmp_tuple_element_29);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_115;
}
{
PyObject *tmp_assign_source_116;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_116 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_116;
}
{
PyObject *tmp_assign_source_117;
tmp_assign_source_117 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_metaclass_value_22;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_9;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_83;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
tmp_condition_result_49 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_83 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_83, tmp_subscript_value_9, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_22);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_22 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_118 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
CHECK_OBJECT(tmp_metaclass_value_22);
Py_DECREF(tmp_metaclass_value_22);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_118;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_84;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_84 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
tmp_condition_result_50 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_50 != false) {
    goto branch_yes_37;
} else {
    goto branch_no_37;
}
}
branch_yes_37:;
{
PyObject *tmp_assign_source_119;
PyObject *tmp_called_value_33;
PyObject *tmp_expression_value_85;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_85 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
tmp_tuple_element_30 = mod_consts.const_str_plain_BrainpoolP512R1;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 274;
tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_33);
Py_DECREF(tmp_called_value_33);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_119;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_86;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_86 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
assert(!(tmp_res == -1));
tmp_condition_result_51 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_51 != false) {
    goto branch_yes_38;
} else {
    goto branch_no_38;
}
}
branch_yes_38:;
{
PyObject *tmp_raise_type_13;
PyObject *tmp_make_exception_arg_13;
PyObject *tmp_mod_expr_left_13;
PyObject *tmp_mod_expr_right_13;
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_87;
PyObject *tmp_name_value_33;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_33 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_87, tmp_name_value_33, tmp_default_value_13);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_88;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_88 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_88 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_88);
Py_DECREF(tmp_expression_value_88);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_31);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_42;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_42;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 274;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 274;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_42;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_120;
tmp_assign_source_120 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_120;
}
branch_end_37:;
{
PyObject *tmp_assign_source_121;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_str_plain_BrainpoolP512R1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_44;
}
tmp_dictset_value = mod_consts.const_int_pos_274;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_44;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15 = MAKE_CLASS_FRAME(tstate, code_objects_5ce7d5e227352223c21fc02b04a1164c, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_str_plain_brainpoolP512r1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, const_str_plain_name, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_dictset_value = mod_consts.const_int_pos_512;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, mod_consts.const_str_plain_key_size, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_15;
}
tmp_dictset_value = mod_consts.const_536b0dde581f6df749a45aef3b875bd1;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, mod_consts.const_str_plain_group_order, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_2 = "o";
    goto frame_exception_exit_15;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15);


goto frame_no_exception_14;
frame_exception_exit_15:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15,
    type_description_2,
    outline_13_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_15);


// Return the error.
goto nested_frame_exit_14;
frame_no_exception_14:;
goto skip_nested_handling_14;
nested_frame_exit_14:;

goto try_except_handler_44;
skip_nested_handling_14:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_44;
}
{
nuitka_bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_44;
}
if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_14__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_44;
}
branch_no_39:;
{
PyObject *tmp_assign_source_122;
PyObject *tmp_metaclass_value_23;
PyObject *tmp_name_value_34;
PyObject *tmp_bases_value_23;
PyObject *tmp_dict_arg_value_26;
PyObject *tmp_class_decl_dict_value_14;
PyObject *tmp_metaclass_args_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_metaclass_value_23 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_34 = mod_consts.const_str_plain_BrainpoolP512R1;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_23 = tmp_class_container$class_creation_14__bases;
tmp_dict_arg_value_26 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274;
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_decl_dict_value_14 = tmp_class_container$class_creation_14__class_decl_dict;
tmp_metaclass_args_14 = MAKE_TUPLE3(tstate, tmp_name_value_34, tmp_bases_value_23, tmp_dict_arg_value_26);
tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_metaclass_value_23, tmp_metaclass_args_14, tmp_class_decl_dict_value_14);
CHECK_OBJECT(tmp_metaclass_args_14);
Py_DECREF(tmp_metaclass_args_14);
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto try_except_handler_44;
}
{
    PyObject *old = outline_13_var___class__;
    outline_13_var___class__ = tmp_assign_source_122;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_121 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_121);
goto try_return_handler_44;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_44:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274 = NULL;
goto try_return_handler_43;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__14_BrainpoolP512R1_274 = NULL;
// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto try_except_handler_43;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_43:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 274;
goto try_except_handler_42;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_BrainpoolP512R1, tmp_assign_source_121);
}
goto try_end_16;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
Py_DECREF(tmp_class_container$class_creation_14__bases_orig);
tmp_class_container$class_creation_14__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
Py_DECREF(tmp_class_container$class_creation_14__bases);
tmp_class_container$class_creation_14__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_container$class_creation_14__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
Py_DECREF(tmp_class_container$class_creation_14__metaclass);
tmp_class_container$class_creation_14__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
Py_DECREF(tmp_class_container$class_creation_14__prepared);
tmp_class_container$class_creation_14__prepared = NULL;
tmp_outline_return_value_14 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_14);
goto outline_result_27;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_27:;
CHECK_OBJECT(tmp_outline_return_value_14);
Py_DECREF(tmp_outline_return_value_14);
}
{
PyObject *tmp_assign_source_123;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_called_value_34;
tmp_dict_key_5 = mod_consts.const_str_plain_prime192v1;
tmp_called_value_34 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP192R1(tstate);
if (unlikely(tmp_called_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP192R1);
}

if (tmp_called_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;

    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 281;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_34);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;

    goto frame_exception_exit_1;
}
tmp_assign_source_123 = _PyDict_NewPresized( 11 );
{
PyObject *tmp_called_value_35;
PyObject *tmp_called_value_36;
PyObject *tmp_called_value_37;
PyObject *tmp_called_value_38;
PyObject *tmp_called_value_39;
PyObject *tmp_called_value_40;
PyObject *tmp_called_value_41;
PyObject *tmp_called_value_42;
PyObject *tmp_called_value_43;
PyObject *tmp_called_value_44;
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_prime256v1;
tmp_called_value_35 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP256R1(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP256R1);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 282;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_35);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_secp192r1;
tmp_called_value_36 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP192R1(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP192R1);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 283;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_36);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_secp224r1;
tmp_called_value_37 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP224R1(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP224R1);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 284;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_37);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_secp256r1;
tmp_called_value_38 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP256R1(tstate);
if (unlikely(tmp_called_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP256R1);
}

if (tmp_called_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 285;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_38);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_secp384r1;
tmp_called_value_39 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP384R1(tstate);
if (unlikely(tmp_called_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP384R1);
}

if (tmp_called_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 286;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_39);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_secp521r1;
tmp_called_value_40 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP521R1(tstate);
if (unlikely(tmp_called_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP521R1);
}

if (tmp_called_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 287;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_40);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_secp256k1;
tmp_called_value_41 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP256K1(tstate);
if (unlikely(tmp_called_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP256K1);
}

if (tmp_called_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 288;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_41);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_brainpoolP256r1;
tmp_called_value_42 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP256R1(tstate);
if (unlikely(tmp_called_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BrainpoolP256R1);
}

if (tmp_called_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 289;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_42);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_brainpoolP384r1;
tmp_called_value_43 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP384R1(tstate);
if (unlikely(tmp_called_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BrainpoolP384R1);
}

if (tmp_called_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 290;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_43);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_brainpoolP512r1;
tmp_called_value_44 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP512R1(tstate);
if (unlikely(tmp_called_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BrainpoolP512R1);
}

if (tmp_called_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto dict_build_exception_1;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 291;
tmp_dict_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_44);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_123, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_123);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__CURVE_TYPES, tmp_assign_source_123);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_ef3d49944f59d99ad11b3870d09aeb26;
tmp_ass_subscribed_1 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__CURVE_TYPES;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_15;
// Tried code:
{
PyObject *tmp_assign_source_124;
PyObject *tmp_tuple_element_32;
tmp_tuple_element_32 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveSignatureAlgorithm(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveSignatureAlgorithm);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 295;

    goto try_except_handler_45;
}
tmp_assign_source_124 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_124, 0, tmp_tuple_element_32);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_124;
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_125 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_125;
}
{
PyObject *tmp_assign_source_126;
tmp_assign_source_126 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_126;
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_metaclass_value_24;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_10;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_89;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
tmp_condition_result_53 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_89 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_89, tmp_subscript_value_10, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_24);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_24 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_127 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
CHECK_OBJECT(tmp_metaclass_value_24);
Py_DECREF(tmp_metaclass_value_24);
if (tmp_assign_source_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_127;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_90;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_90 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
tmp_condition_result_54 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_54 != false) {
    goto branch_yes_40;
} else {
    goto branch_no_40;
}
}
branch_yes_40:;
{
PyObject *tmp_assign_source_128;
PyObject *tmp_called_value_45;
PyObject *tmp_expression_value_91;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_91 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
tmp_tuple_element_33 = mod_consts.const_str_plain_ECDSA;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 295;
tmp_assign_source_128 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_128;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_92;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_92 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
assert(!(tmp_res == -1));
tmp_condition_result_55 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_55 != false) {
    goto branch_yes_41;
} else {
    goto branch_no_41;
}
}
branch_yes_41:;
{
PyObject *tmp_raise_type_14;
PyObject *tmp_make_exception_arg_14;
PyObject *tmp_mod_expr_left_14;
PyObject *tmp_mod_expr_right_14;
PyObject *tmp_tuple_element_34;
PyObject *tmp_expression_value_93;
PyObject *tmp_name_value_35;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_93 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_35 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_93, tmp_name_value_35, tmp_default_value_14);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_94;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_94 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_94 == NULL));
tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_94);
Py_DECREF(tmp_expression_value_94);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_34);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_45;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_45;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame.f_lineno = 295;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 295;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_45;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_129;
tmp_assign_source_129 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_129;
}
branch_end_40:;
{
PyObject *tmp_assign_source_130;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_str_plain_ECDSA;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_47;
}
tmp_dictset_value = mod_consts.const_int_pos_295;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_47;
}
frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16 = MAKE_CLASS_FRAME(tstate, code_objects_43f6c1b0422727bd9284513a8143b95e, module_cryptography$hazmat$primitives$asymmetric$ec, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16, locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_23;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_c8658d26e498da6c90925a8d14e437d3);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__23___init__(tstate, tmp_defaults_1, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_called_value_46;
PyObject *tmp_args_element_value_33;
PyObject *tmp_annotations_24;
tmp_called_value_46 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, mod_consts.const_str_plain_property);

if (tmp_called_value_46 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_46 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_46);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_b8bbe546a4a29bed2b8e55337e17fba2);

tmp_args_element_value_33 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__24_algorithm(tstate, tmp_annotations_24);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16->m_frame.f_lineno = 315;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_33);
CHECK_OBJECT(tmp_called_value_46);
Py_DECREF(tmp_called_value_46);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, mod_consts.const_str_plain_algorithm, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}
{
PyObject *tmp_called_value_47;
PyObject *tmp_args_element_value_34;
PyObject *tmp_annotations_25;
tmp_called_value_47 = PyObject_GetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, mod_consts.const_str_plain_property);

if (tmp_called_value_47 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_47 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_47);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_16;
    }
}

tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_34 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__25_deterministic_signing(tstate, tmp_annotations_25);

frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16->m_frame.f_lineno = 321;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_34);
CHECK_OBJECT(tmp_called_value_47);
Py_DECREF(tmp_called_value_47);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, mod_consts.const_str_plain_deterministic_signing, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "o";
    goto frame_exception_exit_16;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16);


goto frame_no_exception_15;
frame_exception_exit_16:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16,
    type_description_2,
    outline_14_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_16);


// Return the error.
goto nested_frame_exit_15;
frame_no_exception_15:;
goto skip_nested_handling_15;
nested_frame_exit_15:;

goto try_except_handler_47;
skip_nested_handling_15:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__algorithm_str_plain__deterministic_signing_tuple;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_47;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_47;
}
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_15__bases_orig;
tmp_res = PyObject_SetItem(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_47;
}
branch_no_42:;
{
PyObject *tmp_assign_source_131;
PyObject *tmp_metaclass_value_25;
PyObject *tmp_name_value_36;
PyObject *tmp_bases_value_25;
PyObject *tmp_dict_arg_value_27;
PyObject *tmp_class_decl_dict_value_15;
PyObject *tmp_metaclass_args_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_metaclass_value_25 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_36 = mod_consts.const_str_plain_ECDSA;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_25 = tmp_class_container$class_creation_15__bases;
tmp_dict_arg_value_27 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295;
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_decl_dict_value_15 = tmp_class_container$class_creation_15__class_decl_dict;
tmp_metaclass_args_15 = MAKE_TUPLE3(tstate, tmp_name_value_36, tmp_bases_value_25, tmp_dict_arg_value_27);
tmp_assign_source_131 = CALL_FUNCTION(tstate, tmp_metaclass_value_25, tmp_metaclass_args_15, tmp_class_decl_dict_value_15);
CHECK_OBJECT(tmp_metaclass_args_15);
Py_DECREF(tmp_metaclass_args_15);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto try_except_handler_47;
}
{
    PyObject *old = outline_14_var___class__;
    outline_14_var___class__ = tmp_assign_source_131;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_130 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_130);
goto try_return_handler_47;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_47:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295 = NULL;
goto try_return_handler_46;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__15_ECDSA_295 = NULL;
// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto try_except_handler_46;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_46:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 295;
goto try_except_handler_45;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_ECDSA, tmp_assign_source_130);
}
goto try_end_17;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
Py_DECREF(tmp_class_container$class_creation_15__bases_orig);
tmp_class_container$class_creation_15__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
Py_DECREF(tmp_class_container$class_creation_15__bases);
tmp_class_container$class_creation_15__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_container$class_creation_15__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
Py_DECREF(tmp_class_container$class_creation_15__metaclass);
tmp_class_container$class_creation_15__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
Py_DECREF(tmp_class_container$class_creation_15__prepared);
tmp_class_container$class_creation_15__prepared = NULL;
tmp_outline_return_value_15 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_15);
goto outline_result_29;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_29:;
CHECK_OBJECT(tmp_outline_return_value_15);
Py_DECREF(tmp_outline_return_value_15);
}
{
PyObject *tmp_assign_source_132;
PyObject *tmp_expression_value_95;
PyObject *tmp_expression_value_96;
tmp_expression_value_96 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$rust_openssl(tstate);
if (unlikely(tmp_expression_value_96 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_96 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;

    goto frame_exception_exit_1;
}
tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_ec);
if (tmp_expression_value_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto frame_exception_exit_1;
}
tmp_assign_source_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain_generate_private_key);
CHECK_OBJECT(tmp_expression_value_95);
Py_DECREF(tmp_expression_value_95);
if (tmp_assign_source_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_private_key, tmp_assign_source_132);
}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_26;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_f523698371a7f7cfa6d7b816ea02d3fc);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_133 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__26_derive_private_key(tstate, tmp_defaults_2, tmp_annotations_26);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_derive_private_key, tmp_assign_source_133);
}
{
PyObject *tmp_outline_return_value_16;
{
PyObject *tmp_assign_source_134;
tmp_assign_source_134 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_134;
}
{
PyObject *tmp_assign_source_135;
tmp_assign_source_135 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_135;
}
// Tried code:
{
PyObject *tmp_assign_source_136;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
tmp_dictset_value = mod_consts.const_str_digest_bd71b5d9106eb6b876b65e57bcd30837;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ECDH;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_345;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = const_tuple_empty;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_137;
PyObject *tmp_metaclass_value_26;
PyObject *tmp_name_value_37;
PyObject *tmp_bases_value_26;
PyObject *tmp_dict_arg_value_28;
PyObject *tmp_class_decl_dict_value_16;
PyObject *tmp_metaclass_args_16;
tmp_metaclass_value_26 = (PyObject *)&PyType_Type;
tmp_name_value_37 = mod_consts.const_str_plain_ECDH;
tmp_bases_value_26 = const_tuple_empty;
tmp_dict_arg_value_28 = locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_decl_dict_value_16 = tmp_class_container$class_creation_16__class_decl_dict;
tmp_metaclass_args_16 = MAKE_TUPLE3(tstate, tmp_name_value_37, tmp_bases_value_26, tmp_dict_arg_value_28);
tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_metaclass_value_26, tmp_metaclass_args_16, tmp_class_decl_dict_value_16);
CHECK_OBJECT(tmp_metaclass_args_16);
Py_DECREF(tmp_metaclass_args_16);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto try_except_handler_50;
}
{
    PyObject *old = outline_15_var___class__;
    outline_15_var___class__ = tmp_assign_source_137;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_15_var___class__);
tmp_assign_source_136 = outline_15_var___class__;
Py_INCREF(tmp_assign_source_136);
goto try_return_handler_50;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_50:;
Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345 = NULL;
goto try_return_handler_49;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345);
locals_cryptography$hazmat$primitives$asymmetric$ec$$$class__16_ECDH_345 = NULL;
// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto try_except_handler_49;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_49:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 345;
goto try_except_handler_48;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_ECDH, tmp_assign_source_136);
}
goto try_end_18;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
Py_DECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
Py_DECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
tmp_outline_return_value_16 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_16);
goto outline_result_31;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_31:;
CHECK_OBJECT(tmp_outline_return_value_16);
Py_DECREF(tmp_outline_return_value_16);
}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_97;
tmp_expression_value_97 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_97 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_97 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;

    goto frame_exception_exit_1;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts.const_str_plain_SECP192R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto frame_exception_exit_1;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP192R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP192R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 350;

    goto frame_exception_exit_1;
}
tmp_assign_source_138 = _PyDict_NewPresized( 9 );
{
PyObject *tmp_expression_value_98;
PyObject *tmp_expression_value_99;
PyObject *tmp_expression_value_100;
PyObject *tmp_expression_value_101;
PyObject *tmp_expression_value_102;
PyObject *tmp_expression_value_103;
PyObject *tmp_expression_value_104;
PyObject *tmp_expression_value_105;
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto dict_build_exception_2;
}
tmp_expression_value_98 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 351;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts.const_str_plain_SECP224R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP224R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP224R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 351;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;

    goto dict_build_exception_2;
}
tmp_expression_value_99 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_99 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_99 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain_SECP256K1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP256K1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP256K1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 352;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto dict_build_exception_2;
}
tmp_expression_value_100 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_100 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_100 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts.const_str_plain_SECP256R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP256R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP256R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 353;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto dict_build_exception_2;
}
tmp_expression_value_101 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_101 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_101 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts.const_str_plain_SECP384R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP384R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP384R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 354;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto dict_build_exception_2;
}
tmp_expression_value_102 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_102 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_102 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain_SECP521R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$SECP521R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SECP521R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 355;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto dict_build_exception_2;
}
tmp_expression_value_103 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_103 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_103 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts.const_str_plain_BRAINPOOLP256R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP256R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BrainpoolP256R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 356;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;

    goto dict_build_exception_2;
}
tmp_expression_value_104 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_104 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_104 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_BRAINPOOLP384R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP384R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BrainpoolP384R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 357;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;

    goto dict_build_exception_2;
}
tmp_expression_value_105 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$EllipticCurveOID(tstate);
if (unlikely(tmp_expression_value_105 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EllipticCurveOID);
}

if (tmp_expression_value_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;

    goto dict_build_exception_2;
}
tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain_BRAINPOOLP512R1);
if (tmp_dict_key_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto dict_build_exception_2;
}
tmp_dict_value_6 = module_var_accessor_cryptography$hazmat$primitives$asymmetric$ec$BrainpoolP512R1(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BrainpoolP512R1);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_dict_key_6);

exception_lineno = 358;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_assign_source_138, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_key_6);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto dict_build_exception_2;
}
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_assign_source_138);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain__OID_TO_CURVE, tmp_assign_source_138);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_16;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$primitives$asymmetric$ec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$primitives$asymmetric$ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$primitives$asymmetric$ec, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$primitives$asymmetric$ec);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_16:;
{
PyObject *tmp_assign_source_139;
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_96b818b79a66aeb77fa8ad12e479c640);

tmp_assign_source_139 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$ec$$$function__27_get_curve_for_oid(tstate, tmp_annotations_27);

UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)mod_consts.const_str_plain_get_curve_for_oid, tmp_assign_source_139);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$ec", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.primitives.asymmetric.ec" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$primitives$asymmetric$ec);
    return module_cryptography$hazmat$primitives$asymmetric$ec;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$primitives$asymmetric$ec, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$primitives$asymmetric$ec", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
