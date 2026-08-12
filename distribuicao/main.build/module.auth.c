/* Generated code for Python module 'auth'
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



/* The "module_auth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_auth;
PyDictObject *moduledict_auth;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_with_suffix;
PyObject *const_str_plain_suffix;
PyObject *const_str_digest_0cfde35eafed0a63b6e1b10068f763da;
PyObject *const_str_plain_write_text;
PyObject *const_str_plain_json;
PyObject *const_str_plain_dumps;
PyObject *const_tuple_int_pos_2_tuple;
PyObject *const_tuple_str_plain_indent_tuple;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_tuple_str_plain_encoding_tuple;
PyObject *const_str_plain_replace;
PyObject *const_str_plain_hashlib;
PyObject *const_str_plain_pbkdf2_hmac;
PyObject *const_str_plain_sha256;
PyObject *const_str_plain_encode;
PyObject *const_str_plain__password_digest;
PyObject *const_str_plain_PBKDF2_ITERATIONS;
PyObject *const_str_plain_Fernet;
PyObject *const_str_plain_base64;
PyObject *const_str_plain_urlsafe_b64encode;
PyObject *const_str_plain_create_string_buffer;
PyObject *const_str_plain__DataBlob;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_POINTER;
PyObject *const_str_plain_c_byte;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_crypt32;
PyObject *const_str_plain_CryptProtectData;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_StudyHotkey;
PyObject *const_str_plain_WinError;
PyObject *const_str_plain_string_at;
PyObject *const_str_plain_pbData;
PyObject *const_str_plain_cbData;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_LocalFree;
PyObject *const_str_plain_CryptUnprotectData;
PyObject *const_str_plain_strip;
PyObject *const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae;
PyObject *const_str_plain_verify_password;
PyObject *const_str_digest_f1845b779502b5f0fcdde8114f643f2d;
PyObject *const_str_plain_secrets;
PyObject *const_str_plain_token_bytes;
PyObject *const_tuple_int_pos_16_tuple;
PyObject *const_str_plain__fernet_for_password;
PyObject *const_str_plain_encrypt;
PyObject *const_str_plain__write_json;
PyObject *const_str_plain_ENCRYPTED_API_KEY_FILE;
PyObject *const_str_plain_version;
PyObject *const_str_plain_salt;
PyObject *const_str_plain_hex;
PyObject *const_str_plain_token;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_plain_ascii_tuple;
PyObject *const_str_plain_LOCAL_API_KEY_FILE;
PyObject *const_str_plain_unlink;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_missing_ok_tuple;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_read_text;
PyObject *const_str_plain_fromhex;
PyObject *const_str_plain_decrypt;
PyObject *const_str_plain_InvalidToken;
PyObject *const_str_plain_b64decode;
PyObject *const_str_plain_read_bytes;
PyObject *const_tuple_str_plain_validate_tuple;
PyObject *const_str_plain__dpapi_unprotect;
PyObject *const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple;
PyObject *const_str_plain_PASSWORD_FILE;
PyObject *const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple;
PyObject *const_tuple_type_OSError_type_ValueError_type_TypeError_tuple;
PyObject *const_str_plain_data;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc;
PyObject *const_str_plain__load_password_data;
PyObject *const_str_plain_digest;
PyObject *const_str_plain_iterations;
PyObject *const_tuple_type_ValueError_type_TypeError_tuple;
PyObject *const_str_plain_hmac;
PyObject *const_str_plain_compare_digest;
PyObject *const_str_digest_7daf869e169a8de1967278e914b05e12;
PyObject *const_str_plain_password_is_configured;
PyObject *const_str_digest_de389e994677b865e42aedf8c7b04bdd;
PyObject *const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe;
PyObject *const_str_plain__decrypt_distribution_api_key;
PyObject *const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22;
PyObject *const_str_plain_algorithm;
PyObject *const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd;
PyObject *const_str_plain_ACTIVATION_FILE;
PyObject *const_str_plain_protect_api_key_for_distribution;
PyObject *const_str_plain_winreg;
PyObject *const_str_plain_KEY_READ;
PyObject *const_str_plain_KEY_WOW64_64KEY;
PyObject *const_str_plain_OpenKey;
PyObject *const_str_plain_HKEY_LOCAL_MACHINE;
PyObject *const_str_digest_783148019a233db2319321a727670861;
PyObject *const_str_plain_QueryValueEx;
PyObject *const_str_plain_MachineGuid;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_getenv;
PyObject *const_tuple_str_plain_COMPUTERNAME_str_empty_tuple;
PyObject *const_str_chr_124;
PyObject *const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple;
PyObject *const_str_plain__machine_source;
PyObject *const_str_plain_hexdigest;
PyObject *const_str_plain_new;
PyObject *const_str_plain_password_missing;
PyObject *const_str_plain_not_activated;
PyObject *const_str_plain_machine;
PyObject *const_str_plain_signature;
PyObject *const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple;
PyObject *const_str_plain_invalid;
PyObject *const_str_plain_machine_fingerprint;
PyObject *const_str_plain_other_machine;
PyObject *const_str_plain__activation_signature;
PyObject *const_str_plain_active;
PyObject *const_str_plain__dpapi_protect;
PyObject *const_str_plain_write_bytes;
PyObject *const_str_plain_b64encode;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_os;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_wintypes;
PyObject *const_str_digest_06f332e3369e80d912dd88e2445816a8;
PyObject *const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple;
PyObject *const_str_plain_resolve;
PyObject *const_str_plain_APP_DIR;
PyObject *const_str_digest_5cf511b3664ab68967c163065128d28c;
PyObject *const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd;
PyObject *const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08;
PyObject *const_str_digest_2265b2d5437238fdefd0baca489553e7;
PyObject *const_int_pos_600000;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain_auth;
PyObject *const_int_pos_27;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_DWORD;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_return;
PyObject *const_dict_91ecfe7f6960f91701e08deaa204abc7;
PyObject *const_str_plain_password;
PyObject *const_dict_4022b213dba2d6144a0034340d8eb8c5;
PyObject *const_dict_1a925f1dcceb872c7b37029868bfb87d;
PyObject *const_dict_c20d9735199c0b3447c17ca668338c1a;
PyObject *const_dict_ba22db58249aba2a980f7e215437b978;
PyObject *const_str_plain_load_protected_api_key;
PyObject *const_dict_43df417baa298f88f5321004d6433e0d;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_dict_003e8b6dc113493f43225f637c88d7a2;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_e70cc75a405f0670fb5b2c9897b5381e;
PyObject *const_str_plain_configure_password;
PyObject *const_dict_b48995041e088ee2ec6b2f53b214719a;
PyObject *const_str_plain_activation_status;
PyObject *const_str_plain_activate;
PyObject *const_str_digest_d8a2091b2328de0879576cce7cdf4f59;
PyObject *const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple;
PyObject *const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple;
PyObject *const_tuple_575017845c8a7fb7517287daddac446c_tuple;
PyObject *const_tuple_e066386e348b7b45dff19affc6b62073_tuple;
PyObject *const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple;
PyObject *const_tuple_str_plain_data_tuple;
PyObject *const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple;
PyObject *const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple;
PyObject *const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple;
PyObject *const_tuple_7e0967df723922b8fdc78149821683ee_tuple;
PyObject *const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple;
PyObject *const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple;
PyObject *const_tuple_str_plain_protected_tuple;
PyObject *const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple;
PyObject *const_tuple_5f0dcc2f72290ce339487123163c8096_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[181];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("auth"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 181) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 181 values, got %d\n",
                    UN_TRANSLATE("auth"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_with_suffix", mod_consts.const_str_plain_with_suffix);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_suffix);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suffix", mod_consts.const_str_plain_suffix);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_suffix);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da", mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_text", mod_consts.const_str_plain_write_text);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_text);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dumps", mod_consts.const_str_plain_dumps);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_indent_tuple", mod_consts.const_tuple_str_plain_indent_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_indent_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashlib", mod_consts.const_str_plain_hashlib);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pbkdf2_hmac", mod_consts.const_str_plain_pbkdf2_hmac);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_pbkdf2_hmac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha256", mod_consts.const_str_plain_sha256);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_sha256);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__password_digest", mod_consts.const_str_plain__password_digest);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__password_digest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PBKDF2_ITERATIONS", mod_consts.const_str_plain_PBKDF2_ITERATIONS);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_PBKDF2_ITERATIONS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fernet", mod_consts.const_str_plain_Fernet);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_Fernet);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsafe_b64encode", mod_consts.const_str_plain_urlsafe_b64encode);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_string_buffer", mod_consts.const_str_plain_create_string_buffer);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_string_buffer);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DataBlob", mod_consts.const_str_plain__DataBlob);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__DataBlob);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_byte", mod_consts.const_str_plain_c_byte);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_byte);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crypt32", mod_consts.const_str_plain_crypt32);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_crypt32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CryptProtectData", mod_consts.const_str_plain_CryptProtectData);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_CryptProtectData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StudyHotkey", mod_consts.const_str_plain_StudyHotkey);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_StudyHotkey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WinError", mod_consts.const_str_plain_WinError);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_WinError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_string_at", mod_consts.const_str_plain_string_at);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_string_at);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pbData", mod_consts.const_str_plain_pbData);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_pbData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cbData", mod_consts.const_str_plain_cbData);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_cbData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kernel32", mod_consts.const_str_plain_kernel32);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocalFree", mod_consts.const_str_plain_LocalFree);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalFree);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CryptUnprotectData", mod_consts.const_str_plain_CryptUnprotectData);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_CryptUnprotectData);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip", mod_consts.const_str_plain_strip);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae", mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify_password", mod_consts.const_str_plain_verify_password);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify_password);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d", mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secrets", mod_consts.const_str_plain_secrets);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_secrets);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token_bytes", mod_consts.const_str_plain_token_bytes);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_16_tuple", mod_consts.const_tuple_int_pos_16_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fernet_for_password", mod_consts.const_str_plain__fernet_for_password);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__fernet_for_password);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt", mod_consts.const_str_plain_encrypt);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__write_json", mod_consts.const_str_plain__write_json);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__write_json);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE", mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_salt", mod_consts.const_str_plain_salt);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_salt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_hex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token", mod_consts.const_str_plain_token);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LOCAL_API_KEY_FILE", mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unlink", mod_consts.const_str_plain_unlink);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_unlink);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_missing_ok_tuple", mod_consts.const_tuple_str_plain_missing_ok_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_missing_ok_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_loads", mod_consts.const_str_plain_loads);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_text", mod_consts.const_str_plain_read_text);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_text);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fromhex", mod_consts.const_str_plain_fromhex);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_fromhex);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt", mod_consts.const_str_plain_decrypt);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidToken", mod_consts.const_str_plain_InvalidToken);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidToken);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64decode", mod_consts.const_str_plain_b64decode);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_bytes", mod_consts.const_str_plain_read_bytes);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_validate_tuple", mod_consts.const_tuple_str_plain_validate_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validate_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dpapi_unprotect", mod_consts.const_str_plain__dpapi_unprotect);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__dpapi_unprotect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple", mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PASSWORD_FILE", mod_consts.const_str_plain_PASSWORD_FILE);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_PASSWORD_FILE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple", mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple", mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc", mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__load_password_data", mod_consts.const_str_plain__load_password_data);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_password_data);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_digest", mod_consts.const_str_plain_digest);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_digest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iterations", mod_consts.const_str_plain_iterations);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ValueError_type_TypeError_tuple", mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hmac", mod_consts.const_str_plain_hmac);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_hmac);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compare_digest", mod_consts.const_str_plain_compare_digest);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_compare_digest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12", mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password_is_configured", mod_consts.const_str_plain_password_is_configured);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_password_is_configured);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd", mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe", mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decrypt_distribution_api_key", mod_consts.const_str_plain__decrypt_distribution_api_key);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__decrypt_distribution_api_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22", mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithm", mod_consts.const_str_plain_algorithm);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd", mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ACTIVATION_FILE", mod_consts.const_str_plain_ACTIVATION_FILE);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_ACTIVATION_FILE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_protect_api_key_for_distribution", mod_consts.const_str_plain_protect_api_key_for_distribution);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_protect_api_key_for_distribution);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_winreg", mod_consts.const_str_plain_winreg);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_winreg);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_READ", mod_consts.const_str_plain_KEY_READ);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_READ);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_WOW64_64KEY", mod_consts.const_str_plain_KEY_WOW64_64KEY);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_WOW64_64KEY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpenKey", mod_consts.const_str_plain_OpenKey);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenKey);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HKEY_LOCAL_MACHINE", mod_consts.const_str_plain_HKEY_LOCAL_MACHINE);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_LOCAL_MACHINE);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_783148019a233db2319321a727670861", mod_consts.const_str_digest_783148019a233db2319321a727670861);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_783148019a233db2319321a727670861);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QueryValueEx", mod_consts.const_str_plain_QueryValueEx);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_QueryValueEx);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MachineGuid", mod_consts.const_str_plain_MachineGuid);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_MachineGuid);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getenv", mod_consts.const_str_plain_getenv);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_getenv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple", mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_124", mod_consts.const_str_chr_124);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_chr_124);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple", mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__machine_source", mod_consts.const_str_plain__machine_source);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain__machine_source);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hexdigest", mod_consts.const_str_plain_hexdigest);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password_missing", mod_consts.const_str_plain_password_missing);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_password_missing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_not_activated", mod_consts.const_str_plain_not_activated);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_activated);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_machine", mod_consts.const_str_plain_machine);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_machine);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_signature", mod_consts.const_str_plain_signature);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple", mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invalid", mod_consts.const_str_plain_invalid);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_invalid);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_machine_fingerprint", mod_consts.const_str_plain_machine_fingerprint);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_machine_fingerprint);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_other_machine", mod_consts.const_str_plain_other_machine);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_other_machine);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__activation_signature", mod_consts.const_str_plain__activation_signature);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__activation_signature);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_active", mod_consts.const_str_plain_active);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_active);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dpapi_protect", mod_consts.const_str_plain__dpapi_protect);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__dpapi_protect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_bytes", mod_consts.const_str_plain_write_bytes);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64encode", mod_consts.const_str_plain_b64encode);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Path", mod_consts.const_str_plain_Path);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8", mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple", mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve", mod_consts.const_str_plain_resolve);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_APP_DIR", mod_consts.const_str_plain_APP_DIR);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_APP_DIR);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c", mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd", mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08", mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7", mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_600000", mod_consts.const_int_pos_600000);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_600000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auth", mod_consts.const_str_plain_auth);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_return", mod_consts.const_str_plain_return);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7", mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password", mod_consts.const_str_plain_password);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_password);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5", mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d", mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a", mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ba22db58249aba2a980f7e215437b978", mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_protected_api_key", mod_consts.const_str_plain_load_protected_api_key);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_protected_api_key);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_43df417baa298f88f5321004d6433e0d", mod_consts.const_dict_43df417baa298f88f5321004d6433e0d);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_43df417baa298f88f5321004d6433e0d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1", mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2", mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e", mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_configure_password", mod_consts.const_str_plain_configure_password);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_configure_password);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a", mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activation_status", mod_consts.const_str_plain_activation_status);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_activation_status);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activate", mod_consts.const_str_plain_activate);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_activate);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59", mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple", mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7", mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple", mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple", mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple", mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple", mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_data_tuple", mod_consts.const_tuple_str_plain_data_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple", mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple", mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple", mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple", mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple", mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple", mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_protected_tuple", mod_consts.const_tuple_str_plain_protected_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_protected_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple", mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple", mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple);
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
void checkModuleConstants_auth(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_with_suffix", mod_consts.const_str_plain_with_suffix);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_suffix) && "mod_consts.const_str_plain_with_suffix");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_suffix", mod_consts.const_str_plain_suffix);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_suffix) && "mod_consts.const_str_plain_suffix");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da", mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da) && "mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_text", mod_consts.const_str_plain_write_text);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_text) && "mod_consts.const_str_plain_write_text");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_json) && "mod_consts.const_str_plain_json");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dumps", mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps) && "mod_consts.const_str_plain_dumps");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_2_tuple", mod_consts.const_tuple_int_pos_2_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_2_tuple) && "mod_consts.const_tuple_int_pos_2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_indent_tuple", mod_consts.const_tuple_str_plain_indent_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_indent_tuple) && "mod_consts.const_tuple_str_plain_indent_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple) && "mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_encoding_tuple", mod_consts.const_tuple_str_plain_encoding_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_encoding_tuple) && "mod_consts.const_tuple_str_plain_encoding_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_replace", mod_consts.const_str_plain_replace);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace) && "mod_consts.const_str_plain_replace");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hashlib", mod_consts.const_str_plain_hashlib);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_hashlib) && "mod_consts.const_str_plain_hashlib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pbkdf2_hmac", mod_consts.const_str_plain_pbkdf2_hmac);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_pbkdf2_hmac) && "mod_consts.const_str_plain_pbkdf2_hmac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sha256", mod_consts.const_str_plain_sha256);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_sha256) && "mod_consts.const_str_plain_sha256");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__password_digest", mod_consts.const_str_plain__password_digest);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__password_digest) && "mod_consts.const_str_plain__password_digest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PBKDF2_ITERATIONS", mod_consts.const_str_plain_PBKDF2_ITERATIONS);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_PBKDF2_ITERATIONS) && "mod_consts.const_str_plain_PBKDF2_ITERATIONS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Fernet", mod_consts.const_str_plain_Fernet);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_Fernet) && "mod_consts.const_str_plain_Fernet");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64) && "mod_consts.const_str_plain_base64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlsafe_b64encode", mod_consts.const_str_plain_urlsafe_b64encode);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlsafe_b64encode) && "mod_consts.const_str_plain_urlsafe_b64encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_create_string_buffer", mod_consts.const_str_plain_create_string_buffer);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_string_buffer) && "mod_consts.const_str_plain_create_string_buffer");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__DataBlob", mod_consts.const_str_plain__DataBlob);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__DataBlob) && "mod_consts.const_str_plain__DataBlob");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cast", mod_consts.const_str_plain_cast);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast) && "mod_consts.const_str_plain_cast");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POINTER", mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER) && "mod_consts.const_str_plain_POINTER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_c_byte", mod_consts.const_str_plain_c_byte);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_byte) && "mod_consts.const_str_plain_c_byte");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_windll", mod_consts.const_str_plain_windll);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll) && "mod_consts.const_str_plain_windll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_crypt32", mod_consts.const_str_plain_crypt32);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_crypt32) && "mod_consts.const_str_plain_crypt32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CryptProtectData", mod_consts.const_str_plain_CryptProtectData);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_CryptProtectData) && "mod_consts.const_str_plain_CryptProtectData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_byref", mod_consts.const_str_plain_byref);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref) && "mod_consts.const_str_plain_byref");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StudyHotkey", mod_consts.const_str_plain_StudyHotkey);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_StudyHotkey) && "mod_consts.const_str_plain_StudyHotkey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_WinError", mod_consts.const_str_plain_WinError);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_WinError) && "mod_consts.const_str_plain_WinError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_string_at", mod_consts.const_str_plain_string_at);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_string_at) && "mod_consts.const_str_plain_string_at");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pbData", mod_consts.const_str_plain_pbData);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_pbData) && "mod_consts.const_str_plain_pbData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_cbData", mod_consts.const_str_plain_cbData);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_cbData) && "mod_consts.const_str_plain_cbData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_kernel32", mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32) && "mod_consts.const_str_plain_kernel32");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LocalFree", mod_consts.const_str_plain_LocalFree);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalFree) && "mod_consts.const_str_plain_LocalFree");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CryptUnprotectData", mod_consts.const_str_plain_CryptUnprotectData);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_CryptUnprotectData) && "mod_consts.const_str_plain_CryptUnprotectData");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_strip", mod_consts.const_str_plain_strip);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip) && "mod_consts.const_str_plain_strip");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae", mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae) && "mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_verify_password", mod_consts.const_str_plain_verify_password);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify_password) && "mod_consts.const_str_plain_verify_password");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d", mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d) && "mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_secrets", mod_consts.const_str_plain_secrets);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_secrets) && "mod_consts.const_str_plain_secrets");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token_bytes", mod_consts.const_str_plain_token_bytes);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_bytes) && "mod_consts.const_str_plain_token_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_pos_16_tuple", mod_consts.const_tuple_int_pos_16_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_16_tuple) && "mod_consts.const_tuple_int_pos_16_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fernet_for_password", mod_consts.const_str_plain__fernet_for_password);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__fernet_for_password) && "mod_consts.const_str_plain__fernet_for_password");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encrypt", mod_consts.const_str_plain_encrypt);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt) && "mod_consts.const_str_plain_encrypt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__write_json", mod_consts.const_str_plain__write_json);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__write_json) && "mod_consts.const_str_plain__write_json");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE", mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE) && "mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_version", mod_consts.const_str_plain_version);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_version) && "mod_consts.const_str_plain_version");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_salt", mod_consts.const_str_plain_salt);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_salt) && "mod_consts.const_str_plain_salt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hex", mod_consts.const_str_plain_hex);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_hex) && "mod_consts.const_str_plain_hex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token", mod_consts.const_str_plain_token);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_token) && "mod_consts.const_str_plain_token");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_ascii_tuple", mod_consts.const_tuple_str_plain_ascii_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ascii_tuple) && "mod_consts.const_tuple_str_plain_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_LOCAL_API_KEY_FILE", mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_LOCAL_API_KEY_FILE) && "mod_consts.const_str_plain_LOCAL_API_KEY_FILE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unlink", mod_consts.const_str_plain_unlink);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_unlink) && "mod_consts.const_str_plain_unlink");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_true_tuple", mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple) && "mod_consts.const_tuple_true_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_missing_ok_tuple", mod_consts.const_tuple_str_plain_missing_ok_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_missing_ok_tuple) && "mod_consts.const_tuple_str_plain_missing_ok_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_loads", mod_consts.const_str_plain_loads);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads) && "mod_consts.const_str_plain_loads");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_text", mod_consts.const_str_plain_read_text);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_text) && "mod_consts.const_str_plain_read_text");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fromhex", mod_consts.const_str_plain_fromhex);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_fromhex) && "mod_consts.const_str_plain_fromhex");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decrypt", mod_consts.const_str_plain_decrypt);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt) && "mod_consts.const_str_plain_decrypt");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidToken", mod_consts.const_str_plain_InvalidToken);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidToken) && "mod_consts.const_str_plain_InvalidToken");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64decode", mod_consts.const_str_plain_b64decode);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64decode) && "mod_consts.const_str_plain_b64decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_read_bytes", mod_consts.const_str_plain_read_bytes);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_bytes) && "mod_consts.const_str_plain_read_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_validate_tuple", mod_consts.const_tuple_str_plain_validate_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validate_tuple) && "mod_consts.const_tuple_str_plain_validate_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dpapi_unprotect", mod_consts.const_str_plain__dpapi_unprotect);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__dpapi_unprotect) && "mod_consts.const_str_plain__dpapi_unprotect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple", mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple) && "mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_PASSWORD_FILE", mod_consts.const_str_plain_PASSWORD_FILE);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_PASSWORD_FILE) && "mod_consts.const_str_plain_PASSWORD_FILE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple", mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple) && "mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple", mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple) && "mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_data", mod_consts.const_str_plain_data);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_data) && "mod_consts.const_str_plain_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_genexpr", mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr) && "mod_consts.const_str_angle_genexpr");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc", mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc) && "mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__load_password_data", mod_consts.const_str_plain__load_password_data);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_password_data) && "mod_consts.const_str_plain__load_password_data");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_digest", mod_consts.const_str_plain_digest);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_digest) && "mod_consts.const_str_plain_digest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_iterations", mod_consts.const_str_plain_iterations);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterations) && "mod_consts.const_str_plain_iterations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_ValueError_type_TypeError_tuple", mod_consts.const_tuple_type_ValueError_type_TypeError_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_type_ValueError_type_TypeError_tuple) && "mod_consts.const_tuple_type_ValueError_type_TypeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hmac", mod_consts.const_str_plain_hmac);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_hmac) && "mod_consts.const_str_plain_hmac");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compare_digest", mod_consts.const_str_plain_compare_digest);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_compare_digest) && "mod_consts.const_str_plain_compare_digest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12", mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12) && "mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password_is_configured", mod_consts.const_str_plain_password_is_configured);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_password_is_configured) && "mod_consts.const_str_plain_password_is_configured");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd", mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd) && "mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe", mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe) && "mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__decrypt_distribution_api_key", mod_consts.const_str_plain__decrypt_distribution_api_key);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__decrypt_distribution_api_key) && "mod_consts.const_str_plain__decrypt_distribution_api_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22", mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22) && "mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_algorithm", mod_consts.const_str_plain_algorithm);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_algorithm) && "mod_consts.const_str_plain_algorithm");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd", mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd) && "mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ACTIVATION_FILE", mod_consts.const_str_plain_ACTIVATION_FILE);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_ACTIVATION_FILE) && "mod_consts.const_str_plain_ACTIVATION_FILE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_protect_api_key_for_distribution", mod_consts.const_str_plain_protect_api_key_for_distribution);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_protect_api_key_for_distribution) && "mod_consts.const_str_plain_protect_api_key_for_distribution");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_winreg", mod_consts.const_str_plain_winreg);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_winreg) && "mod_consts.const_str_plain_winreg");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_READ", mod_consts.const_str_plain_KEY_READ);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_READ) && "mod_consts.const_str_plain_KEY_READ");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_KEY_WOW64_64KEY", mod_consts.const_str_plain_KEY_WOW64_64KEY);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_WOW64_64KEY) && "mod_consts.const_str_plain_KEY_WOW64_64KEY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_OpenKey", mod_consts.const_str_plain_OpenKey);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenKey) && "mod_consts.const_str_plain_OpenKey");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HKEY_LOCAL_MACHINE", mod_consts.const_str_plain_HKEY_LOCAL_MACHINE);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_HKEY_LOCAL_MACHINE) && "mod_consts.const_str_plain_HKEY_LOCAL_MACHINE");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_783148019a233db2319321a727670861", mod_consts.const_str_digest_783148019a233db2319321a727670861);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_783148019a233db2319321a727670861) && "mod_consts.const_str_digest_783148019a233db2319321a727670861");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_QueryValueEx", mod_consts.const_str_plain_QueryValueEx);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_QueryValueEx) && "mod_consts.const_str_plain_QueryValueEx");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MachineGuid", mod_consts.const_str_plain_MachineGuid);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_MachineGuid) && "mod_consts.const_str_plain_MachineGuid");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_tuple", mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_getenv", mod_consts.const_str_plain_getenv);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_getenv) && "mod_consts.const_str_plain_getenv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple", mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple) && "mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_124", mod_consts.const_str_chr_124);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_chr_124) && "mod_consts.const_str_chr_124");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple", mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple) && "mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__machine_source", mod_consts.const_str_plain__machine_source);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain__machine_source) && "mod_consts.const_str_plain__machine_source");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_hexdigest", mod_consts.const_str_plain_hexdigest);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_hexdigest) && "mod_consts.const_str_plain_hexdigest");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_new", mod_consts.const_str_plain_new);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_new) && "mod_consts.const_str_plain_new");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password_missing", mod_consts.const_str_plain_password_missing);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_password_missing) && "mod_consts.const_str_plain_password_missing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_not_activated", mod_consts.const_str_plain_not_activated);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_activated) && "mod_consts.const_str_plain_not_activated");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_machine", mod_consts.const_str_plain_machine);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_machine) && "mod_consts.const_str_plain_machine");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_signature", mod_consts.const_str_plain_signature);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature) && "mod_consts.const_str_plain_signature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple", mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple) && "mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_invalid", mod_consts.const_str_plain_invalid);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_invalid) && "mod_consts.const_str_plain_invalid");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_machine_fingerprint", mod_consts.const_str_plain_machine_fingerprint);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_machine_fingerprint) && "mod_consts.const_str_plain_machine_fingerprint");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_other_machine", mod_consts.const_str_plain_other_machine);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_other_machine) && "mod_consts.const_str_plain_other_machine");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__activation_signature", mod_consts.const_str_plain__activation_signature);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__activation_signature) && "mod_consts.const_str_plain__activation_signature");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_active", mod_consts.const_str_plain_active);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_active) && "mod_consts.const_str_plain_active");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__dpapi_protect", mod_consts.const_str_plain__dpapi_protect);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__dpapi_protect) && "mod_consts.const_str_plain__dpapi_protect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_write_bytes", mod_consts.const_str_plain_write_bytes);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_bytes) && "mod_consts.const_str_plain_write_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64encode", mod_consts.const_str_plain_b64encode);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode) && "mod_consts.const_str_plain_b64encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_os", mod_consts.const_str_plain_os);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_os) && "mod_consts.const_str_plain_os");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ctypes", mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes) && "mod_consts.const_str_plain_ctypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Path", mod_consts.const_str_plain_Path);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path) && "mod_consts.const_str_plain_Path");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wintypes", mod_consts.const_str_plain_wintypes);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes) && "mod_consts.const_str_plain_wintypes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8", mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8) && "mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple", mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple) && "mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_resolve", mod_consts.const_str_plain_resolve);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve) && "mod_consts.const_str_plain_resolve");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_APP_DIR", mod_consts.const_str_plain_APP_DIR);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_APP_DIR) && "mod_consts.const_str_plain_APP_DIR");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c", mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c) && "mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd", mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd) && "mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08", mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08) && "mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7", mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7) && "mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_600000", mod_consts.const_int_pos_600000);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_600000) && "mod_consts.const_int_pos_600000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Structure", mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure) && "mod_consts.const_str_plain_Structure");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_auth", mod_consts.const_str_plain_auth);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth) && "mod_consts.const_str_plain_auth");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_27", mod_consts.const_int_pos_27);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_27) && "mod_consts.const_int_pos_27");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DWORD", mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD) && "mod_consts.const_str_plain_DWORD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__fields_", mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_) && "mod_consts.const_str_plain__fields_");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_return", mod_consts.const_str_plain_return);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_return) && "mod_consts.const_str_plain_return");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7", mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7) && "mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_password", mod_consts.const_str_plain_password);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_password) && "mod_consts.const_str_plain_password");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5", mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5) && "mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d", mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d) && "mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a", mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a) && "mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ba22db58249aba2a980f7e215437b978", mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978) && "mod_consts.const_dict_ba22db58249aba2a980f7e215437b978");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_load_protected_api_key", mod_consts.const_str_plain_load_protected_api_key);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_protected_api_key) && "mod_consts.const_str_plain_load_protected_api_key");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_43df417baa298f88f5321004d6433e0d", mod_consts.const_dict_43df417baa298f88f5321004d6433e0d);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_43df417baa298f88f5321004d6433e0d) && "mod_consts.const_dict_43df417baa298f88f5321004d6433e0d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1", mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1) && "mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2", mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2) && "mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e", mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e) && "mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_configure_password", mod_consts.const_str_plain_configure_password);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_configure_password) && "mod_consts.const_str_plain_configure_password");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a", mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a) && "mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activation_status", mod_consts.const_str_plain_activation_status);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_activation_status) && "mod_consts.const_str_plain_activation_status");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_activate", mod_consts.const_str_plain_activate);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_activate) && "mod_consts.const_str_plain_activate");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59", mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59) && "mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple", mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple) && "mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7", mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7) && "mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple", mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple) && "mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple", mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple) && "mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple", mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple) && "mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple", mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple) && "mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_data_tuple", mod_consts.const_tuple_str_plain_data_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_data_tuple) && "mod_consts.const_tuple_str_plain_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple", mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple) && "mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple", mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple) && "mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple", mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple) && "mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple", mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple) && "mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple", mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple) && "mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple", mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple) && "mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_protected_tuple", mod_consts.const_tuple_str_plain_protected_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_protected_tuple) && "mod_consts.const_tuple_str_plain_protected_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple", mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple) && "mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple", mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple) && "mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 31
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
static PyObject *module_var_accessor_auth$ACTIVATION_FILE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ACTIVATION_FILE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ACTIVATION_FILE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ACTIVATION_FILE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ACTIVATION_FILE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ACTIVATION_FILE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ACTIVATION_FILE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ACTIVATION_FILE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ACTIVATION_FILE);
    }

    return result;
}

static PyObject *module_var_accessor_auth$APP_DIR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_APP_DIR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APP_DIR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APP_DIR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APP_DIR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APP_DIR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_APP_DIR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_APP_DIR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APP_DIR);
    }

    return result;
}

static PyObject *module_var_accessor_auth$ENCRYPTED_API_KEY_FILE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
    }

    return result;
}

static PyObject *module_var_accessor_auth$Fernet(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet);
    }

    return result;
}

static PyObject *module_var_accessor_auth$InvalidToken(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken);
    }

    return result;
}

static PyObject *module_var_accessor_auth$LOCAL_API_KEY_FILE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LOCAL_API_KEY_FILE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LOCAL_API_KEY_FILE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
    }

    return result;
}

static PyObject *module_var_accessor_auth$PASSWORD_FILE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_FILE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PASSWORD_FILE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PASSWORD_FILE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PASSWORD_FILE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PASSWORD_FILE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_FILE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_FILE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_FILE);
    }

    return result;
}

static PyObject *module_var_accessor_auth$PBKDF2_ITERATIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PBKDF2_ITERATIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PBKDF2_ITERATIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PBKDF2_ITERATIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PBKDF2_ITERATIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PBKDF2_ITERATIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PBKDF2_ITERATIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PBKDF2_ITERATIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PBKDF2_ITERATIONS);
    }

    return result;
}

static PyObject *module_var_accessor_auth$Path(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_DataBlob(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__DataBlob);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DataBlob);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DataBlob, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DataBlob);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DataBlob, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__DataBlob);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__DataBlob);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DataBlob);
    }

    return result;
}

static PyObject *module_var_accessor_auth$__file__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___file__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___file__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___file__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___file__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___file__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___file__);
    }

    return result;
}

static PyObject *module_var_accessor_auth$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_activation_signature(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__activation_signature);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__activation_signature);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__activation_signature, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__activation_signature);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__activation_signature, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__activation_signature);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__activation_signature);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__activation_signature);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_decrypt_distribution_api_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__decrypt_distribution_api_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__decrypt_distribution_api_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__decrypt_distribution_api_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__decrypt_distribution_api_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__decrypt_distribution_api_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__decrypt_distribution_api_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__decrypt_distribution_api_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__decrypt_distribution_api_key);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_dpapi_protect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_protect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dpapi_protect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dpapi_protect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dpapi_protect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dpapi_protect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_protect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_protect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_protect);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_dpapi_unprotect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_unprotect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dpapi_unprotect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dpapi_unprotect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dpapi_unprotect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dpapi_unprotect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_unprotect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_unprotect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_unprotect);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_fernet_for_password(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__fernet_for_password);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fernet_for_password);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fernet_for_password, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__fernet_for_password);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__fernet_for_password, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__fernet_for_password);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__fernet_for_password);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__fernet_for_password);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_load_password_data(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__load_password_data);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_password_data);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_password_data, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__load_password_data);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__load_password_data, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__load_password_data);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__load_password_data);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__load_password_data);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_machine_source(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__machine_source);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__machine_source);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__machine_source, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__machine_source);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__machine_source, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__machine_source);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__machine_source);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__machine_source);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_password_digest(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__password_digest);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__password_digest);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__password_digest, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__password_digest);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__password_digest, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__password_digest);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__password_digest);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__password_digest);
    }

    return result;
}

static PyObject *module_var_accessor_auth$_write_json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__write_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__write_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__write_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__write_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__write_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__write_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__write_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__write_json);
    }

    return result;
}

static PyObject *module_var_accessor_auth$base64(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base64);
    }

    return result;
}

static PyObject *module_var_accessor_auth$hashlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib);
    }

    return result;
}

static PyObject *module_var_accessor_auth$hmac(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hmac);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hmac, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_hmac);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_hmac, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac);
    }

    return result;
}

static PyObject *module_var_accessor_auth$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_auth$machine_fingerprint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_machine_fingerprint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_machine_fingerprint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_machine_fingerprint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_machine_fingerprint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_machine_fingerprint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_machine_fingerprint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_machine_fingerprint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_machine_fingerprint);
    }

    return result;
}

static PyObject *module_var_accessor_auth$password_is_configured(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_password_is_configured);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_password_is_configured);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_password_is_configured, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_password_is_configured);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_password_is_configured, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_password_is_configured);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_password_is_configured);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_password_is_configured);
    }

    return result;
}

static PyObject *module_var_accessor_auth$protect_api_key_for_distribution(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_protect_api_key_for_distribution);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_protect_api_key_for_distribution);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_protect_api_key_for_distribution, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_protect_api_key_for_distribution);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_protect_api_key_for_distribution, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_protect_api_key_for_distribution);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_protect_api_key_for_distribution);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_protect_api_key_for_distribution);
    }

    return result;
}

static PyObject *module_var_accessor_auth$secrets(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_secrets);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_secrets, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_secrets);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_secrets, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets);
    }

    return result;
}

static PyObject *module_var_accessor_auth$verify_password(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_password);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_verify_password);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_verify_password, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_verify_password);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_verify_password, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_password);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_password);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_password);
    }

    return result;
}

static PyObject *module_var_accessor_auth$winreg(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_auth->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_auth->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_auth->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_winreg);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_winreg, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_winreg);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_winreg, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_0bbb40cebe1166e71b5bc39c7526d725;
static PyCodeObject *code_objects_076e2488de8c16d592a95d9b77d779ec;
static PyCodeObject *code_objects_493e18235833ca25608ae4c0df7f8b70;
static PyCodeObject *code_objects_27dba09f357284ddaf4a10cccd74afb1;
static PyCodeObject *code_objects_a35ddc95c849ace22c7cb687a1d2fd76;
static PyCodeObject *code_objects_c18ef7485fca274e51311a2862bfaa13;
static PyCodeObject *code_objects_24a0a9e4cb17bf590a62c8fdd07e1d67;
static PyCodeObject *code_objects_812d91dfe5b52f4dd8cf85defff2abc9;
static PyCodeObject *code_objects_fe3fa3fb0df6121ebfaffbe7fe5cb808;
static PyCodeObject *code_objects_de10a6ad80d2458821fc996281e71313;
static PyCodeObject *code_objects_6da78231c56bdfb997688ecda1e245c7;
static PyCodeObject *code_objects_ee9e94b238de5659095eaf146c013251;
static PyCodeObject *code_objects_84bb6f28b56b47c6790f67245fe4281f;
static PyCodeObject *code_objects_0238d217ab47365298c66113256a8e6b;
static PyCodeObject *code_objects_b121988e381475607b24878ebba07cbc;
static PyCodeObject *code_objects_6533ec5d656e0fbd346fa399493a218c;
static PyCodeObject *code_objects_2e3b85316dd2f2366922e06f6bf76133;
static PyCodeObject *code_objects_785e2fe473b594a72771f55b771c908e;
static PyCodeObject *code_objects_f15430f55ff5b78f239983d412c8d6a4;
static PyCodeObject *code_objects_1fd8dc95edbbd543f5d22dae24eeb7ea;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d8a2091b2328de0879576cce7cdf4f59); CHECK_OBJECT(module_filename_obj);
code_objects_0bbb40cebe1166e71b5bc39c7526d725 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc, mod_consts.const_tuple_0a5787c8f37f6d03013ef4662c1f3ccf_tuple, NULL, 1, 0, 0);
code_objects_076e2488de8c16d592a95d9b77d779ec = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7, mod_consts.const_str_digest_a772d2bc25fdf9a6bdcb26e747ea63f7, NULL, NULL, 0, 0, 0);
code_objects_493e18235833ca25608ae4c0df7f8b70 = MAKE_CODE_OBJECT(module_filename_obj, 27, 0, mod_consts.const_str_plain__DataBlob, mod_consts.const_str_plain__DataBlob, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_27dba09f357284ddaf4a10cccd74afb1 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__activation_signature, mod_consts.const_str_plain__activation_signature, mod_consts.const_tuple_str_plain_fingerprint_str_plain_password_digest_tuple, NULL, 2, 0, 0);
code_objects_a35ddc95c849ace22c7cb687a1d2fd76 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__decrypt_distribution_api_key, mod_consts.const_str_plain__decrypt_distribution_api_key, mod_consts.const_tuple_575017845c8a7fb7517287daddac446c_tuple, NULL, 1, 0, 0);
code_objects_c18ef7485fca274e51311a2862bfaa13 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__dpapi_protect, mod_consts.const_str_plain__dpapi_protect, mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple, NULL, 1, 0, 0);
code_objects_24a0a9e4cb17bf590a62c8fdd07e1d67 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__dpapi_unprotect, mod_consts.const_str_plain__dpapi_unprotect, mod_consts.const_tuple_e066386e348b7b45dff19affc6b62073_tuple, NULL, 1, 0, 0);
code_objects_812d91dfe5b52f4dd8cf85defff2abc9 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__fernet_for_password, mod_consts.const_str_plain__fernet_for_password, mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_key_tuple, NULL, 2, 0, 0);
code_objects_fe3fa3fb0df6121ebfaffbe7fe5cb808 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__load_password_data, mod_consts.const_str_plain__load_password_data, mod_consts.const_tuple_str_plain_data_tuple, NULL, 0, 0, 0);
code_objects_de10a6ad80d2458821fc996281e71313 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__machine_source, mod_consts.const_str_plain__machine_source, mod_consts.const_tuple_04da6526963c1423a1fc7f88b1eea268_tuple, NULL, 0, 0, 0);
code_objects_6da78231c56bdfb997688ecda1e245c7 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__password_digest, mod_consts.const_str_plain__password_digest, mod_consts.const_tuple_str_plain_password_str_plain_salt_str_plain_iterations_tuple, NULL, 3, 0, 0);
code_objects_ee9e94b238de5659095eaf146c013251 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__write_json, mod_consts.const_str_plain__write_json, mod_consts.const_tuple_str_plain_path_str_plain_data_str_plain_temporary_tuple, NULL, 2, 0, 0);
code_objects_84bb6f28b56b47c6790f67245fe4281f = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_activate, mod_consts.const_str_plain_activate, mod_consts.const_tuple_7e0967df723922b8fdc78149821683ee_tuple, NULL, 1, 0, 0);
code_objects_0238d217ab47365298c66113256a8e6b = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_activation_status, mod_consts.const_str_plain_activation_status, mod_consts.const_tuple_0ecf2eadd67d33d58296cfe29f6aea4d_tuple, NULL, 0, 0, 0);
code_objects_b121988e381475607b24878ebba07cbc = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_configure_password, mod_consts.const_str_plain_configure_password, mod_consts.const_tuple_6188b7923774a7fc734bea3ced3e9211_tuple, NULL, 2, 0, 0);
code_objects_6533ec5d656e0fbd346fa399493a218c = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_protected_api_key, mod_consts.const_str_plain_load_protected_api_key, mod_consts.const_tuple_str_plain_protected_tuple, NULL, 0, 0, 0);
code_objects_2e3b85316dd2f2366922e06f6bf76133 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_machine_fingerprint, mod_consts.const_str_plain_machine_fingerprint, NULL, NULL, 0, 0, 0);
code_objects_785e2fe473b594a72771f55b771c908e = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_password_is_configured, mod_consts.const_str_plain_password_is_configured, NULL, NULL, 0, 0, 0);
code_objects_f15430f55ff5b78f239983d412c8d6a4 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_protect_api_key_for_distribution, mod_consts.const_str_plain_protect_api_key_for_distribution, mod_consts.const_tuple_8481b25c98837dcbf57f0f9a4c00ad53_tuple, NULL, 2, 0, 0);
code_objects_1fd8dc95edbbd543f5d22dae24eeb7ea = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_verify_password, mod_consts.const_str_plain_verify_password, mod_consts.const_tuple_5f0dcc2f72290ce339487123163c8096_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_auth$$$function__9__load_password_data$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_auth$$$function__10_password_is_configured(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__11_verify_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__12_configure_password(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__13__machine_source(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__14_machine_fingerprint(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__15__activation_signature(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__16_activation_status(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__17_activate(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__1__write_json(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__2__password_digest(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__3__fernet_for_password(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__4__dpapi_protect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__5__dpapi_unprotect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__6_protect_api_key_for_distribution(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__7__decrypt_distribution_api_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__8_load_protected_api_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_auth$$$function__9__load_password_data(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_auth$$$function__1__write_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *var_temporary = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__1__write_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__1__write_json = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__1__write_json)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__1__write_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__1__write_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__1__write_json = MAKE_FUNCTION_FRAME(tstate, code_objects_ee9e94b238de5659095eaf146c013251, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__1__write_json->m_type_description == NULL);
frame_frame_auth$$$function__1__write_json = cache_frame_frame_auth$$$function__1__write_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__1__write_json);
assert(Py_REFCNT(frame_frame_auth$$$function__1__write_json) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_path);
tmp_expression_value_1 = par_path;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_with_suffix);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_expression_value_2 = par_path;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_suffix);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_0cfde35eafed0a63b6e1b10068f763da;
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__1__write_json->m_frame.f_lineno = 32;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_temporary;
    var_temporary = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
CHECK_OBJECT(var_temporary);
tmp_expression_value_3 = var_temporary;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_write_text);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_auth$json(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_dumps);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_kw_call_arg_value_0_2 = par_data;
frame_frame_auth$$$function__1__write_json->m_frame.f_lineno = 33;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_3,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_2_tuple, 0),
        mod_consts.const_tuple_str_plain_indent_tuple
    );
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__1__write_json->m_frame.f_lineno = 33;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_2,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0),
        mod_consts.const_tuple_str_plain_encoding_tuple
    );
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_temporary);
tmp_expression_value_5 = var_temporary;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_replace);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_args_element_value_2 = par_path;
frame_frame_auth$$$function__1__write_json->m_frame.f_lineno = 34;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__1__write_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__1__write_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__1__write_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__1__write_json,
    type_description_1,
    par_path,
    par_data,
    var_temporary
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__1__write_json == cache_frame_frame_auth$$$function__1__write_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__1__write_json);
    cache_frame_frame_auth$$$function__1__write_json = NULL;
}

assertFrameObject(frame_frame_auth$$$function__1__write_json);

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
CHECK_OBJECT(var_temporary);
CHECK_OBJECT(var_temporary);
Py_DECREF(var_temporary);
var_temporary = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_temporary);
var_temporary = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__2__password_digest(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_password = python_pars[0];
PyObject *par_salt = python_pars[1];
PyObject *par_iterations = python_pars[2];
struct Nuitka_FrameObject *frame_frame_auth$$$function__2__password_digest;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__2__password_digest = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_auth$$$function__2__password_digest)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__2__password_digest);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__2__password_digest == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__2__password_digest = MAKE_FUNCTION_FRAME(tstate, code_objects_6da78231c56bdfb997688ecda1e245c7, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__2__password_digest->m_type_description == NULL);
frame_frame_auth$$$function__2__password_digest = cache_frame_frame_auth$$$function__2__password_digest;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__2__password_digest);
assert(Py_REFCNT(frame_frame_auth$$$function__2__password_digest) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_1 = module_var_accessor_auth$hashlib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pbkdf2_hmac);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_sha256;
CHECK_OBJECT(par_password);
tmp_expression_value_2 = par_password;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 39;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__2__password_digest->m_frame.f_lineno = 39;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 39;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_salt);
tmp_args_element_value_3 = par_salt;
CHECK_OBJECT(par_iterations);
tmp_args_element_value_4 = par_iterations;
frame_frame_auth$$$function__2__password_digest->m_frame.f_lineno = 38;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__2__password_digest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__2__password_digest->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__2__password_digest, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__2__password_digest,
    type_description_1,
    par_password,
    par_salt,
    par_iterations
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__2__password_digest == cache_frame_frame_auth$$$function__2__password_digest) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__2__password_digest);
    cache_frame_frame_auth$$$function__2__password_digest = NULL;
}

assertFrameObject(frame_frame_auth$$$function__2__password_digest);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
CHECK_OBJECT(par_salt);
Py_DECREF(par_salt);
CHECK_OBJECT(par_iterations);
Py_DECREF(par_iterations);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
CHECK_OBJECT(par_salt);
Py_DECREF(par_salt);
CHECK_OBJECT(par_iterations);
Py_DECREF(par_iterations);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__3__fernet_for_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_password = python_pars[0];
PyObject *par_salt = python_pars[1];
PyObject *var_key = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__3__fernet_for_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__3__fernet_for_password = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__3__fernet_for_password)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__3__fernet_for_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__3__fernet_for_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__3__fernet_for_password = MAKE_FUNCTION_FRAME(tstate, code_objects_812d91dfe5b52f4dd8cf85defff2abc9, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__3__fernet_for_password->m_type_description == NULL);
frame_frame_auth$$$function__3__fernet_for_password = cache_frame_frame_auth$$$function__3__fernet_for_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__3__fernet_for_password);
assert(Py_REFCNT(frame_frame_auth$$$function__3__fernet_for_password) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_auth$_password_digest(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__password_digest);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_1 = par_password;
CHECK_OBJECT(par_salt);
tmp_args_element_value_2 = par_salt;
tmp_args_element_value_3 = module_var_accessor_auth$PBKDF2_ITERATIONS(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PBKDF2_ITERATIONS);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__3__fernet_for_password->m_frame.f_lineno = 44;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_auth$Fernet(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_auth$base64(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_5 = var_key;
frame_frame_auth$$$function__3__fernet_for_password->m_frame.f_lineno = 45;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_urlsafe_b64encode, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__3__fernet_for_password->m_frame.f_lineno = 45;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__3__fernet_for_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__3__fernet_for_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__3__fernet_for_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__3__fernet_for_password,
    type_description_1,
    par_password,
    par_salt,
    var_key
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__3__fernet_for_password == cache_frame_frame_auth$$$function__3__fernet_for_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__3__fernet_for_password);
    cache_frame_frame_auth$$$function__3__fernet_for_password = NULL;
}

assertFrameObject(frame_frame_auth$$$function__3__fernet_for_password);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_key);
CHECK_OBJECT(var_key);
Py_DECREF(var_key);
var_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
CHECK_OBJECT(par_salt);
Py_DECREF(par_salt);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
CHECK_OBJECT(par_salt);
Py_DECREF(par_salt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__4__dpapi_protect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *var_buffer = NULL;
PyObject *var_source = NULL;
PyObject *var_target = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__4__dpapi_protect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__4__dpapi_protect = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__4__dpapi_protect)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__4__dpapi_protect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__4__dpapi_protect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__4__dpapi_protect = MAKE_FUNCTION_FRAME(tstate, code_objects_c18ef7485fca274e51311a2862bfaa13, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__4__dpapi_protect->m_type_description == NULL);
frame_frame_auth$$$function__4__dpapi_protect = cache_frame_frame_auth$$$function__4__dpapi_protect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__4__dpapi_protect);
assert(Py_REFCNT(frame_frame_auth$$$function__4__dpapi_protect) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 49;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_create_string_buffer, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buffer;
    var_buffer = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_auth$_DataBlob(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DataBlob);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_len_arg_1 = par_data;
tmp_args_element_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cast);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buffer);
tmp_args_element_value_4 = var_buffer;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_2);

exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_c_byte);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 50;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_2);

exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 50;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 50;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_source;
    var_source = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_auth$_DataBlob(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DataBlob);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 51;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_target;
    var_target = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_15;
tmp_expression_value_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_windll);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_crypt32);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CryptProtectData);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_source);
tmp_args_element_value_8 = var_source;
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 53;
tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_byref, tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 53;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = mod_consts.const_str_plain_StudyHotkey;
tmp_args_element_value_10 = Py_None;
tmp_args_element_value_11 = Py_None;
tmp_args_element_value_12 = Py_None;
tmp_args_element_value_13 = const_int_0;
tmp_called_instance_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_target);
tmp_args_element_value_15 = var_target;
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 54;
tmp_args_element_value_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_byref, tmp_args_element_value_15);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 54;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 52;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_4 == NULL));
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 56;
tmp_raise_type_input_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_WinError);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_string_at);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_target);
tmp_expression_value_8 = var_target;
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pbData);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 58;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_target);
tmp_expression_value_9 = var_target;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_cbData);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 58;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_13;
tmp_expression_value_12 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_12 == NULL));
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_windll);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_LocalFree);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_target);
tmp_expression_value_13 = var_target;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_pbData);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 60;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__4__dpapi_protect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__4__dpapi_protect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_17;
tmp_expression_value_16 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_16 == NULL));
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_windll);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_LocalFree);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_target);
tmp_expression_value_17 = var_target;
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_pbData);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = 60;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 57;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__4__dpapi_protect->m_frame)) {
        frame_frame_auth$$$function__4__dpapi_protect->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__4__dpapi_protect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__4__dpapi_protect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__4__dpapi_protect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__4__dpapi_protect,
    type_description_1,
    par_data,
    var_buffer,
    var_source,
    var_target
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__4__dpapi_protect == cache_frame_frame_auth$$$function__4__dpapi_protect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__4__dpapi_protect);
    cache_frame_frame_auth$$$function__4__dpapi_protect = NULL;
}

assertFrameObject(frame_frame_auth$$$function__4__dpapi_protect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_buffer);
CHECK_OBJECT(var_buffer);
Py_DECREF(var_buffer);
var_buffer = NULL;
CHECK_OBJECT(var_source);
CHECK_OBJECT(var_source);
Py_DECREF(var_source);
var_source = NULL;
CHECK_OBJECT(var_target);
CHECK_OBJECT(var_target);
Py_DECREF(var_target);
var_target = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_buffer);
var_buffer = NULL;
Py_XDECREF(var_source);
var_source = NULL;
Py_XDECREF(var_target);
var_target = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__5__dpapi_unprotect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_data = python_pars[0];
PyObject *var_buffer = NULL;
PyObject *var_source = NULL;
PyObject *var_target = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__5__dpapi_unprotect;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__5__dpapi_unprotect = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__5__dpapi_unprotect)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__5__dpapi_unprotect);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__5__dpapi_unprotect == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__5__dpapi_unprotect = MAKE_FUNCTION_FRAME(tstate, code_objects_24a0a9e4cb17bf590a62c8fdd07e1d67, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__5__dpapi_unprotect->m_type_description == NULL);
frame_frame_auth$$$function__5__dpapi_unprotect = cache_frame_frame_auth$$$function__5__dpapi_unprotect;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__5__dpapi_unprotect);
assert(Py_REFCNT(frame_frame_auth$$$function__5__dpapi_unprotect) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 64;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_create_string_buffer, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_buffer;
    var_buffer = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_auth$_DataBlob(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DataBlob);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_len_arg_1 = par_data;
tmp_args_element_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cast);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buffer);
tmp_args_element_value_4 = var_buffer;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_2);

exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_c_byte);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);

exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 65;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);
Py_DECREF(tmp_called_value_2);

exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 65;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_source;
    var_source = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_auth$_DataBlob(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DataBlob);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 66;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_target;
    var_target = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_15;
tmp_expression_value_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_windll);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_crypt32);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CryptUnprotectData);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_source);
tmp_args_element_value_8 = var_source;
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 68;
tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_byref, tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 68;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = Py_None;
tmp_args_element_value_10 = Py_None;
tmp_args_element_value_11 = Py_None;
tmp_args_element_value_12 = Py_None;
tmp_args_element_value_13 = const_int_0;
tmp_called_instance_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_target);
tmp_args_element_value_15 = var_target;
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 69;
tmp_args_element_value_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_byref, tmp_args_element_value_15);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_7);

exception_lineno = 69;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 67;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_4 == NULL));
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 71;
tmp_raise_type_input_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_WinError);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 71;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_string_at);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_target);
tmp_expression_value_8 = var_target;
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pbData);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 73;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_target);
tmp_expression_value_9 = var_target;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_cbData);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 73;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 73;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_13;
tmp_expression_value_12 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_12 == NULL));
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_windll);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_LocalFree);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_target);
tmp_expression_value_13 = var_target;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_pbData);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 75;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__5__dpapi_unprotect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__5__dpapi_unprotect, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_17;
tmp_expression_value_16 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_16 == NULL));
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_windll);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_LocalFree);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_target);
tmp_expression_value_17 = var_target;
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_pbData);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_8);

exception_lineno = 75;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = 75;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 72;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__5__dpapi_unprotect->m_frame)) {
        frame_frame_auth$$$function__5__dpapi_unprotect->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__5__dpapi_unprotect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__5__dpapi_unprotect->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__5__dpapi_unprotect, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__5__dpapi_unprotect,
    type_description_1,
    par_data,
    var_buffer,
    var_source,
    var_target
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__5__dpapi_unprotect == cache_frame_frame_auth$$$function__5__dpapi_unprotect) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__5__dpapi_unprotect);
    cache_frame_frame_auth$$$function__5__dpapi_unprotect = NULL;
}

assertFrameObject(frame_frame_auth$$$function__5__dpapi_unprotect);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_buffer);
CHECK_OBJECT(var_buffer);
Py_DECREF(var_buffer);
var_buffer = NULL;
CHECK_OBJECT(var_source);
CHECK_OBJECT(var_source);
Py_DECREF(var_source);
var_source = NULL;
CHECK_OBJECT(var_target);
CHECK_OBJECT(var_target);
Py_DECREF(var_target);
var_target = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_buffer);
var_buffer = NULL;
Py_XDECREF(var_source);
var_source = NULL;
Py_XDECREF(var_target);
var_target = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__6_protect_api_key_for_distribution(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_key = python_pars[0];
PyObject *par_password = python_pars[1];
PyObject *var_salt = NULL;
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__6_protect_api_key_for_distribution;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution = MAKE_FUNCTION_FRAME(tstate, code_objects_f15430f55ff5b78f239983d412c8d6a4, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_type_description == NULL);
frame_frame_auth$$$function__6_protect_api_key_for_distribution = cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__6_protect_api_key_for_distribution);
assert(Py_REFCNT(frame_frame_auth$$$function__6_protect_api_key_for_distribution) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_api_key);
tmp_expression_value_1 = par_api_key;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_strip);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 79;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_bc0fe44f65fdf13c362d5997c866c4ae;
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 80;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 80;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_auth$verify_password(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verify_password);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_1 = par_password;
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 81;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooo";
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_f1845b779502b5f0fcdde8114f643f2d;
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 82;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_PermissionError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_auth$secrets(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_secrets);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 83;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_token_bytes,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_16_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_salt;
    var_salt = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
tmp_called_value_4 = module_var_accessor_auth$_fernet_for_password(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fernet_for_password);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_2 = par_password;
CHECK_OBJECT(var_salt);
tmp_args_element_value_3 = var_salt;
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encrypt);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_key);
tmp_expression_value_4 = par_api_key;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_strip);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 84;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 84;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 84;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_7 = module_var_accessor_auth$_write_json(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__write_json);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_auth$ENCRYPTED_API_KEY_FILE(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_version;
tmp_dict_value_1 = const_int_pos_1;
tmp_args_element_value_6 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_5;
tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_salt;
CHECK_OBJECT(var_salt);
tmp_called_instance_2 = var_salt;
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 87;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_hex);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_token;
CHECK_OBJECT(var_token);
tmp_expression_value_5 = var_token;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_decode);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 87;
tmp_dict_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_args_element_value_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 85;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
tmp_expression_value_6 = module_var_accessor_auth$LOCAL_API_KEY_FILE(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_unlink);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame.f_lineno = 89;
tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_missing_ok_tuple);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__6_protect_api_key_for_distribution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__6_protect_api_key_for_distribution->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__6_protect_api_key_for_distribution, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__6_protect_api_key_for_distribution,
    type_description_1,
    par_api_key,
    par_password,
    var_salt,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__6_protect_api_key_for_distribution == cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution);
    cache_frame_frame_auth$$$function__6_protect_api_key_for_distribution = NULL;
}

assertFrameObject(frame_frame_auth$$$function__6_protect_api_key_for_distribution);

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
CHECK_OBJECT(var_salt);
CHECK_OBJECT(var_salt);
Py_DECREF(var_salt);
var_salt = NULL;
CHECK_OBJECT(var_token);
CHECK_OBJECT(var_token);
Py_DECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_salt);
var_salt = NULL;
Py_XDECREF(var_token);
var_token = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_password);
Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__7__decrypt_distribution_api_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_password = python_pars[0];
PyObject *var_data = NULL;
PyObject *var_salt = NULL;
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__7__decrypt_distribution_api_key;
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
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key = MAKE_FUNCTION_FRAME(tstate, code_objects_a35ddc95c849ace22c7cb687a1d2fd76, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_type_description == NULL);
frame_frame_auth$$$function__7__decrypt_distribution_api_key = cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__7__decrypt_distribution_api_key);
assert(Py_REFCNT(frame_frame_auth$$$function__7__decrypt_distribution_api_key) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_auth$json(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_loads);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_auth$ENCRYPTED_API_KEY_FILE(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 94;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_read_text);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 94;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = 94;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0), mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 94;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = 94;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = (PyObject *)&PyBytes_Type;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fromhex);
assert(!(tmp_called_value_3 == NULL));
CHECK_OBJECT(var_data);
tmp_expression_value_4 = var_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_salt;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 95;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = 95;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_salt;
    var_salt = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_data);
tmp_expression_value_6 = var_data;
tmp_subscript_value_2 = mod_consts.const_str_plain_token;
tmp_expression_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = 96;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_token;
    var_token = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_6 = module_var_accessor_auth$_fernet_for_password(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__fernet_for_password);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_3 = par_password;
CHECK_OBJECT(var_salt);
tmp_args_element_value_4 = var_salt;
frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = 97;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_token);
tmp_args_element_value_5 = var_token;
frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = 97;
tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_decrypt, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = 97;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__7__decrypt_distribution_api_key, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__7__decrypt_distribution_api_key, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_1 = PyExc_OSError;
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 6);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_TypeError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_KeyError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_auth$InvalidToken(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = PyExc_UnicodeError;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 5, tmp_tuple_element_1);
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


exception_lineno = 98;
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 93;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame)) {
        frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame.f_lineno = exception_tb->tb_lineno;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__7__decrypt_distribution_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__7__decrypt_distribution_api_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__7__decrypt_distribution_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__7__decrypt_distribution_api_key,
    type_description_1,
    par_password,
    var_data,
    var_salt,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__7__decrypt_distribution_api_key == cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key);
    cache_frame_frame_auth$$$function__7__decrypt_distribution_api_key = NULL;
}

assertFrameObject(frame_frame_auth$$$function__7__decrypt_distribution_api_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_salt);
var_salt = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_salt);
var_salt = NULL;
Py_XDECREF(var_token);
var_token = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_password);
Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__8_load_protected_api_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_protected = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__8_load_protected_api_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__8_load_protected_api_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__8_load_protected_api_key)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__8_load_protected_api_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__8_load_protected_api_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__8_load_protected_api_key = MAKE_FUNCTION_FRAME(tstate, code_objects_6533ec5d656e0fbd346fa399493a218c, module_auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__8_load_protected_api_key->m_type_description == NULL);
frame_frame_auth$$$function__8_load_protected_api_key = cache_frame_frame_auth$$$function__8_load_protected_api_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__8_load_protected_api_key);
assert(Py_REFCNT(frame_frame_auth$$$function__8_load_protected_api_key) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_auth$LOCAL_API_KEY_FILE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__8_load_protected_api_key->m_frame.f_lineno = 103;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_exists);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_instance_2;
tmp_expression_value_1 = module_var_accessor_auth$base64(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_b64decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_called_instance_2 = module_var_accessor_auth$LOCAL_API_KEY_FILE(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 106;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__8_load_protected_api_key->m_frame.f_lineno = 106;
tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_read_bytes);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 106;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__8_load_protected_api_key->m_frame.f_lineno = 106;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_1,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0),
        mod_consts.const_tuple_str_plain_validate_tuple
    );
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "o";
    goto try_except_handler_2;
}
{
    PyObject *old = var_protected;
    var_protected = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
tmp_called_value_4 = module_var_accessor_auth$_dpapi_unprotect(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dpapi_unprotect);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "o";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_protected);
tmp_args_element_value_1 = var_protected;
frame_frame_auth$$$function__8_load_protected_api_key->m_frame.f_lineno = 107;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__8_load_protected_api_key->m_frame.f_lineno = 107;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_strip);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__8_load_protected_api_key->m_frame.f_lineno = 107;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "o";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__8_load_protected_api_key, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__8_load_protected_api_key, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_OSError_type_ValueError_type_UnicodeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "o";
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
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 105;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__8_load_protected_api_key->m_frame)) {
        frame_frame_auth$$$function__8_load_protected_api_key->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_3;
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__8_load_protected_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__8_load_protected_api_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__8_load_protected_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__8_load_protected_api_key,
    type_description_1,
    var_protected
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__8_load_protected_api_key == cache_frame_frame_auth$$$function__8_load_protected_api_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__8_load_protected_api_key);
    cache_frame_frame_auth$$$function__8_load_protected_api_key = NULL;
}

assertFrameObject(frame_frame_auth$$$function__8_load_protected_api_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_protected);
var_protected = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_protected);
var_protected = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_auth$$$function__9__load_password_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *var_data = Nuitka_Cell_NewEmpty();
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__9__load_password_data;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__9__load_password_data = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__9__load_password_data)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__9__load_password_data);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__9__load_password_data == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__9__load_password_data = MAKE_FUNCTION_FRAME(tstate, code_objects_fe3fa3fb0df6121ebfaffbe7fe5cb808, module_auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__9__load_password_data->m_type_description == NULL);
frame_frame_auth$$$function__9__load_password_data = cache_frame_frame_auth$$$function__9__load_password_data;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__9__load_password_data);
assert(Py_REFCNT(frame_frame_auth$$$function__9__load_password_data) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_auth$PASSWORD_FILE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PASSWORD_FILE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__9__load_password_data->m_frame.f_lineno = 113;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_exists);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "c";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_auth$json(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "c";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_loads);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "c";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_auth$PASSWORD_FILE(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PASSWORD_FILE);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 116;
type_description_1 = "c";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_read_text);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 116;
type_description_1 = "c";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__9__load_password_data->m_frame.f_lineno = 116;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0), mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 116;
type_description_1 = "c";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__9__load_password_data->m_frame.f_lineno = 116;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "c";
    goto try_except_handler_2;
}
{
    PyObject *old = Nuitka_Cell_GET(var_data);
    Nuitka_Cell_SET(var_data, tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_all_arg_1;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_str_plain_salt_str_plain_digest_str_plain_iterations_tuple;
tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_2 == NULL));
{
    PyObject *old = tmp_genexpr_1__$0;
    tmp_genexpr_1__$0 = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = var_data;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_all_arg_1 = MAKE_GENERATOR_auth$$$function__9__load_password_data$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_operand_value_2 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "c";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__9__load_password_data, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__9__load_password_data, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "c";
    goto try_except_handler_4;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_4;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 115;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__9__load_password_data->m_frame)) {
        frame_frame_auth$$$function__9__load_password_data->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "c";
goto try_except_handler_4;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__9__load_password_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__9__load_password_data->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__9__load_password_data, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__9__load_password_data,
    type_description_1,
    var_data
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__9__load_password_data == cache_frame_frame_auth$$$function__9__load_password_data) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__9__load_password_data);
    cache_frame_frame_auth$$$function__9__load_password_data = NULL;
}

assertFrameObject(frame_frame_auth$$$function__9__load_password_data);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(Nuitka_Cell_GET(var_data));
tmp_return_value = Nuitka_Cell_GET(var_data);
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
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

CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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



#if 1
struct auth$$$function__9__load_password_data$$$genexpr__1_genexpr_locals {
PyObject *var_key;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *auth$$$function__9__load_password_data$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct auth$$$function__9__load_password_data$$$genexpr__1_genexpr_locals *generator_heap = (struct auth$$$function__9__load_password_data$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_key = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0bbb40cebe1166e71b5bc39c7526d725, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 117;
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
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_key);
tmp_cmp_expr_left_1 = generator_heap->var_key;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_data);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = (generator_heap->tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_expression_value_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 117;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_key,
    generator->m_closure[0]
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

Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_auth$$$function__9__load_password_data$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        auth$$$function__9__load_password_data$$$genexpr__1_genexpr_context,
        module_auth,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_a824f9548f9f62dedc2f1ceaff2a5afc,
#endif
        code_objects_0bbb40cebe1166e71b5bc39c7526d725,
        closure,
        2,
#if 1
        sizeof(struct auth$$$function__9__load_password_data$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_auth$$$function__10_password_is_configured(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_auth$$$function__10_password_is_configured;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__10_password_is_configured = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_auth$$$function__10_password_is_configured)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__10_password_is_configured);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__10_password_is_configured == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__10_password_is_configured = MAKE_FUNCTION_FRAME(tstate, code_objects_785e2fe473b594a72771f55b771c908e, module_auth, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__10_password_is_configured->m_type_description == NULL);
frame_frame_auth$$$function__10_password_is_configured = cache_frame_frame_auth$$$function__10_password_is_configured;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__10_password_is_configured);
assert(Py_REFCNT(frame_frame_auth$$$function__10_password_is_configured) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_auth$_load_password_data(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_password_data);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__10_password_is_configured->m_frame.f_lineno = 125;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__10_password_is_configured, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__10_password_is_configured->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__10_password_is_configured, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__10_password_is_configured,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__10_password_is_configured == cache_frame_frame_auth$$$function__10_password_is_configured) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__10_password_is_configured);
    cache_frame_frame_auth$$$function__10_password_is_configured = NULL;
}

assertFrameObject(frame_frame_auth$$$function__10_password_is_configured);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_auth$$$function__11_verify_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_password = python_pars[0];
PyObject *var_data = NULL;
PyObject *var_salt = NULL;
PyObject *var_expected = NULL;
PyObject *var_iterations = NULL;
PyObject *var_actual = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__11_verify_password;
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
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__11_verify_password = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__11_verify_password)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__11_verify_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__11_verify_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__11_verify_password = MAKE_FUNCTION_FRAME(tstate, code_objects_1fd8dc95edbbd543f5d22dae24eeb7ea, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__11_verify_password->m_type_description == NULL);
frame_frame_auth$$$function__11_verify_password = cache_frame_frame_auth$$$function__11_verify_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__11_verify_password);
assert(Py_REFCNT(frame_frame_auth$$$function__11_verify_password) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_auth$_load_password_data(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_password_data);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__11_verify_password->m_frame.f_lineno = 129;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_data);
tmp_cmp_expr_left_1 = var_data;
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = (PyObject *)&PyBytes_Type;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fromhex);
assert(!(tmp_called_value_2 == NULL));
CHECK_OBJECT(var_data);
tmp_expression_value_2 = var_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_salt;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 133;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__11_verify_password->m_frame.f_lineno = 133;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_salt;
    var_salt = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
tmp_expression_value_3 = (PyObject *)&PyBytes_Type;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_fromhex);
assert(!(tmp_called_value_3 == NULL));
CHECK_OBJECT(var_data);
tmp_expression_value_4 = var_data;
tmp_subscript_value_2 = mod_consts.const_str_plain_digest;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 134;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__11_verify_password->m_frame.f_lineno = 134;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_expected;
    var_expected = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(var_data);
tmp_expression_value_5 = var_data;
tmp_subscript_value_3 = mod_consts.const_str_plain_iterations;
tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_iterations;
    var_iterations = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__11_verify_password, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__11_verify_password, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_ValueError_type_TypeError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 132;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__11_verify_password->m_frame)) {
        frame_frame_auth$$$function__11_verify_password->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_2:;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = module_var_accessor_auth$_password_digest(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__password_digest);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_3 = par_password;
CHECK_OBJECT(var_salt);
tmp_args_element_value_4 = var_salt;
CHECK_OBJECT(var_iterations);
tmp_args_element_value_5 = var_iterations;
frame_frame_auth$$$function__11_verify_password->m_frame.f_lineno = 138;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_actual;
    var_actual = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_1 = module_var_accessor_auth$hmac(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hmac);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_actual);
tmp_args_element_value_6 = var_actual;
CHECK_OBJECT(var_expected);
tmp_args_element_value_7 = var_expected;
frame_frame_auth$$$function__11_verify_password->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_compare_digest,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__11_verify_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__11_verify_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__11_verify_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__11_verify_password,
    type_description_1,
    par_password,
    var_data,
    var_salt,
    var_expected,
    var_iterations,
    var_actual
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__11_verify_password == cache_frame_frame_auth$$$function__11_verify_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__11_verify_password);
    cache_frame_frame_auth$$$function__11_verify_password = NULL;
}

assertFrameObject(frame_frame_auth$$$function__11_verify_password);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
Py_XDECREF(var_salt);
var_salt = NULL;
Py_XDECREF(var_expected);
var_expected = NULL;
Py_XDECREF(var_iterations);
var_iterations = NULL;
Py_XDECREF(var_actual);
var_actual = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_salt);
var_salt = NULL;
Py_XDECREF(var_expected);
var_expected = NULL;
Py_XDECREF(var_iterations);
var_iterations = NULL;
Py_XDECREF(var_actual);
var_actual = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_password);
Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__12_configure_password(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_new_password = python_pars[0];
PyObject *par_current_password = python_pars[1];
PyObject *var_api_key = NULL;
PyObject *var_salt = NULL;
PyObject *var_digest = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__12_configure_password;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__12_configure_password = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__12_configure_password)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__12_configure_password);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__12_configure_password == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__12_configure_password = MAKE_FUNCTION_FRAME(tstate, code_objects_b121988e381475607b24878ebba07cbc, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__12_configure_password->m_type_description == NULL);
frame_frame_auth$$$function__12_configure_password = cache_frame_frame_auth$$$function__12_configure_password;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__12_configure_password);
assert(Py_REFCNT(frame_frame_auth$$$function__12_configure_password) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_new_password);
tmp_len_arg_1 = par_new_password;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 8;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_7daf869e169a8de1967278e914b05e12;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 144;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 144;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_auth$password_is_configured(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_password_is_configured);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 145;
tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooo";
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
tmp_make_exception_arg_2 = mod_consts.const_str_digest_de389e994677b865e42aedf8c7b04bdd;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 146;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_FileNotFoundError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
tmp_called_value_2 = module_var_accessor_auth$verify_password(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verify_password);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_current_password);
tmp_or_left_value_1 = par_current_password;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = const_str_empty;
tmp_args_element_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_args_element_value_1 = tmp_or_left_value_1;
or_end_1:;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 147;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;
type_description_1 = "ooooo";
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
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_66a8b589c18fcdc21d8e9a9ed73175fe;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 148;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_PermissionError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 148;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
tmp_called_value_3 = module_var_accessor_auth$_decrypt_distribution_api_key(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__decrypt_distribution_api_key);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_current_password);
tmp_or_left_value_2 = par_current_password;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = const_str_empty;
tmp_args_element_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_args_element_value_2 = tmp_or_left_value_2;
or_end_2:;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 150;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_api_key;
    var_api_key = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_api_key);
tmp_operand_value_3 = var_api_key;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooo";
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
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_f6d3f312deb1809e4b671c3ccfc3da22;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 152;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 152;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_auth$secrets(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_secrets);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 154;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_token_bytes,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_16_tuple, 0)
);

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_salt;
    var_salt = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_4 = module_var_accessor_auth$_password_digest(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__password_digest);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_new_password);
tmp_args_element_value_3 = par_new_password;
CHECK_OBJECT(var_salt);
tmp_args_element_value_4 = var_salt;
tmp_args_element_value_5 = module_var_accessor_auth$PBKDF2_ITERATIONS(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PBKDF2_ITERATIONS);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 155;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_digest;
    var_digest = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_5 = module_var_accessor_auth$_write_json(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__write_json);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_auth$PASSWORD_FILE(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PASSWORD_FILE);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_version;
tmp_dict_value_1 = const_int_pos_1;
tmp_args_element_value_7 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_called_instance_2;
PyObject *tmp_called_instance_3;
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_algorithm;
tmp_dict_value_1 = mod_consts.const_str_digest_8c166a902d51ef50b3a6f72fdc8b65bd;
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_iterations;
tmp_dict_value_1 = module_var_accessor_auth$PBKDF2_ITERATIONS(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PBKDF2_ITERATIONS);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_salt;
CHECK_OBJECT(var_salt);
tmp_called_instance_2 = var_salt;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 162;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_hex);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_digest;
CHECK_OBJECT(var_digest);
tmp_called_instance_3 = var_digest;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 163;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_hex);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_args_element_value_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 156;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_2;
tmp_expression_value_1 = module_var_accessor_auth$ACTIVATION_FILE(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ACTIVATION_FILE);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_unlink);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 166;
tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_missing_ok_tuple);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_3;
tmp_expression_value_2 = module_var_accessor_auth$LOCAL_API_KEY_FILE(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_unlink);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 167;
tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_missing_ok_tuple);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_8 = module_var_accessor_auth$protect_api_key_for_distribution(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_protect_api_key_for_distribution);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_api_key);
tmp_args_element_value_8 = var_api_key;
CHECK_OBJECT(par_new_password);
tmp_args_element_value_9 = par_new_password;
frame_frame_auth$$$function__12_configure_password->m_frame.f_lineno = 168;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__12_configure_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__12_configure_password->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__12_configure_password, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__12_configure_password,
    type_description_1,
    par_new_password,
    par_current_password,
    var_api_key,
    var_salt,
    var_digest
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__12_configure_password == cache_frame_frame_auth$$$function__12_configure_password) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__12_configure_password);
    cache_frame_frame_auth$$$function__12_configure_password = NULL;
}

assertFrameObject(frame_frame_auth$$$function__12_configure_password);

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
CHECK_OBJECT(var_api_key);
CHECK_OBJECT(var_api_key);
Py_DECREF(var_api_key);
var_api_key = NULL;
CHECK_OBJECT(var_salt);
CHECK_OBJECT(var_salt);
Py_DECREF(var_salt);
var_salt = NULL;
CHECK_OBJECT(var_digest);
CHECK_OBJECT(var_digest);
Py_DECREF(var_digest);
var_digest = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_api_key);
var_api_key = NULL;
Py_XDECREF(var_salt);
var_salt = NULL;
Py_XDECREF(var_digest);
var_digest = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_new_password);
Py_DECREF(par_new_password);
CHECK_OBJECT(par_current_password);
Py_DECREF(par_current_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_new_password);
Py_DECREF(par_new_password);
CHECK_OBJECT(par_current_password);
Py_DECREF(par_current_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__13__machine_source(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_access = NULL;
PyObject *var_key = NULL;
PyObject *var_machine_guid = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__13__machine_source;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__13__machine_source = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__13__machine_source)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__13__machine_source);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__13__machine_source == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__13__machine_source = MAKE_FUNCTION_FRAME(tstate, code_objects_de10a6ad80d2458821fc996281e71313, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__13__machine_source->m_type_description == NULL);
frame_frame_auth$$$function__13__machine_source = cache_frame_frame_auth$$$function__13__machine_source;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__13__machine_source);
assert(Py_REFCNT(frame_frame_auth$$$function__13__machine_source) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_auth$winreg(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_expression_value_1 = module_var_accessor_auth$winreg(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_KEY_READ);
if (tmp_bitor_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_auth$winreg(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 174;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_name_value_1 = mod_consts.const_str_plain_KEY_WOW64_64KEY;
tmp_default_value_1 = const_int_0;
tmp_bitor_expr_right_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_bitor_expr_left_1);

exception_lineno = 174;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_left_1);
Py_DECREF(tmp_bitor_expr_left_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_access;
    var_access = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_3 = module_var_accessor_auth$winreg(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_OpenKey);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_expression_value_4 = module_var_accessor_auth$winreg(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_HKEY_LOCAL_MACHINE);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_783148019a233db2319321a727670861;
tmp_args_element_value_3 = const_int_0;
CHECK_OBJECT(var_access);
tmp_args_element_value_4 = var_access;
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_with_1__source;
    tmp_with_1__source = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_with_1__exit;
    tmp_with_1__exit = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_6 = tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_6, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 175;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_with_1__enter;
    tmp_with_1__enter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_6 = tmp_with_1__enter;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_6;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_instance_1 = module_var_accessor_auth$winreg(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winreg);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_5 = var_key;
tmp_args_element_value_6 = mod_consts.const_str_plain_MachineGuid;
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 181;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_QueryValueEx,
        call_args
    );
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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



exception_lineno = 181;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
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

goto try_except_handler_6;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_machine_guid;
    var_machine_guid = tmp_assign_source_10;
    Py_INCREF(var_machine_guid);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_11;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_machine_guid);
tmp_truth_name_1 = CHECK_IF_TRUE(var_machine_guid);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto try_except_handler_5;
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
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_machine_guid);
tmp_unicode_arg_1 = var_machine_guid;
tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
goto try_return_handler_4;
}
branch_no_2:;
goto try_end_3;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__13__machine_source, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__13__machine_source, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_12;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_3 = tmp_with_1__exit;
tmp_args_element_value_7 = EXC_TYPE(tstate);
tmp_args_element_value_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_8); 
tmp_args_element_value_9 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_9 == NULL) {
    tmp_args_element_value_9 = Py_None;
}
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_8;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 175;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__13__machine_source->m_frame)) {
        frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_8;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 175;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__13__machine_source->m_frame)) {
        frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_8;
branch_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
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
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Return handler code:
try_return_handler_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_4 = tmp_with_1__exit;
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 175;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 175;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);

exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
try_end_5:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 175;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
goto try_end_6;
// Return handler code:
try_return_handler_3:;
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
try_except_handler_3:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_2;
// End of try:
try_end_6:;
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
goto try_end_7;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__13__machine_source, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__13__machine_source, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 173;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__13__machine_source->m_frame)) {
        frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_9;
branch_no_7:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
branch_no_1:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_format_spec_1;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 186;
tmp_format_value_1 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_getenv,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_COMPUTERNAME_str_empty_tuple, 0)
);

if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_124;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_called_instance_3 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_3 == NULL));
frame_frame_auth$$$function__13__machine_source->m_frame.f_lineno = 186;
tmp_format_value_2 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_getenv,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PROCESSOR_IDENTIFIER_str_empty_tuple, 0)
);

if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__13__machine_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__13__machine_source->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__13__machine_source, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__13__machine_source,
    type_description_1,
    var_access,
    var_key,
    var_machine_guid,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__13__machine_source == cache_frame_frame_auth$$$function__13__machine_source) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__13__machine_source);
    cache_frame_frame_auth$$$function__13__machine_source = NULL;
}

assertFrameObject(frame_frame_auth$$$function__13__machine_source);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_access);
var_access = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_machine_guid);
var_machine_guid = NULL;
Py_XDECREF(var__);
var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_access);
var_access = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_machine_guid);
var_machine_guid = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

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


static PyObject *impl_auth$$$function__14_machine_fingerprint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_auth$$$function__14_machine_fingerprint;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__14_machine_fingerprint = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_auth$$$function__14_machine_fingerprint)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__14_machine_fingerprint);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__14_machine_fingerprint == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__14_machine_fingerprint = MAKE_FUNCTION_FRAME(tstate, code_objects_2e3b85316dd2f2366922e06f6bf76133, module_auth, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__14_machine_fingerprint->m_type_description == NULL);
frame_frame_auth$$$function__14_machine_fingerprint = cache_frame_frame_auth$$$function__14_machine_fingerprint;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__14_machine_fingerprint);
assert(Py_REFCNT(frame_frame_auth$$$function__14_machine_fingerprint) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
tmp_expression_value_1 = module_var_accessor_auth$hashlib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_sha256);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_auth$_machine_source(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__machine_source);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 190;

    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__14_machine_fingerprint->m_frame.f_lineno = 190;
tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 190;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 190;

    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__14_machine_fingerprint->m_frame.f_lineno = 190;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 190;

    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__14_machine_fingerprint->m_frame.f_lineno = 190;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__14_machine_fingerprint->m_frame.f_lineno = 190;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__14_machine_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__14_machine_fingerprint->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__14_machine_fingerprint, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__14_machine_fingerprint,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__14_machine_fingerprint == cache_frame_frame_auth$$$function__14_machine_fingerprint) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__14_machine_fingerprint);
    cache_frame_frame_auth$$$function__14_machine_fingerprint = NULL;
}

assertFrameObject(frame_frame_auth$$$function__14_machine_fingerprint);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_auth$$$function__15__activation_signature(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_fingerprint = python_pars[0];
PyObject *par_password_digest = python_pars[1];
struct Nuitka_FrameObject *frame_frame_auth$$$function__15__activation_signature;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__15__activation_signature = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_auth$$$function__15__activation_signature)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__15__activation_signature);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__15__activation_signature == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__15__activation_signature = MAKE_FUNCTION_FRAME(tstate, code_objects_27dba09f357284ddaf4a10cccd74afb1, module_auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__15__activation_signature->m_type_description == NULL);
frame_frame_auth$$$function__15__activation_signature = cache_frame_frame_auth$$$function__15__activation_signature;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__15__activation_signature);
assert(Py_REFCNT(frame_frame_auth$$$function__15__activation_signature) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_auth$hmac(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hmac);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = (PyObject *)&PyBytes_Type;
CHECK_OBJECT(par_password_digest);
tmp_args_element_value_2 = par_password_digest;
frame_frame_auth$$$function__15__activation_signature->m_frame.f_lineno = 195;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_fromhex, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 195;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fingerprint);
tmp_expression_value_2 = par_fingerprint;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 196;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__15__activation_signature->m_frame.f_lineno = 196;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_ascii_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 196;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_auth$hashlib(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hashlib);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sha256);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 197;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__15__activation_signature->m_frame.f_lineno = 194;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__15__activation_signature->m_frame.f_lineno = 194;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_hexdigest);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__15__activation_signature, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__15__activation_signature->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__15__activation_signature, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__15__activation_signature,
    type_description_1,
    par_fingerprint,
    par_password_digest
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__15__activation_signature == cache_frame_frame_auth$$$function__15__activation_signature) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__15__activation_signature);
    cache_frame_frame_auth$$$function__15__activation_signature = NULL;
}

assertFrameObject(frame_frame_auth$$$function__15__activation_signature);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_fingerprint);
Py_DECREF(par_fingerprint);
CHECK_OBJECT(par_password_digest);
Py_DECREF(par_password_digest);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_fingerprint);
Py_DECREF(par_fingerprint);
CHECK_OBJECT(par_password_digest);
Py_DECREF(par_password_digest);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_auth$$$function__16_activation_status(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_password_data = NULL;
PyObject *var_activation = NULL;
PyObject *var_saved_fingerprint = NULL;
PyObject *var_saved_signature = NULL;
PyObject *var_current_fingerprint = NULL;
PyObject *var_expected_signature = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__16_activation_status;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__16_activation_status = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__16_activation_status)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__16_activation_status);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__16_activation_status == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__16_activation_status = MAKE_FUNCTION_FRAME(tstate, code_objects_0238d217ab47365298c66113256a8e6b, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__16_activation_status->m_type_description == NULL);
frame_frame_auth$$$function__16_activation_status = cache_frame_frame_auth$$$function__16_activation_status;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__16_activation_status);
assert(Py_REFCNT(frame_frame_auth$$$function__16_activation_status) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_auth$_load_password_data(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_password_data);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 202;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_password_data;
    var_password_data = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_password_data);
tmp_cmp_expr_left_1 = var_password_data;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = mod_consts.const_str_plain_password_missing;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_auth$ACTIVATION_FILE(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ACTIVATION_FILE);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 205;
tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_exists);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooooo";
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
tmp_return_value = mod_consts.const_str_plain_not_activated;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_auth$json(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 209;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_loads);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_auth$ACTIVATION_FILE(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ACTIVATION_FILE);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 209;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_read_text);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 209;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 209;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0), mod_consts.const_tuple_str_plain_encoding_tuple);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 209;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 209;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_activation;
    var_activation = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_activation);
tmp_expression_value_3 = var_activation;
tmp_subscript_value_1 = mod_consts.const_str_plain_machine;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_saved_fingerprint;
    var_saved_fingerprint = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_activation);
tmp_expression_value_4 = var_activation;
tmp_subscript_value_2 = mod_consts.const_str_plain_signature;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_saved_signature;
    var_saved_signature = tmp_assign_source_4;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__16_activation_status, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__16_activation_status, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_OSError_type_ValueError_type_TypeError_type_KeyError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = mod_consts.const_str_plain_invalid;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 208;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth$$$function__16_activation_status->m_frame)) {
        frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_3:;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_auth$machine_fingerprint(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_machine_fingerprint);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 215;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_current_fingerprint;
    var_current_fingerprint = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_auth$hmac(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hmac);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_saved_fingerprint);
tmp_args_element_value_2 = var_saved_fingerprint;
CHECK_OBJECT(var_current_fingerprint);
tmp_args_element_value_3 = var_current_fingerprint;
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 216;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_compare_digest,
        call_args
    );
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooo";
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
tmp_return_value = mod_consts.const_str_plain_other_machine;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
tmp_called_value_5 = module_var_accessor_auth$_activation_signature(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__activation_signature);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_current_fingerprint);
tmp_args_element_value_4 = var_current_fingerprint;
CHECK_OBJECT(var_password_data);
tmp_expression_value_5 = var_password_data;
tmp_subscript_value_3 = mod_consts.const_str_plain_digest;
tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 219;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_expected_signature;
    var_expected_signature = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_3 = module_var_accessor_auth$hmac(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hmac);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_saved_signature);
tmp_args_element_value_6 = var_saved_signature;
CHECK_OBJECT(var_expected_signature);
tmp_args_element_value_7 = var_expected_signature;
frame_frame_auth$$$function__16_activation_status->m_frame.f_lineno = 222;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_compare_digest,
        call_args
    );
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
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
tmp_return_value = mod_consts.const_str_plain_invalid;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__16_activation_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__16_activation_status->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__16_activation_status, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__16_activation_status,
    type_description_1,
    var_password_data,
    var_activation,
    var_saved_fingerprint,
    var_saved_signature,
    var_current_fingerprint,
    var_expected_signature
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__16_activation_status == cache_frame_frame_auth$$$function__16_activation_status) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__16_activation_status);
    cache_frame_frame_auth$$$function__16_activation_status = NULL;
}

assertFrameObject(frame_frame_auth$$$function__16_activation_status);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = mod_consts.const_str_plain_active;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_password_data);
CHECK_OBJECT(var_password_data);
Py_DECREF(var_password_data);
var_password_data = NULL;
Py_XDECREF(var_activation);
var_activation = NULL;
Py_XDECREF(var_saved_fingerprint);
var_saved_fingerprint = NULL;
Py_XDECREF(var_saved_signature);
var_saved_signature = NULL;
Py_XDECREF(var_current_fingerprint);
var_current_fingerprint = NULL;
Py_XDECREF(var_expected_signature);
var_expected_signature = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_password_data);
var_password_data = NULL;
Py_XDECREF(var_activation);
var_activation = NULL;
Py_XDECREF(var_saved_fingerprint);
var_saved_fingerprint = NULL;
Py_XDECREF(var_saved_signature);
var_saved_signature = NULL;
Py_XDECREF(var_current_fingerprint);
var_current_fingerprint = NULL;
Py_XDECREF(var_expected_signature);
var_expected_signature = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_auth$$$function__17_activate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_password = python_pars[0];
PyObject *var_password_data = NULL;
PyObject *var_api_key = NULL;
PyObject *var_protected_api_key = NULL;
PyObject *var_fingerprint = NULL;
struct Nuitka_FrameObject *frame_frame_auth$$$function__17_activate;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_auth$$$function__17_activate = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_auth$$$function__17_activate)) {
    Py_XDECREF(cache_frame_frame_auth$$$function__17_activate);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_auth$$$function__17_activate == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_auth$$$function__17_activate = MAKE_FUNCTION_FRAME(tstate, code_objects_84bb6f28b56b47c6790f67245fe4281f, module_auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_auth$$$function__17_activate->m_type_description == NULL);
frame_frame_auth$$$function__17_activate = cache_frame_frame_auth$$$function__17_activate;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$function__17_activate);
assert(Py_REFCNT(frame_frame_auth$$$function__17_activate) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_auth$_load_password_data(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__load_password_data);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 228;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_password_data;
    var_password_data = tmp_assign_source_1;
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
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_password_data);
tmp_cmp_expr_left_1 = var_password_data;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_2 = module_var_accessor_auth$verify_password(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verify_password);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_1 = par_password;
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 229;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_auth$_decrypt_distribution_api_key(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__decrypt_distribution_api_key);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_password);
tmp_args_element_value_2 = par_password;
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 232;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_api_key;
    var_api_key = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_api_key);
tmp_operand_value_2 = var_api_key;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_1;
tmp_called_value_4 = module_var_accessor_auth$_dpapi_protect(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dpapi_protect);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_api_key);
tmp_expression_value_1 = var_api_key;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 236;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 236;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_protected_api_key;
    var_protected_api_key = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_5;
tmp_expression_value_2 = module_var_accessor_auth$LOCAL_API_KEY_FILE(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LOCAL_API_KEY_FILE);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_write_bytes);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_auth$base64(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base64);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_protected_api_key);
tmp_args_element_value_5 = var_protected_api_key;
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 237;
tmp_args_element_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_b64encode, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 237;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_auth$machine_fingerprint(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_machine_fingerprint);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 239;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_fingerprint;
    var_fingerprint = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_called_value_8 = module_var_accessor_auth$_write_json(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__write_json);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_auth$ACTIVATION_FILE(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ACTIVATION_FILE);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_version;
tmp_dict_value_1 = const_int_pos_1;
tmp_args_element_value_7 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_machine;
CHECK_OBJECT(var_fingerprint);
tmp_dict_value_1 = var_fingerprint;
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_signature;
tmp_called_value_9 = module_var_accessor_auth$_activation_signature(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__activation_signature);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_fingerprint);
tmp_args_element_value_8 = var_fingerprint;
CHECK_OBJECT(var_password_data);
tmp_expression_value_3 = var_password_data;
tmp_subscript_value_1 = mod_consts.const_str_plain_digest;
tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 245;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "ooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_7, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_args_element_value_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_auth$$$function__17_activate->m_frame.f_lineno = 240;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$function__17_activate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$function__17_activate->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$function__17_activate, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$function__17_activate,
    type_description_1,
    par_password,
    var_password_data,
    var_api_key,
    var_protected_api_key,
    var_fingerprint
);


// Release cached frame if used for exception.
if (frame_frame_auth$$$function__17_activate == cache_frame_frame_auth$$$function__17_activate) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_auth$$$function__17_activate);
    cache_frame_frame_auth$$$function__17_activate = NULL;
}

assertFrameObject(frame_frame_auth$$$function__17_activate);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_password_data);
CHECK_OBJECT(var_password_data);
Py_DECREF(var_password_data);
var_password_data = NULL;
Py_XDECREF(var_api_key);
var_api_key = NULL;
Py_XDECREF(var_protected_api_key);
var_protected_api_key = NULL;
Py_XDECREF(var_fingerprint);
var_fingerprint = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_password_data);
var_password_data = NULL;
Py_XDECREF(var_api_key);
var_api_key = NULL;
Py_XDECREF(var_protected_api_key);
var_protected_api_key = NULL;
Py_XDECREF(var_fingerprint);
var_fingerprint = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_password);
Py_DECREF(par_password);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_password);
Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_auth$$$function__10_password_is_configured(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__10_password_is_configured,
        mod_consts.const_str_plain_password_is_configured,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_785e2fe473b594a72771f55b771c908e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__11_verify_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__11_verify_password,
        mod_consts.const_str_plain_verify_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1fd8dc95edbbd543f5d22dae24eeb7ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__12_configure_password(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__12_configure_password,
        mod_consts.const_str_plain_configure_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b121988e381475607b24878ebba07cbc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__13__machine_source(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__13__machine_source,
        mod_consts.const_str_plain__machine_source,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_de10a6ad80d2458821fc996281e71313,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__14_machine_fingerprint(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__14_machine_fingerprint,
        mod_consts.const_str_plain_machine_fingerprint,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2e3b85316dd2f2366922e06f6bf76133,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__15__activation_signature(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__15__activation_signature,
        mod_consts.const_str_plain__activation_signature,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_27dba09f357284ddaf4a10cccd74afb1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__16_activation_status(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__16_activation_status,
        mod_consts.const_str_plain_activation_status,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0238d217ab47365298c66113256a8e6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__17_activate(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__17_activate,
        mod_consts.const_str_plain_activate,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_84bb6f28b56b47c6790f67245fe4281f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__1__write_json(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__1__write_json,
        mod_consts.const_str_plain__write_json,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ee9e94b238de5659095eaf146c013251,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__2__password_digest(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__2__password_digest,
        mod_consts.const_str_plain__password_digest,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6da78231c56bdfb997688ecda1e245c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__3__fernet_for_password(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__3__fernet_for_password,
        mod_consts.const_str_plain__fernet_for_password,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_812d91dfe5b52f4dd8cf85defff2abc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__4__dpapi_protect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__4__dpapi_protect,
        mod_consts.const_str_plain__dpapi_protect,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c18ef7485fca274e51311a2862bfaa13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__5__dpapi_unprotect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__5__dpapi_unprotect,
        mod_consts.const_str_plain__dpapi_unprotect,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_24a0a9e4cb17bf590a62c8fdd07e1d67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__6_protect_api_key_for_distribution(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__6_protect_api_key_for_distribution,
        mod_consts.const_str_plain_protect_api_key_for_distribution,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f15430f55ff5b78f239983d412c8d6a4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__7__decrypt_distribution_api_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__7__decrypt_distribution_api_key,
        mod_consts.const_str_plain__decrypt_distribution_api_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a35ddc95c849ace22c7cb687a1d2fd76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__8_load_protected_api_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__8_load_protected_api_key,
        mod_consts.const_str_plain_load_protected_api_key,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6533ec5d656e0fbd346fa399493a218c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_auth$$$function__9__load_password_data(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_auth$$$function__9__load_password_data,
        mod_consts.const_str_plain__load_password_data,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fe3fa3fb0df6121ebfaffbe7fe5cb808,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_auth,
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

static function_impl_code const function_table_auth[] = {
impl_auth$$$function__1__write_json,
impl_auth$$$function__2__password_digest,
impl_auth$$$function__3__fernet_for_password,
impl_auth$$$function__4__dpapi_protect,
impl_auth$$$function__5__dpapi_unprotect,
impl_auth$$$function__6_protect_api_key_for_distribution,
impl_auth$$$function__7__decrypt_distribution_api_key,
impl_auth$$$function__8_load_protected_api_key,
impl_auth$$$function__9__load_password_data,
impl_auth$$$function__10_password_is_configured,
impl_auth$$$function__11_verify_password,
impl_auth$$$function__12_configure_password,
impl_auth$$$function__13__machine_source,
impl_auth$$$function__14_machine_fingerprint,
impl_auth$$$function__15__activation_signature,
impl_auth$$$function__16_activation_status,
impl_auth$$$function__17_activate,
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

    return Nuitka_Function_GetFunctionState(function, function_table_auth);
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
        module_auth,
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
        function_table_auth,
        sizeof(function_table_auth) / sizeof(function_impl_code)
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
static char const *module_full_name = "auth";
#endif

// Internal entry point for module code.
PyObject *module_code_auth(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("auth");

    // Store the module for future use.
    module_auth = module;

    moduledict_auth = MODULE_DICT(module_auth);

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
        PRINT_STRING("auth: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("auth: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("auth: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "auth" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initauth\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_auth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_auth);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_auth);
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

        UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_auth;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_auth$$$class__1__DataBlob_27 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_auth$$$class__1__DataBlob_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_auth = MAKE_MODULE_FRAME(code_objects_076e2488de8c16d592a95d9b77d779ec, module_auth);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth);
assert(Py_REFCNT(frame_frame_auth) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_auth$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_auth$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_hashlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_auth;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_auth->m_frame.f_lineno = 1;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hashlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_hmac;
tmp_globals_arg_value_2 = (PyObject *)moduledict_auth;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_auth->m_frame.f_lineno = 2;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_hmac, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_3 = (PyObject *)moduledict_auth;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_auth->m_frame.f_lineno = 3;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_secrets;
tmp_globals_arg_value_4 = (PyObject *)moduledict_auth;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_auth->m_frame.f_lineno = 5;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_secrets, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_5 = (PyObject *)moduledict_auth;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_auth->m_frame.f_lineno = 6;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_base64, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_PATHLIB();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_auth,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Path);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_13 == NULL));
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_wintypes, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_06f332e3369e80d912dd88e2445816a8;
tmp_globals_arg_value_6 = (PyObject *)moduledict_auth;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Fernet_str_plain_InvalidToken_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_auth->m_frame.f_lineno = 11;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_auth,
        mod_consts.const_str_plain_Fernet,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Fernet);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_Fernet, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_auth,
        mod_consts.const_str_plain_InvalidToken,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_InvalidToken);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidToken, tmp_assign_source_16);
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
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_winreg;
tmp_globals_arg_value_7 = (PyObject *)moduledict_auth;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_auth->m_frame.f_lineno = 14;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg, tmp_assign_source_17);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_auth, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
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
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = Py_None;
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_winreg, tmp_assign_source_18);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 13;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_auth->m_frame)) {
        frame_frame_auth->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_3;
branch_end_1:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_auth$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_auth$__file__(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___file__);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_auth->m_frame.f_lineno = 19;
tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_auth->m_frame.f_lineno = 19;
tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_parent);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_APP_DIR, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
tmp_truediv_expr_left_1 = module_var_accessor_auth$APP_DIR(tstate);
assert(!(tmp_truediv_expr_left_1 == NULL));
tmp_truediv_expr_right_1 = mod_consts.const_str_digest_5cf511b3664ab68967c163065128d28c;
tmp_assign_source_20 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PASSWORD_FILE, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
tmp_truediv_expr_left_2 = module_var_accessor_auth$APP_DIR(tstate);
if (unlikely(tmp_truediv_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APP_DIR);
}

if (tmp_truediv_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 21;

    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_2 = mod_consts.const_str_digest_d0b2e854f99024c1e897c7f63fa4c1fd;
tmp_assign_source_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ACTIVATION_FILE, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_truediv_expr_left_3;
PyObject *tmp_truediv_expr_right_3;
tmp_truediv_expr_left_3 = module_var_accessor_auth$APP_DIR(tstate);
if (unlikely(tmp_truediv_expr_left_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APP_DIR);
}

if (tmp_truediv_expr_left_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_3 = mod_consts.const_str_digest_4641a6d4faf20a36fea1c6e78a0fde08;
tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_ENCRYPTED_API_KEY_FILE, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_truediv_expr_left_4;
PyObject *tmp_truediv_expr_right_4;
tmp_truediv_expr_left_4 = module_var_accessor_auth$APP_DIR(tstate);
if (unlikely(tmp_truediv_expr_left_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APP_DIR);
}

if (tmp_truediv_expr_left_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_4 = mod_consts.const_str_digest_2265b2d5437238fdefd0baca489553e7;
tmp_assign_source_23 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_LOCAL_API_KEY_FILE, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_int_pos_600000;
UPDATE_STRING_DICT0(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_PBKDF2_ITERATIONS, tmp_assign_source_24);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
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
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__DataBlob;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_auth->m_frame.f_lineno = 27;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
frame_frame_auth->m_frame.f_lineno = 27;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 27;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
branch_end_2:;
{
PyObject *tmp_assign_source_31;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_auth$$$class__1__DataBlob_27 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_auth;
tmp_res = PyObject_SetItem(locals_auth$$$class__1__DataBlob_27, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain__DataBlob;
tmp_res = PyObject_SetItem(locals_auth$$$class__1__DataBlob_27, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_auth$$$class__1__DataBlob_27, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_6;
}
frame_frame_auth$$$class__1__DataBlob_2 = MAKE_CLASS_FRAME(tstate, code_objects_493e18235833ca25608ae4c0df7f8b70, module_auth, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_auth$$$class__1__DataBlob_2, locals_auth$$$class__1__DataBlob_27);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_auth$$$class__1__DataBlob_2);
assert(Py_REFCNT(frame_frame_auth$$$class__1__DataBlob_2) == 2);

// Framed code:
{
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_plain_cbData;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
tmp_expression_value_9 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_9 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_DWORD);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_5;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
tmp_tuple_element_5 = mod_consts.const_str_plain_pbData;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
tmp_expression_value_11 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_c_byte);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 28;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
frame_frame_auth$$$class__1__DataBlob_2->m_frame.f_lineno = 28;
tmp_tuple_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_auth$$$class__1__DataBlob_27, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_auth$$$class__1__DataBlob_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_auth$$$class__1__DataBlob_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth$$$class__1__DataBlob_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth$$$class__1__DataBlob_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_auth$$$class__1__DataBlob_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_auth$$$class__1__DataBlob_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_auth$$$class__1__DataBlob_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_auth$$$class__1__DataBlob_27, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_6;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_auth$$$class__1__DataBlob_27, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_6;
}
branch_no_4:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_9;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = mod_consts.const_str_plain__DataBlob;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_auth$$$class__1__DataBlob_27;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_6;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_32;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_31 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_auth$$$class__1__DataBlob_27);
locals_auth$$$class__1__DataBlob_27 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_auth$$$class__1__DataBlob_27);
locals_auth$$$class__1__DataBlob_27 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 27;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__DataBlob, tmp_assign_source_31);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_33;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_str_plain_path;
tmp_dict_value_1 = module_var_accessor_auth$Path(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_data;
tmp_dict_value_1 = (PyObject *)&PyDict_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_33 = MAKE_FUNCTION_auth$$$function__1__write_json(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__write_json, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_91ecfe7f6960f91701e08deaa204abc7);

tmp_assign_source_34 = MAKE_FUNCTION_auth$$$function__2__password_digest(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__password_digest, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_password;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_annotations_3 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_salt;
tmp_dict_value_2 = (PyObject *)&PyBytes_Type;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = module_var_accessor_auth$Fernet(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Fernet);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_35 = MAKE_FUNCTION_auth$$$function__3__fernet_for_password(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__fernet_for_password, tmp_assign_source_35);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_auth->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_auth, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_auth);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;
{
PyObject *tmp_assign_source_36;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5);

tmp_assign_source_36 = MAKE_FUNCTION_auth$$$function__4__dpapi_protect(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_protect, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_4022b213dba2d6144a0034340d8eb8c5);

tmp_assign_source_37 = MAKE_FUNCTION_auth$$$function__5__dpapi_unprotect(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__dpapi_unprotect, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_1a925f1dcceb872c7b37029868bfb87d);

tmp_assign_source_38 = MAKE_FUNCTION_auth$$$function__6_protect_api_key_for_distribution(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_protect_api_key_for_distribution, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_c20d9735199c0b3447c17ca668338c1a);

tmp_assign_source_39 = MAKE_FUNCTION_auth$$$function__7__decrypt_distribution_api_key(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__decrypt_distribution_api_key, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_assign_source_40 = MAKE_FUNCTION_auth$$$function__8_load_protected_api_key(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_load_protected_api_key, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_43df417baa298f88f5321004d6433e0d);

tmp_assign_source_41 = MAKE_FUNCTION_auth$$$function__9__load_password_data(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__load_password_data, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_assign_source_42 = MAKE_FUNCTION_auth$$$function__10_password_is_configured(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_password_is_configured, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2);

tmp_assign_source_43 = MAKE_FUNCTION_auth$$$function__11_verify_password(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_password, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_12;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e70cc75a405f0670fb5b2c9897b5381e);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_44 = MAKE_FUNCTION_auth$$$function__12_configure_password(tstate, tmp_defaults_1, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_configure_password, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_assign_source_45 = MAKE_FUNCTION_auth$$$function__13__machine_source(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__machine_source, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_assign_source_46 = MAKE_FUNCTION_auth$$$function__14_machine_fingerprint(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_machine_fingerprint, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_b48995041e088ee2ec6b2f53b214719a);

tmp_assign_source_47 = MAKE_FUNCTION_auth$$$function__15__activation_signature(tstate, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain__activation_signature, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_ba22db58249aba2a980f7e215437b978);

tmp_assign_source_48 = MAKE_FUNCTION_auth$$$function__16_activation_status(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_activation_status, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_003e8b6dc113493f43225f637c88d7a2);

tmp_assign_source_49 = MAKE_FUNCTION_auth$$$function__17_activate(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_auth, (Nuitka_StringObject *)mod_consts.const_str_plain_activate, tmp_assign_source_49);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("auth", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "auth" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_auth);
    return module_auth;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_auth, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("auth", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
