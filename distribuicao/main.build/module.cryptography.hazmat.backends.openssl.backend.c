/* Generated code for Python module 'cryptography$hazmat$backends$openssl$backend'
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



/* The "module_cryptography$hazmat$backends$openssl$backend" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$openssl$backend;
PyDictObject *moduledict_cryptography$hazmat$backends$openssl$backend;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_binding;
PyObject *const_str_plain_Binding;
PyObject *const_str_plain__binding;
PyObject *const_str_plain_ffi;
PyObject *const_str_plain__ffi;
PyObject *const_str_plain_lib;
PyObject *const_str_plain__lib;
PyObject *const_str_plain_rust_openssl;
PyObject *const_str_plain_is_fips_enabled;
PyObject *const_str_plain__fips_enabled;
PyObject *const_str_digest_8545bd40457765a03d81ad6bb4ec7b44;
PyObject *const_str_plain_openssl_version_text;
PyObject *const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e;
PyObject *const_str_digest_7875eee35b00a39576a900499709b60d;
PyObject *const_str_plain__legacy_provider_loaded;
PyObject *const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd;
PyObject *const_str_plain__openssl_assert;
PyObject *const_str_plain_enable_fips;
PyObject *const_str_plain__providers;
PyObject *const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882;
PyObject *const_str_plain_openssl_version;
PyObject *const_str_plain__fips_hashes;
PyObject *const_str_plain_hashes;
PyObject *const_str_plain_hash_supported;
PyObject *const_str_plain_SHA1;
PyObject *const_str_plain_kdf;
PyObject *const_str_plain_Scrypt;
PyObject *const_str_plain_derive;
PyObject *const_str_plain_Argon2id;
PyObject *const_str_plain_CRYPTOGRAPHY_IS_AWSLC;
PyObject *const_str_plain_MD5;
PyObject *const_str_plain_SHA224;
PyObject *const_str_plain_SHA256;
PyObject *const_str_plain_SHA384;
PyObject *const_str_plain_SHA512;
PyObject *const_str_plain_SHA512_224;
PyObject *const_str_plain_SHA512_256;
PyObject *const_str_plain_SHA3_224;
PyObject *const_str_plain_SHA3_256;
PyObject *const_str_plain_SHA3_384;
PyObject *const_str_plain_SHA3_512;
PyObject *const_str_plain__fips_ciphers;
PyObject *const_str_plain_ciphers;
PyObject *const_str_plain_cipher_supported;
PyObject *const_str_plain_capture_error_stack;
PyObject *const_str_plain_PKCS1v15;
PyObject *const_str_plain_PSS;
PyObject *const_str_plain__mgf;
PyObject *const_str_plain_MGF1;
PyObject *const_str_plain__salt_length;
PyObject *const_str_plain_DIGEST_LENGTH;
PyObject *const_str_plain__algorithm;
PyObject *const_str_plain_OAEP;
PyObject *const_str_plain__oaep_hash_supported;
PyObject *const_str_plain_rsa_padding_supported;
PyObject *const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL;
PyObject *const_str_plain_dsa_supported;
PyObject *const_str_plain_signature_hash_supported;
PyObject *const_str_plain_CBC;
PyObject *const_bytes_null;
PyObject *const_str_plain_block_size;
PyObject *const_str_plain__fips_ecdh_curves;
PyObject *const_str_plain_ec;
PyObject *const_str_plain_curve_supported;
PyObject *const_str_plain_ECDSA;
PyObject *const_str_plain_elliptic_curve_supported;
PyObject *const_str_plain_algorithm;
PyObject *const_str_plain_asym_utils;
PyObject *const_str_plain_Prehashed;
PyObject *const_str_plain_ECDH;
PyObject *const_str_plain_Cryptography_HAS_EVP_PKEY_DHX;
PyObject *const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL;
PyObject *const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER;
PyObject *const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
PyObject *const_tuple_str_plain_openssl_tuple;
PyObject *const_str_plain_openssl;
PyObject *const_str_digest_87f50f766f0662099c6808139cda5c51;
PyObject *const_tuple_str_plain_binding_tuple;
PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
PyObject *const_tuple_str_plain_hashes_tuple;
PyObject *const_str_digest_b4ea483018ff6c9646e3f512393f4c4a;
PyObject *const_tuple_str_plain_AsymmetricPadding_tuple;
PyObject *const_str_plain_AsymmetricPadding;
PyObject *const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
PyObject *const_tuple_str_plain_ec_tuple;
PyObject *const_tuple_str_plain_utils_tuple;
PyObject *const_str_plain_utils;
PyObject *const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b;
PyObject *const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple;
PyObject *const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
PyObject *const_tuple_str_plain_CipherAlgorithm_tuple;
PyObject *const_str_plain_CipherAlgorithm;
PyObject *const_str_digest_87335604a4a83d266089f9a1aef4f588;
PyObject *const_tuple_str_plain_AES_tuple;
PyObject *const_str_plain_AES;
PyObject *const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
PyObject *const_tuple_str_plain_CBC_str_plain_Mode_tuple;
PyObject *const_str_plain_Mode;
PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
PyObject *const_str_digest_37711645c6333994760a86f2fa1c323c;
PyObject *const_str_plain_Backend;
PyObject *const_int_pos_31;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_SHAKE128;
PyObject *const_str_plain_SHAKE256;
PyObject *const_str_plain_SECP224R1;
PyObject *const_str_plain_SECP256R1;
PyObject *const_str_plain_SECP384R1;
PyObject *const_str_plain_SECP521R1;
PyObject *const_int_pos_2048;
PyObject *const_str_plain__fips_rsa_min_key_size;
PyObject *const_int_pos_65537;
PyObject *const_str_plain__fips_rsa_min_public_exponent;
PyObject *const_str_plain__fips_dsa_min_modulus;
PyObject *const_str_plain__fips_dh_min_key_size;
PyObject *const_str_plain__fips_dh_min_modulus;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_2f7da69daaf5311866ea3e23e0998502;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_a424c05496d4072fb09fa9000622f1c6;
PyObject *const_dict_6d650d49fba71a638dd7b8ebb6628e04;
PyObject *const_str_plain_openssl_assert;
PyObject *const_str_digest_a3785fa714e15e4d3a5548d95f0693e3;
PyObject *const_str_plain__enable_fips;
PyObject *const_str_digest_58e69b20e86aedb31888faea260db790;
PyObject *const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_plain_openssl_version_number;
PyObject *const_str_digest_e83b7e884edde7eb286517e02706f4fd;
PyObject *const_dict_6a6ca73df98359aef3705dfc84983cd4;
PyObject *const_str_digest_acb113e09443cd1ce928cbe0fcb31133;
PyObject *const_str_digest_e82c8d649913e20a53ec5652c8143740;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_scrypt_supported;
PyObject *const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4;
PyObject *const_str_plain_argon2_supported;
PyObject *const_str_digest_6bd056b7a06c49341302199eaa87f4dd;
PyObject *const_str_plain_hmac_supported;
PyObject *const_str_digest_c25a9d4744406fb964f187bd16916d1d;
PyObject *const_dict_bf9ac96a59f56a3885fbf3ac841a1dce;
PyObject *const_str_digest_d9febf19af3ea80fded0c24983cce443;
PyObject *const_dict_ca06d19a2120f89fe0002d001bbc2155;
PyObject *const_str_plain__consume_errors;
PyObject *const_str_digest_24b4891737e24684660c780331402b9c;
PyObject *const_str_digest_ed300742f7876237aff7c934c4e96aef;
PyObject *const_dict_a8eb5fb4ed4b839d925e52d5901f349a;
PyObject *const_str_digest_f54219a05b3803368ed2879f6545ff10;
PyObject *const_str_plain_rsa_encryption_supported;
PyObject *const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f;
PyObject *const_str_digest_f1677a893cc8602687ce94488fb450c2;
PyObject *const_str_plain_dsa_hash_supported;
PyObject *const_str_digest_fda48f6f490f08c5ae462346481ed3cb;
PyObject *const_str_plain_cmac_algorithm_supported;
PyObject *const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb;
PyObject *const_dict_ce2f8d14b50f7cceb36888e1aed1108e;
PyObject *const_str_digest_4c50260f3a1824dc5230a45bf509fd30;
PyObject *const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d;
PyObject *const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3;
PyObject *const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6;
PyObject *const_dict_01580852465674605f87ee1a697eb62f;
PyObject *const_str_digest_19dba398fcfd0968a3203d943a394d68;
PyObject *const_str_digest_2cacb6474a289bb19154680932d9b574;
PyObject *const_str_plain_dh_supported;
PyObject *const_str_digest_1d13fce19bff6b6df52a6c61a30f0506;
PyObject *const_str_plain_dh_x942_serialization_supported;
PyObject *const_str_digest_381abbeea773e35779d85be68a67c56c;
PyObject *const_str_plain_x25519_supported;
PyObject *const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5;
PyObject *const_str_plain_x448_supported;
PyObject *const_str_digest_13f2d4edcf5a494e25e01747185afe3d;
PyObject *const_str_plain_mlkem_supported;
PyObject *const_str_digest_9a211b73e63741a7be46e335ee5ee1e8;
PyObject *const_str_plain_mldsa_supported;
PyObject *const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243;
PyObject *const_str_plain_ed25519_supported;
PyObject *const_str_digest_3286638e2ba51d979d46324fe7fa20c1;
PyObject *const_str_plain_ed448_supported;
PyObject *const_str_digest_7de9e793fec61cc373d4282cff465166;
PyObject *const_str_plain_ecdsa_deterministic_supported;
PyObject *const_str_digest_2954f2236339b800a281c2cfc4e8d384;
PyObject *const_str_plain_poly1305_supported;
PyObject *const_str_digest_50c0be04e5c1255e81ff6288e951b051;
PyObject *const_tuple_e0114b091e103d386d29251d1bf5d965_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_backend;
PyObject *const_str_digest_8d008f4962ab695c17d45370adb9653d;
PyObject *const_str_digest_98add088badf87677d9b50744cfb647f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_algorithm_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple;
PyObject *const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple;
PyObject *const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple;
PyObject *const_tuple_str_plain_self_str_plain_curve_tuple;
PyObject *const_tuple_str_plain_self_str_plain_ok_tuple;
PyObject *const_tuple_str_plain_self_str_plain_padding_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[201];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("cryptography.hazmat.backends.openssl.backend"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 201) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 201 values, got %d\n",
                    UN_TRANSLATE("cryptography.hazmat.backends.openssl.backend"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binding", mod_consts.const_str_plain_binding);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_binding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Binding", mod_consts.const_str_plain_Binding);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_Binding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binding", mod_consts.const_str_plain__binding);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__binding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ffi", mod_consts.const_str_plain_ffi);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ffi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ffi", mod_consts.const_str_plain__ffi);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__ffi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lib", mod_consts.const_str_plain_lib);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_lib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__lib", mod_consts.const_str_plain__lib);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__lib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rust_openssl", mod_consts.const_str_plain_rust_openssl);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_fips_enabled", mod_consts.const_str_plain_is_fips_enabled);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_fips_enabled);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_enabled", mod_consts.const_str_plain__fips_enabled);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_enabled);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44", mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_version_text", mod_consts.const_str_plain_openssl_version_text);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_version_text);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e", mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d", mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__legacy_provider_loaded", mod_consts.const_str_plain__legacy_provider_loaded);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_provider_loaded);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd", mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__openssl_assert", mod_consts.const_str_plain__openssl_assert);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__openssl_assert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enable_fips", mod_consts.const_str_plain_enable_fips);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_fips);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__providers", mod_consts.const_str_plain__providers);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__providers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882", mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_version", mod_consts.const_str_plain_openssl_version);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_hashes", mod_consts.const_str_plain__fips_hashes);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_hashes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hash_supported", mod_consts.const_str_plain_hash_supported);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_hash_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA1", mod_consts.const_str_plain_SHA1);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kdf", mod_consts.const_str_plain_kdf);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_kdf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Scrypt", mod_consts.const_str_plain_Scrypt);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Scrypt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_derive", mod_consts.const_str_plain_derive);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_derive);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Argon2id", mod_consts.const_str_plain_Argon2id);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_Argon2id);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC", mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MD5", mod_consts.const_str_plain_MD5);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_MD5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA224", mod_consts.const_str_plain_SHA224);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA256", mod_consts.const_str_plain_SHA256);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA384", mod_consts.const_str_plain_SHA384);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA512", mod_consts.const_str_plain_SHA512);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA512_224", mod_consts.const_str_plain_SHA512_224);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA512_256", mod_consts.const_str_plain_SHA512_256);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_224", mod_consts.const_str_plain_SHA3_224);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_224);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_256", mod_consts.const_str_plain_SHA3_256);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_384", mod_consts.const_str_plain_SHA3_384);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_512", mod_consts.const_str_plain_SHA3_512);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_512);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_ciphers", mod_consts.const_str_plain__fips_ciphers);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_ciphers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ciphers", mod_consts.const_str_plain_ciphers);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_ciphers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cipher_supported", mod_consts.const_str_plain_cipher_supported);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_cipher_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_capture_error_stack", mod_consts.const_str_plain_capture_error_stack);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_capture_error_stack);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS1v15", mod_consts.const_str_plain_PKCS1v15);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS1v15);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PSS", mod_consts.const_str_plain_PSS);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_PSS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mgf", mod_consts.const_str_plain__mgf);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain__mgf);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MGF1", mod_consts.const_str_plain_MGF1);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_MGF1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__salt_length", mod_consts.const_str_plain__salt_length);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__salt_length);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIGEST_LENGTH", mod_consts.const_str_plain_DIGEST_LENGTH);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_DIGEST_LENGTH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__algorithm", mod_consts.const_str_plain__algorithm);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__algorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OAEP", mod_consts.const_str_plain_OAEP);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_OAEP);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__oaep_hash_supported", mod_consts.const_str_plain__oaep_hash_supported);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__oaep_hash_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_padding_supported", mod_consts.const_str_plain_rsa_padding_supported);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_padding_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL", mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dsa_supported", mod_consts.const_str_plain_dsa_supported);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_dsa_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_signature_hash_supported", mod_consts.const_str_plain_signature_hash_supported);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature_hash_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CBC", mod_consts.const_str_plain_CBC);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_CBC);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_null", mod_consts.const_bytes_null);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_bytes_null);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_block_size", mod_consts.const_str_plain_block_size);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_block_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_ecdh_curves", mod_consts.const_str_plain__fips_ecdh_curves);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_ecdh_curves);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ec", mod_consts.const_str_plain_ec);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_curve_supported", mod_consts.const_str_plain_curve_supported);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_curve_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA", mod_consts.const_str_plain_ECDSA);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_elliptic_curve_supported", mod_consts.const_str_plain_elliptic_curve_supported);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_elliptic_curve_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithm", mod_consts.const_str_plain_algorithm);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_asym_utils", mod_consts.const_str_plain_asym_utils);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Prehashed", mod_consts.const_str_plain_Prehashed);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_Prehashed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDH", mod_consts.const_str_plain_ECDH);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ECDH);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX", mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL", mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER", mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER", mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl", mod_consts.const_str_plain_openssl);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51", mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_binding_tuple", mod_consts.const_tuple_str_plain_binding_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_binding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hashes_tuple", mod_consts.const_tuple_str_plain_hashes_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hashes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a", mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple", mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsymmetricPadding", mod_consts.const_str_plain_AsymmetricPadding);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsymmetricPadding);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ec_tuple", mod_consts.const_tuple_str_plain_ec_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ec_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b", mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple", mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5", mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple", mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CipherAlgorithm", mod_consts.const_str_plain_CipherAlgorithm);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_CipherAlgorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588", mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AES_tuple", mod_consts.const_tuple_str_plain_AES_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AES_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AES", mod_consts.const_str_plain_AES);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_AES);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c", mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple", mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Mode", mod_consts.const_str_plain_Mode);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e", mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c", mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Backend", mod_consts.const_str_plain_Backend);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Backend);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHAKE128", mod_consts.const_str_plain_SHAKE128);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE128);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHAKE256", mod_consts.const_str_plain_SHAKE256);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP224R1", mod_consts.const_str_plain_SECP224R1);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP224R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP256R1", mod_consts.const_str_plain_SECP256R1);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP256R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP384R1", mod_consts.const_str_plain_SECP384R1);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP384R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP521R1", mod_consts.const_str_plain_SECP521R1);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_SECP521R1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_2048);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_rsa_min_key_size", mod_consts.const_str_plain__fips_rsa_min_key_size);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_rsa_min_key_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65537", mod_consts.const_int_pos_65537);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_65537);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_rsa_min_public_exponent", mod_consts.const_str_plain__fips_rsa_min_public_exponent);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_rsa_min_public_exponent);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_dsa_min_modulus", mod_consts.const_str_plain__fips_dsa_min_modulus);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_dsa_min_modulus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_dh_min_key_size", mod_consts.const_str_plain__fips_dh_min_key_size);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_dh_min_key_size);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_dh_min_modulus", mod_consts.const_str_plain__fips_dh_min_modulus);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__fips_dh_min_modulus);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502", mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6", mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04", mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_assert", mod_consts.const_str_plain_openssl_assert);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_assert);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3", mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__enable_fips", mod_consts.const_str_plain__enable_fips);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__enable_fips);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790", mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7", mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_version_number", mod_consts.const_str_plain_openssl_version_number);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_version_number);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd", mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4", mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133", mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740", mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scrypt_supported", mod_consts.const_str_plain_scrypt_supported);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_scrypt_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4", mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argon2_supported", mod_consts.const_str_plain_argon2_supported);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_argon2_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd", mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hmac_supported", mod_consts.const_str_plain_hmac_supported);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_hmac_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d", mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce", mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443", mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155", mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__consume_errors", mod_consts.const_str_plain__consume_errors);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain__consume_errors);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24b4891737e24684660c780331402b9c", mod_consts.const_str_digest_24b4891737e24684660c780331402b9c);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_24b4891737e24684660c780331402b9c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef", mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a", mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10", mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_encryption_supported", mod_consts.const_str_plain_rsa_encryption_supported);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_encryption_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f", mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2", mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dsa_hash_supported", mod_consts.const_str_plain_dsa_hash_supported);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_dsa_hash_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb", mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmac_algorithm_supported", mod_consts.const_str_plain_cmac_algorithm_supported);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_cmac_algorithm_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb", mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e", mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30", mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d", mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3", mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6", mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_01580852465674605f87ee1a697eb62f", mod_consts.const_dict_01580852465674605f87ee1a697eb62f);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_01580852465674605f87ee1a697eb62f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68", mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574", mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dh_supported", mod_consts.const_str_plain_dh_supported);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_dh_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506", mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dh_x942_serialization_supported", mod_consts.const_str_plain_dh_x942_serialization_supported);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_dh_x942_serialization_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c", mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x25519_supported", mod_consts.const_str_plain_x25519_supported);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_x25519_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5", mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x448_supported", mod_consts.const_str_plain_x448_supported);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_x448_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d", mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mlkem_supported", mod_consts.const_str_plain_mlkem_supported);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_mlkem_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8", mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mldsa_supported", mod_consts.const_str_plain_mldsa_supported);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_mldsa_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243", mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed25519_supported", mod_consts.const_str_plain_ed25519_supported);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_ed25519_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1", mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed448_supported", mod_consts.const_str_plain_ed448_supported);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_ed448_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166", mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ecdsa_deterministic_supported", mod_consts.const_str_plain_ecdsa_deterministic_supported);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_ecdsa_deterministic_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384", mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poly1305_supported", mod_consts.const_str_plain_poly1305_supported);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_poly1305_supported);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051", mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple", mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_backend);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d", mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f", mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple", mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple", mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple", mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple", mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple);
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
void checkModuleConstants_cryptography$hazmat$backends$openssl$backend(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_binding", mod_consts.const_str_plain_binding);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_binding) && "mod_consts.const_str_plain_binding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Binding", mod_consts.const_str_plain_Binding);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_Binding) && "mod_consts.const_str_plain_Binding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__binding", mod_consts.const_str_plain__binding);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__binding) && "mod_consts.const_str_plain__binding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ffi", mod_consts.const_str_plain_ffi);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ffi) && "mod_consts.const_str_plain_ffi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__ffi", mod_consts.const_str_plain__ffi);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__ffi) && "mod_consts.const_str_plain__ffi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_lib", mod_consts.const_str_plain_lib);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_lib) && "mod_consts.const_str_plain_lib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__lib", mod_consts.const_str_plain__lib);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__lib) && "mod_consts.const_str_plain__lib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rust_openssl", mod_consts.const_str_plain_rust_openssl);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_rust_openssl) && "mod_consts.const_str_plain_rust_openssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_fips_enabled", mod_consts.const_str_plain_is_fips_enabled);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_fips_enabled) && "mod_consts.const_str_plain_is_fips_enabled");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_enabled", mod_consts.const_str_plain__fips_enabled);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_enabled) && "mod_consts.const_str_plain__fips_enabled");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44", mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44) && "mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_version_text", mod_consts.const_str_plain_openssl_version_text);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_version_text) && "mod_consts.const_str_plain_openssl_version_text");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e", mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e) && "mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d", mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d) && "mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__legacy_provider_loaded", mod_consts.const_str_plain__legacy_provider_loaded);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_provider_loaded) && "mod_consts.const_str_plain__legacy_provider_loaded");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd", mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd) && "mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__openssl_assert", mod_consts.const_str_plain__openssl_assert);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__openssl_assert) && "mod_consts.const_str_plain__openssl_assert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enable_fips", mod_consts.const_str_plain_enable_fips);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_fips) && "mod_consts.const_str_plain_enable_fips");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__providers", mod_consts.const_str_plain__providers);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__providers) && "mod_consts.const_str_plain__providers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882", mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882) && "mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_version", mod_consts.const_str_plain_openssl_version);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_version) && "mod_consts.const_str_plain_openssl_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_hashes", mod_consts.const_str_plain__fips_hashes);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_hashes) && "mod_consts.const_str_plain__fips_hashes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashes", mod_consts.const_str_plain_hashes);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashes) && "mod_consts.const_str_plain_hashes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hash_supported", mod_consts.const_str_plain_hash_supported);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_hash_supported) && "mod_consts.const_str_plain_hash_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA1", mod_consts.const_str_plain_SHA1);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA1) && "mod_consts.const_str_plain_SHA1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kdf", mod_consts.const_str_plain_kdf);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_kdf) && "mod_consts.const_str_plain_kdf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Scrypt", mod_consts.const_str_plain_Scrypt);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Scrypt) && "mod_consts.const_str_plain_Scrypt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_derive", mod_consts.const_str_plain_derive);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_derive) && "mod_consts.const_str_plain_derive");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Argon2id", mod_consts.const_str_plain_Argon2id);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_Argon2id) && "mod_consts.const_str_plain_Argon2id");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC", mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC) && "mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MD5", mod_consts.const_str_plain_MD5);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_MD5) && "mod_consts.const_str_plain_MD5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA224", mod_consts.const_str_plain_SHA224);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA224) && "mod_consts.const_str_plain_SHA224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA256", mod_consts.const_str_plain_SHA256);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA256) && "mod_consts.const_str_plain_SHA256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA384", mod_consts.const_str_plain_SHA384);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA384) && "mod_consts.const_str_plain_SHA384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA512", mod_consts.const_str_plain_SHA512);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512) && "mod_consts.const_str_plain_SHA512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA512_224", mod_consts.const_str_plain_SHA512_224);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_224) && "mod_consts.const_str_plain_SHA512_224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA512_256", mod_consts.const_str_plain_SHA512_256);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA512_256) && "mod_consts.const_str_plain_SHA512_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_224", mod_consts.const_str_plain_SHA3_224);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_224) && "mod_consts.const_str_plain_SHA3_224");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_256", mod_consts.const_str_plain_SHA3_256);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_256) && "mod_consts.const_str_plain_SHA3_256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_384", mod_consts.const_str_plain_SHA3_384);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_384) && "mod_consts.const_str_plain_SHA3_384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHA3_512", mod_consts.const_str_plain_SHA3_512);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHA3_512) && "mod_consts.const_str_plain_SHA3_512");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_ciphers", mod_consts.const_str_plain__fips_ciphers);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_ciphers) && "mod_consts.const_str_plain__fips_ciphers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ciphers", mod_consts.const_str_plain_ciphers);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_ciphers) && "mod_consts.const_str_plain_ciphers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cipher_supported", mod_consts.const_str_plain_cipher_supported);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_cipher_supported) && "mod_consts.const_str_plain_cipher_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_capture_error_stack", mod_consts.const_str_plain_capture_error_stack);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_capture_error_stack) && "mod_consts.const_str_plain_capture_error_stack");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PKCS1v15", mod_consts.const_str_plain_PKCS1v15);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_PKCS1v15) && "mod_consts.const_str_plain_PKCS1v15");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PSS", mod_consts.const_str_plain_PSS);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_PSS) && "mod_consts.const_str_plain_PSS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__mgf", mod_consts.const_str_plain__mgf);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain__mgf) && "mod_consts.const_str_plain__mgf");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MGF1", mod_consts.const_str_plain_MGF1);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_MGF1) && "mod_consts.const_str_plain_MGF1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__salt_length", mod_consts.const_str_plain__salt_length);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__salt_length) && "mod_consts.const_str_plain__salt_length");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DIGEST_LENGTH", mod_consts.const_str_plain_DIGEST_LENGTH);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_DIGEST_LENGTH) && "mod_consts.const_str_plain_DIGEST_LENGTH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__algorithm", mod_consts.const_str_plain__algorithm);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__algorithm) && "mod_consts.const_str_plain__algorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OAEP", mod_consts.const_str_plain_OAEP);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_OAEP) && "mod_consts.const_str_plain_OAEP");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__oaep_hash_supported", mod_consts.const_str_plain__oaep_hash_supported);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__oaep_hash_supported) && "mod_consts.const_str_plain__oaep_hash_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_padding_supported", mod_consts.const_str_plain_rsa_padding_supported);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_padding_supported) && "mod_consts.const_str_plain_rsa_padding_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL", mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL) && "mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dsa_supported", mod_consts.const_str_plain_dsa_supported);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_dsa_supported) && "mod_consts.const_str_plain_dsa_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_signature_hash_supported", mod_consts.const_str_plain_signature_hash_supported);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature_hash_supported) && "mod_consts.const_str_plain_signature_hash_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CBC", mod_consts.const_str_plain_CBC);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_CBC) && "mod_consts.const_str_plain_CBC");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_bytes_null", mod_consts.const_bytes_null);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_bytes_null) && "mod_consts.const_bytes_null");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_block_size", mod_consts.const_str_plain_block_size);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_block_size) && "mod_consts.const_str_plain_block_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_ecdh_curves", mod_consts.const_str_plain__fips_ecdh_curves);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_ecdh_curves) && "mod_consts.const_str_plain__fips_ecdh_curves");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ec", mod_consts.const_str_plain_ec);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ec) && "mod_consts.const_str_plain_ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_curve_supported", mod_consts.const_str_plain_curve_supported);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_curve_supported) && "mod_consts.const_str_plain_curve_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDSA", mod_consts.const_str_plain_ECDSA);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDSA) && "mod_consts.const_str_plain_ECDSA");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_elliptic_curve_supported", mod_consts.const_str_plain_elliptic_curve_supported);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_elliptic_curve_supported) && "mod_consts.const_str_plain_elliptic_curve_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithm", mod_consts.const_str_plain_algorithm);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm) && "mod_consts.const_str_plain_algorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_asym_utils", mod_consts.const_str_plain_asym_utils);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_asym_utils) && "mod_consts.const_str_plain_asym_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Prehashed", mod_consts.const_str_plain_Prehashed);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_Prehashed) && "mod_consts.const_str_plain_Prehashed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ECDH", mod_consts.const_str_plain_ECDH);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ECDH) && "mod_consts.const_str_plain_ECDH");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX", mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX) && "mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL", mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL) && "mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER", mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER) && "mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER", mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER) && "mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e", mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e) && "mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_openssl_tuple", mod_consts.const_tuple_str_plain_openssl_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openssl_tuple) && "mod_consts.const_tuple_str_plain_openssl_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl", mod_consts.const_str_plain_openssl);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl) && "mod_consts.const_str_plain_openssl");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51", mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51) && "mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_binding_tuple", mod_consts.const_tuple_str_plain_binding_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_binding_tuple) && "mod_consts.const_tuple_str_plain_binding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087", mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087) && "mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_hashes_tuple", mod_consts.const_tuple_str_plain_hashes_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_hashes_tuple) && "mod_consts.const_tuple_str_plain_hashes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a", mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a) && "mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple", mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple) && "mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AsymmetricPadding", mod_consts.const_str_plain_AsymmetricPadding);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsymmetricPadding) && "mod_consts.const_str_plain_AsymmetricPadding");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47", mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47) && "mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ec_tuple", mod_consts.const_tuple_str_plain_ec_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ec_tuple) && "mod_consts.const_tuple_str_plain_ec_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_utils_tuple", mod_consts.const_tuple_str_plain_utils_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_utils_tuple) && "mod_consts.const_tuple_str_plain_utils_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_utils", mod_consts.const_str_plain_utils);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils) && "mod_consts.const_str_plain_utils");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b", mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b) && "mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple", mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple) && "mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5", mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5) && "mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple", mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple) && "mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CipherAlgorithm", mod_consts.const_str_plain_CipherAlgorithm);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_CipherAlgorithm) && "mod_consts.const_str_plain_CipherAlgorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588", mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588) && "mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_AES_tuple", mod_consts.const_tuple_str_plain_AES_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AES_tuple) && "mod_consts.const_tuple_str_plain_AES_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_AES", mod_consts.const_str_plain_AES);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_AES) && "mod_consts.const_str_plain_AES");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c", mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c) && "mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple", mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple) && "mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Mode", mod_consts.const_str_plain_Mode);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mode) && "mod_consts.const_str_plain_Mode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e", mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e) && "mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c", mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c) && "mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Backend", mod_consts.const_str_plain_Backend);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Backend) && "mod_consts.const_str_plain_Backend");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_31", mod_consts.const_int_pos_31);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_31) && "mod_consts.const_int_pos_31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHAKE128", mod_consts.const_str_plain_SHAKE128);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE128) && "mod_consts.const_str_plain_SHAKE128");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SHAKE256", mod_consts.const_str_plain_SHAKE256);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHAKE256) && "mod_consts.const_str_plain_SHAKE256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP224R1", mod_consts.const_str_plain_SECP224R1);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP224R1) && "mod_consts.const_str_plain_SECP224R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP256R1", mod_consts.const_str_plain_SECP256R1);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP256R1) && "mod_consts.const_str_plain_SECP256R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP384R1", mod_consts.const_str_plain_SECP384R1);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP384R1) && "mod_consts.const_str_plain_SECP384R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SECP521R1", mod_consts.const_str_plain_SECP521R1);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_SECP521R1) && "mod_consts.const_str_plain_SECP521R1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2048", mod_consts.const_int_pos_2048);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_2048) && "mod_consts.const_int_pos_2048");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_rsa_min_key_size", mod_consts.const_str_plain__fips_rsa_min_key_size);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_rsa_min_key_size) && "mod_consts.const_str_plain__fips_rsa_min_key_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_65537", mod_consts.const_int_pos_65537);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_65537) && "mod_consts.const_int_pos_65537");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_rsa_min_public_exponent", mod_consts.const_str_plain__fips_rsa_min_public_exponent);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_rsa_min_public_exponent) && "mod_consts.const_str_plain__fips_rsa_min_public_exponent");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_dsa_min_modulus", mod_consts.const_str_plain__fips_dsa_min_modulus);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_dsa_min_modulus) && "mod_consts.const_str_plain__fips_dsa_min_modulus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_dh_min_key_size", mod_consts.const_str_plain__fips_dh_min_key_size);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_dh_min_key_size) && "mod_consts.const_str_plain__fips_dh_min_key_size");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fips_dh_min_modulus", mod_consts.const_str_plain__fips_dh_min_modulus);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__fips_dh_min_modulus) && "mod_consts.const_str_plain__fips_dh_min_modulus");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb", mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb) && "mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502", mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502) && "mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b", mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b) && "mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___repr__", mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__) && "mod_consts.const_str_plain___repr__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6", mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6) && "mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04", mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04) && "mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_assert", mod_consts.const_str_plain_openssl_assert);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_assert) && "mod_consts.const_str_plain_openssl_assert");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3", mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3) && "mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__enable_fips", mod_consts.const_str_plain__enable_fips);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__enable_fips) && "mod_consts.const_str_plain__enable_fips");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790", mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790) && "mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7", mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7) && "mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261", mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261) && "mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_openssl_version_number", mod_consts.const_str_plain_openssl_version_number);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_openssl_version_number) && "mod_consts.const_str_plain_openssl_version_number");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd", mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd) && "mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4", mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4) && "mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133", mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133) && "mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740", mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740) && "mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6) && "mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_scrypt_supported", mod_consts.const_str_plain_scrypt_supported);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_scrypt_supported) && "mod_consts.const_str_plain_scrypt_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4", mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4) && "mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_argon2_supported", mod_consts.const_str_plain_argon2_supported);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_argon2_supported) && "mod_consts.const_str_plain_argon2_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd", mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd) && "mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hmac_supported", mod_consts.const_str_plain_hmac_supported);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_hmac_supported) && "mod_consts.const_str_plain_hmac_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d", mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d) && "mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce", mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce) && "mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443", mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443) && "mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155", mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155) && "mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__consume_errors", mod_consts.const_str_plain__consume_errors);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain__consume_errors) && "mod_consts.const_str_plain__consume_errors");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_24b4891737e24684660c780331402b9c", mod_consts.const_str_digest_24b4891737e24684660c780331402b9c);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_24b4891737e24684660c780331402b9c) && "mod_consts.const_str_digest_24b4891737e24684660c780331402b9c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef", mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef) && "mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a", mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a) && "mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10", mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10) && "mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rsa_encryption_supported", mod_consts.const_str_plain_rsa_encryption_supported);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa_encryption_supported) && "mod_consts.const_str_plain_rsa_encryption_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f", mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f) && "mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2", mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2) && "mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dsa_hash_supported", mod_consts.const_str_plain_dsa_hash_supported);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_dsa_hash_supported) && "mod_consts.const_str_plain_dsa_hash_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb", mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb) && "mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cmac_algorithm_supported", mod_consts.const_str_plain_cmac_algorithm_supported);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_cmac_algorithm_supported) && "mod_consts.const_str_plain_cmac_algorithm_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb", mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb) && "mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e", mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e) && "mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30", mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30) && "mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d", mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d) && "mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3", mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3) && "mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6", mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6) && "mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_01580852465674605f87ee1a697eb62f", mod_consts.const_dict_01580852465674605f87ee1a697eb62f);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_01580852465674605f87ee1a697eb62f) && "mod_consts.const_dict_01580852465674605f87ee1a697eb62f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68", mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68) && "mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574", mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574) && "mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dh_supported", mod_consts.const_str_plain_dh_supported);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_dh_supported) && "mod_consts.const_str_plain_dh_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506", mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506) && "mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dh_x942_serialization_supported", mod_consts.const_str_plain_dh_x942_serialization_supported);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_dh_x942_serialization_supported) && "mod_consts.const_str_plain_dh_x942_serialization_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c", mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c) && "mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x25519_supported", mod_consts.const_str_plain_x25519_supported);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_x25519_supported) && "mod_consts.const_str_plain_x25519_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5", mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5) && "mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_x448_supported", mod_consts.const_str_plain_x448_supported);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_x448_supported) && "mod_consts.const_str_plain_x448_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d", mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d) && "mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mlkem_supported", mod_consts.const_str_plain_mlkem_supported);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_mlkem_supported) && "mod_consts.const_str_plain_mlkem_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8", mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8) && "mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mldsa_supported", mod_consts.const_str_plain_mldsa_supported);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_mldsa_supported) && "mod_consts.const_str_plain_mldsa_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243", mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243) && "mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed25519_supported", mod_consts.const_str_plain_ed25519_supported);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_ed25519_supported) && "mod_consts.const_str_plain_ed25519_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1", mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1) && "mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ed448_supported", mod_consts.const_str_plain_ed448_supported);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_ed448_supported) && "mod_consts.const_str_plain_ed448_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166", mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166) && "mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ecdsa_deterministic_supported", mod_consts.const_str_plain_ecdsa_deterministic_supported);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_ecdsa_deterministic_supported) && "mod_consts.const_str_plain_ecdsa_deterministic_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384", mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384) && "mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poly1305_supported", mod_consts.const_str_plain_poly1305_supported);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_poly1305_supported) && "mod_consts.const_str_plain_poly1305_supported");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051", mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051) && "mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple", mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple) && "mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_backend", mod_consts.const_str_plain_backend);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_backend) && "mod_consts.const_str_plain_backend");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d", mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d) && "mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f", mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f) && "mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple", mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple", mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple", mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple", mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple", mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple", mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple", mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$AES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_AES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_AES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_AES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AES);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$Backend(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Backend);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Backend);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Backend, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Backend);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Backend, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Backend);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Backend);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Backend);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$CBC(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_CBC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CBC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CBC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CBC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CBC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_CBC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_CBC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CBC);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$MGF1(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_MGF1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MGF1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MGF1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MGF1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MGF1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_MGF1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_MGF1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MGF1);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$OAEP(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_OAEP);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OAEP);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OAEP, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OAEP);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OAEP, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_OAEP);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_OAEP);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OAEP);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$PKCS1v15(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS1v15);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PKCS1v15);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PKCS1v15, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PKCS1v15);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PKCS1v15, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS1v15);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS1v15);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS1v15);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$PSS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PSS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PSS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PSS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PSS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PSS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PSS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PSS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PSS);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$asym_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asym_utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asym_utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asym_utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asym_utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$binding(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_binding);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binding);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binding, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_binding);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_binding, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_binding);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_binding);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_binding);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$ec(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ec);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ec, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ec);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ec, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ec);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes);
    }

    return result;
}

static PyObject *module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_cryptography$hazmat$backends$openssl$backend->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_cryptography$hazmat$backends$openssl$backend->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_2c1d1baef39ddd4e9359c63b099ffe00;
static PyCodeObject *code_objects_bdd3d75097b7e406ecb068934a62feaf;
static PyCodeObject *code_objects_18f6dd226dc8a6a85710dcb68d0b6312;
static PyCodeObject *code_objects_e22881c6df22682e334ae27e9572f979;
static PyCodeObject *code_objects_4699e3f96cf012a04f26a1a706b96c8f;
static PyCodeObject *code_objects_31d4ab6f670099fa4fc00dfc5aeeb3ce;
static PyCodeObject *code_objects_7ab6531d636c442fde84ce8f3bd021b6;
static PyCodeObject *code_objects_e7fcb9a55f3319d82cf559c2d1f0b881;
static PyCodeObject *code_objects_8d2db1e6325e6871bf3c19f720f48c44;
static PyCodeObject *code_objects_0fc4211b58a512a7fef48b291e202416;
static PyCodeObject *code_objects_44285a55799d2eef7cab7dad653526d7;
static PyCodeObject *code_objects_fb7df168df39428b68ea7ced62483699;
static PyCodeObject *code_objects_7736524b521961dc29d933d1d4af3373;
static PyCodeObject *code_objects_3fe87a7e121e6d134464feae8a32b949;
static PyCodeObject *code_objects_e8a04ab8b92234e9c1c51310fbe97250;
static PyCodeObject *code_objects_b28fd29878997f29bbe61dfb241726a2;
static PyCodeObject *code_objects_f20c31e9ad810f1a3dbd6a1804e75bc6;
static PyCodeObject *code_objects_4d690d2b60038a64c13e5fe382e8de24;
static PyCodeObject *code_objects_bef0e9afd8039c55efb60a874b4cb7ee;
static PyCodeObject *code_objects_7e9049b803d161d70251c86832d94c5d;
static PyCodeObject *code_objects_aa89935c27ed2aa098b84737b9e93b4c;
static PyCodeObject *code_objects_9a94046dbf2fdcdbd73356b324e3d5f6;
static PyCodeObject *code_objects_118e3c214231b82085dd950a7bb027b0;
static PyCodeObject *code_objects_127407cc1653cc3b93ee3a7b500d1f6c;
static PyCodeObject *code_objects_4fc3948afc71bbcce607a7aca7ea7eaa;
static PyCodeObject *code_objects_6e3330d7ad20fa33f962ec56c41ee70d;
static PyCodeObject *code_objects_6755a3750ebe3c47aaf4918e641c61a7;
static PyCodeObject *code_objects_c459fba1b52b0b9caac6e2d64b95925c;
static PyCodeObject *code_objects_ea960d9040a260d24f0d3a37db69decd;
static PyCodeObject *code_objects_528414cbf1b669861fdf5368e2590232;
static PyCodeObject *code_objects_07d51b1286372434d7920b9072836106;
static PyCodeObject *code_objects_f3e8ad2ea18c6f2fc779e277ae1942a7;
static PyCodeObject *code_objects_57b09bea992ef81aee0e45032852db20;
static PyCodeObject *code_objects_2df0439434b114d69b94aa1b51d13a6d;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_8d008f4962ab695c17d45370adb9653d); CHECK_OBJECT(module_filename_obj);
code_objects_2c1d1baef39ddd4e9359c63b099ffe00 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f, mod_consts.const_str_digest_98add088badf87677d9b50744cfb647f, NULL, NULL, 0, 0, 0);
code_objects_bdd3d75097b7e406ecb068934a62feaf = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Backend, mod_consts.const_str_plain_Backend, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_18f6dd226dc8a6a85710dcb68d0b6312 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e22881c6df22682e334ae27e9572f979 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4699e3f96cf012a04f26a1a706b96c8f = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__consume_errors, mod_consts.const_str_digest_24b4891737e24684660c780331402b9c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_31d4ab6f670099fa4fc00dfc5aeeb3ce = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__enable_fips, mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7ab6531d636c442fde84ce8f3bd021b6 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__oaep_hash_supported, mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple, NULL, 2, 0, 0);
code_objects_e7fcb9a55f3319d82cf559c2d1f0b881 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_argon2_supported, mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8d2db1e6325e6871bf3c19f720f48c44 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cipher_supported, mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443, mod_consts.const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, NULL, 3, 0, 0);
code_objects_0fc4211b58a512a7fef48b291e202416 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cmac_algorithm_supported, mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple, NULL, 2, 0, 0);
code_objects_44285a55799d2eef7cab7dad653526d7 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dh_supported, mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fb7df168df39428b68ea7ced62483699 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dh_x942_serialization_supported, mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7736524b521961dc29d933d1d4af3373 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dsa_hash_supported, mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple, NULL, 2, 0, 0);
code_objects_3fe87a7e121e6d134464feae8a32b949 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dsa_supported, mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_e8a04ab8b92234e9c1c51310fbe97250 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ecdsa_deterministic_supported, mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b28fd29878997f29bbe61dfb241726a2 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ed25519_supported, mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f20c31e9ad810f1a3dbd6a1804e75bc6 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ed448_supported, mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4d690d2b60038a64c13e5fe382e8de24 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68, mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple, NULL, 3, 0, 0);
code_objects_bef0e9afd8039c55efb60a874b4cb7ee = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6, mod_consts.const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple, NULL, 3, 0, 0);
code_objects_7e9049b803d161d70251c86832d94c5d = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_elliptic_curve_supported, mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30, mod_consts.const_tuple_str_plain_self_str_plain_curve_tuple, NULL, 2, 0, 0);
code_objects_aa89935c27ed2aa098b84737b9e93b4c = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_hash_supported, mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple, NULL, 2, 0, 0);
code_objects_9a94046dbf2fdcdbd73356b324e3d5f6 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_hmac_supported, mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple, NULL, 2, 0, 0);
code_objects_118e3c214231b82085dd950a7bb027b0 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mldsa_supported, mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_127407cc1653cc3b93ee3a7b500d1f6c = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mlkem_supported, mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4fc3948afc71bbcce607a7aca7ea7eaa = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_openssl_assert, mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3, mod_consts.const_tuple_str_plain_self_str_plain_ok_tuple, NULL, 2, 0, 0);
code_objects_6e3330d7ad20fa33f962ec56c41ee70d = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_openssl_version_number, mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6755a3750ebe3c47aaf4918e641c61a7 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_openssl_version_text, mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c459fba1b52b0b9caac6e2d64b95925c = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_poly1305_supported, mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ea960d9040a260d24f0d3a37db69decd = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rsa_encryption_supported, mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f, mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple, NULL, 2, 0, 0);
code_objects_528414cbf1b669861fdf5368e2590232 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rsa_padding_supported, mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10, mod_consts.const_tuple_str_plain_self_str_plain_padding_tuple, NULL, 2, 0, 0);
code_objects_07d51b1286372434d7920b9072836106 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_scrypt_supported, mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f3e8ad2ea18c6f2fc779e277ae1942a7 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_signature_hash_supported, mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740, mod_consts.const_tuple_str_plain_self_str_plain_algorithm_tuple, NULL, 2, 0, 0);
code_objects_57b09bea992ef81aee0e45032852db20 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_x25519_supported, mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2df0439434b114d69b94aa1b51d13a6d = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_x448_supported, mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__29_ed25519_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_18f6dd226dc8a6a85710dcb68d0b6312, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__ = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_ass_attr_target_1;
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$binding(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binding);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__->m_frame.f_lineno = 70;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Binding);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__binding, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__binding);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ffi);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain__ffi, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__binding);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_ass_attr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_lib);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain__lib, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_ass_attr_target_4;
tmp_called_instance_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__->m_frame.f_lineno = 73;
tmp_ass_attr_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_fips_enabled);
if (tmp_ass_attr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_4, mod_consts.const_str_plain__fips_enabled, tmp_ass_attr_value_4);
CHECK_OBJECT(tmp_ass_attr_value_4);
Py_DECREF(tmp_ass_attr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__ == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__1___init__);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e22881c6df22682e334ae27e9572f979, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__ = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8545bd40457765a03d81ad6bb4ec7b44;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__->m_frame.f_lineno = 77;
tmp_format_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_openssl_version_text);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_397c2f4f9c1d8f19601a9357f0a6955e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
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


exception_lineno = 78;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7875eee35b00a39576a900499709b60d;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__legacy_provider_loaded);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
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


exception_lineno = 79;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_1c1aac06e06ca802c178a9d8ab3632bd;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__ == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__ = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ok = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert = MAKE_FUNCTION_FRAME(tstate, code_objects_4fc3948afc71bbcce607a7aca7ea7eaa, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$binding(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_binding);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ok);
tmp_args_element_value_1 = par_ok;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert->m_frame.f_lineno = 83;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__openssl_assert, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert,
    type_description_1,
    par_self,
    par_ok
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert);

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
CHECK_OBJECT(par_ok);
Py_DECREF(par_ok);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ok);
Py_DECREF(par_ok);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips = MAKE_FUNCTION_FRAME(tstate, code_objects_31d4ab6f670099fa4fc00dfc5aeeb3ce, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_enable_fips);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__providers);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips->m_frame.f_lineno = 88;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips->m_frame.f_lineno = 89;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_fips_enabled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "o";
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
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips->m_frame.f_lineno = 89;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 89;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_ass_attr_target_1;
tmp_called_instance_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips->m_frame.f_lineno = 90;
tmp_ass_attr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_fips_enabled);
if (tmp_ass_attr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain__fips_enabled, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text = MAKE_FUNCTION_FRAME(tstate, code_objects_6755a3750ebe3c47aaf4918e641c61a7, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text->m_frame.f_lineno = 99;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_openssl_version_text);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number = MAKE_FUNCTION_FRAME(tstate, code_objects_6e3330d7ad20fa33f962ec56c41ee70d, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number->m_frame.f_lineno = 102;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_openssl_version);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_aa89935c27ed2aa098b84737b9e93b4c, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 105;
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


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_algorithm);
tmp_isinstance_inst_1 = par_algorithm;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fips_hashes);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_hashes);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_algorithm);
tmp_args_element_value_1 = par_algorithm;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported->m_frame.f_lineno = 108;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hash_supported, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported,
    type_description_1,
    par_self,
    par_algorithm
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported);

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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_f3e8ad2ea18c6f2fc779e277ae1942a7, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 115;
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


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_algorithm);
tmp_isinstance_inst_1 = par_algorithm;
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SHA1);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_algorithm);
tmp_args_element_value_1 = par_algorithm;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported->m_frame.f_lineno = 117;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hash_supported, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported,
    type_description_1,
    par_self,
    par_algorithm
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported);

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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_07d51b1286372434d7920b9072836106, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 120;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_kdf);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Scrypt);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain_derive);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_e7fcb9a55f3319d82cf559c2d1f0b881, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 126;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_kdf);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Argon2id);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain_derive);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_9a94046dbf2fdcdbd73356b324e3d5f6, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 133;
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


exception_lineno = 133;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_algorithm);
tmp_isinstance_inst_1 = par_algorithm;
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SHA1);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 135;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_algorithm);
tmp_isinstance_inst_2 = par_algorithm;
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_MD5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = MAKE_TUPLE_EMPTY(tstate, 12);
{
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
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 0, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SHA1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 1, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SHA224);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 2, tmp_tuple_element_1);
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_SHA256);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 3, tmp_tuple_element_1);
tmp_expression_value_8 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_SHA384);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 4, tmp_tuple_element_1);
tmp_expression_value_9 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_SHA512);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 5, tmp_tuple_element_1);
tmp_expression_value_10 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_SHA512_224);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 6, tmp_tuple_element_1);
tmp_expression_value_11 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_SHA512_256);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 7, tmp_tuple_element_1);
tmp_expression_value_12 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_SHA3_224);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 8, tmp_tuple_element_1);
tmp_expression_value_13 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_SHA3_256);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 9, tmp_tuple_element_1);
tmp_expression_value_14 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_SHA3_384);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 10, tmp_tuple_element_1);
tmp_expression_value_15 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_SHA3_512);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 11, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_isinstance_cls_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_algorithm);
tmp_args_element_value_1 = par_algorithm;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported->m_frame.f_lineno = 153;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hash_supported, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported,
    type_description_1,
    par_self,
    par_algorithm
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported);

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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_cipher = python_pars[1];
PyObject *par_mode = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_8d2db1e6325e6871bf3c19f720f48c44, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 156;
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
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_cipher);
tmp_isinstance_inst_1 = par_cipher;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fips_ciphers);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ciphers);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cipher);
tmp_args_element_value_1 = par_cipher;
CHECK_OBJECT(par_mode);
tmp_args_element_value_2 = par_mode;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported->m_frame.f_lineno = 162;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_cipher_supported,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported,
    type_description_1,
    par_self,
    par_cipher,
    par_mode
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported);

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
CHECK_OBJECT(par_cipher);
Py_DECREF(par_cipher);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_cipher);
Py_DECREF(par_cipher);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors = MAKE_FUNCTION_FRAME(tstate, code_objects_4699e3f96cf012a04f26a1a706b96c8f, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors->m_frame.f_lineno = 165;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_capture_error_stack);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_7ab6531d636c442fde84ce8f3bd021b6, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 168;
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


exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_algorithm);
tmp_isinstance_inst_1 = par_algorithm;
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SHA1);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
{
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_algorithm);
tmp_isinstance_inst_2 = par_algorithm;
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SHA1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 0, tmp_tuple_element_1);
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SHA224);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 1, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SHA256);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 2, tmp_tuple_element_1);
tmp_expression_value_6 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SHA384);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 3, tmp_tuple_element_1);
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_SHA512);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_isinstance_cls_2, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_isinstance_cls_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported,
    type_description_1,
    par_self,
    par_algorithm
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported);

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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_padding = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_528414cbf1b669861fdf5368e2590232, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_padding);
tmp_isinstance_inst_1 = par_padding;
tmp_isinstance_cls_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$PKCS1v15(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PKCS1v15);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_padding);
tmp_isinstance_inst_2 = par_padding;
tmp_isinstance_cls_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$PSS(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PSS);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_padding);
tmp_expression_value_1 = par_padding;
tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__mgf);
if (tmp_isinstance_inst_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$MGF1(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MGF1);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_3);

exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_inst_3);
Py_DECREF(tmp_isinstance_inst_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_padding);
tmp_expression_value_3 = par_padding;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__salt_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$PSS(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PSS);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DIGEST_LENGTH);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_hash_supported);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_padding);
tmp_expression_value_7 = par_padding;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__mgf);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 196;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__algorithm);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 196;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported->m_frame.f_lineno = 196;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_padding);
tmp_isinstance_inst_4 = par_padding;
tmp_isinstance_cls_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$OAEP(tstate);
if (unlikely(tmp_isinstance_cls_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OAEP);
}

if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_padding);
tmp_expression_value_8 = par_padding;
tmp_isinstance_inst_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__mgf);
if (tmp_isinstance_inst_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_5 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$MGF1(tstate);
if (unlikely(tmp_isinstance_cls_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MGF1);
}

if (tmp_isinstance_cls_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_5);

exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
CHECK_OBJECT(tmp_isinstance_inst_5);
Py_DECREF(tmp_isinstance_inst_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_4 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_4 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
int tmp_and_left_truth_4;
PyObject *tmp_and_left_value_4;
PyObject *tmp_and_right_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__oaep_hash_supported);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_padding);
tmp_expression_value_11 = par_padding;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__mgf);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__algorithm);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 199;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported->m_frame.f_lineno = 198;
tmp_and_left_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_and_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_4);

exception_lineno = 198;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(tmp_and_left_value_4);
Py_DECREF(tmp_and_left_value_4);
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__oaep_hash_supported);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_padding);
tmp_expression_value_13 = par_padding;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__algorithm);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 200;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported->m_frame.f_lineno = 200;
tmp_and_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_and_right_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_return_value = tmp_and_left_value_4;
and_end_4:;
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_end_4:;
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported,
    type_description_1,
    par_self,
    par_padding
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported);

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
CHECK_OBJECT(par_padding);
Py_DECREF(par_padding);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_padding);
Py_DECREF(par_padding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_padding = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_ea960d9040a260d24f0d3a37db69decd, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 205;
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


exception_lineno = 205;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_padding);
tmp_isinstance_inst_1 = par_padding;
tmp_isinstance_cls_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$PKCS1v15(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PKCS1v15);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_padding);
tmp_args_element_value_1 = par_padding;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported->m_frame.f_lineno = 208;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_rsa_padding_supported, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported,
    type_description_1,
    par_self,
    par_padding
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported);

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
CHECK_OBJECT(par_padding);
Py_DECREF(par_padding);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_padding);
Py_DECREF(par_padding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_3fe87a7e121e6d134464feae8a32b949, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
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
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fips_enabled);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_7736524b521961dc29d933d1d4af3373, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported->m_frame.f_lineno = 217;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dsa_supported);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(par_algorithm);
tmp_args_element_value_1 = par_algorithm;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported->m_frame.f_lineno = 219;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_signature_hash_supported, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported,
    type_description_1,
    par_self,
    par_algorithm
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported);

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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_0fc4211b58a512a7fef48b291e202416, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cipher_supported);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_algorithm);
tmp_args_element_value_1 = par_algorithm;
tmp_called_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$CBC(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CBC);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = mod_consts.const_bytes_null;
CHECK_OBJECT(par_algorithm);
tmp_expression_value_2 = par_algorithm;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_block_size);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = BINARY_OPERATION_MULT_OBJECT_BYTES_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported->m_frame.f_lineno = 223;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported->m_frame.f_lineno = 222;
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


exception_lineno = 222;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported,
    type_description_1,
    par_self,
    par_algorithm
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported);

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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_curve = python_pars[1];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_7e9049b803d161d70251c86832d94c5d, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 227;
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


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_curve);
tmp_isinstance_inst_1 = par_curve;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fips_ecdh_curves);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
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
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ec);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_curve);
tmp_args_element_value_1 = par_curve;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported->m_frame.f_lineno = 232;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_curve_supported, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported,
    type_description_1,
    par_self,
    par_curve
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported);

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
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_signature_algorithm = python_pars[1];
PyObject *par_curve = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_bef0e9afd8039c55efb60a874b4cb7ee, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_signature_algorithm);
tmp_isinstance_inst_1 = par_signature_algorithm;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$ec(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ECDSA);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_curve);
tmp_args_element_value_1 = par_curve;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported->m_frame.f_lineno = 243;
tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_elliptic_curve_supported, tmp_args_element_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 243;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_signature_algorithm);
tmp_expression_value_2 = par_signature_algorithm;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_algorithm);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$asym_utils(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asym_utils);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Prehashed);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_hash_supported);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_signature_algorithm);
tmp_expression_value_5 = par_signature_algorithm;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_algorithm);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 245;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported->m_frame.f_lineno = 245;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported,
    type_description_1,
    par_self,
    par_signature_algorithm,
    par_curve
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported);

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
CHECK_OBJECT(par_signature_algorithm);
Py_DECREF(par_signature_algorithm);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_signature_algorithm);
Py_DECREF(par_signature_algorithm);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_algorithm = python_pars[1];
PyObject *par_curve = python_pars[2];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_4d690d2b60038a64c13e5fe382e8de24, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_curve);
tmp_args_element_value_1 = par_curve;
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported->m_frame.f_lineno = 251;
tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_elliptic_curve_supported, tmp_args_element_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_algorithm);
tmp_isinstance_inst_1 = par_algorithm;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$ec(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ECDH);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported,
    type_description_1,
    par_self,
    par_algorithm,
    par_curve
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported);

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
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_algorithm);
Py_DECREF(par_algorithm);
CHECK_OBJECT(par_curve);
Py_DECREF(par_curve);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_44285a55799d2eef7cab7dad653526d7, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_fb7df168df39428b68ea7ced62483699, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__lib);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Cryptography_HAS_EVP_PKEY_DHX);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = const_int_pos_1;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_57b09bea992ef81aee0e45032852db20, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported) == 2);

// Framed code:
{
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_2df0439434b114d69b94aa1b51d13a6d, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fips_enabled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 265;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
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
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
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
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_127407cc1653cc3b93ee3a7b500d1f6c, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 275;
type_description_1 = "o";
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
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 276;
type_description_1 = "o";
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
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 277;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_118e3c214231b82085dd950a7bb027b0, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 282;
type_description_1 = "o";
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
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 283;
type_description_1 = "o";
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
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_350_OR_GREATER);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_f20c31e9ad810f1a3dbd6a1804e75bc6, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_LIBRESSL);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
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
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_BORINGSSL);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
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
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_e8a04ab8b92234e9c1c51310fbe97250, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRYPTOGRAPHY_OPENSSL_320_OR_GREATER);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 299;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fips_enabled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported);

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


static PyObject *impl_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported)) {
    Py_XDECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported = MAKE_FUNCTION_FRAME(tstate, code_objects_c459fba1b52b0b9caac6e2d64b95925c, module_cryptography$hazmat$backends$openssl$backend, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported->m_type_description == NULL);
frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported = cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$rust_openssl(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rust_openssl);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CRYPTOGRAPHY_IS_AWSLC);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 304;
type_description_1 = "o";
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fips_enabled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported == cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported);
    cache_frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported = NULL;
}

assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported);

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



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported,
        mod_consts.const_str_plain_argon2_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6bd056b7a06c49341302199eaa87f4dd,
#endif
        code_objects_e7fcb9a55f3319d82cf559c2d1f0b881,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported,
        mod_consts.const_str_plain_hmac_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c25a9d4744406fb964f187bd16916d1d,
#endif
        code_objects_9a94046dbf2fdcdbd73356b324e3d5f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported,
        mod_consts.const_str_plain_cipher_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d9febf19af3ea80fded0c24983cce443,
#endif
        code_objects_8d2db1e6325e6871bf3c19f720f48c44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors,
        mod_consts.const_str_plain__consume_errors,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_24b4891737e24684660c780331402b9c,
#endif
        code_objects_4699e3f96cf012a04f26a1a706b96c8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported,
        mod_consts.const_str_plain__oaep_hash_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ed300742f7876237aff7c934c4e96aef,
#endif
        code_objects_7ab6531d636c442fde84ce8f3bd021b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported,
        mod_consts.const_str_plain_rsa_padding_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f54219a05b3803368ed2879f6545ff10,
#endif
        code_objects_528414cbf1b669861fdf5368e2590232,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported,
        mod_consts.const_str_plain_rsa_encryption_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b7bad041d9ac78f70f7a269f25ad0b2f,
#endif
        code_objects_ea960d9040a260d24f0d3a37db69decd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported,
        mod_consts.const_str_plain_dsa_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f1677a893cc8602687ce94488fb450c2,
#endif
        code_objects_3fe87a7e121e6d134464feae8a32b949,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported,
        mod_consts.const_str_plain_dsa_hash_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fda48f6f490f08c5ae462346481ed3cb,
#endif
        code_objects_7736524b521961dc29d933d1d4af3373,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported,
        mod_consts.const_str_plain_cmac_algorithm_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb62ec98a6b482e3b9eecf6f49b8a2fb,
#endif
        code_objects_0fc4211b58a512a7fef48b291e202416,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2f7da69daaf5311866ea3e23e0998502,
#endif
        code_objects_18f6dd226dc8a6a85710dcb68d0b6312,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported,
        mod_consts.const_str_plain_elliptic_curve_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c50260f3a1824dc5230a45bf509fd30,
#endif
        code_objects_7e9049b803d161d70251c86832d94c5d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported,
        mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_07191ad7c7ee66f440cc15d8ceedb5d6,
#endif
        code_objects_bef0e9afd8039c55efb60a874b4cb7ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported,
        mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2cacb6474a289bb19154680932d9b574,
#endif
        code_objects_4d690d2b60038a64c13e5fe382e8de24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported,
        mod_consts.const_str_plain_dh_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1d13fce19bff6b6df52a6c61a30f0506,
#endif
        code_objects_44285a55799d2eef7cab7dad653526d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported,
        mod_consts.const_str_plain_dh_x942_serialization_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_381abbeea773e35779d85be68a67c56c,
#endif
        code_objects_fb7df168df39428b68ea7ced62483699,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported,
        mod_consts.const_str_plain_x25519_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_49b7c7995119682a6fd3dcf9b585a4b5,
#endif
        code_objects_57b09bea992ef81aee0e45032852db20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported,
        mod_consts.const_str_plain_x448_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_13f2d4edcf5a494e25e01747185afe3d,
#endif
        code_objects_2df0439434b114d69b94aa1b51d13a6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported,
        mod_consts.const_str_plain_mlkem_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9a211b73e63741a7be46e335ee5ee1e8,
#endif
        code_objects_127407cc1653cc3b93ee3a7b500d1f6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported,
        mod_consts.const_str_plain_mldsa_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a90c5faa39f9bbaa9a01d491a6e3a243,
#endif
        code_objects_118e3c214231b82085dd950a7bb027b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__29_ed25519_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_ed25519_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3286638e2ba51d979d46324fe7fa20c1,
#endif
        code_objects_b28fd29878997f29bbe61dfb241726a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a424c05496d4072fb09fa9000622f1c6,
#endif
        code_objects_e22881c6df22682e334ae27e9572f979,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported,
        mod_consts.const_str_plain_ed448_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7de9e793fec61cc373d4282cff465166,
#endif
        code_objects_f20c31e9ad810f1a3dbd6a1804e75bc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported,
        mod_consts.const_str_plain_ecdsa_deterministic_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2954f2236339b800a281c2cfc4e8d384,
#endif
        code_objects_e8a04ab8b92234e9c1c51310fbe97250,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported,
        mod_consts.const_str_plain_poly1305_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_50c0be04e5c1255e81ff6288e951b051,
#endif
        code_objects_c459fba1b52b0b9caac6e2d64b95925c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert,
        mod_consts.const_str_plain_openssl_assert,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a3785fa714e15e4d3a5548d95f0693e3,
#endif
        code_objects_4fc3948afc71bbcce607a7aca7ea7eaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips,
        mod_consts.const_str_plain__enable_fips,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_58e69b20e86aedb31888faea260db790,
#endif
        code_objects_31d4ab6f670099fa4fc00dfc5aeeb3ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text,
        mod_consts.const_str_plain_openssl_version_text,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ef0d3509ab8362addbb73a34bfe7fa7,
#endif
        code_objects_6755a3750ebe3c47aaf4918e641c61a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_digest_f7b8fae3cd8388b1f1fba60cf4a31882,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number,
        mod_consts.const_str_plain_openssl_version_number,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e83b7e884edde7eb286517e02706f4fd,
#endif
        code_objects_6e3330d7ad20fa33f962ec56c41ee70d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported,
        mod_consts.const_str_plain_hash_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_acb113e09443cd1ce928cbe0fcb31133,
#endif
        code_objects_aa89935c27ed2aa098b84737b9e93b4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported,
        mod_consts.const_str_plain_signature_hash_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e82c8d649913e20a53ec5652c8143740,
#endif
        code_objects_f3e8ad2ea18c6f2fc779e277ae1942a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported,
        mod_consts.const_str_plain_scrypt_supported,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_95e699a92a6d6309a7d98f0f7f30eeb4,
#endif
        code_objects_07d51b1286372434d7920b9072836106,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_cryptography$hazmat$backends$openssl$backend,
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

static function_impl_code const function_table_cryptography$hazmat$backends$openssl$backend[] = {
impl_cryptography$hazmat$backends$openssl$backend$$$function__1___init__,
impl_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__,
impl_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert,
impl_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips,
impl_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text,
impl_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number,
impl_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors,
impl_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported,
impl_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported,
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

    return Nuitka_Function_GetFunctionState(function, function_table_cryptography$hazmat$backends$openssl$backend);
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
        module_cryptography$hazmat$backends$openssl$backend,
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
        function_table_cryptography$hazmat$backends$openssl$backend,
        sizeof(function_table_cryptography$hazmat$backends$openssl$backend) / sizeof(function_impl_code)
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
static char const *module_full_name = "cryptography.hazmat.backends.openssl.backend";
#endif

// Internal entry point for module code.
PyObject *module_code_cryptography$hazmat$backends$openssl$backend(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("cryptography$hazmat$backends$openssl$backend");

    // Store the module for future use.
    module_cryptography$hazmat$backends$openssl$backend = module;

    moduledict_cryptography$hazmat$backends$openssl$backend = MODULE_DICT(module_cryptography$hazmat$backends$openssl$backend);

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
        PRINT_STRING("cryptography$hazmat$backends$openssl$backend: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("cryptography$hazmat$backends$openssl$backend: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("cryptography$hazmat$backends$openssl$backend: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.backends.openssl.backend" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initcryptography$hazmat$backends$openssl$backend\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_cryptography$hazmat$backends$openssl$backend,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$openssl$backend,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_cryptography$hazmat$backends$openssl$backend,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$openssl$backend,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_cryptography$hazmat$backends$openssl$backend);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_cryptography$hazmat$backends$openssl$backend);
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

        UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2;
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_cryptography$hazmat$backends$openssl$backend = MAKE_MODULE_FRAME(code_objects_2c1d1baef39ddd4e9359c63b099ffe00, module_cryptography$hazmat$backends$openssl$backend);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_8079781454ad481b13cb6caedf4dbb9e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_openssl_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 7;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_openssl,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_openssl);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_rust_openssl, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_87f50f766f0662099c6808139cda5c51;
tmp_globals_arg_value_2 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_binding_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 8;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_binding,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_binding);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_binding, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
tmp_globals_arg_value_3 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_hashes_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 9;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_hashes,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_hashes);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_hashes, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_b4ea483018ff6c9646e3f512393f4c4a;
tmp_globals_arg_value_4 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_AsymmetricPadding_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 10;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_AsymmetricPadding,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_AsymmetricPadding);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_AsymmetricPadding, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
tmp_globals_arg_value_5 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ec_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 11;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_ec,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ec);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_ec, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_426349c7e201b358f2086eb3f7fb6f47;
tmp_globals_arg_value_6 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_utils_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 12;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_utils,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_utils);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_asym_utils, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_ab9b2f5b99442fa296cac0d8ff686f4b;
tmp_globals_arg_value_7 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_0246e47d74705c4a2fbffac5dbf23b6c_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 13;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_MGF1,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_MGF1);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_MGF1, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_OAEP,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_OAEP);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_OAEP, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_PSS,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_PSS);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PSS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_PKCS1v15,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_PKCS1v15);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_PKCS1v15, tmp_assign_source_16);
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
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_9af74ab7ec8186e2f6a1218dfc2da4e5;
tmp_globals_arg_value_8 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_CipherAlgorithm_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 19;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_CipherAlgorithm,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_CipherAlgorithm);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_CipherAlgorithm, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_87335604a4a83d266089f9a1aef4f588;
tmp_globals_arg_value_9 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_AES_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 22;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_AES,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_AES);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_AES, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_dad71bd336cb898ea2767fe5d1d92e3c;
tmp_globals_arg_value_10 = (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_CBC_str_plain_Mode_tuple;
tmp_level_value_10 = const_int_0;
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 25;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_CBC,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_CBC);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_CBC, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_cryptography$hazmat$backends$openssl$backend,
        mod_consts.const_str_plain_Mode,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Mode);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Mode, tmp_assign_source_21);
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
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_23;
}
// Tried code:
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_37711645c6333994760a86f2fa1c323c;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Backend;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_31;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_openssl;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, const_str_plain_name, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2 = MAKE_CLASS_FRAME(tstate, code_objects_bdd3d75097b7e406ecb068934a62feaf, module_cryptography$hazmat$backends$openssl$backend, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2, locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2);
assert(Py_REFCNT(frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$AES(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AES);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_dictset_value, 0, tmp_tuple_element_1);
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_ciphers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SHA224);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 12);
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
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_2);
tmp_expression_value_2 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SHA256);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_2);
tmp_expression_value_3 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_SHA384);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_2);
tmp_expression_value_4 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SHA512);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_2);
tmp_expression_value_5 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_SHA512_224);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_2);
tmp_expression_value_6 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_SHA512_256);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_2);
tmp_expression_value_7 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_SHA3_224);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 6, tmp_tuple_element_2);
tmp_expression_value_8 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_SHA3_256);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 7, tmp_tuple_element_2);
tmp_expression_value_9 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_SHA3_384);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 8, tmp_tuple_element_2);
tmp_expression_value_10 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_SHA3_512);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 9, tmp_tuple_element_2);
tmp_expression_value_11 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_SHAKE128);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 10, tmp_tuple_element_2);
tmp_expression_value_12 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$hashes(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashes);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_SHAKE256);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_dictset_value, 11, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_hashes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$ec(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_SECP224R1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_3);
tmp_expression_value_14 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$ec(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_SECP256R1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_3);
tmp_expression_value_15 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$ec(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_SECP384R1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_3);
tmp_expression_value_16 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$ec(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ec);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_SECP521R1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_ecdh_curves, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_int_pos_2048;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_rsa_min_key_size, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_65537;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_rsa_min_public_exponent, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
tmp_lshift_expr_left_1 = const_int_pos_1;
tmp_lshift_expr_right_1 = mod_consts.const_int_pos_2048;
tmp_dictset_value = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_dsa_min_modulus, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = mod_consts.const_int_pos_2048;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_dh_min_key_size, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_lshift_expr_left_2;
PyObject *tmp_lshift_expr_right_2;
tmp_lshift_expr_left_2 = const_int_pos_1;
tmp_lshift_expr_right_2 = DICT_GET_ITEM0(tstate, locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_dh_min_key_size);

if (unlikely(tmp_lshift_expr_right_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fips_dh_min_key_size);

exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_lshift_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dictset_value = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_2, tmp_lshift_expr_right_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__fips_dh_min_modulus, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__2___repr__(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6d650d49fba71a638dd7b8ebb6628e04);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__3_openssl_assert(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_openssl_assert, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__4__enable_fips(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__enable_fips, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__5_openssl_version_text(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_openssl_version_text, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__6_openssl_version_number(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_openssl_version_number, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__7_hash_supported(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_hash_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__8_signature_hash_supported(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_signature_hash_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__9_scrypt_supported(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_scrypt_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__10_argon2_supported(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_argon2_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__11_hmac_supported(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_hmac_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_bf9ac96a59f56a3885fbf3ac841a1dce);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__12_cipher_supported(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_cipher_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_ca06d19a2120f89fe0002d001bbc2155);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__13__consume_errors(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__consume_errors, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__14__oaep_hash_supported(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain__oaep_hash_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__15_rsa_padding_supported(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_rsa_padding_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_a8eb5fb4ed4b839d925e52d5901f349a);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__16_rsa_encryption_supported(tstate, tmp_annotations_16);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_rsa_encryption_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__17_dsa_supported(tstate, tmp_annotations_17);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_dsa_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_6a6ca73df98359aef3705dfc84983cd4);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__18_dsa_hash_supported(tstate, tmp_annotations_18);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_dsa_hash_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__19_cmac_algorithm_supported(tstate, tmp_annotations_19);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_cmac_algorithm_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_ce2f8d14b50f7cceb36888e1aed1108e);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__20_elliptic_curve_supported(tstate, tmp_annotations_20);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_elliptic_curve_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_aaf58ecfc37a9b7b015ac6724f89ea7d);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__21_elliptic_curve_signature_algorithm_supported(tstate, tmp_annotations_21);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_01580852465674605f87ee1a697eb62f);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__22_elliptic_curve_exchange_algorithm_supported(tstate, tmp_annotations_22);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_digest_19dba398fcfd0968a3203d943a394d68, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__23_dh_supported(tstate, tmp_annotations_23);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_dh_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__24_dh_x942_serialization_supported(tstate, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_dh_x942_serialization_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__25_x25519_supported(tstate, tmp_annotations_25);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_x25519_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__26_x448_supported(tstate, tmp_annotations_26);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_x448_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__27_mlkem_supported(tstate, tmp_annotations_27);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_mlkem_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__28_mldsa_supported(tstate, tmp_annotations_28);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_mldsa_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__29_ed25519_supported(tstate, tmp_annotations_29);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_ed25519_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_30;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__30_ed448_supported(tstate, tmp_annotations_30);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_ed448_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_31;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__31_ecdsa_deterministic_supported(tstate, tmp_annotations_31);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_ecdsa_deterministic_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_32;
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_cryptography$hazmat$backends$openssl$backend$$$function__32_poly1305_supported(tstate, tmp_annotations_32);

tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain_poly1305_supported, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_e0114b091e103d386d29251d1bf5d965_tuple;
tmp_result = DICT_SET_ITEM(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_11 = mod_consts.const_str_plain_Backend;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_5;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_24 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31);
locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31);
locals_cryptography$hazmat$backends$openssl$backend$$$class__1_Backend_31 = NULL;
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
exception_lineno = 31;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_Backend, tmp_assign_source_24);
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
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_cryptography$hazmat$backends$openssl$backend$Backend(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame.f_lineno = 309;
tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)mod_consts.const_str_plain_backend, tmp_assign_source_26);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_cryptography$hazmat$backends$openssl$backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_cryptography$hazmat$backends$openssl$backend->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_cryptography$hazmat$backends$openssl$backend, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_cryptography$hazmat$backends$openssl$backend);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("cryptography$hazmat$backends$openssl$backend", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "cryptography.hazmat.backends.openssl.backend" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_cryptography$hazmat$backends$openssl$backend);
    return module_cryptography$hazmat$backends$openssl$backend;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_cryptography$hazmat$backends$openssl$backend, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("cryptography$hazmat$backends$openssl$backend", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
