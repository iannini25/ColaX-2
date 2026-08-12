/* Generated code for Python module 'requests$exceptions'
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



/* The "module_requests$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$exceptions;
PyDictObject *moduledict_requests$exceptions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_response;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_plain_request_none_tuple;
PyObject *const_str_plain_request;
PyObject *const_str_digest_cb488f69655ce887e5155c9a2e164928;
PyObject *const_str_plain_CompatJSONDecodeError;
PyObject *const_str_plain_InvalidJSONError;
PyObject *const_str_digest_068167690ac728780fecbf317e5da16a;
PyObject *const_str_plain___reduce__;
PyObject *const_str_digest_2be122a081ff9a41dc1ffdc312f855c6;
PyObject *const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
PyObject *const_tuple_str_plain_HTTPError_tuple;
PyObject *const_str_plain_HTTPError;
PyObject *const_str_plain_BaseHTTPError;
PyObject *const_str_plain_compat;
PyObject *const_tuple_str_plain_JSONDecodeError_tuple;
PyObject *const_str_plain_JSONDecodeError;
PyObject *const_tuple_type_OSError_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_RequestException;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
PyObject *const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
PyObject *const_int_pos_20;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_b590393e92f02b88308449bc0d7f0dc2;
PyObject *const_str_digest_d9d44b2a8ae14ae1c999669cf5864649;
PyObject *const_dict_56df378706e76d5d8977e0d3f16f80e5;
PyObject *const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8;
PyObject *const_tuple_str_plain_response_str_plain_request_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_18899d4d70c4648ef01c53b2470f747f;
PyObject *const_int_pos_38;
PyObject *const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c;
PyObject *const_int_pos_42;
PyObject *const_str_digest_1b9e1df56126739c46981c842a641543;
PyObject *const_dict_6cd483d26f938fb9bb7d216374e2b21e;
PyObject *const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e;
PyObject *const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
PyObject *const_int_pos_66;
PyObject *const_str_plain_ConnectionError;
PyObject *const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
PyObject *const_int_pos_70;
PyObject *const_str_plain_ProxyError;
PyObject *const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
PyObject *const_int_pos_74;
PyObject *const_str_plain_SSLError;
PyObject *const_str_digest_35d6e09b700b272e1f4429814168031d;
PyObject *const_int_pos_78;
PyObject *const_str_plain_Timeout;
PyObject *const_str_digest_34a451307fc6aab1649478fed3307568;
PyObject *const_int_pos_82;
PyObject *const_str_plain_ConnectTimeout;
PyObject *const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
PyObject *const_int_pos_91;
PyObject *const_str_plain_ReadTimeout;
PyObject *const_str_digest_b8f960a38723097fb701d7986528073c;
PyObject *const_int_pos_98;
PyObject *const_str_plain_URLRequired;
PyObject *const_str_digest_841f485de6d4157389a41ea63dc14155;
PyObject *const_int_pos_102;
PyObject *const_str_plain_TooManyRedirects;
PyObject *const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
PyObject *const_int_pos_106;
PyObject *const_str_plain_MissingSchema;
PyObject *const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd;
PyObject *const_int_pos_110;
PyObject *const_str_plain_InvalidSchema;
PyObject *const_str_digest_b43fa7f973c7368c4b6831b61ab6d366;
PyObject *const_int_pos_114;
PyObject *const_str_plain_InvalidURL;
PyObject *const_str_digest_225332b778bf59fe5fff32593da4030a;
PyObject *const_int_pos_118;
PyObject *const_str_plain_InvalidHeader;
PyObject *const_str_digest_4aae44da769befc767278be58ddca255;
PyObject *const_int_pos_122;
PyObject *const_str_plain_InvalidProxyURL;
PyObject *const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
PyObject *const_int_pos_126;
PyObject *const_str_plain_ChunkedEncodingError;
PyObject *const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
PyObject *const_int_pos_130;
PyObject *const_str_plain_ContentDecodingError;
PyObject *const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c;
PyObject *const_int_pos_134;
PyObject *const_str_plain_StreamConsumedError;
PyObject *const_str_digest_3cf9f3c16d293dcd967c7ed140034453;
PyObject *const_int_pos_138;
PyObject *const_str_plain_RetryError;
PyObject *const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
PyObject *const_int_pos_142;
PyObject *const_str_plain_UnrewindableBodyError;
PyObject *const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390;
PyObject *const_int_pos_146;
PyObject *const_str_plain_Warning;
PyObject *const_str_plain_RequestsWarning;
PyObject *const_str_digest_231982acca444de8f23c0288db53eaef;
PyObject *const_int_pos_153;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_str_plain_FileModeWarning;
PyObject *const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
PyObject *const_int_pos_157;
PyObject *const_str_plain_RequestsDependencyWarning;
PyObject *const_str_digest_3a035decbb1d48c6b204b28e42512076;
PyObject *const_int_pos_161;
PyObject *const_str_digest_4333d27c21ed032b37168f9421cfc46d;
PyObject *const_str_digest_183e1365483754a66afafc5046591b5f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple;
PyObject *const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[120];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("requests.exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 120) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 120 values, got %d\n",
                    UN_TRANSLATE("requests.exceptions"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_request_none_tuple", mod_consts.const_tuple_str_plain_request_none_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928", mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompatJSONDecodeError", mod_consts.const_str_plain_CompatJSONDecodeError);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompatJSONDecodeError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidJSONError", mod_consts.const_str_plain_InvalidJSONError);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidJSONError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a", mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___reduce__", mod_consts.const_str_plain___reduce__);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain___reduce__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6", mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1", mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0", mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPError_tuple", mod_consts.const_tuple_str_plain_HTTPError_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPError", mod_consts.const_str_plain_HTTPError);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPError", mod_consts.const_str_plain_BaseHTTPError);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_compat);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_JSONDecodeError_tuple", mod_consts.const_tuple_str_plain_JSONDecodeError_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JSONDecodeError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JSONDecodeError", mod_consts.const_str_plain_JSONDecodeError);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_tuple", mod_consts.const_tuple_type_OSError_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestException", mod_consts.const_str_plain_RequestException);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestException);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2", mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93", mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2", mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649", mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5", mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8", mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_response_str_plain_request_tuple", mod_consts.const_tuple_str_plain_response_str_plain_request_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_request_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f", mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_int_pos_38);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c", mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42", mod_consts.const_int_pos_42);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_int_pos_42);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543", mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e", mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e", mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc", mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_66", mod_consts.const_int_pos_66);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_66);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionError", mod_consts.const_str_plain_ConnectionError);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0", mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_70", mod_consts.const_int_pos_70);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_int_pos_70);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyError", mod_consts.const_str_plain_ProxyError);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2", mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_74", mod_consts.const_int_pos_74);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_74);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLError", mod_consts.const_str_plain_SSLError);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d", mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_78", mod_consts.const_int_pos_78);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_int_pos_78);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568", mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_82", mod_consts.const_int_pos_82);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_int_pos_82);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectTimeout", mod_consts.const_str_plain_ConnectTimeout);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8", mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_91", mod_consts.const_int_pos_91);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReadTimeout", mod_consts.const_str_plain_ReadTimeout);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c", mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_98", mod_consts.const_int_pos_98);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_98);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_URLRequired", mod_consts.const_str_plain_URLRequired);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_URLRequired);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155", mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_102", mod_consts.const_int_pos_102);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_102);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TooManyRedirects", mod_consts.const_str_plain_TooManyRedirects);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_TooManyRedirects);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e", mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_106", mod_consts.const_int_pos_106);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_int_pos_106);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MissingSchema", mod_consts.const_str_plain_MissingSchema);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_MissingSchema);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd", mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_110", mod_consts.const_int_pos_110);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_110);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidSchema", mod_consts.const_str_plain_InvalidSchema);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchema);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366", mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_int_pos_114);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidURL", mod_consts.const_str_plain_InvalidURL);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a", mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_118", mod_consts.const_int_pos_118);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_118);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidHeader", mod_consts.const_str_plain_InvalidHeader);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4aae44da769befc767278be58ddca255", mod_consts.const_str_digest_4aae44da769befc767278be58ddca255);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_4aae44da769befc767278be58ddca255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_122", mod_consts.const_int_pos_122);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_122);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidProxyURL", mod_consts.const_str_plain_InvalidProxyURL);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyURL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9", mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_126", mod_consts.const_int_pos_126);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_int_pos_126);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ChunkedEncodingError", mod_consts.const_str_plain_ChunkedEncodingError);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChunkedEncodingError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a", mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_130", mod_consts.const_int_pos_130);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_pos_130);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ContentDecodingError", mod_consts.const_str_plain_ContentDecodingError);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContentDecodingError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c", mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_134", mod_consts.const_int_pos_134);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_int_pos_134);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamConsumedError", mod_consts.const_str_plain_StreamConsumedError);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_StreamConsumedError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453", mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_138", mod_consts.const_int_pos_138);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_138);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RetryError", mod_consts.const_str_plain_RetryError);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_RetryError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436", mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_142", mod_consts.const_int_pos_142);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_int_pos_142);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnrewindableBodyError", mod_consts.const_str_plain_UnrewindableBodyError);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnrewindableBodyError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390", mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_146", mod_consts.const_int_pos_146);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_146);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Warning", mod_consts.const_str_plain_Warning);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Warning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsWarning", mod_consts.const_str_plain_RequestsWarning);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef", mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_153", mod_consts.const_int_pos_153);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_153);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeprecationWarning", mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FileModeWarning", mod_consts.const_str_plain_FileModeWarning);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileModeWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2", mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_157", mod_consts.const_int_pos_157);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_int_pos_157);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsDependencyWarning", mod_consts.const_str_plain_RequestsDependencyWarning);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsDependencyWarning);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076", mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_161", mod_consts.const_int_pos_161);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_161);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d", mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f", mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple", mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_requests$exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_response) && "mod_consts.const_str_plain_response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pop", mod_consts.const_str_plain_pop);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop) && "mod_consts.const_str_plain_pop");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_request_none_tuple", mod_consts.const_tuple_str_plain_request_none_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_request_none_tuple) && "mod_consts.const_tuple_str_plain_request_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_request) && "mod_consts.const_str_plain_request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928", mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928) && "mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_CompatJSONDecodeError", mod_consts.const_str_plain_CompatJSONDecodeError);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompatJSONDecodeError) && "mod_consts.const_str_plain_CompatJSONDecodeError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidJSONError", mod_consts.const_str_plain_InvalidJSONError);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidJSONError) && "mod_consts.const_str_plain_InvalidJSONError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a", mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a) && "mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___reduce__", mod_consts.const_str_plain___reduce__);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain___reduce__) && "mod_consts.const_str_plain___reduce__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6", mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6) && "mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1", mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1) && "mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TYPE_CHECKING", mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING) && "mod_consts.const_str_plain_TYPE_CHECKING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Any", mod_consts.const_str_plain_Any);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any) && "mod_consts.const_str_plain_Any");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0", mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0) && "mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPError_tuple", mod_consts.const_tuple_str_plain_HTTPError_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPError_tuple) && "mod_consts.const_tuple_str_plain_HTTPError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPError", mod_consts.const_str_plain_HTTPError);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError) && "mod_consts.const_str_plain_HTTPError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPError", mod_consts.const_str_plain_BaseHTTPError);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPError) && "mod_consts.const_str_plain_BaseHTTPError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compat", mod_consts.const_str_plain_compat);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_compat) && "mod_consts.const_str_plain_compat");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_JSONDecodeError_tuple", mod_consts.const_tuple_str_plain_JSONDecodeError_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_JSONDecodeError_tuple) && "mod_consts.const_tuple_str_plain_JSONDecodeError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_JSONDecodeError", mod_consts.const_str_plain_JSONDecodeError);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError) && "mod_consts.const_str_plain_JSONDecodeError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_OSError_tuple", mod_consts.const_tuple_type_OSError_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_type_OSError_tuple) && "mod_consts.const_tuple_type_OSError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestException", mod_consts.const_str_plain_RequestException);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestException) && "mod_consts.const_str_plain_RequestException");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2", mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2) && "mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93", mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93) && "mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_int_pos_20) && "mod_consts.const_int_pos_20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2", mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2) && "mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649", mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649) && "mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5", mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5) && "mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8", mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8) && "mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_response_str_plain_request_tuple", mod_consts.const_tuple_str_plain_response_str_plain_request_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_request_tuple) && "mod_consts.const_tuple_str_plain_response_str_plain_request_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f", mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f) && "mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_38", mod_consts.const_int_pos_38);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_int_pos_38) && "mod_consts.const_int_pos_38");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c", mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c) && "mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_42", mod_consts.const_int_pos_42);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_int_pos_42) && "mod_consts.const_int_pos_42");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543", mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543) && "mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e", mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e) && "mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e", mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e) && "mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc", mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc) && "mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_66", mod_consts.const_int_pos_66);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_66) && "mod_consts.const_int_pos_66");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectionError", mod_consts.const_str_plain_ConnectionError);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionError) && "mod_consts.const_str_plain_ConnectionError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0", mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0) && "mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_70", mod_consts.const_int_pos_70);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_int_pos_70) && "mod_consts.const_int_pos_70");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ProxyError", mod_consts.const_str_plain_ProxyError);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxyError) && "mod_consts.const_str_plain_ProxyError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2", mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2) && "mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_74", mod_consts.const_int_pos_74);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_74) && "mod_consts.const_int_pos_74");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SSLError", mod_consts.const_str_plain_SSLError);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLError) && "mod_consts.const_str_plain_SSLError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d", mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d) && "mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_78", mod_consts.const_int_pos_78);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_int_pos_78) && "mod_consts.const_int_pos_78");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Timeout", mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout) && "mod_consts.const_str_plain_Timeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568", mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568) && "mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_82", mod_consts.const_int_pos_82);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_int_pos_82) && "mod_consts.const_int_pos_82");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ConnectTimeout", mod_consts.const_str_plain_ConnectTimeout);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectTimeout) && "mod_consts.const_str_plain_ConnectTimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8", mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8) && "mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_91", mod_consts.const_int_pos_91);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_91) && "mod_consts.const_int_pos_91");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ReadTimeout", mod_consts.const_str_plain_ReadTimeout);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadTimeout) && "mod_consts.const_str_plain_ReadTimeout");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c", mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c) && "mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_98", mod_consts.const_int_pos_98);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_98) && "mod_consts.const_int_pos_98");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_URLRequired", mod_consts.const_str_plain_URLRequired);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_URLRequired) && "mod_consts.const_str_plain_URLRequired");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155", mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155) && "mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_102", mod_consts.const_int_pos_102);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_102) && "mod_consts.const_int_pos_102");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TooManyRedirects", mod_consts.const_str_plain_TooManyRedirects);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_TooManyRedirects) && "mod_consts.const_str_plain_TooManyRedirects");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e", mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e) && "mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_106", mod_consts.const_int_pos_106);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_int_pos_106) && "mod_consts.const_int_pos_106");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MissingSchema", mod_consts.const_str_plain_MissingSchema);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_MissingSchema) && "mod_consts.const_str_plain_MissingSchema");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd", mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd) && "mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_110", mod_consts.const_int_pos_110);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_110) && "mod_consts.const_int_pos_110");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidSchema", mod_consts.const_str_plain_InvalidSchema);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchema) && "mod_consts.const_str_plain_InvalidSchema");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366", mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366) && "mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_114", mod_consts.const_int_pos_114);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_int_pos_114) && "mod_consts.const_int_pos_114");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidURL", mod_consts.const_str_plain_InvalidURL);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidURL) && "mod_consts.const_str_plain_InvalidURL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a", mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a) && "mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_118", mod_consts.const_int_pos_118);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_118) && "mod_consts.const_int_pos_118");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidHeader", mod_consts.const_str_plain_InvalidHeader);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidHeader) && "mod_consts.const_str_plain_InvalidHeader");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4aae44da769befc767278be58ddca255", mod_consts.const_str_digest_4aae44da769befc767278be58ddca255);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_4aae44da769befc767278be58ddca255) && "mod_consts.const_str_digest_4aae44da769befc767278be58ddca255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_122", mod_consts.const_int_pos_122);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_122) && "mod_consts.const_int_pos_122");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_InvalidProxyURL", mod_consts.const_str_plain_InvalidProxyURL);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidProxyURL) && "mod_consts.const_str_plain_InvalidProxyURL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9", mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9) && "mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_126", mod_consts.const_int_pos_126);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_int_pos_126) && "mod_consts.const_int_pos_126");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ChunkedEncodingError", mod_consts.const_str_plain_ChunkedEncodingError);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChunkedEncodingError) && "mod_consts.const_str_plain_ChunkedEncodingError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a", mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a) && "mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_130", mod_consts.const_int_pos_130);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_pos_130) && "mod_consts.const_int_pos_130");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ContentDecodingError", mod_consts.const_str_plain_ContentDecodingError);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContentDecodingError) && "mod_consts.const_str_plain_ContentDecodingError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c", mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c) && "mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_134", mod_consts.const_int_pos_134);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_int_pos_134) && "mod_consts.const_int_pos_134");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StreamConsumedError", mod_consts.const_str_plain_StreamConsumedError);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_StreamConsumedError) && "mod_consts.const_str_plain_StreamConsumedError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453", mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453) && "mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_138", mod_consts.const_int_pos_138);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_138) && "mod_consts.const_int_pos_138");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RetryError", mod_consts.const_str_plain_RetryError);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_RetryError) && "mod_consts.const_str_plain_RetryError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436", mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436) && "mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_142", mod_consts.const_int_pos_142);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_int_pos_142) && "mod_consts.const_int_pos_142");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnrewindableBodyError", mod_consts.const_str_plain_UnrewindableBodyError);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnrewindableBodyError) && "mod_consts.const_str_plain_UnrewindableBodyError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390", mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390) && "mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_146", mod_consts.const_int_pos_146);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_146) && "mod_consts.const_int_pos_146");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Warning", mod_consts.const_str_plain_Warning);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Warning) && "mod_consts.const_str_plain_Warning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsWarning", mod_consts.const_str_plain_RequestsWarning);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsWarning) && "mod_consts.const_str_plain_RequestsWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef", mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef) && "mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_153", mod_consts.const_int_pos_153);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_153) && "mod_consts.const_int_pos_153");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_DeprecationWarning", mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning) && "mod_consts.const_str_plain_DeprecationWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_FileModeWarning", mod_consts.const_str_plain_FileModeWarning);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileModeWarning) && "mod_consts.const_str_plain_FileModeWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2", mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2) && "mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_157", mod_consts.const_int_pos_157);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_int_pos_157) && "mod_consts.const_int_pos_157");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestsDependencyWarning", mod_consts.const_str_plain_RequestsDependencyWarning);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestsDependencyWarning) && "mod_consts.const_str_plain_RequestsDependencyWarning");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076", mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076) && "mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_161", mod_consts.const_int_pos_161);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_161) && "mod_consts.const_int_pos_161");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d", mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d) && "mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f", mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f) && "mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple", mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple", mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple) && "mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_tuple", mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple) && "mod_consts.const_tuple_str_plain_self_tuple");
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
static PyObject *module_var_accessor_requests$exceptions$BaseHTTPError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseHTTPError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseHTTPError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseHTTPError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseHTTPError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$CompatJSONDecodeError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_CompatJSONDecodeError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CompatJSONDecodeError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CompatJSONDecodeError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CompatJSONDecodeError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CompatJSONDecodeError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_CompatJSONDecodeError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_CompatJSONDecodeError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CompatJSONDecodeError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$ConnectionError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$DeprecationWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$InvalidJSONError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidJSONError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidJSONError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidJSONError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidJSONError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidJSONError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidJSONError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidJSONError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidJSONError);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$InvalidURL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidURL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidURL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$RequestException(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestException);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestException);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestException, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestException);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestException, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestException);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestException);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestException);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$RequestsWarning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_RequestsWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_RequestsWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsWarning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$Timeout(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Timeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Timeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Timeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Timeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$Warning(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Warning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Warning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Warning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Warning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Warning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Warning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Warning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Warning);
    }

    return result;
}

static PyObject *module_var_accessor_requests$exceptions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_requests$exceptions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_requests$exceptions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_requests$exceptions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_28158d61c288d1b297a095df3bc2e8b7;
static PyCodeObject *code_objects_3fe984c34ca0e603ff3e08e6c33d84de;
static PyCodeObject *code_objects_6864d18f875e13765b535e37870ca39d;
static PyCodeObject *code_objects_db196f737821062efbf5388f3c35e0a9;
static PyCodeObject *code_objects_6ce005be81722aaeb67cb7d6998bb3b4;
static PyCodeObject *code_objects_162305d0b2c2d9d0953546980c20d4cc;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_4333d27c21ed032b37168f9421cfc46d); CHECK_OBJECT(module_filename_obj);
code_objects_28158d61c288d1b297a095df3bc2e8b7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f, mod_consts.const_str_digest_183e1365483754a66afafc5046591b5f, NULL, NULL, 0, 0, 0);
code_objects_3fe984c34ca0e603ff3e08e6c33d84de = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_JSONDecodeError, mod_consts.const_str_plain_JSONDecodeError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6864d18f875e13765b535e37870ca39d = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RequestException, mod_consts.const_str_plain_RequestException, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_db196f737821062efbf5388f3c35e0a9 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543, mod_consts.const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_tuple, NULL, 1, 0, 0);
code_objects_6ce005be81722aaeb67cb7d6998bb3b4 = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8, mod_consts.const_tuple_66d3ff6a2786c1a4502058052a40477c_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_162305d0b2c2d9d0953546980c20d4cc = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___reduce__, mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$exceptions$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_requests$exceptions$$$function__3___reduce__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_requests$exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_response = NULL;
struct Nuitka_FrameObject *frame_frame_requests$exceptions$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_requests$exceptions$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_kwargs);
tmp_dict_arg_value_1 = par_kwargs;
tmp_key_value_1 = mod_consts.const_str_plain_response;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = DICT_POP3(tstate, tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
assert(!(tmp_assign_source_1 == NULL));
{
    PyObject *old = var_response;
    var_response = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_requests$exceptions$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_requests$exceptions$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$exceptions$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$exceptions$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6ce005be81722aaeb67cb7d6998bb3b4, module_requests$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$exceptions$$$function__1___init__->m_type_description == NULL);
frame_frame_requests$exceptions$$$function__1___init__ = cache_frame_frame_requests$exceptions$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$exceptions$$$function__1___init__);
assert(Py_REFCNT(frame_frame_requests$exceptions$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(var_response);
tmp_ass_attr_value_1 = var_response;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_response, tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_attr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_attr_target_2;
CHECK_OBJECT(par_kwargs);
tmp_expression_value_1 = par_kwargs;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pop);
assert(!(tmp_called_value_1 == NULL));
frame_frame_requests$exceptions$$$function__1___init__->m_frame.f_lineno = 32;
tmp_ass_attr_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_request_none_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_ass_attr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_2, mod_consts.const_str_plain_request, tmp_ass_attr_value_2);
CHECK_OBJECT(tmp_ass_attr_value_2);
Py_DECREF(tmp_ass_attr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_response);
tmp_cmp_expr_left_1 = var_response;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_request);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_response);
tmp_expression_value_3 = var_response;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_request);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res != 0) ? true : false;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_attr_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_ass_attr_target_3;
CHECK_OBJECT(var_response);
tmp_expression_value_4 = var_response;
tmp_ass_attr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_request);
if (tmp_ass_attr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_ass_attr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_3, mod_consts.const_str_plain_request, tmp_ass_attr_value_3);
CHECK_OBJECT(tmp_ass_attr_value_3);
Py_DECREF(tmp_ass_attr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
if (PyCell_GET((PyObject *)self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 35;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = PyCell_GET((PyObject *)self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_5 = BUILTIN_SUPER0(tstate, moduledict_requests$exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_direct_call_arg2_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg3_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg2_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$exceptions$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$exceptions$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$exceptions$$$function__1___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs,
    var_response,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_requests$exceptions$$$function__1___init__ == cache_frame_frame_requests$exceptions$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$exceptions$$$function__1___init__);
    cache_frame_frame_requests$exceptions$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_requests$exceptions$$$function__1___init__);

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
CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_response);
CHECK_OBJECT(var_response);
Py_DECREF(var_response);
var_response = NULL;
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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$exceptions$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_requests$exceptions$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$exceptions$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$exceptions$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_requests$exceptions$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$exceptions$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$exceptions$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_db196f737821062efbf5388f3c35e0a9, module_requests$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$exceptions$$$function__2___init__->m_type_description == NULL);
frame_frame_requests$exceptions$$$function__2___init__ = cache_frame_frame_requests$exceptions$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$exceptions$$$function__2___init__);
assert(Py_REFCNT(frame_frame_requests$exceptions$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_call_result_1;
tmp_expression_value_1 = module_var_accessor_requests$exceptions$CompatJSONDecodeError(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CompatJSONDecodeError);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_1 = par_self;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_call_result_2;
tmp_expression_value_2 = module_var_accessor_requests$exceptions$InvalidJSONError(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidJSONError);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___init__);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_tuple_element_2 = par_self;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_direct_call_arg3_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_args);
if (tmp_direct_call_arg3_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);

exception_lineno = 53;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_kwargs);
tmp_direct_call_arg4_1 = par_kwargs;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_1};
    tmp_call_result_2 = impl___main__$$$helper_function_complex_call_helper_pos_star_list_star_dict(tstate, dir_call_args);
}
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$exceptions$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$exceptions$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$exceptions$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$exceptions$$$function__2___init__,
    type_description_1,
    par_self,
    par_args,
    par_kwargs
);


// Release cached frame if used for exception.
if (frame_frame_requests$exceptions$$$function__2___init__ == cache_frame_frame_requests$exceptions$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$exceptions$$$function__2___init__);
    cache_frame_frame_requests$exceptions$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_requests$exceptions$$$function__2___init__);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_requests$exceptions$$$function__3___reduce__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_requests$exceptions$$$function__3___reduce__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_requests$exceptions$$$function__3___reduce__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_requests$exceptions$$$function__3___reduce__)) {
    Py_XDECREF(cache_frame_frame_requests$exceptions$$$function__3___reduce__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_requests$exceptions$$$function__3___reduce__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_requests$exceptions$$$function__3___reduce__ = MAKE_FUNCTION_FRAME(tstate, code_objects_162305d0b2c2d9d0953546980c20d4cc, module_requests$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_requests$exceptions$$$function__3___reduce__->m_type_description == NULL);
frame_frame_requests$exceptions$$$function__3___reduce__ = cache_frame_frame_requests$exceptions$$$function__3___reduce__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$exceptions$$$function__3___reduce__);
assert(Py_REFCNT(frame_frame_requests$exceptions$$$function__3___reduce__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_requests$exceptions$CompatJSONDecodeError(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CompatJSONDecodeError);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_requests$exceptions$$$function__3___reduce__->m_frame.f_lineno = 63;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___reduce__, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$exceptions$$$function__3___reduce__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$exceptions$$$function__3___reduce__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$exceptions$$$function__3___reduce__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$exceptions$$$function__3___reduce__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_requests$exceptions$$$function__3___reduce__ == cache_frame_frame_requests$exceptions$$$function__3___reduce__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_requests$exceptions$$$function__3___reduce__);
    cache_frame_frame_requests$exceptions$$$function__3___reduce__ = NULL;
}

assertFrameObject(frame_frame_requests$exceptions$$$function__3___reduce__);

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



static PyObject *MAKE_FUNCTION_requests$exceptions$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$exceptions$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6587f4880f76e0aa0a701cb246dbfaa8,
#endif
        code_objects_6ce005be81722aaeb67cb7d6998bb3b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$exceptions,
        mod_consts.const_str_digest_cb488f69655ce887e5155c9a2e164928,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$exceptions$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$exceptions$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1b9e1df56126739c46981c842a641543,
#endif
        code_objects_db196f737821062efbf5388f3c35e0a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$exceptions,
        mod_consts.const_str_digest_068167690ac728780fecbf317e5da16a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$exceptions$$$function__3___reduce__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$exceptions$$$function__3___reduce__,
        mod_consts.const_str_plain___reduce__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be7cd7b4699b39f7e1a93cd614f0a51e,
#endif
        code_objects_162305d0b2c2d9d0953546980c20d4cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_requests$exceptions,
        mod_consts.const_str_digest_2be122a081ff9a41dc1ffdc312f855c6,
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

static function_impl_code const function_table_requests$exceptions[] = {
impl_requests$exceptions$$$function__1___init__,
impl_requests$exceptions$$$function__2___init__,
impl_requests$exceptions$$$function__3___reduce__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_requests$exceptions);
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
        module_requests$exceptions,
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
        function_table_requests$exceptions,
        sizeof(function_table_requests$exceptions) / sizeof(function_impl_code)
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
static char const *module_full_name = "requests.exceptions";
#endif

// Internal entry point for module code.
PyObject *module_code_requests$exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("requests$exceptions");

    // Store the module for future use.
    module_requests$exceptions = module;

    moduledict_requests$exceptions = MODULE_DICT(module_requests$exceptions);

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
        PRINT_STRING("requests$exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("requests$exceptions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("requests$exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.exceptions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrequests$exceptions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_requests$exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_requests$exceptions);
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

        UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyCellObject *outline_0_var___class__ = NULL;
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
PyObject *outline_16_var___class__ = NULL;
PyObject *outline_17_var___class__ = NULL;
PyObject *outline_18_var___class__ = NULL;
PyObject *outline_19_var___class__ = NULL;
PyObject *outline_20_var___class__ = NULL;
PyObject *outline_21_var___class__ = NULL;
PyObject *outline_22_var___class__ = NULL;
PyObject *outline_23_var___class__ = NULL;
PyObject *outline_24_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_16__bases = NULL;
PyObject *tmp_class_container$class_creation_16__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_16__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_16__metaclass = NULL;
PyObject *tmp_class_container$class_creation_16__prepared = NULL;
PyObject *tmp_class_container$class_creation_17__bases = NULL;
PyObject *tmp_class_container$class_creation_17__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_17__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_17__metaclass = NULL;
PyObject *tmp_class_container$class_creation_17__prepared = NULL;
PyObject *tmp_class_container$class_creation_18__bases = NULL;
PyObject *tmp_class_container$class_creation_18__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_18__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_18__metaclass = NULL;
PyObject *tmp_class_container$class_creation_18__prepared = NULL;
PyObject *tmp_class_container$class_creation_19__bases = NULL;
PyObject *tmp_class_container$class_creation_19__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_19__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_19__metaclass = NULL;
PyObject *tmp_class_container$class_creation_19__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_20__bases = NULL;
PyObject *tmp_class_container$class_creation_20__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_20__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_20__metaclass = NULL;
PyObject *tmp_class_container$class_creation_20__prepared = NULL;
PyObject *tmp_class_container$class_creation_21__bases = NULL;
PyObject *tmp_class_container$class_creation_21__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_21__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_21__metaclass = NULL;
PyObject *tmp_class_container$class_creation_21__prepared = NULL;
PyObject *tmp_class_container$class_creation_22__bases = NULL;
PyObject *tmp_class_container$class_creation_22__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_22__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_22__metaclass = NULL;
PyObject *tmp_class_container$class_creation_22__prepared = NULL;
PyObject *tmp_class_container$class_creation_23__bases = NULL;
PyObject *tmp_class_container$class_creation_23__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_23__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_23__metaclass = NULL;
PyObject *tmp_class_container$class_creation_23__prepared = NULL;
PyObject *tmp_class_container$class_creation_24__bases = NULL;
PyObject *tmp_class_container$class_creation_24__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_24__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_24__metaclass = NULL;
PyObject *tmp_class_container$class_creation_24__prepared = NULL;
PyObject *tmp_class_container$class_creation_25__bases = NULL;
PyObject *tmp_class_container$class_creation_25__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_25__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_25__metaclass = NULL;
PyObject *tmp_class_container$class_creation_25__prepared = NULL;
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
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
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
struct Nuitka_FrameObject *frame_frame_requests$exceptions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_requests$exceptions$$$class__1_RequestException_20 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_requests$exceptions$$$class__1_RequestException_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_requests$exceptions$$$class__2_InvalidJSONError_38 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_requests$exceptions$$$class__3_JSONDecodeError_42 = NULL;
struct Nuitka_FrameObject *frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_requests$exceptions$$$class__4_HTTPError_66 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_requests$exceptions$$$class__5_ConnectionError_70 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_requests$exceptions$$$class__6_ProxyError_74 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
PyObject *locals_requests$exceptions$$$class__7_SSLError_78 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
PyObject *locals_requests$exceptions$$$class__8_Timeout_82 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
PyObject *locals_requests$exceptions$$$class__9_ConnectTimeout_91 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
PyObject *locals_requests$exceptions$$$class__10_ReadTimeout_98 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
PyObject *locals_requests$exceptions$$$class__11_URLRequired_102 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
PyObject *locals_requests$exceptions$$$class__12_TooManyRedirects_106 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
PyObject *locals_requests$exceptions$$$class__13_MissingSchema_110 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_40;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
PyObject *locals_requests$exceptions$$$class__14_InvalidSchema_114 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_41;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_42;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_43;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
PyObject *locals_requests$exceptions$$$class__15_InvalidURL_118 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_44;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_45;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_46;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
PyObject *locals_requests$exceptions$$$class__16_InvalidHeader_122 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_47;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_48;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_49;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
PyObject *locals_requests$exceptions$$$class__17_InvalidProxyURL_126 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_50;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_51;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_52;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
PyObject *locals_requests$exceptions$$$class__18_ChunkedEncodingError_130 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_53;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_54;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_55;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
PyObject *locals_requests$exceptions$$$class__19_ContentDecodingError_134 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_56;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_57;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_58;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
PyObject *locals_requests$exceptions$$$class__20_StreamConsumedError_138 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_59;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_60;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_61;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
PyObject *locals_requests$exceptions$$$class__21_RetryError_142 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_62;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_63;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_64;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
PyObject *locals_requests$exceptions$$$class__22_UnrewindableBodyError_146 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_65;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_66;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_67;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
PyObject *locals_requests$exceptions$$$class__23_RequestsWarning_153 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_68;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_69;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_70;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
PyObject *locals_requests$exceptions$$$class__24_FileModeWarning_157 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_71;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_72;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_73;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
PyObject *locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_74;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_75;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_76;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_d3b9a978e9b56337b0e71e7c31b8c6a1;
UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_requests$exceptions = MAKE_MODULE_FRAME(code_objects_28158d61c288d1b297a095df3bc2e8b7, module_requests$exceptions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$exceptions);
assert(Py_REFCNT(frame_frame_requests$exceptions) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_requests$exceptions$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_requests$exceptions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_requests$exceptions,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_c8562bbff9d721153deb2fdd066393d0;
tmp_globals_arg_value_1 = (PyObject *)moduledict_requests$exceptions;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_HTTPError_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_requests$exceptions->m_frame.f_lineno = 12;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_requests$exceptions,
        mod_consts.const_str_plain_HTTPError,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_HTTPError);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPError, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_compat;
tmp_globals_arg_value_2 = (PyObject *)moduledict_requests$exceptions;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_JSONDecodeError_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_requests$exceptions->m_frame.f_lineno = 14;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_requests$exceptions,
        mod_consts.const_str_plain_JSONDecodeError,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_JSONDecodeError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_CompatJSONDecodeError, tmp_assign_source_10);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_OSError_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
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


exception_lineno = 20;

    goto try_except_handler_2;
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


exception_lineno = 20;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_13;
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


exception_lineno = 20;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_14;
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


exception_lineno = 20;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_RequestException;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 20;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_14;
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


exception_lineno = 20;

    goto try_except_handler_2;
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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
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


exception_lineno = 20;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 20;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 20;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_15;
}
branch_end_1:;
{
PyObject *tmp_assign_source_16;
outline_0_var___class__ = (PyCellObject *)PyCell_New(NULL);
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_requests$exceptions$$$class__1_RequestException_20 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_2ad78bd49ece92478753ce0fc79a6e93;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestException;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
frame_frame_requests$exceptions$$$class__1_RequestException_2 = MAKE_CLASS_FRAME(tstate, code_objects_6864d18f875e13765b535e37870ca39d, module_requests$exceptions, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_requests$exceptions$$$class__1_RequestException_2, locals_requests$exceptions$$$class__1_RequestException_20);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$exceptions$$$class__1_RequestException_2);
assert(Py_REFCNT(frame_frame_requests$exceptions$$$class__1_RequestException_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_b590393e92f02b88308449bc0d7f0dc2;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_requests$exceptions$$$class__1_RequestException_20, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 25;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_response;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_d9d44b2a8ae14ae1c999669cf5864649;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_requests$exceptions$$$class__1_RequestException_20, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 26;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_request;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5);
tmp_closure_1[0] = (struct Nuitka_CellObject *)outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_requests$exceptions$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$exceptions$$$class__1_RequestException_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$exceptions$$$class__1_RequestException_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$exceptions$$$class__1_RequestException_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$exceptions$$$class__1_RequestException_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$exceptions$$$class__1_RequestException_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_requests$exceptions$$$class__1_RequestException_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$exceptions$$$class__1_RequestException_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_response_str_plain_request_tuple;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_OSError_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_OSError_tuple;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__1_RequestException_20, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_4;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = mod_consts.const_str_plain_RequestException;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_requests$exceptions$$$class__1_RequestException_20;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
DICT_SET_ITEM(tmp_dict_arg_value_1, const_str_plain___classcell__, (PyObject *)outline_0_var___class__);
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_4, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
{
    PyObject *old = PyCell_GET((PyObject *)outline_0_var___class__);
    PyCell_SET((PyObject *)outline_0_var___class__, tmp_assign_source_17);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(PyCell_GET((PyObject *)outline_0_var___class__));
tmp_assign_source_16 = PyCell_GET((PyObject *)outline_0_var___class__);
Py_INCREF(tmp_assign_source_16);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_requests$exceptions$$$class__1_RequestException_20);
locals_requests$exceptions$$$class__1_RequestException_20 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__1_RequestException_20);
locals_requests$exceptions$$$class__1_RequestException_20 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
assert(PyCell_Check((PyObject *)outline_0_var___class__));
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 20;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestException, tmp_assign_source_16);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_assign_source_18 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_19 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_21;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_InvalidJSONError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 38;
tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_22;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_5;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 38;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 38;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_23;
}
branch_end_4:;
{
PyObject *tmp_assign_source_24;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_requests$exceptions$$$class__2_InvalidJSONError_38 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__2_InvalidJSONError_38, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_18899d4d70c4648ef01c53b2470f747f;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__2_InvalidJSONError_38, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidJSONError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__2_InvalidJSONError_38, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_38;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__2_InvalidJSONError_38, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__2_InvalidJSONError_38, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__2_InvalidJSONError_38, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_6;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = mod_consts.const_str_plain_InvalidJSONError;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_requests$exceptions$$$class__2_InvalidJSONError_38;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_6, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_7;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_24 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_24);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_requests$exceptions$$$class__2_InvalidJSONError_38);
locals_requests$exceptions$$$class__2_InvalidJSONError_38 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__2_InvalidJSONError_38);
locals_requests$exceptions$$$class__2_InvalidJSONError_38 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 38;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidJSONError, tmp_assign_source_24);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_requests$exceptions$InvalidJSONError(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidJSONError);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_requests$exceptions$CompatJSONDecodeError(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CompatJSONDecodeError);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_assign_source_26, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assign_source_26);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_29;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_JSONDecodeError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 42;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_30;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
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
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_8;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 42;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 42;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_31;
}
branch_end_7:;
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_requests$exceptions$$$class__3_JSONDecodeError_42 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_d54dedfd5dfebd9d8dc97b2b6bac020c;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_JSONDecodeError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_42;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3 = MAKE_CLASS_FRAME(tstate, code_objects_3fe984c34ca0e603ff3e08e6c33d84de, module_requests$exceptions, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3, locals_requests$exceptions$$$class__3_JSONDecodeError_42);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3);
assert(Py_REFCNT(frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_56df378706e76d5d8977e0d3f16f80e5);

tmp_dictset_value = MAKE_FUNCTION_requests$exceptions$$$function__2___init__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6cd483d26f938fb9bb7d216374e2b21e);

tmp_dictset_value = MAKE_FUNCTION_requests$exceptions$$$function__3___reduce__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, mod_consts.const_str_plain___reduce__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_requests$exceptions$$$class__3_JSONDecodeError_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_10;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__3_JSONDecodeError_42, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_6;
PyObject *tmp_name_value_8;
PyObject *tmp_bases_value_6;
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_class_decl_dict_value_3;
PyObject *tmp_metaclass_args_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_metaclass_value_6 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_8 = mod_consts.const_str_plain_JSONDecodeError;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_3__bases;
tmp_dict_arg_value_3 = locals_requests$exceptions$$$class__3_JSONDecodeError_42;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_decl_dict_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
tmp_metaclass_args_3 = MAKE_TUPLE3(tstate, tmp_name_value_8, tmp_bases_value_6, tmp_dict_arg_value_3);
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_metaclass_value_6, tmp_metaclass_args_3, tmp_class_decl_dict_value_3);
CHECK_OBJECT(tmp_metaclass_args_3);
Py_DECREF(tmp_metaclass_args_3);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_10;
}
{
    PyObject *old = outline_2_var___class__;
    outline_2_var___class__ = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_32 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_32);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_requests$exceptions$$$class__3_JSONDecodeError_42);
locals_requests$exceptions$$$class__3_JSONDecodeError_42 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__3_JSONDecodeError_42);
locals_requests$exceptions$$$class__3_JSONDecodeError_42 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 42;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_JSONDecodeError, tmp_assign_source_32);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_34;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto try_except_handler_11;
}
tmp_assign_source_34 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_35 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_37 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_37;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_HTTPError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 66;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_38;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_9, tmp_default_value_4);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_11;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 66;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_39;
}
branch_end_10:;
{
PyObject *tmp_assign_source_40;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_requests$exceptions$$$class__4_HTTPError_66 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__4_HTTPError_66, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_ddf19d9bbf2d99a7777bfd3dcc1db8dc;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__4_HTTPError_66, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_HTTPError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__4_HTTPError_66, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_66;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__4_HTTPError_66, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__4_HTTPError_66, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__4_HTTPError_66, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
branch_no_12:;
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_8;
PyObject *tmp_name_value_10;
PyObject *tmp_bases_value_8;
PyObject *tmp_dict_arg_value_4;
PyObject *tmp_class_decl_dict_value_4;
PyObject *tmp_metaclass_args_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_metaclass_value_8 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_10 = mod_consts.const_str_plain_HTTPError;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_4__bases;
tmp_dict_arg_value_4 = locals_requests$exceptions$$$class__4_HTTPError_66;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_decl_dict_value_4 = tmp_class_container$class_creation_4__class_decl_dict;
tmp_metaclass_args_4 = MAKE_TUPLE3(tstate, tmp_name_value_10, tmp_bases_value_8, tmp_dict_arg_value_4);
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_metaclass_value_8, tmp_metaclass_args_4, tmp_class_decl_dict_value_4);
CHECK_OBJECT(tmp_metaclass_args_4);
Py_DECREF(tmp_metaclass_args_4);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_13;
}
{
    PyObject *old = outline_3_var___class__;
    outline_3_var___class__ = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_40 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_40);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_requests$exceptions$$$class__4_HTTPError_66);
locals_requests$exceptions$$$class__4_HTTPError_66 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__4_HTTPError_66);
locals_requests$exceptions$$$class__4_HTTPError_66 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 66;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPError, tmp_assign_source_40);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_tuple_element_12;
tmp_tuple_element_12 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto try_except_handler_14;
}
tmp_assign_source_42 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_12);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_43 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_45;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
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
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
tmp_tuple_element_13 = mod_consts.const_str_plain_ConnectionError;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 70;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_46;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
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
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_11, tmp_default_value_5);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_14);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_14;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 70;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 70;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_47;
}
branch_end_13:;
{
PyObject *tmp_assign_source_48;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_requests$exceptions$$$class__5_ConnectionError_70 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__5_ConnectionError_70, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_8b54d81d400c0da933dfb8e36e1ac1f0;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__5_ConnectionError_70, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectionError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__5_ConnectionError_70, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_70;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__5_ConnectionError_70, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__5_ConnectionError_70, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__5_ConnectionError_70, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
branch_no_15:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_10;
PyObject *tmp_name_value_12;
PyObject *tmp_bases_value_10;
PyObject *tmp_dict_arg_value_5;
PyObject *tmp_class_decl_dict_value_5;
PyObject *tmp_metaclass_args_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_metaclass_value_10 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_12 = mod_consts.const_str_plain_ConnectionError;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_5__bases;
tmp_dict_arg_value_5 = locals_requests$exceptions$$$class__5_ConnectionError_70;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_decl_dict_value_5 = tmp_class_container$class_creation_5__class_decl_dict;
tmp_metaclass_args_5 = MAKE_TUPLE3(tstate, tmp_name_value_12, tmp_bases_value_10, tmp_dict_arg_value_5);
tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_metaclass_value_10, tmp_metaclass_args_5, tmp_class_decl_dict_value_5);
CHECK_OBJECT(tmp_metaclass_args_5);
Py_DECREF(tmp_metaclass_args_5);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto try_except_handler_16;
}
{
    PyObject *old = outline_4_var___class__;
    outline_4_var___class__ = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_48 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_48);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_requests$exceptions$$$class__5_ConnectionError_70);
locals_requests$exceptions$$$class__5_ConnectionError_70 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__5_ConnectionError_70);
locals_requests$exceptions$$$class__5_ConnectionError_70 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 70;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionError, tmp_assign_source_48);
}
goto try_end_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
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
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_requests$exceptions$ConnectionError(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto try_except_handler_17;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_53;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
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
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_ProxyError;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 74;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_54;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
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
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_13, tmp_default_value_6);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_17;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 74;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 74;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_55;
}
branch_end_16:;
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_requests$exceptions$$$class__6_ProxyError_74 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__6_ProxyError_74, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_digest_3aedd4c9c88f311ca62d0cad34678af2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__6_ProxyError_74, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_ProxyError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__6_ProxyError_74, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_74;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__6_ProxyError_74, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__6_ProxyError_74, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__6_ProxyError_74, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
branch_no_18:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_metaclass_value_12;
PyObject *tmp_name_value_14;
PyObject *tmp_bases_value_12;
PyObject *tmp_dict_arg_value_6;
PyObject *tmp_class_decl_dict_value_6;
PyObject *tmp_metaclass_args_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_metaclass_value_12 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_14 = mod_consts.const_str_plain_ProxyError;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_6__bases;
tmp_dict_arg_value_6 = locals_requests$exceptions$$$class__6_ProxyError_74;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_decl_dict_value_6 = tmp_class_container$class_creation_6__class_decl_dict;
tmp_metaclass_args_6 = MAKE_TUPLE3(tstate, tmp_name_value_14, tmp_bases_value_12, tmp_dict_arg_value_6);
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_metaclass_value_12, tmp_metaclass_args_6, tmp_class_decl_dict_value_6);
CHECK_OBJECT(tmp_metaclass_args_6);
Py_DECREF(tmp_metaclass_args_6);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_19;
}
{
    PyObject *old = outline_5_var___class__;
    outline_5_var___class__ = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_56 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_requests$exceptions$$$class__6_ProxyError_74);
locals_requests$exceptions$$$class__6_ProxyError_74 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__6_ProxyError_74);
locals_requests$exceptions$$$class__6_ProxyError_74 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 74;
goto try_except_handler_17;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxyError, tmp_assign_source_56);
}
goto try_end_7;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
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
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_58;
PyObject *tmp_tuple_element_18;
tmp_tuple_element_18 = module_var_accessor_requests$exceptions$ConnectionError(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto try_except_handler_20;
}
tmp_assign_source_58 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_58, 0, tmp_tuple_element_18);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_59 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_metaclass_value_13;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_37 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_13);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_13 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_61 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
CHECK_OBJECT(tmp_metaclass_value_13);
Py_DECREF(tmp_metaclass_value_13);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_61;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
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
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_SSLError;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 78;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_62;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
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
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_15, tmp_default_value_7);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_20;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 78;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 78;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_20;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_63;
}
branch_end_19:;
{
PyObject *tmp_assign_source_64;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_requests$exceptions$$$class__7_SSLError_78 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__7_SSLError_78, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_str_digest_35d6e09b700b272e1f4429814168031d;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__7_SSLError_78, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_str_plain_SSLError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__7_SSLError_78, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_int_pos_78;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__7_SSLError_78, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__7_SSLError_78, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__7_SSLError_78, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
branch_no_21:;
{
PyObject *tmp_assign_source_65;
PyObject *tmp_metaclass_value_14;
PyObject *tmp_name_value_16;
PyObject *tmp_bases_value_14;
PyObject *tmp_dict_arg_value_7;
PyObject *tmp_class_decl_dict_value_7;
PyObject *tmp_metaclass_args_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_metaclass_value_14 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_16 = mod_consts.const_str_plain_SSLError;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_14 = tmp_class_container$class_creation_7__bases;
tmp_dict_arg_value_7 = locals_requests$exceptions$$$class__7_SSLError_78;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_decl_dict_value_7 = tmp_class_container$class_creation_7__class_decl_dict;
tmp_metaclass_args_7 = MAKE_TUPLE3(tstate, tmp_name_value_16, tmp_bases_value_14, tmp_dict_arg_value_7);
tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_metaclass_value_14, tmp_metaclass_args_7, tmp_class_decl_dict_value_7);
CHECK_OBJECT(tmp_metaclass_args_7);
Py_DECREF(tmp_metaclass_args_7);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto try_except_handler_22;
}
{
    PyObject *old = outline_6_var___class__;
    outline_6_var___class__ = tmp_assign_source_65;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_64 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_64);
goto try_return_handler_22;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
Py_DECREF(locals_requests$exceptions$$$class__7_SSLError_78);
locals_requests$exceptions$$$class__7_SSLError_78 = NULL;
goto try_return_handler_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__7_SSLError_78);
locals_requests$exceptions$$$class__7_SSLError_78 = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_21;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 78;
goto try_except_handler_20;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLError, tmp_assign_source_64);
}
goto try_end_8;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
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
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_66;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto try_except_handler_23;
}
tmp_assign_source_66 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_66, 0, tmp_tuple_element_21);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_67 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_metaclass_value_15;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_43 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_15);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_15 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_69 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
CHECK_OBJECT(tmp_metaclass_value_15);
Py_DECREF(tmp_metaclass_value_15);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_69;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
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
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
tmp_tuple_element_22 = mod_consts.const_str_plain_Timeout;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 82;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_70;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_46 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
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
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_17, tmp_default_value_8);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_23);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_23;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_23;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 82;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_23;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_71;
}
branch_end_22:;
{
PyObject *tmp_assign_source_72;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_requests$exceptions$$$class__8_Timeout_82 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__8_Timeout_82, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_digest_34a451307fc6aab1649478fed3307568;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__8_Timeout_82, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_plain_Timeout;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__8_Timeout_82, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_int_pos_82;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__8_Timeout_82, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__8_Timeout_82, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__8_Timeout_82, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
branch_no_24:;
{
PyObject *tmp_assign_source_73;
PyObject *tmp_metaclass_value_16;
PyObject *tmp_name_value_18;
PyObject *tmp_bases_value_16;
PyObject *tmp_dict_arg_value_8;
PyObject *tmp_class_decl_dict_value_8;
PyObject *tmp_metaclass_args_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_metaclass_value_16 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_18 = mod_consts.const_str_plain_Timeout;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_16 = tmp_class_container$class_creation_8__bases;
tmp_dict_arg_value_8 = locals_requests$exceptions$$$class__8_Timeout_82;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_decl_dict_value_8 = tmp_class_container$class_creation_8__class_decl_dict;
tmp_metaclass_args_8 = MAKE_TUPLE3(tstate, tmp_name_value_18, tmp_bases_value_16, tmp_dict_arg_value_8);
tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_metaclass_value_16, tmp_metaclass_args_8, tmp_class_decl_dict_value_8);
CHECK_OBJECT(tmp_metaclass_args_8);
Py_DECREF(tmp_metaclass_args_8);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_25;
}
{
    PyObject *old = outline_7_var___class__;
    outline_7_var___class__ = tmp_assign_source_73;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_72 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_72);
goto try_return_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
Py_DECREF(locals_requests$exceptions$$$class__8_Timeout_82);
locals_requests$exceptions$$$class__8_Timeout_82 = NULL;
goto try_return_handler_24;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__8_Timeout_82);
locals_requests$exceptions$$$class__8_Timeout_82 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_24;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 82;
goto try_except_handler_23;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_72);
}
goto try_end_9;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
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
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_74;
PyObject *tmp_tuple_element_24;
tmp_tuple_element_24 = module_var_accessor_requests$exceptions$ConnectionError(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConnectionError);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto try_except_handler_26;
}
tmp_assign_source_74 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_74, 0, tmp_tuple_element_24);
tmp_tuple_element_24 = module_var_accessor_requests$exceptions$Timeout(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Timeout);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assign_source_74, 1, tmp_tuple_element_24);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_assign_source_74);
goto try_except_handler_26;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_75 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_metaclass_value_17;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_49 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_17);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_17 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_77 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
CHECK_OBJECT(tmp_metaclass_value_17);
Py_DECREF(tmp_metaclass_value_17);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_77;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_50 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
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
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
tmp_tuple_element_25 = mod_consts.const_str_plain_ConnectTimeout;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 91;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_78;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_52 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
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
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_53;
PyObject *tmp_name_value_19;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_53 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_19 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_19, tmp_default_value_9);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_54;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_54 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_26);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_26;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_26;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 91;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_26;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_79;
tmp_assign_source_79 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_79;
}
branch_end_25:;
{
PyObject *tmp_assign_source_80;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_requests$exceptions$$$class__9_ConnectTimeout_91 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__9_ConnectTimeout_91, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_digest_ade7d7a167d988b8081c48c9a0bed8e8;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__9_ConnectTimeout_91, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_plain_ConnectTimeout;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__9_ConnectTimeout_91, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_int_pos_91;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__9_ConnectTimeout_91, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__9_ConnectTimeout_91, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__9_ConnectTimeout_91, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
branch_no_27:;
{
PyObject *tmp_assign_source_81;
PyObject *tmp_metaclass_value_18;
PyObject *tmp_name_value_20;
PyObject *tmp_bases_value_18;
PyObject *tmp_dict_arg_value_9;
PyObject *tmp_class_decl_dict_value_9;
PyObject *tmp_metaclass_args_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_metaclass_value_18 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_20 = mod_consts.const_str_plain_ConnectTimeout;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_18 = tmp_class_container$class_creation_9__bases;
tmp_dict_arg_value_9 = locals_requests$exceptions$$$class__9_ConnectTimeout_91;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_decl_dict_value_9 = tmp_class_container$class_creation_9__class_decl_dict;
tmp_metaclass_args_9 = MAKE_TUPLE3(tstate, tmp_name_value_20, tmp_bases_value_18, tmp_dict_arg_value_9);
tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_metaclass_value_18, tmp_metaclass_args_9, tmp_class_decl_dict_value_9);
CHECK_OBJECT(tmp_metaclass_args_9);
Py_DECREF(tmp_metaclass_args_9);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_28;
}
{
    PyObject *old = outline_8_var___class__;
    outline_8_var___class__ = tmp_assign_source_81;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_80 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_80);
goto try_return_handler_28;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
Py_DECREF(locals_requests$exceptions$$$class__9_ConnectTimeout_91);
locals_requests$exceptions$$$class__9_ConnectTimeout_91 = NULL;
goto try_return_handler_27;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__9_ConnectTimeout_91);
locals_requests$exceptions$$$class__9_ConnectTimeout_91 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_27;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 91;
goto try_except_handler_26;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectTimeout, tmp_assign_source_80);
}
goto try_end_10;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
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
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_82;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = module_var_accessor_requests$exceptions$Timeout(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Timeout);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;

    goto try_except_handler_29;
}
tmp_assign_source_82 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_82, 0, tmp_tuple_element_27);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_83 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
tmp_assign_source_84 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_metaclass_value_19;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_55 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_19);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_19 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_85 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
CHECK_OBJECT(tmp_metaclass_value_19);
Py_DECREF(tmp_metaclass_value_19);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_85;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
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
PyObject *tmp_assign_source_86;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_57;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
tmp_tuple_element_28 = mod_consts.const_str_plain_ReadTimeout;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 98;
tmp_assign_source_86 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_86;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_58;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_58 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
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
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_59;
PyObject *tmp_name_value_21;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_21 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_21, tmp_default_value_10);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_60;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_60);
Py_DECREF(tmp_expression_value_60);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_29);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_29;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_29;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 98;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 98;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_29;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_87;
}
branch_end_28:;
{
PyObject *tmp_assign_source_88;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_requests$exceptions$$$class__10_ReadTimeout_98 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__10_ReadTimeout_98, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_str_digest_b8f960a38723097fb701d7986528073c;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__10_ReadTimeout_98, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_str_plain_ReadTimeout;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__10_ReadTimeout_98, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_int_pos_98;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__10_ReadTimeout_98, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__10_ReadTimeout_98, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__10_ReadTimeout_98, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
branch_no_30:;
{
PyObject *tmp_assign_source_89;
PyObject *tmp_metaclass_value_20;
PyObject *tmp_name_value_22;
PyObject *tmp_bases_value_20;
PyObject *tmp_dict_arg_value_10;
PyObject *tmp_class_decl_dict_value_10;
PyObject *tmp_metaclass_args_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_metaclass_value_20 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_22 = mod_consts.const_str_plain_ReadTimeout;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_20 = tmp_class_container$class_creation_10__bases;
tmp_dict_arg_value_10 = locals_requests$exceptions$$$class__10_ReadTimeout_98;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_decl_dict_value_10 = tmp_class_container$class_creation_10__class_decl_dict;
tmp_metaclass_args_10 = MAKE_TUPLE3(tstate, tmp_name_value_22, tmp_bases_value_20, tmp_dict_arg_value_10);
tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_metaclass_value_20, tmp_metaclass_args_10, tmp_class_decl_dict_value_10);
CHECK_OBJECT(tmp_metaclass_args_10);
Py_DECREF(tmp_metaclass_args_10);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_31;
}
{
    PyObject *old = outline_9_var___class__;
    outline_9_var___class__ = tmp_assign_source_89;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_88 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_88);
goto try_return_handler_31;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
Py_DECREF(locals_requests$exceptions$$$class__10_ReadTimeout_98);
locals_requests$exceptions$$$class__10_ReadTimeout_98 = NULL;
goto try_return_handler_30;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__10_ReadTimeout_98);
locals_requests$exceptions$$$class__10_ReadTimeout_98 = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto try_except_handler_30;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 98;
goto try_except_handler_29;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadTimeout, tmp_assign_source_88);
}
goto try_end_11;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
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
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
PyObject *tmp_assign_source_90;
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto try_except_handler_32;
}
tmp_assign_source_90 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_90, 0, tmp_tuple_element_30);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_91 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_metaclass_value_21;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_61 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_21);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_21 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_93 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
CHECK_OBJECT(tmp_metaclass_value_21);
Py_DECREF(tmp_metaclass_value_21);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_93;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
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
PyObject *tmp_assign_source_94;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
tmp_tuple_element_31 = mod_consts.const_str_plain_URLRequired;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 102;
tmp_assign_source_94 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_94;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_64 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
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
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_65;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_23, tmp_default_value_11);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_66;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_32;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_32;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 102;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 102;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_32;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_95;
tmp_assign_source_95 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_95;
}
branch_end_31:;
{
PyObject *tmp_assign_source_96;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_requests$exceptions$$$class__11_URLRequired_102 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__11_URLRequired_102, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
tmp_dictset_value = mod_consts.const_str_digest_841f485de6d4157389a41ea63dc14155;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__11_URLRequired_102, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
tmp_dictset_value = mod_consts.const_str_plain_URLRequired;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__11_URLRequired_102, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
tmp_dictset_value = mod_consts.const_int_pos_102;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__11_URLRequired_102, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__11_URLRequired_102, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__11_URLRequired_102, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
branch_no_33:;
{
PyObject *tmp_assign_source_97;
PyObject *tmp_metaclass_value_22;
PyObject *tmp_name_value_24;
PyObject *tmp_bases_value_22;
PyObject *tmp_dict_arg_value_11;
PyObject *tmp_class_decl_dict_value_11;
PyObject *tmp_metaclass_args_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_metaclass_value_22 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_24 = mod_consts.const_str_plain_URLRequired;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_22 = tmp_class_container$class_creation_11__bases;
tmp_dict_arg_value_11 = locals_requests$exceptions$$$class__11_URLRequired_102;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_decl_dict_value_11 = tmp_class_container$class_creation_11__class_decl_dict;
tmp_metaclass_args_11 = MAKE_TUPLE3(tstate, tmp_name_value_24, tmp_bases_value_22, tmp_dict_arg_value_11);
tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_metaclass_value_22, tmp_metaclass_args_11, tmp_class_decl_dict_value_11);
CHECK_OBJECT(tmp_metaclass_args_11);
Py_DECREF(tmp_metaclass_args_11);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto try_except_handler_34;
}
{
    PyObject *old = outline_10_var___class__;
    outline_10_var___class__ = tmp_assign_source_97;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_96 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_96);
goto try_return_handler_34;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
Py_DECREF(locals_requests$exceptions$$$class__11_URLRequired_102);
locals_requests$exceptions$$$class__11_URLRequired_102 = NULL;
goto try_return_handler_33;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__11_URLRequired_102);
locals_requests$exceptions$$$class__11_URLRequired_102 = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto try_except_handler_33;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 102;
goto try_except_handler_32;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_URLRequired, tmp_assign_source_96);
}
goto try_end_12;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
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
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
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
PyObject *tmp_assign_source_98;
PyObject *tmp_tuple_element_33;
tmp_tuple_element_33 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;

    goto try_except_handler_35;
}
tmp_assign_source_98 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_98, 0, tmp_tuple_element_33);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_98;
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_99 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_99;
}
{
PyObject *tmp_assign_source_100;
tmp_assign_source_100 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_100;
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_metaclass_value_23;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_67 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_23);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_23 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_101 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
CHECK_OBJECT(tmp_metaclass_value_23);
Py_DECREF(tmp_metaclass_value_23);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_101;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_68;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_68 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
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
PyObject *tmp_assign_source_102;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_69;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
tmp_tuple_element_34 = mod_consts.const_str_plain_TooManyRedirects;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_34 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 106;
tmp_assign_source_102 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_102;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_70;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_70 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
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
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_71;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_71 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_25, tmp_default_value_12);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_72;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_72 == NULL));
tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_72);
Py_DECREF(tmp_expression_value_72);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_35);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_35;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_35;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 106;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 106;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_35;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_103;
tmp_assign_source_103 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_103;
}
branch_end_34:;
{
PyObject *tmp_assign_source_104;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_requests$exceptions$$$class__12_TooManyRedirects_106 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__12_TooManyRedirects_106, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
tmp_dictset_value = mod_consts.const_str_digest_30cf8cedfeac36936c731ede1cc0ad0e;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__12_TooManyRedirects_106, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
tmp_dictset_value = mod_consts.const_str_plain_TooManyRedirects;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__12_TooManyRedirects_106, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
tmp_dictset_value = mod_consts.const_int_pos_106;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__12_TooManyRedirects_106, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__12_TooManyRedirects_106, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__12_TooManyRedirects_106, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
branch_no_36:;
{
PyObject *tmp_assign_source_105;
PyObject *tmp_metaclass_value_24;
PyObject *tmp_name_value_26;
PyObject *tmp_bases_value_24;
PyObject *tmp_dict_arg_value_12;
PyObject *tmp_class_decl_dict_value_12;
PyObject *tmp_metaclass_args_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_metaclass_value_24 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_26 = mod_consts.const_str_plain_TooManyRedirects;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_24 = tmp_class_container$class_creation_12__bases;
tmp_dict_arg_value_12 = locals_requests$exceptions$$$class__12_TooManyRedirects_106;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_decl_dict_value_12 = tmp_class_container$class_creation_12__class_decl_dict;
tmp_metaclass_args_12 = MAKE_TUPLE3(tstate, tmp_name_value_26, tmp_bases_value_24, tmp_dict_arg_value_12);
tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_metaclass_value_24, tmp_metaclass_args_12, tmp_class_decl_dict_value_12);
CHECK_OBJECT(tmp_metaclass_args_12);
Py_DECREF(tmp_metaclass_args_12);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_37;
}
{
    PyObject *old = outline_11_var___class__;
    outline_11_var___class__ = tmp_assign_source_105;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_104 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_104);
goto try_return_handler_37;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_37:;
Py_DECREF(locals_requests$exceptions$$$class__12_TooManyRedirects_106);
locals_requests$exceptions$$$class__12_TooManyRedirects_106 = NULL;
goto try_return_handler_36;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__12_TooManyRedirects_106);
locals_requests$exceptions$$$class__12_TooManyRedirects_106 = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto try_except_handler_36;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_36:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 106;
goto try_except_handler_35;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_TooManyRedirects, tmp_assign_source_104);
}
goto try_end_13;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
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
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
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
PyObject *tmp_assign_source_106;
PyObject *tmp_tuple_element_36;
tmp_tuple_element_36 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto try_except_handler_38;
}
tmp_assign_source_106 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_106, 0, tmp_tuple_element_36);
tmp_tuple_element_36 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_106, 1, tmp_tuple_element_36);
assert(tmp_class_container$class_creation_13__bases_orig == NULL);
tmp_class_container$class_creation_13__bases_orig = tmp_assign_source_106;
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_direct_call_arg1_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_direct_call_arg1_13 = tmp_class_container$class_creation_13__bases_orig;
Py_INCREF(tmp_direct_call_arg1_13);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_13};
    tmp_assign_source_107 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
assert(tmp_class_container$class_creation_13__bases == NULL);
tmp_class_container$class_creation_13__bases = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
tmp_assign_source_108 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__class_decl_dict == NULL);
tmp_class_container$class_creation_13__class_decl_dict = tmp_assign_source_108;
}
{
PyObject *tmp_assign_source_109;
PyObject *tmp_metaclass_value_25;
nuitka_bool tmp_condition_result_49;
int tmp_truth_name_13;
PyObject *tmp_type_arg_25;
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_container$class_creation_13__bases);
if (tmp_truth_name_13 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
tmp_condition_result_49 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_13;
} else {
    goto condexpr_false_13;
}
condexpr_true_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_expression_value_73 = tmp_class_container$class_creation_13__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
if (tmp_type_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
tmp_metaclass_value_25 = BUILTIN_TYPE1(tmp_type_arg_25);
CHECK_OBJECT(tmp_type_arg_25);
Py_DECREF(tmp_type_arg_25);
if (tmp_metaclass_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
goto condexpr_end_13;
condexpr_false_13:;
tmp_metaclass_value_25 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_25);
condexpr_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_25 = tmp_class_container$class_creation_13__bases;
tmp_assign_source_109 = SELECT_METACLASS(tstate, tmp_metaclass_value_25, tmp_bases_value_25);
CHECK_OBJECT(tmp_metaclass_value_25);
Py_DECREF(tmp_metaclass_value_25);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
assert(tmp_class_container$class_creation_13__metaclass == NULL);
tmp_class_container$class_creation_13__metaclass = tmp_assign_source_109;
}
{
bool tmp_condition_result_50;
PyObject *tmp_expression_value_74;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_74 = tmp_class_container$class_creation_13__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
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
PyObject *tmp_assign_source_110;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_75;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_75 = tmp_class_container$class_creation_13__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_MissingSchema;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_13__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_13__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 110;
tmp_assign_source_110 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_110;
}
{
bool tmp_condition_result_51;
PyObject *tmp_operand_value_13;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_expression_value_76 = tmp_class_container$class_creation_13__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
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
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_77;
PyObject *tmp_name_value_27;
PyObject *tmp_default_value_13;
tmp_mod_expr_left_13 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_27 = const_str_plain___name__;
tmp_default_value_13 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_27, tmp_default_value_13);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_78;
PyObject *tmp_type_arg_26;
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_type_arg_26 = tmp_class_container$class_creation_13__prepared;
tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
assert(!(tmp_expression_value_78 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_38);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_13);
goto try_except_handler_38;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
CHECK_OBJECT(tmp_mod_expr_right_13);
Py_DECREF(tmp_mod_expr_right_13);
if (tmp_make_exception_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_38;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 110;
tmp_raise_type_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_13);
CHECK_OBJECT(tmp_make_exception_arg_13);
Py_DECREF(tmp_make_exception_arg_13);
assert(!(tmp_raise_type_13 == NULL));
exception_state.exception_value = tmp_raise_type_13;
exception_lineno = 110;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_38;
}
branch_no_38:;
goto branch_end_37;
branch_no_37:;
{
PyObject *tmp_assign_source_111;
tmp_assign_source_111 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_13__prepared == NULL);
tmp_class_container$class_creation_13__prepared = tmp_assign_source_111;
}
branch_end_37:;
{
PyObject *tmp_assign_source_112;
{
PyObject *tmp_set_locals_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__prepared);
tmp_set_locals_13 = tmp_class_container$class_creation_13__prepared;
locals_requests$exceptions$$$class__13_MissingSchema_110 = tmp_set_locals_13;
Py_INCREF(tmp_set_locals_13);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__13_MissingSchema_110, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
tmp_dictset_value = mod_consts.const_str_digest_c4c5ab83cff49abe8191f7ac4ba3dccd;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__13_MissingSchema_110, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
tmp_dictset_value = mod_consts.const_str_plain_MissingSchema;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__13_MissingSchema_110, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
tmp_dictset_value = mod_consts.const_int_pos_110;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__13_MissingSchema_110, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__13_MissingSchema_110, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
{
nuitka_bool tmp_condition_result_52;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_cmp_expr_left_13 = tmp_class_container$class_creation_13__bases;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_cmp_expr_right_13 = tmp_class_container$class_creation_13__bases_orig;
tmp_condition_result_52 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_condition_result_52 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
    goto branch_yes_39;
} else {
    goto branch_no_39;
}
}
branch_yes_39:;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_13__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__13_MissingSchema_110, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
branch_no_39:;
{
PyObject *tmp_assign_source_113;
PyObject *tmp_metaclass_value_26;
PyObject *tmp_name_value_28;
PyObject *tmp_bases_value_26;
PyObject *tmp_dict_arg_value_13;
PyObject *tmp_class_decl_dict_value_13;
PyObject *tmp_metaclass_args_13;
CHECK_OBJECT(tmp_class_container$class_creation_13__metaclass);
tmp_metaclass_value_26 = tmp_class_container$class_creation_13__metaclass;
tmp_name_value_28 = mod_consts.const_str_plain_MissingSchema;
CHECK_OBJECT(tmp_class_container$class_creation_13__bases);
tmp_bases_value_26 = tmp_class_container$class_creation_13__bases;
tmp_dict_arg_value_13 = locals_requests$exceptions$$$class__13_MissingSchema_110;
CHECK_OBJECT(tmp_class_container$class_creation_13__class_decl_dict);
tmp_class_decl_dict_value_13 = tmp_class_container$class_creation_13__class_decl_dict;
tmp_metaclass_args_13 = MAKE_TUPLE3(tstate, tmp_name_value_28, tmp_bases_value_26, tmp_dict_arg_value_13);
tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_metaclass_value_26, tmp_metaclass_args_13, tmp_class_decl_dict_value_13);
CHECK_OBJECT(tmp_metaclass_args_13);
Py_DECREF(tmp_metaclass_args_13);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_40;
}
{
    PyObject *old = outline_12_var___class__;
    outline_12_var___class__ = tmp_assign_source_113;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_12_var___class__);
tmp_assign_source_112 = outline_12_var___class__;
Py_INCREF(tmp_assign_source_112);
goto try_return_handler_40;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_40:;
Py_DECREF(locals_requests$exceptions$$$class__13_MissingSchema_110);
locals_requests$exceptions$$$class__13_MissingSchema_110 = NULL;
goto try_return_handler_39;
// Exception handler code:
try_except_handler_40:;
exception_keeper_lineno_38 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_38 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__13_MissingSchema_110);
locals_requests$exceptions$$$class__13_MissingSchema_110 = NULL;
// Re-raise.
exception_state = exception_keeper_name_38;
exception_lineno = exception_keeper_lineno_38;

goto try_except_handler_39;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_39:;
CHECK_OBJECT(outline_12_var___class__);
CHECK_OBJECT(outline_12_var___class__);
Py_DECREF(outline_12_var___class__);
outline_12_var___class__ = NULL;
goto outline_result_26;
// Exception handler code:
try_except_handler_39:;
exception_keeper_lineno_39 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_39 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_39;
exception_lineno = exception_keeper_lineno_39;

goto outline_exception_13;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_13:;
exception_lineno = 110;
goto try_except_handler_38;
outline_result_26:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_MissingSchema, tmp_assign_source_112);
}
goto try_end_14;
// Exception handler code:
try_except_handler_38:;
exception_keeper_lineno_40 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_40 = exception_state;
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
exception_state = exception_keeper_name_40;
exception_lineno = exception_keeper_lineno_40;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
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
PyObject *tmp_assign_source_114;
PyObject *tmp_tuple_element_39;
tmp_tuple_element_39 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto try_except_handler_41;
}
tmp_assign_source_114 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_114, 0, tmp_tuple_element_39);
tmp_tuple_element_39 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_114, 1, tmp_tuple_element_39);
assert(tmp_class_container$class_creation_14__bases_orig == NULL);
tmp_class_container$class_creation_14__bases_orig = tmp_assign_source_114;
}
{
PyObject *tmp_assign_source_115;
PyObject *tmp_direct_call_arg1_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_direct_call_arg1_14 = tmp_class_container$class_creation_14__bases_orig;
Py_INCREF(tmp_direct_call_arg1_14);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_14};
    tmp_assign_source_115 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
assert(tmp_class_container$class_creation_14__bases == NULL);
tmp_class_container$class_creation_14__bases = tmp_assign_source_115;
}
{
PyObject *tmp_assign_source_116;
tmp_assign_source_116 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__class_decl_dict == NULL);
tmp_class_container$class_creation_14__class_decl_dict = tmp_assign_source_116;
}
{
PyObject *tmp_assign_source_117;
PyObject *tmp_metaclass_value_27;
nuitka_bool tmp_condition_result_53;
int tmp_truth_name_14;
PyObject *tmp_type_arg_27;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_container$class_creation_14__bases);
if (tmp_truth_name_14 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
tmp_condition_result_53 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_14;
} else {
    goto condexpr_false_14;
}
condexpr_true_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_expression_value_79 = tmp_class_container$class_creation_14__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
if (tmp_type_arg_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
tmp_metaclass_value_27 = BUILTIN_TYPE1(tmp_type_arg_27);
CHECK_OBJECT(tmp_type_arg_27);
Py_DECREF(tmp_type_arg_27);
if (tmp_metaclass_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
goto condexpr_end_14;
condexpr_false_14:;
tmp_metaclass_value_27 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_27);
condexpr_end_14:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_27 = tmp_class_container$class_creation_14__bases;
tmp_assign_source_117 = SELECT_METACLASS(tstate, tmp_metaclass_value_27, tmp_bases_value_27);
CHECK_OBJECT(tmp_metaclass_value_27);
Py_DECREF(tmp_metaclass_value_27);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
assert(tmp_class_container$class_creation_14__metaclass == NULL);
tmp_class_container$class_creation_14__metaclass = tmp_assign_source_117;
}
{
bool tmp_condition_result_54;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_80 = tmp_class_container$class_creation_14__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
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
PyObject *tmp_assign_source_118;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_81;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_81 = tmp_class_container$class_creation_14__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
tmp_tuple_element_40 = mod_consts.const_str_plain_InvalidSchema;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_14__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_14__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 114;
tmp_assign_source_118 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_118;
}
{
bool tmp_condition_result_55;
PyObject *tmp_operand_value_14;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_expression_value_82 = tmp_class_container$class_creation_14__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
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
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_83;
PyObject *tmp_name_value_29;
PyObject *tmp_default_value_14;
tmp_mod_expr_left_14 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_29 = const_str_plain___name__;
tmp_default_value_14 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_29, tmp_default_value_14);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_84;
PyObject *tmp_type_arg_28;
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_41);
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_type_arg_28 = tmp_class_container$class_creation_14__prepared;
tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_84);
Py_DECREF(tmp_expression_value_84);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_41);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_14);
goto try_except_handler_41;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
CHECK_OBJECT(tmp_mod_expr_right_14);
Py_DECREF(tmp_mod_expr_right_14);
if (tmp_make_exception_arg_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_41;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 114;
tmp_raise_type_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_14);
CHECK_OBJECT(tmp_make_exception_arg_14);
Py_DECREF(tmp_make_exception_arg_14);
assert(!(tmp_raise_type_14 == NULL));
exception_state.exception_value = tmp_raise_type_14;
exception_lineno = 114;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_41;
}
branch_no_41:;
goto branch_end_40;
branch_no_40:;
{
PyObject *tmp_assign_source_119;
tmp_assign_source_119 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_14__prepared == NULL);
tmp_class_container$class_creation_14__prepared = tmp_assign_source_119;
}
branch_end_40:;
{
PyObject *tmp_assign_source_120;
{
PyObject *tmp_set_locals_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__prepared);
tmp_set_locals_14 = tmp_class_container$class_creation_14__prepared;
locals_requests$exceptions$$$class__14_InvalidSchema_114 = tmp_set_locals_14;
Py_INCREF(tmp_set_locals_14);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__14_InvalidSchema_114, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
tmp_dictset_value = mod_consts.const_str_digest_b43fa7f973c7368c4b6831b61ab6d366;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__14_InvalidSchema_114, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidSchema;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__14_InvalidSchema_114, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
tmp_dictset_value = mod_consts.const_int_pos_114;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__14_InvalidSchema_114, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__14_InvalidSchema_114, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
{
nuitka_bool tmp_condition_result_56;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_cmp_expr_left_14 = tmp_class_container$class_creation_14__bases;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_cmp_expr_right_14 = tmp_class_container$class_creation_14__bases_orig;
tmp_condition_result_56 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_condition_result_56 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
    goto branch_yes_42;
} else {
    goto branch_no_42;
}
}
branch_yes_42:;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_14__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__14_InvalidSchema_114, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
branch_no_42:;
{
PyObject *tmp_assign_source_121;
PyObject *tmp_metaclass_value_28;
PyObject *tmp_name_value_30;
PyObject *tmp_bases_value_28;
PyObject *tmp_dict_arg_value_14;
PyObject *tmp_class_decl_dict_value_14;
PyObject *tmp_metaclass_args_14;
CHECK_OBJECT(tmp_class_container$class_creation_14__metaclass);
tmp_metaclass_value_28 = tmp_class_container$class_creation_14__metaclass;
tmp_name_value_30 = mod_consts.const_str_plain_InvalidSchema;
CHECK_OBJECT(tmp_class_container$class_creation_14__bases);
tmp_bases_value_28 = tmp_class_container$class_creation_14__bases;
tmp_dict_arg_value_14 = locals_requests$exceptions$$$class__14_InvalidSchema_114;
CHECK_OBJECT(tmp_class_container$class_creation_14__class_decl_dict);
tmp_class_decl_dict_value_14 = tmp_class_container$class_creation_14__class_decl_dict;
tmp_metaclass_args_14 = MAKE_TUPLE3(tstate, tmp_name_value_30, tmp_bases_value_28, tmp_dict_arg_value_14);
tmp_assign_source_121 = CALL_FUNCTION(tstate, tmp_metaclass_value_28, tmp_metaclass_args_14, tmp_class_decl_dict_value_14);
CHECK_OBJECT(tmp_metaclass_args_14);
Py_DECREF(tmp_metaclass_args_14);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_43;
}
{
    PyObject *old = outline_13_var___class__;
    outline_13_var___class__ = tmp_assign_source_121;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_13_var___class__);
tmp_assign_source_120 = outline_13_var___class__;
Py_INCREF(tmp_assign_source_120);
goto try_return_handler_43;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_43:;
Py_DECREF(locals_requests$exceptions$$$class__14_InvalidSchema_114);
locals_requests$exceptions$$$class__14_InvalidSchema_114 = NULL;
goto try_return_handler_42;
// Exception handler code:
try_except_handler_43:;
exception_keeper_lineno_41 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_41 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__14_InvalidSchema_114);
locals_requests$exceptions$$$class__14_InvalidSchema_114 = NULL;
// Re-raise.
exception_state = exception_keeper_name_41;
exception_lineno = exception_keeper_lineno_41;

goto try_except_handler_42;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_42:;
CHECK_OBJECT(outline_13_var___class__);
CHECK_OBJECT(outline_13_var___class__);
Py_DECREF(outline_13_var___class__);
outline_13_var___class__ = NULL;
goto outline_result_28;
// Exception handler code:
try_except_handler_42:;
exception_keeper_lineno_42 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_42 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_42;
exception_lineno = exception_keeper_lineno_42;

goto outline_exception_14;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_14:;
exception_lineno = 114;
goto try_except_handler_41;
outline_result_28:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchema, tmp_assign_source_120);
}
goto try_end_15;
// Exception handler code:
try_except_handler_41:;
exception_keeper_lineno_43 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_43 = exception_state;
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
exception_state = exception_keeper_name_43;
exception_lineno = exception_keeper_lineno_43;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
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
PyObject *tmp_outline_return_value_15;
// Tried code:
{
PyObject *tmp_assign_source_122;
PyObject *tmp_tuple_element_42;
tmp_tuple_element_42 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto try_except_handler_44;
}
tmp_assign_source_122 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_122, 0, tmp_tuple_element_42);
tmp_tuple_element_42 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_122, 1, tmp_tuple_element_42);
assert(tmp_class_container$class_creation_15__bases_orig == NULL);
tmp_class_container$class_creation_15__bases_orig = tmp_assign_source_122;
}
{
PyObject *tmp_assign_source_123;
PyObject *tmp_direct_call_arg1_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_direct_call_arg1_15 = tmp_class_container$class_creation_15__bases_orig;
Py_INCREF(tmp_direct_call_arg1_15);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_15};
    tmp_assign_source_123 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
assert(tmp_class_container$class_creation_15__bases == NULL);
tmp_class_container$class_creation_15__bases = tmp_assign_source_123;
}
{
PyObject *tmp_assign_source_124;
tmp_assign_source_124 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__class_decl_dict == NULL);
tmp_class_container$class_creation_15__class_decl_dict = tmp_assign_source_124;
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_metaclass_value_29;
nuitka_bool tmp_condition_result_57;
int tmp_truth_name_15;
PyObject *tmp_type_arg_29;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_container$class_creation_15__bases);
if (tmp_truth_name_15 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
tmp_condition_result_57 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_15;
} else {
    goto condexpr_false_15;
}
condexpr_true_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_expression_value_85 = tmp_class_container$class_creation_15__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
if (tmp_type_arg_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
tmp_metaclass_value_29 = BUILTIN_TYPE1(tmp_type_arg_29);
CHECK_OBJECT(tmp_type_arg_29);
Py_DECREF(tmp_type_arg_29);
if (tmp_metaclass_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
goto condexpr_end_15;
condexpr_false_15:;
tmp_metaclass_value_29 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_29);
condexpr_end_15:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_29 = tmp_class_container$class_creation_15__bases;
tmp_assign_source_125 = SELECT_METACLASS(tstate, tmp_metaclass_value_29, tmp_bases_value_29);
CHECK_OBJECT(tmp_metaclass_value_29);
Py_DECREF(tmp_metaclass_value_29);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
assert(tmp_class_container$class_creation_15__metaclass == NULL);
tmp_class_container$class_creation_15__metaclass = tmp_assign_source_125;
}
{
bool tmp_condition_result_58;
PyObject *tmp_expression_value_86;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_86 = tmp_class_container$class_creation_15__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
tmp_condition_result_58 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_58 != false) {
    goto branch_yes_43;
} else {
    goto branch_no_43;
}
}
branch_yes_43:;
{
PyObject *tmp_assign_source_126;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_87;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_87 = tmp_class_container$class_creation_15__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
tmp_tuple_element_43 = mod_consts.const_str_plain_InvalidURL;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_15__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_15__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 118;
tmp_assign_source_126 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_126;
}
{
bool tmp_condition_result_59;
PyObject *tmp_operand_value_15;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_expression_value_88 = tmp_class_container$class_creation_15__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
assert(!(tmp_res == -1));
tmp_condition_result_59 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_59 != false) {
    goto branch_yes_44;
} else {
    goto branch_no_44;
}
}
branch_yes_44:;
{
PyObject *tmp_raise_type_15;
PyObject *tmp_make_exception_arg_15;
PyObject *tmp_mod_expr_left_15;
PyObject *tmp_mod_expr_right_15;
PyObject *tmp_tuple_element_44;
PyObject *tmp_expression_value_89;
PyObject *tmp_name_value_31;
PyObject *tmp_default_value_15;
tmp_mod_expr_left_15 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_31 = const_str_plain___name__;
tmp_default_value_15 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_44 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_31, tmp_default_value_15);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_90;
PyObject *tmp_type_arg_30;
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_type_arg_30 = tmp_class_container$class_creation_15__prepared;
tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
assert(!(tmp_expression_value_90 == NULL));
tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_90);
Py_DECREF(tmp_expression_value_90);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_44);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_15);
goto try_except_handler_44;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
CHECK_OBJECT(tmp_mod_expr_right_15);
Py_DECREF(tmp_mod_expr_right_15);
if (tmp_make_exception_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_44;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 118;
tmp_raise_type_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_15);
CHECK_OBJECT(tmp_make_exception_arg_15);
Py_DECREF(tmp_make_exception_arg_15);
assert(!(tmp_raise_type_15 == NULL));
exception_state.exception_value = tmp_raise_type_15;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_44;
}
branch_no_44:;
goto branch_end_43;
branch_no_43:;
{
PyObject *tmp_assign_source_127;
tmp_assign_source_127 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_15__prepared == NULL);
tmp_class_container$class_creation_15__prepared = tmp_assign_source_127;
}
branch_end_43:;
{
PyObject *tmp_assign_source_128;
{
PyObject *tmp_set_locals_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__prepared);
tmp_set_locals_15 = tmp_class_container$class_creation_15__prepared;
locals_requests$exceptions$$$class__15_InvalidURL_118 = tmp_set_locals_15;
Py_INCREF(tmp_set_locals_15);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__15_InvalidURL_118, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
tmp_dictset_value = mod_consts.const_str_digest_225332b778bf59fe5fff32593da4030a;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__15_InvalidURL_118, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidURL;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__15_InvalidURL_118, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
tmp_dictset_value = mod_consts.const_int_pos_118;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__15_InvalidURL_118, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__15_InvalidURL_118, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
{
nuitka_bool tmp_condition_result_60;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_cmp_expr_left_15 = tmp_class_container$class_creation_15__bases;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_cmp_expr_right_15 = tmp_class_container$class_creation_15__bases_orig;
tmp_condition_result_60 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
if (tmp_condition_result_60 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
    goto branch_yes_45;
} else {
    goto branch_no_45;
}
}
branch_yes_45:;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_15__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__15_InvalidURL_118, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
branch_no_45:;
{
PyObject *tmp_assign_source_129;
PyObject *tmp_metaclass_value_30;
PyObject *tmp_name_value_32;
PyObject *tmp_bases_value_30;
PyObject *tmp_dict_arg_value_15;
PyObject *tmp_class_decl_dict_value_15;
PyObject *tmp_metaclass_args_15;
CHECK_OBJECT(tmp_class_container$class_creation_15__metaclass);
tmp_metaclass_value_30 = tmp_class_container$class_creation_15__metaclass;
tmp_name_value_32 = mod_consts.const_str_plain_InvalidURL;
CHECK_OBJECT(tmp_class_container$class_creation_15__bases);
tmp_bases_value_30 = tmp_class_container$class_creation_15__bases;
tmp_dict_arg_value_15 = locals_requests$exceptions$$$class__15_InvalidURL_118;
CHECK_OBJECT(tmp_class_container$class_creation_15__class_decl_dict);
tmp_class_decl_dict_value_15 = tmp_class_container$class_creation_15__class_decl_dict;
tmp_metaclass_args_15 = MAKE_TUPLE3(tstate, tmp_name_value_32, tmp_bases_value_30, tmp_dict_arg_value_15);
tmp_assign_source_129 = CALL_FUNCTION(tstate, tmp_metaclass_value_30, tmp_metaclass_args_15, tmp_class_decl_dict_value_15);
CHECK_OBJECT(tmp_metaclass_args_15);
Py_DECREF(tmp_metaclass_args_15);
if (tmp_assign_source_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_46;
}
{
    PyObject *old = outline_14_var___class__;
    outline_14_var___class__ = tmp_assign_source_129;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_14_var___class__);
tmp_assign_source_128 = outline_14_var___class__;
Py_INCREF(tmp_assign_source_128);
goto try_return_handler_46;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_46:;
Py_DECREF(locals_requests$exceptions$$$class__15_InvalidURL_118);
locals_requests$exceptions$$$class__15_InvalidURL_118 = NULL;
goto try_return_handler_45;
// Exception handler code:
try_except_handler_46:;
exception_keeper_lineno_44 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_44 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__15_InvalidURL_118);
locals_requests$exceptions$$$class__15_InvalidURL_118 = NULL;
// Re-raise.
exception_state = exception_keeper_name_44;
exception_lineno = exception_keeper_lineno_44;

goto try_except_handler_45;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_45:;
CHECK_OBJECT(outline_14_var___class__);
CHECK_OBJECT(outline_14_var___class__);
Py_DECREF(outline_14_var___class__);
outline_14_var___class__ = NULL;
goto outline_result_30;
// Exception handler code:
try_except_handler_45:;
exception_keeper_lineno_45 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_45 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_45;
exception_lineno = exception_keeper_lineno_45;

goto outline_exception_15;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_15:;
exception_lineno = 118;
goto try_except_handler_44;
outline_result_30:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidURL, tmp_assign_source_128);
}
goto try_end_16;
// Exception handler code:
try_except_handler_44:;
exception_keeper_lineno_46 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_46 = exception_state;
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
exception_state = exception_keeper_name_46;
exception_lineno = exception_keeper_lineno_46;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
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
PyObject *tmp_outline_return_value_16;
// Tried code:
{
PyObject *tmp_assign_source_130;
PyObject *tmp_tuple_element_45;
tmp_tuple_element_45 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto try_except_handler_47;
}
tmp_assign_source_130 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_130, 0, tmp_tuple_element_45);
tmp_tuple_element_45 = PyExc_ValueError;
PyTuple_SET_ITEM0(tmp_assign_source_130, 1, tmp_tuple_element_45);
assert(tmp_class_container$class_creation_16__bases_orig == NULL);
tmp_class_container$class_creation_16__bases_orig = tmp_assign_source_130;
}
{
PyObject *tmp_assign_source_131;
PyObject *tmp_direct_call_arg1_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_direct_call_arg1_16 = tmp_class_container$class_creation_16__bases_orig;
Py_INCREF(tmp_direct_call_arg1_16);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_16};
    tmp_assign_source_131 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
assert(tmp_class_container$class_creation_16__bases == NULL);
tmp_class_container$class_creation_16__bases = tmp_assign_source_131;
}
{
PyObject *tmp_assign_source_132;
tmp_assign_source_132 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__class_decl_dict == NULL);
tmp_class_container$class_creation_16__class_decl_dict = tmp_assign_source_132;
}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_metaclass_value_31;
nuitka_bool tmp_condition_result_61;
int tmp_truth_name_16;
PyObject *tmp_type_arg_31;
PyObject *tmp_expression_value_91;
PyObject *tmp_subscript_value_16;
PyObject *tmp_bases_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_container$class_creation_16__bases);
if (tmp_truth_name_16 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
tmp_condition_result_61 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_16;
} else {
    goto condexpr_false_16;
}
condexpr_true_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_expression_value_91 = tmp_class_container$class_creation_16__bases;
tmp_subscript_value_16 = const_int_0;
tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
if (tmp_type_arg_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
tmp_metaclass_value_31 = BUILTIN_TYPE1(tmp_type_arg_31);
CHECK_OBJECT(tmp_type_arg_31);
Py_DECREF(tmp_type_arg_31);
if (tmp_metaclass_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
goto condexpr_end_16;
condexpr_false_16:;
tmp_metaclass_value_31 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_31);
condexpr_end_16:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_31 = tmp_class_container$class_creation_16__bases;
tmp_assign_source_133 = SELECT_METACLASS(tstate, tmp_metaclass_value_31, tmp_bases_value_31);
CHECK_OBJECT(tmp_metaclass_value_31);
Py_DECREF(tmp_metaclass_value_31);
if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
assert(tmp_class_container$class_creation_16__metaclass == NULL);
tmp_class_container$class_creation_16__metaclass = tmp_assign_source_133;
}
{
bool tmp_condition_result_62;
PyObject *tmp_expression_value_92;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_92 = tmp_class_container$class_creation_16__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
tmp_condition_result_62 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_62 != false) {
    goto branch_yes_46;
} else {
    goto branch_no_46;
}
}
branch_yes_46:;
{
PyObject *tmp_assign_source_134;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_93;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_93 = tmp_class_container$class_creation_16__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
tmp_tuple_element_46 = mod_consts.const_str_plain_InvalidHeader;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_16__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_16__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 122;
tmp_assign_source_134 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_134;
}
{
bool tmp_condition_result_63;
PyObject *tmp_operand_value_16;
PyObject *tmp_expression_value_94;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_expression_value_94 = tmp_class_container$class_creation_16__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
assert(!(tmp_res == -1));
tmp_condition_result_63 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_63 != false) {
    goto branch_yes_47;
} else {
    goto branch_no_47;
}
}
branch_yes_47:;
{
PyObject *tmp_raise_type_16;
PyObject *tmp_make_exception_arg_16;
PyObject *tmp_mod_expr_left_16;
PyObject *tmp_mod_expr_right_16;
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_95;
PyObject *tmp_name_value_33;
PyObject *tmp_default_value_16;
tmp_mod_expr_left_16 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_expression_value_95 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_33 = const_str_plain___name__;
tmp_default_value_16 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_47 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_33, tmp_default_value_16);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_96;
PyObject *tmp_type_arg_32;
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_type_arg_32 = tmp_class_container$class_creation_16__prepared;
tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
assert(!(tmp_expression_value_96 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_96);
Py_DECREF(tmp_expression_value_96);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_47);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_16);
goto try_except_handler_47;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
CHECK_OBJECT(tmp_mod_expr_right_16);
Py_DECREF(tmp_mod_expr_right_16);
if (tmp_make_exception_arg_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_47;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 122;
tmp_raise_type_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_16);
CHECK_OBJECT(tmp_make_exception_arg_16);
Py_DECREF(tmp_make_exception_arg_16);
assert(!(tmp_raise_type_16 == NULL));
exception_state.exception_value = tmp_raise_type_16;
exception_lineno = 122;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_47;
}
branch_no_47:;
goto branch_end_46;
branch_no_46:;
{
PyObject *tmp_assign_source_135;
tmp_assign_source_135 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_16__prepared == NULL);
tmp_class_container$class_creation_16__prepared = tmp_assign_source_135;
}
branch_end_46:;
{
PyObject *tmp_assign_source_136;
{
PyObject *tmp_set_locals_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__prepared);
tmp_set_locals_16 = tmp_class_container$class_creation_16__prepared;
locals_requests$exceptions$$$class__16_InvalidHeader_122 = tmp_set_locals_16;
Py_INCREF(tmp_set_locals_16);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__16_InvalidHeader_122, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
}
tmp_dictset_value = mod_consts.const_str_digest_4aae44da769befc767278be58ddca255;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__16_InvalidHeader_122, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidHeader;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__16_InvalidHeader_122, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
}
tmp_dictset_value = mod_consts.const_int_pos_122;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__16_InvalidHeader_122, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__16_InvalidHeader_122, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
}
{
nuitka_bool tmp_condition_result_64;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_cmp_expr_left_16 = tmp_class_container$class_creation_16__bases;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_cmp_expr_right_16 = tmp_class_container$class_creation_16__bases_orig;
tmp_condition_result_64 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_condition_result_64 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
}
if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
    goto branch_yes_48;
} else {
    goto branch_no_48;
}
}
branch_yes_48:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_16__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__16_InvalidHeader_122, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
}
branch_no_48:;
{
PyObject *tmp_assign_source_137;
PyObject *tmp_metaclass_value_32;
PyObject *tmp_name_value_34;
PyObject *tmp_bases_value_32;
PyObject *tmp_dict_arg_value_16;
PyObject *tmp_class_decl_dict_value_16;
PyObject *tmp_metaclass_args_16;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
tmp_metaclass_value_32 = tmp_class_container$class_creation_16__metaclass;
tmp_name_value_34 = mod_consts.const_str_plain_InvalidHeader;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
tmp_bases_value_32 = tmp_class_container$class_creation_16__bases;
tmp_dict_arg_value_16 = locals_requests$exceptions$$$class__16_InvalidHeader_122;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_decl_dict_value_16 = tmp_class_container$class_creation_16__class_decl_dict;
tmp_metaclass_args_16 = MAKE_TUPLE3(tstate, tmp_name_value_34, tmp_bases_value_32, tmp_dict_arg_value_16);
tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_metaclass_value_32, tmp_metaclass_args_16, tmp_class_decl_dict_value_16);
CHECK_OBJECT(tmp_metaclass_args_16);
Py_DECREF(tmp_metaclass_args_16);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_49;
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
goto try_return_handler_49;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_49:;
Py_DECREF(locals_requests$exceptions$$$class__16_InvalidHeader_122);
locals_requests$exceptions$$$class__16_InvalidHeader_122 = NULL;
goto try_return_handler_48;
// Exception handler code:
try_except_handler_49:;
exception_keeper_lineno_47 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_47 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__16_InvalidHeader_122);
locals_requests$exceptions$$$class__16_InvalidHeader_122 = NULL;
// Re-raise.
exception_state = exception_keeper_name_47;
exception_lineno = exception_keeper_lineno_47;

goto try_except_handler_48;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_48:;
CHECK_OBJECT(outline_15_var___class__);
CHECK_OBJECT(outline_15_var___class__);
Py_DECREF(outline_15_var___class__);
outline_15_var___class__ = NULL;
goto outline_result_32;
// Exception handler code:
try_except_handler_48:;
exception_keeper_lineno_48 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_48 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_48;
exception_lineno = exception_keeper_lineno_48;

goto outline_exception_16;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_16:;
exception_lineno = 122;
goto try_except_handler_47;
outline_result_32:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidHeader, tmp_assign_source_136);
}
goto try_end_17;
// Exception handler code:
try_except_handler_47:;
exception_keeper_lineno_49 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_49 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_16__prepared);
tmp_class_container$class_creation_16__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_49;
exception_lineno = exception_keeper_lineno_49;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases_orig);
Py_DECREF(tmp_class_container$class_creation_16__bases_orig);
tmp_class_container$class_creation_16__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
CHECK_OBJECT(tmp_class_container$class_creation_16__bases);
Py_DECREF(tmp_class_container$class_creation_16__bases);
tmp_class_container$class_creation_16__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_16__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_16__class_decl_dict);
tmp_class_container$class_creation_16__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_16__metaclass);
Py_DECREF(tmp_class_container$class_creation_16__metaclass);
tmp_class_container$class_creation_16__metaclass = NULL;
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
PyObject *tmp_outline_return_value_17;
// Tried code:
{
PyObject *tmp_assign_source_138;
PyObject *tmp_tuple_element_48;
tmp_tuple_element_48 = module_var_accessor_requests$exceptions$InvalidURL(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidURL);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto try_except_handler_50;
}
tmp_assign_source_138 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_138, 0, tmp_tuple_element_48);
assert(tmp_class_container$class_creation_17__bases_orig == NULL);
tmp_class_container$class_creation_17__bases_orig = tmp_assign_source_138;
}
{
PyObject *tmp_assign_source_139;
PyObject *tmp_direct_call_arg1_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_direct_call_arg1_17 = tmp_class_container$class_creation_17__bases_orig;
Py_INCREF(tmp_direct_call_arg1_17);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_17};
    tmp_assign_source_139 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
assert(tmp_class_container$class_creation_17__bases == NULL);
tmp_class_container$class_creation_17__bases = tmp_assign_source_139;
}
{
PyObject *tmp_assign_source_140;
tmp_assign_source_140 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__class_decl_dict == NULL);
tmp_class_container$class_creation_17__class_decl_dict = tmp_assign_source_140;
}
{
PyObject *tmp_assign_source_141;
PyObject *tmp_metaclass_value_33;
nuitka_bool tmp_condition_result_65;
int tmp_truth_name_17;
PyObject *tmp_type_arg_33;
PyObject *tmp_expression_value_97;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_container$class_creation_17__bases);
if (tmp_truth_name_17 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
tmp_condition_result_65 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_17;
} else {
    goto condexpr_false_17;
}
condexpr_true_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_expression_value_97 = tmp_class_container$class_creation_17__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
if (tmp_type_arg_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
tmp_metaclass_value_33 = BUILTIN_TYPE1(tmp_type_arg_33);
CHECK_OBJECT(tmp_type_arg_33);
Py_DECREF(tmp_type_arg_33);
if (tmp_metaclass_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
goto condexpr_end_17;
condexpr_false_17:;
tmp_metaclass_value_33 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_33);
condexpr_end_17:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_33 = tmp_class_container$class_creation_17__bases;
tmp_assign_source_141 = SELECT_METACLASS(tstate, tmp_metaclass_value_33, tmp_bases_value_33);
CHECK_OBJECT(tmp_metaclass_value_33);
Py_DECREF(tmp_metaclass_value_33);
if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
assert(tmp_class_container$class_creation_17__metaclass == NULL);
tmp_class_container$class_creation_17__metaclass = tmp_assign_source_141;
}
{
bool tmp_condition_result_66;
PyObject *tmp_expression_value_98;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_98 = tmp_class_container$class_creation_17__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
tmp_condition_result_66 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_66 != false) {
    goto branch_yes_49;
} else {
    goto branch_no_49;
}
}
branch_yes_49:;
{
PyObject *tmp_assign_source_142;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_99;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_99 = tmp_class_container$class_creation_17__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
tmp_tuple_element_49 = mod_consts.const_str_plain_InvalidProxyURL;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_tuple_element_49 = tmp_class_container$class_creation_17__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_17__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 126;
tmp_assign_source_142 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_142;
}
{
bool tmp_condition_result_67;
PyObject *tmp_operand_value_17;
PyObject *tmp_expression_value_100;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_expression_value_100 = tmp_class_container$class_creation_17__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
assert(!(tmp_res == -1));
tmp_condition_result_67 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_67 != false) {
    goto branch_yes_50;
} else {
    goto branch_no_50;
}
}
branch_yes_50:;
{
PyObject *tmp_raise_type_17;
PyObject *tmp_make_exception_arg_17;
PyObject *tmp_mod_expr_left_17;
PyObject *tmp_mod_expr_right_17;
PyObject *tmp_tuple_element_50;
PyObject *tmp_expression_value_101;
PyObject *tmp_name_value_35;
PyObject *tmp_default_value_17;
tmp_mod_expr_left_17 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_expression_value_101 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_35 = const_str_plain___name__;
tmp_default_value_17 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_35, tmp_default_value_17);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_102;
PyObject *tmp_type_arg_34;
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_type_arg_34 = tmp_class_container$class_creation_17__prepared;
tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
assert(!(tmp_expression_value_102 == NULL));
tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_102);
Py_DECREF(tmp_expression_value_102);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_50);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_17);
goto try_except_handler_50;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
CHECK_OBJECT(tmp_mod_expr_right_17);
Py_DECREF(tmp_mod_expr_right_17);
if (tmp_make_exception_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_50;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 126;
tmp_raise_type_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_17);
CHECK_OBJECT(tmp_make_exception_arg_17);
Py_DECREF(tmp_make_exception_arg_17);
assert(!(tmp_raise_type_17 == NULL));
exception_state.exception_value = tmp_raise_type_17;
exception_lineno = 126;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_50;
}
branch_no_50:;
goto branch_end_49;
branch_no_49:;
{
PyObject *tmp_assign_source_143;
tmp_assign_source_143 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_17__prepared == NULL);
tmp_class_container$class_creation_17__prepared = tmp_assign_source_143;
}
branch_end_49:;
{
PyObject *tmp_assign_source_144;
{
PyObject *tmp_set_locals_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
tmp_set_locals_17 = tmp_class_container$class_creation_17__prepared;
locals_requests$exceptions$$$class__17_InvalidProxyURL_126 = tmp_set_locals_17;
Py_INCREF(tmp_set_locals_17);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__17_InvalidProxyURL_126, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
tmp_dictset_value = mod_consts.const_str_digest_3b2add8be5d440c36ae0b41135415fa9;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__17_InvalidProxyURL_126, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
tmp_dictset_value = mod_consts.const_str_plain_InvalidProxyURL;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__17_InvalidProxyURL_126, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
tmp_dictset_value = mod_consts.const_int_pos_126;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__17_InvalidProxyURL_126, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__17_InvalidProxyURL_126, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
{
nuitka_bool tmp_condition_result_68;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_cmp_expr_left_17 = tmp_class_container$class_creation_17__bases;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_cmp_expr_right_17 = tmp_class_container$class_creation_17__bases_orig;
tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
    goto branch_yes_51;
} else {
    goto branch_no_51;
}
}
branch_yes_51:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_17__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__17_InvalidProxyURL_126, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
branch_no_51:;
{
PyObject *tmp_assign_source_145;
PyObject *tmp_metaclass_value_34;
PyObject *tmp_name_value_36;
PyObject *tmp_bases_value_34;
PyObject *tmp_dict_arg_value_17;
PyObject *tmp_class_decl_dict_value_17;
PyObject *tmp_metaclass_args_17;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
tmp_metaclass_value_34 = tmp_class_container$class_creation_17__metaclass;
tmp_name_value_36 = mod_consts.const_str_plain_InvalidProxyURL;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
tmp_bases_value_34 = tmp_class_container$class_creation_17__bases;
tmp_dict_arg_value_17 = locals_requests$exceptions$$$class__17_InvalidProxyURL_126;
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_decl_dict_value_17 = tmp_class_container$class_creation_17__class_decl_dict;
tmp_metaclass_args_17 = MAKE_TUPLE3(tstate, tmp_name_value_36, tmp_bases_value_34, tmp_dict_arg_value_17);
tmp_assign_source_145 = CALL_FUNCTION(tstate, tmp_metaclass_value_34, tmp_metaclass_args_17, tmp_class_decl_dict_value_17);
CHECK_OBJECT(tmp_metaclass_args_17);
Py_DECREF(tmp_metaclass_args_17);
if (tmp_assign_source_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_52;
}
{
    PyObject *old = outline_16_var___class__;
    outline_16_var___class__ = tmp_assign_source_145;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_16_var___class__);
tmp_assign_source_144 = outline_16_var___class__;
Py_INCREF(tmp_assign_source_144);
goto try_return_handler_52;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_52:;
Py_DECREF(locals_requests$exceptions$$$class__17_InvalidProxyURL_126);
locals_requests$exceptions$$$class__17_InvalidProxyURL_126 = NULL;
goto try_return_handler_51;
// Exception handler code:
try_except_handler_52:;
exception_keeper_lineno_50 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_50 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__17_InvalidProxyURL_126);
locals_requests$exceptions$$$class__17_InvalidProxyURL_126 = NULL;
// Re-raise.
exception_state = exception_keeper_name_50;
exception_lineno = exception_keeper_lineno_50;

goto try_except_handler_51;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_51:;
CHECK_OBJECT(outline_16_var___class__);
CHECK_OBJECT(outline_16_var___class__);
Py_DECREF(outline_16_var___class__);
outline_16_var___class__ = NULL;
goto outline_result_34;
// Exception handler code:
try_except_handler_51:;
exception_keeper_lineno_51 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_51 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_51;
exception_lineno = exception_keeper_lineno_51;

goto outline_exception_17;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_17:;
exception_lineno = 126;
goto try_except_handler_50;
outline_result_34:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidProxyURL, tmp_assign_source_144);
}
goto try_end_18;
// Exception handler code:
try_except_handler_50:;
exception_keeper_lineno_52 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_52 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_52;
exception_lineno = exception_keeper_lineno_52;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases_orig);
Py_DECREF(tmp_class_container$class_creation_17__bases_orig);
tmp_class_container$class_creation_17__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
CHECK_OBJECT(tmp_class_container$class_creation_17__bases);
Py_DECREF(tmp_class_container$class_creation_17__bases);
tmp_class_container$class_creation_17__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_17__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_17__class_decl_dict);
tmp_class_container$class_creation_17__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_17__metaclass);
Py_DECREF(tmp_class_container$class_creation_17__metaclass);
tmp_class_container$class_creation_17__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_17__prepared);
Py_DECREF(tmp_class_container$class_creation_17__prepared);
tmp_class_container$class_creation_17__prepared = NULL;
tmp_outline_return_value_17 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_17);
goto outline_result_33;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_33:;
CHECK_OBJECT(tmp_outline_return_value_17);
Py_DECREF(tmp_outline_return_value_17);
}
{
PyObject *tmp_outline_return_value_18;
// Tried code:
{
PyObject *tmp_assign_source_146;
PyObject *tmp_tuple_element_51;
tmp_tuple_element_51 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto try_except_handler_53;
}
tmp_assign_source_146 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_146, 0, tmp_tuple_element_51);
assert(tmp_class_container$class_creation_18__bases_orig == NULL);
tmp_class_container$class_creation_18__bases_orig = tmp_assign_source_146;
}
{
PyObject *tmp_assign_source_147;
PyObject *tmp_direct_call_arg1_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_direct_call_arg1_18 = tmp_class_container$class_creation_18__bases_orig;
Py_INCREF(tmp_direct_call_arg1_18);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_18};
    tmp_assign_source_147 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
assert(tmp_class_container$class_creation_18__bases == NULL);
tmp_class_container$class_creation_18__bases = tmp_assign_source_147;
}
{
PyObject *tmp_assign_source_148;
tmp_assign_source_148 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__class_decl_dict == NULL);
tmp_class_container$class_creation_18__class_decl_dict = tmp_assign_source_148;
}
{
PyObject *tmp_assign_source_149;
PyObject *tmp_metaclass_value_35;
nuitka_bool tmp_condition_result_69;
int tmp_truth_name_18;
PyObject *tmp_type_arg_35;
PyObject *tmp_expression_value_103;
PyObject *tmp_subscript_value_18;
PyObject *tmp_bases_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_container$class_creation_18__bases);
if (tmp_truth_name_18 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
tmp_condition_result_69 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_69 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_18;
} else {
    goto condexpr_false_18;
}
condexpr_true_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_expression_value_103 = tmp_class_container$class_creation_18__bases;
tmp_subscript_value_18 = const_int_0;
tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
if (tmp_type_arg_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
tmp_metaclass_value_35 = BUILTIN_TYPE1(tmp_type_arg_35);
CHECK_OBJECT(tmp_type_arg_35);
Py_DECREF(tmp_type_arg_35);
if (tmp_metaclass_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
goto condexpr_end_18;
condexpr_false_18:;
tmp_metaclass_value_35 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_35);
condexpr_end_18:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_35 = tmp_class_container$class_creation_18__bases;
tmp_assign_source_149 = SELECT_METACLASS(tstate, tmp_metaclass_value_35, tmp_bases_value_35);
CHECK_OBJECT(tmp_metaclass_value_35);
Py_DECREF(tmp_metaclass_value_35);
if (tmp_assign_source_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
assert(tmp_class_container$class_creation_18__metaclass == NULL);
tmp_class_container$class_creation_18__metaclass = tmp_assign_source_149;
}
{
bool tmp_condition_result_70;
PyObject *tmp_expression_value_104;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_104 = tmp_class_container$class_creation_18__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
tmp_condition_result_70 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_70 != false) {
    goto branch_yes_52;
} else {
    goto branch_no_52;
}
}
branch_yes_52:;
{
PyObject *tmp_assign_source_150;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_105;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_105 = tmp_class_container$class_creation_18__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
tmp_tuple_element_52 = mod_consts.const_str_plain_ChunkedEncodingError;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_18__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_18__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 130;
tmp_assign_source_150 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_150 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_150;
}
{
bool tmp_condition_result_71;
PyObject *tmp_operand_value_18;
PyObject *tmp_expression_value_106;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_expression_value_106 = tmp_class_container$class_creation_18__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
assert(!(tmp_res == -1));
tmp_condition_result_71 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_71 != false) {
    goto branch_yes_53;
} else {
    goto branch_no_53;
}
}
branch_yes_53:;
{
PyObject *tmp_raise_type_18;
PyObject *tmp_make_exception_arg_18;
PyObject *tmp_mod_expr_left_18;
PyObject *tmp_mod_expr_right_18;
PyObject *tmp_tuple_element_53;
PyObject *tmp_expression_value_107;
PyObject *tmp_name_value_37;
PyObject *tmp_default_value_18;
tmp_mod_expr_left_18 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_expression_value_107 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_37 = const_str_plain___name__;
tmp_default_value_18 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_37, tmp_default_value_18);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_108;
PyObject *tmp_type_arg_36;
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_53);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_type_arg_36 = tmp_class_container$class_creation_18__prepared;
tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
assert(!(tmp_expression_value_108 == NULL));
tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_108);
Py_DECREF(tmp_expression_value_108);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_53);
}
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_mod_expr_right_18);
goto try_except_handler_53;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_make_exception_arg_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
CHECK_OBJECT(tmp_mod_expr_right_18);
Py_DECREF(tmp_mod_expr_right_18);
if (tmp_make_exception_arg_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_53;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 130;
tmp_raise_type_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_18);
CHECK_OBJECT(tmp_make_exception_arg_18);
Py_DECREF(tmp_make_exception_arg_18);
assert(!(tmp_raise_type_18 == NULL));
exception_state.exception_value = tmp_raise_type_18;
exception_lineno = 130;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_53;
}
branch_no_53:;
goto branch_end_52;
branch_no_52:;
{
PyObject *tmp_assign_source_151;
tmp_assign_source_151 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_18__prepared == NULL);
tmp_class_container$class_creation_18__prepared = tmp_assign_source_151;
}
branch_end_52:;
{
PyObject *tmp_assign_source_152;
{
PyObject *tmp_set_locals_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
tmp_set_locals_18 = tmp_class_container$class_creation_18__prepared;
locals_requests$exceptions$$$class__18_ChunkedEncodingError_130 = tmp_set_locals_18;
Py_INCREF(tmp_set_locals_18);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
tmp_dictset_value = mod_consts.const_str_digest_62b56f407a05bf4c50ea2ebf5d0c7b8a;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
tmp_dictset_value = mod_consts.const_str_plain_ChunkedEncodingError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
tmp_dictset_value = mod_consts.const_int_pos_130;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
{
nuitka_bool tmp_condition_result_72;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_cmp_expr_left_18 = tmp_class_container$class_creation_18__bases;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_cmp_expr_right_18 = tmp_class_container$class_creation_18__bases_orig;
tmp_condition_result_72 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_condition_result_72 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
    goto branch_yes_54;
} else {
    goto branch_no_54;
}
}
branch_yes_54:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_18__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
branch_no_54:;
{
PyObject *tmp_assign_source_153;
PyObject *tmp_metaclass_value_36;
PyObject *tmp_name_value_38;
PyObject *tmp_bases_value_36;
PyObject *tmp_dict_arg_value_18;
PyObject *tmp_class_decl_dict_value_18;
PyObject *tmp_metaclass_args_18;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
tmp_metaclass_value_36 = tmp_class_container$class_creation_18__metaclass;
tmp_name_value_38 = mod_consts.const_str_plain_ChunkedEncodingError;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
tmp_bases_value_36 = tmp_class_container$class_creation_18__bases;
tmp_dict_arg_value_18 = locals_requests$exceptions$$$class__18_ChunkedEncodingError_130;
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_decl_dict_value_18 = tmp_class_container$class_creation_18__class_decl_dict;
tmp_metaclass_args_18 = MAKE_TUPLE3(tstate, tmp_name_value_38, tmp_bases_value_36, tmp_dict_arg_value_18);
tmp_assign_source_153 = CALL_FUNCTION(tstate, tmp_metaclass_value_36, tmp_metaclass_args_18, tmp_class_decl_dict_value_18);
CHECK_OBJECT(tmp_metaclass_args_18);
Py_DECREF(tmp_metaclass_args_18);
if (tmp_assign_source_153 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto try_except_handler_55;
}
{
    PyObject *old = outline_17_var___class__;
    outline_17_var___class__ = tmp_assign_source_153;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_17_var___class__);
tmp_assign_source_152 = outline_17_var___class__;
Py_INCREF(tmp_assign_source_152);
goto try_return_handler_55;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_55:;
Py_DECREF(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130);
locals_requests$exceptions$$$class__18_ChunkedEncodingError_130 = NULL;
goto try_return_handler_54;
// Exception handler code:
try_except_handler_55:;
exception_keeper_lineno_53 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_53 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__18_ChunkedEncodingError_130);
locals_requests$exceptions$$$class__18_ChunkedEncodingError_130 = NULL;
// Re-raise.
exception_state = exception_keeper_name_53;
exception_lineno = exception_keeper_lineno_53;

goto try_except_handler_54;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_54:;
CHECK_OBJECT(outline_17_var___class__);
CHECK_OBJECT(outline_17_var___class__);
Py_DECREF(outline_17_var___class__);
outline_17_var___class__ = NULL;
goto outline_result_36;
// Exception handler code:
try_except_handler_54:;
exception_keeper_lineno_54 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_54 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_54;
exception_lineno = exception_keeper_lineno_54;

goto outline_exception_18;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_18:;
exception_lineno = 130;
goto try_except_handler_53;
outline_result_36:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunkedEncodingError, tmp_assign_source_152);
}
goto try_end_19;
// Exception handler code:
try_except_handler_53:;
exception_keeper_lineno_55 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_55 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_55;
exception_lineno = exception_keeper_lineno_55;

goto frame_exception_exit_1;
// End of try:
try_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases_orig);
Py_DECREF(tmp_class_container$class_creation_18__bases_orig);
tmp_class_container$class_creation_18__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
CHECK_OBJECT(tmp_class_container$class_creation_18__bases);
Py_DECREF(tmp_class_container$class_creation_18__bases);
tmp_class_container$class_creation_18__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_18__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_18__class_decl_dict);
tmp_class_container$class_creation_18__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_18__metaclass);
Py_DECREF(tmp_class_container$class_creation_18__metaclass);
tmp_class_container$class_creation_18__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_18__prepared);
Py_DECREF(tmp_class_container$class_creation_18__prepared);
tmp_class_container$class_creation_18__prepared = NULL;
tmp_outline_return_value_18 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_18);
goto outline_result_35;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_35:;
CHECK_OBJECT(tmp_outline_return_value_18);
Py_DECREF(tmp_outline_return_value_18);
}
{
PyObject *tmp_outline_return_value_19;
// Tried code:
{
PyObject *tmp_assign_source_154;
PyObject *tmp_tuple_element_54;
tmp_tuple_element_54 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto try_except_handler_56;
}
tmp_assign_source_154 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_154, 0, tmp_tuple_element_54);
tmp_tuple_element_54 = module_var_accessor_requests$exceptions$BaseHTTPError(tstate);
if (unlikely(tmp_tuple_element_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseHTTPError);
}

if (tmp_tuple_element_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM0(tmp_assign_source_154, 1, tmp_tuple_element_54);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_assign_source_154);
goto try_except_handler_56;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
assert(tmp_class_container$class_creation_19__bases_orig == NULL);
tmp_class_container$class_creation_19__bases_orig = tmp_assign_source_154;
}
{
PyObject *tmp_assign_source_155;
PyObject *tmp_direct_call_arg1_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_direct_call_arg1_19 = tmp_class_container$class_creation_19__bases_orig;
Py_INCREF(tmp_direct_call_arg1_19);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_19};
    tmp_assign_source_155 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_155 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
assert(tmp_class_container$class_creation_19__bases == NULL);
tmp_class_container$class_creation_19__bases = tmp_assign_source_155;
}
{
PyObject *tmp_assign_source_156;
tmp_assign_source_156 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__class_decl_dict == NULL);
tmp_class_container$class_creation_19__class_decl_dict = tmp_assign_source_156;
}
{
PyObject *tmp_assign_source_157;
PyObject *tmp_metaclass_value_37;
nuitka_bool tmp_condition_result_73;
int tmp_truth_name_19;
PyObject *tmp_type_arg_37;
PyObject *tmp_expression_value_109;
PyObject *tmp_subscript_value_19;
PyObject *tmp_bases_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_container$class_creation_19__bases);
if (tmp_truth_name_19 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
tmp_condition_result_73 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_73 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_19;
} else {
    goto condexpr_false_19;
}
condexpr_true_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_expression_value_109 = tmp_class_container$class_creation_19__bases;
tmp_subscript_value_19 = const_int_0;
tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_109, tmp_subscript_value_19, 0);
if (tmp_type_arg_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
tmp_metaclass_value_37 = BUILTIN_TYPE1(tmp_type_arg_37);
CHECK_OBJECT(tmp_type_arg_37);
Py_DECREF(tmp_type_arg_37);
if (tmp_metaclass_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
goto condexpr_end_19;
condexpr_false_19:;
tmp_metaclass_value_37 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_37);
condexpr_end_19:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_bases_value_37 = tmp_class_container$class_creation_19__bases;
tmp_assign_source_157 = SELECT_METACLASS(tstate, tmp_metaclass_value_37, tmp_bases_value_37);
CHECK_OBJECT(tmp_metaclass_value_37);
Py_DECREF(tmp_metaclass_value_37);
if (tmp_assign_source_157 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
assert(tmp_class_container$class_creation_19__metaclass == NULL);
tmp_class_container$class_creation_19__metaclass = tmp_assign_source_157;
}
{
bool tmp_condition_result_74;
PyObject *tmp_expression_value_110;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_110 = tmp_class_container$class_creation_19__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
tmp_condition_result_74 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_74 != false) {
    goto branch_yes_55;
} else {
    goto branch_no_55;
}
}
branch_yes_55:;
{
PyObject *tmp_assign_source_158;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_111;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_55;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_111 = tmp_class_container$class_creation_19__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
tmp_tuple_element_55 = mod_consts.const_str_plain_ContentDecodingError;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_tuple_element_55 = tmp_class_container$class_creation_19__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_55);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_19__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 134;
tmp_assign_source_158 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_158 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_158;
}
{
bool tmp_condition_result_75;
PyObject *tmp_operand_value_19;
PyObject *tmp_expression_value_112;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_expression_value_112 = tmp_class_container$class_creation_19__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
assert(!(tmp_res == -1));
tmp_condition_result_75 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_75 != false) {
    goto branch_yes_56;
} else {
    goto branch_no_56;
}
}
branch_yes_56:;
{
PyObject *tmp_raise_type_19;
PyObject *tmp_make_exception_arg_19;
PyObject *tmp_mod_expr_left_19;
PyObject *tmp_mod_expr_right_19;
PyObject *tmp_tuple_element_56;
PyObject *tmp_expression_value_113;
PyObject *tmp_name_value_39;
PyObject *tmp_default_value_19;
tmp_mod_expr_left_19 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_expression_value_113 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_39 = const_str_plain___name__;
tmp_default_value_19 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_56 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_39, tmp_default_value_19);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_114;
PyObject *tmp_type_arg_38;
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_type_arg_38 = tmp_class_container$class_creation_19__prepared;
tmp_expression_value_114 = BUILTIN_TYPE1(tmp_type_arg_38);
assert(!(tmp_expression_value_114 == NULL));
tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_114);
Py_DECREF(tmp_expression_value_114);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_56);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_mod_expr_right_19);
goto try_except_handler_56;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_make_exception_arg_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
CHECK_OBJECT(tmp_mod_expr_right_19);
Py_DECREF(tmp_mod_expr_right_19);
if (tmp_make_exception_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_56;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 134;
tmp_raise_type_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_19);
CHECK_OBJECT(tmp_make_exception_arg_19);
Py_DECREF(tmp_make_exception_arg_19);
assert(!(tmp_raise_type_19 == NULL));
exception_state.exception_value = tmp_raise_type_19;
exception_lineno = 134;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_56;
}
branch_no_56:;
goto branch_end_55;
branch_no_55:;
{
PyObject *tmp_assign_source_159;
tmp_assign_source_159 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_19__prepared == NULL);
tmp_class_container$class_creation_19__prepared = tmp_assign_source_159;
}
branch_end_55:;
{
PyObject *tmp_assign_source_160;
{
PyObject *tmp_set_locals_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
tmp_set_locals_19 = tmp_class_container$class_creation_19__prepared;
locals_requests$exceptions$$$class__19_ContentDecodingError_134 = tmp_set_locals_19;
Py_INCREF(tmp_set_locals_19);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__19_ContentDecodingError_134, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
tmp_dictset_value = mod_consts.const_str_digest_f0f7e3ca1b6404dc7867b8c8d275ec0c;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__19_ContentDecodingError_134, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
tmp_dictset_value = mod_consts.const_str_plain_ContentDecodingError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__19_ContentDecodingError_134, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
tmp_dictset_value = mod_consts.const_int_pos_134;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__19_ContentDecodingError_134, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__19_ContentDecodingError_134, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
{
nuitka_bool tmp_condition_result_76;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_cmp_expr_left_19 = tmp_class_container$class_creation_19__bases;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_cmp_expr_right_19 = tmp_class_container$class_creation_19__bases_orig;
tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
    goto branch_yes_57;
} else {
    goto branch_no_57;
}
}
branch_yes_57:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_19__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__19_ContentDecodingError_134, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
branch_no_57:;
{
PyObject *tmp_assign_source_161;
PyObject *tmp_metaclass_value_38;
PyObject *tmp_name_value_40;
PyObject *tmp_bases_value_38;
PyObject *tmp_dict_arg_value_19;
PyObject *tmp_class_decl_dict_value_19;
PyObject *tmp_metaclass_args_19;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
tmp_metaclass_value_38 = tmp_class_container$class_creation_19__metaclass;
tmp_name_value_40 = mod_consts.const_str_plain_ContentDecodingError;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
tmp_bases_value_38 = tmp_class_container$class_creation_19__bases;
tmp_dict_arg_value_19 = locals_requests$exceptions$$$class__19_ContentDecodingError_134;
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_decl_dict_value_19 = tmp_class_container$class_creation_19__class_decl_dict;
tmp_metaclass_args_19 = MAKE_TUPLE3(tstate, tmp_name_value_40, tmp_bases_value_38, tmp_dict_arg_value_19);
tmp_assign_source_161 = CALL_FUNCTION(tstate, tmp_metaclass_value_38, tmp_metaclass_args_19, tmp_class_decl_dict_value_19);
CHECK_OBJECT(tmp_metaclass_args_19);
Py_DECREF(tmp_metaclass_args_19);
if (tmp_assign_source_161 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto try_except_handler_58;
}
{
    PyObject *old = outline_18_var___class__;
    outline_18_var___class__ = tmp_assign_source_161;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_18_var___class__);
tmp_assign_source_160 = outline_18_var___class__;
Py_INCREF(tmp_assign_source_160);
goto try_return_handler_58;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_58:;
Py_DECREF(locals_requests$exceptions$$$class__19_ContentDecodingError_134);
locals_requests$exceptions$$$class__19_ContentDecodingError_134 = NULL;
goto try_return_handler_57;
// Exception handler code:
try_except_handler_58:;
exception_keeper_lineno_56 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_56 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__19_ContentDecodingError_134);
locals_requests$exceptions$$$class__19_ContentDecodingError_134 = NULL;
// Re-raise.
exception_state = exception_keeper_name_56;
exception_lineno = exception_keeper_lineno_56;

goto try_except_handler_57;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_57:;
CHECK_OBJECT(outline_18_var___class__);
CHECK_OBJECT(outline_18_var___class__);
Py_DECREF(outline_18_var___class__);
outline_18_var___class__ = NULL;
goto outline_result_38;
// Exception handler code:
try_except_handler_57:;
exception_keeper_lineno_57 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_57 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_57;
exception_lineno = exception_keeper_lineno_57;

goto outline_exception_19;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_19:;
exception_lineno = 134;
goto try_except_handler_56;
outline_result_38:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentDecodingError, tmp_assign_source_160);
}
goto try_end_20;
// Exception handler code:
try_except_handler_56:;
exception_keeper_lineno_58 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_58 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_58;
exception_lineno = exception_keeper_lineno_58;

goto frame_exception_exit_1;
// End of try:
try_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases_orig);
Py_DECREF(tmp_class_container$class_creation_19__bases_orig);
tmp_class_container$class_creation_19__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
CHECK_OBJECT(tmp_class_container$class_creation_19__bases);
Py_DECREF(tmp_class_container$class_creation_19__bases);
tmp_class_container$class_creation_19__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_19__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_19__class_decl_dict);
tmp_class_container$class_creation_19__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_19__metaclass);
Py_DECREF(tmp_class_container$class_creation_19__metaclass);
tmp_class_container$class_creation_19__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_19__prepared);
Py_DECREF(tmp_class_container$class_creation_19__prepared);
tmp_class_container$class_creation_19__prepared = NULL;
tmp_outline_return_value_19 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_19);
goto outline_result_37;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_37:;
CHECK_OBJECT(tmp_outline_return_value_19);
Py_DECREF(tmp_outline_return_value_19);
}
{
PyObject *tmp_outline_return_value_20;
// Tried code:
{
PyObject *tmp_assign_source_162;
PyObject *tmp_tuple_element_57;
tmp_tuple_element_57 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto try_except_handler_59;
}
tmp_assign_source_162 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_162, 0, tmp_tuple_element_57);
tmp_tuple_element_57 = PyExc_TypeError;
PyTuple_SET_ITEM0(tmp_assign_source_162, 1, tmp_tuple_element_57);
assert(tmp_class_container$class_creation_20__bases_orig == NULL);
tmp_class_container$class_creation_20__bases_orig = tmp_assign_source_162;
}
{
PyObject *tmp_assign_source_163;
PyObject *tmp_direct_call_arg1_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_direct_call_arg1_20 = tmp_class_container$class_creation_20__bases_orig;
Py_INCREF(tmp_direct_call_arg1_20);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_20};
    tmp_assign_source_163 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
assert(tmp_class_container$class_creation_20__bases == NULL);
tmp_class_container$class_creation_20__bases = tmp_assign_source_163;
}
{
PyObject *tmp_assign_source_164;
tmp_assign_source_164 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__class_decl_dict == NULL);
tmp_class_container$class_creation_20__class_decl_dict = tmp_assign_source_164;
}
{
PyObject *tmp_assign_source_165;
PyObject *tmp_metaclass_value_39;
nuitka_bool tmp_condition_result_77;
int tmp_truth_name_20;
PyObject *tmp_type_arg_39;
PyObject *tmp_expression_value_115;
PyObject *tmp_subscript_value_20;
PyObject *tmp_bases_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_container$class_creation_20__bases);
if (tmp_truth_name_20 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
tmp_condition_result_77 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_20;
} else {
    goto condexpr_false_20;
}
condexpr_true_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_expression_value_115 = tmp_class_container$class_creation_20__bases;
tmp_subscript_value_20 = const_int_0;
tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_115, tmp_subscript_value_20, 0);
if (tmp_type_arg_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
tmp_metaclass_value_39 = BUILTIN_TYPE1(tmp_type_arg_39);
CHECK_OBJECT(tmp_type_arg_39);
Py_DECREF(tmp_type_arg_39);
if (tmp_metaclass_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
goto condexpr_end_20;
condexpr_false_20:;
tmp_metaclass_value_39 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_39);
condexpr_end_20:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_bases_value_39 = tmp_class_container$class_creation_20__bases;
tmp_assign_source_165 = SELECT_METACLASS(tstate, tmp_metaclass_value_39, tmp_bases_value_39);
CHECK_OBJECT(tmp_metaclass_value_39);
Py_DECREF(tmp_metaclass_value_39);
if (tmp_assign_source_165 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
assert(tmp_class_container$class_creation_20__metaclass == NULL);
tmp_class_container$class_creation_20__metaclass = tmp_assign_source_165;
}
{
bool tmp_condition_result_78;
PyObject *tmp_expression_value_116;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_116 = tmp_class_container$class_creation_20__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
tmp_condition_result_78 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_78 != false) {
    goto branch_yes_58;
} else {
    goto branch_no_58;
}
}
branch_yes_58:;
{
PyObject *tmp_assign_source_166;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_117;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_58;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_117 = tmp_class_container$class_creation_20__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
tmp_tuple_element_58 = mod_consts.const_str_plain_StreamConsumedError;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_tuple_element_58 = tmp_class_container$class_creation_20__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_58);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_20__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 138;
tmp_assign_source_166 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_166 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_166;
}
{
bool tmp_condition_result_79;
PyObject *tmp_operand_value_20;
PyObject *tmp_expression_value_118;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_expression_value_118 = tmp_class_container$class_creation_20__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
assert(!(tmp_res == -1));
tmp_condition_result_79 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_79 != false) {
    goto branch_yes_59;
} else {
    goto branch_no_59;
}
}
branch_yes_59:;
{
PyObject *tmp_raise_type_20;
PyObject *tmp_make_exception_arg_20;
PyObject *tmp_mod_expr_left_20;
PyObject *tmp_mod_expr_right_20;
PyObject *tmp_tuple_element_59;
PyObject *tmp_expression_value_119;
PyObject *tmp_name_value_41;
PyObject *tmp_default_value_20;
tmp_mod_expr_left_20 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_expression_value_119 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_41 = const_str_plain___name__;
tmp_default_value_20 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_59 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_41, tmp_default_value_20);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_120;
PyObject *tmp_type_arg_40;
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_59);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_type_arg_40 = tmp_class_container$class_creation_20__prepared;
tmp_expression_value_120 = BUILTIN_TYPE1(tmp_type_arg_40);
assert(!(tmp_expression_value_120 == NULL));
tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_120);
Py_DECREF(tmp_expression_value_120);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_59);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_mod_expr_right_20);
goto try_except_handler_59;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_make_exception_arg_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
CHECK_OBJECT(tmp_mod_expr_right_20);
Py_DECREF(tmp_mod_expr_right_20);
if (tmp_make_exception_arg_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_59;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 138;
tmp_raise_type_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_20);
CHECK_OBJECT(tmp_make_exception_arg_20);
Py_DECREF(tmp_make_exception_arg_20);
assert(!(tmp_raise_type_20 == NULL));
exception_state.exception_value = tmp_raise_type_20;
exception_lineno = 138;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_59;
}
branch_no_59:;
goto branch_end_58;
branch_no_58:;
{
PyObject *tmp_assign_source_167;
tmp_assign_source_167 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_20__prepared == NULL);
tmp_class_container$class_creation_20__prepared = tmp_assign_source_167;
}
branch_end_58:;
{
PyObject *tmp_assign_source_168;
{
PyObject *tmp_set_locals_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
tmp_set_locals_20 = tmp_class_container$class_creation_20__prepared;
locals_requests$exceptions$$$class__20_StreamConsumedError_138 = tmp_set_locals_20;
Py_INCREF(tmp_set_locals_20);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__20_StreamConsumedError_138, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
tmp_dictset_value = mod_consts.const_str_digest_3cf9f3c16d293dcd967c7ed140034453;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__20_StreamConsumedError_138, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
tmp_dictset_value = mod_consts.const_str_plain_StreamConsumedError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__20_StreamConsumedError_138, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
tmp_dictset_value = mod_consts.const_int_pos_138;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__20_StreamConsumedError_138, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__20_StreamConsumedError_138, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
{
nuitka_bool tmp_condition_result_80;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_cmp_expr_left_20 = tmp_class_container$class_creation_20__bases;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_cmp_expr_right_20 = tmp_class_container$class_creation_20__bases_orig;
tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
    goto branch_yes_60;
} else {
    goto branch_no_60;
}
}
branch_yes_60:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_20__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__20_StreamConsumedError_138, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
branch_no_60:;
{
PyObject *tmp_assign_source_169;
PyObject *tmp_metaclass_value_40;
PyObject *tmp_name_value_42;
PyObject *tmp_bases_value_40;
PyObject *tmp_dict_arg_value_20;
PyObject *tmp_class_decl_dict_value_20;
PyObject *tmp_metaclass_args_20;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
tmp_metaclass_value_40 = tmp_class_container$class_creation_20__metaclass;
tmp_name_value_42 = mod_consts.const_str_plain_StreamConsumedError;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
tmp_bases_value_40 = tmp_class_container$class_creation_20__bases;
tmp_dict_arg_value_20 = locals_requests$exceptions$$$class__20_StreamConsumedError_138;
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_decl_dict_value_20 = tmp_class_container$class_creation_20__class_decl_dict;
tmp_metaclass_args_20 = MAKE_TUPLE3(tstate, tmp_name_value_42, tmp_bases_value_40, tmp_dict_arg_value_20);
tmp_assign_source_169 = CALL_FUNCTION(tstate, tmp_metaclass_value_40, tmp_metaclass_args_20, tmp_class_decl_dict_value_20);
CHECK_OBJECT(tmp_metaclass_args_20);
Py_DECREF(tmp_metaclass_args_20);
if (tmp_assign_source_169 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto try_except_handler_61;
}
{
    PyObject *old = outline_19_var___class__;
    outline_19_var___class__ = tmp_assign_source_169;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_19_var___class__);
tmp_assign_source_168 = outline_19_var___class__;
Py_INCREF(tmp_assign_source_168);
goto try_return_handler_61;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_61:;
Py_DECREF(locals_requests$exceptions$$$class__20_StreamConsumedError_138);
locals_requests$exceptions$$$class__20_StreamConsumedError_138 = NULL;
goto try_return_handler_60;
// Exception handler code:
try_except_handler_61:;
exception_keeper_lineno_59 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_59 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__20_StreamConsumedError_138);
locals_requests$exceptions$$$class__20_StreamConsumedError_138 = NULL;
// Re-raise.
exception_state = exception_keeper_name_59;
exception_lineno = exception_keeper_lineno_59;

goto try_except_handler_60;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_60:;
CHECK_OBJECT(outline_19_var___class__);
CHECK_OBJECT(outline_19_var___class__);
Py_DECREF(outline_19_var___class__);
outline_19_var___class__ = NULL;
goto outline_result_40;
// Exception handler code:
try_except_handler_60:;
exception_keeper_lineno_60 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_60 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_60;
exception_lineno = exception_keeper_lineno_60;

goto outline_exception_20;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_20:;
exception_lineno = 138;
goto try_except_handler_59;
outline_result_40:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_StreamConsumedError, tmp_assign_source_168);
}
goto try_end_21;
// Exception handler code:
try_except_handler_59:;
exception_keeper_lineno_61 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_61 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_61;
exception_lineno = exception_keeper_lineno_61;

goto frame_exception_exit_1;
// End of try:
try_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases_orig);
Py_DECREF(tmp_class_container$class_creation_20__bases_orig);
tmp_class_container$class_creation_20__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
CHECK_OBJECT(tmp_class_container$class_creation_20__bases);
Py_DECREF(tmp_class_container$class_creation_20__bases);
tmp_class_container$class_creation_20__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_20__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_20__class_decl_dict);
tmp_class_container$class_creation_20__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_20__metaclass);
Py_DECREF(tmp_class_container$class_creation_20__metaclass);
tmp_class_container$class_creation_20__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_20__prepared);
Py_DECREF(tmp_class_container$class_creation_20__prepared);
tmp_class_container$class_creation_20__prepared = NULL;
tmp_outline_return_value_20 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_20);
goto outline_result_39;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_39:;
CHECK_OBJECT(tmp_outline_return_value_20);
Py_DECREF(tmp_outline_return_value_20);
}
{
PyObject *tmp_outline_return_value_21;
// Tried code:
{
PyObject *tmp_assign_source_170;
PyObject *tmp_tuple_element_60;
tmp_tuple_element_60 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto try_except_handler_62;
}
tmp_assign_source_170 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_170, 0, tmp_tuple_element_60);
assert(tmp_class_container$class_creation_21__bases_orig == NULL);
tmp_class_container$class_creation_21__bases_orig = tmp_assign_source_170;
}
{
PyObject *tmp_assign_source_171;
PyObject *tmp_direct_call_arg1_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_direct_call_arg1_21 = tmp_class_container$class_creation_21__bases_orig;
Py_INCREF(tmp_direct_call_arg1_21);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_21};
    tmp_assign_source_171 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_171 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
assert(tmp_class_container$class_creation_21__bases == NULL);
tmp_class_container$class_creation_21__bases = tmp_assign_source_171;
}
{
PyObject *tmp_assign_source_172;
tmp_assign_source_172 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__class_decl_dict == NULL);
tmp_class_container$class_creation_21__class_decl_dict = tmp_assign_source_172;
}
{
PyObject *tmp_assign_source_173;
PyObject *tmp_metaclass_value_41;
nuitka_bool tmp_condition_result_81;
int tmp_truth_name_21;
PyObject *tmp_type_arg_41;
PyObject *tmp_expression_value_121;
PyObject *tmp_subscript_value_21;
PyObject *tmp_bases_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_container$class_creation_21__bases);
if (tmp_truth_name_21 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
tmp_condition_result_81 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_81 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_21;
} else {
    goto condexpr_false_21;
}
condexpr_true_21:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_expression_value_121 = tmp_class_container$class_creation_21__bases;
tmp_subscript_value_21 = const_int_0;
tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_21, 0);
if (tmp_type_arg_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
tmp_metaclass_value_41 = BUILTIN_TYPE1(tmp_type_arg_41);
CHECK_OBJECT(tmp_type_arg_41);
Py_DECREF(tmp_type_arg_41);
if (tmp_metaclass_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
goto condexpr_end_21;
condexpr_false_21:;
tmp_metaclass_value_41 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_41);
condexpr_end_21:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_bases_value_41 = tmp_class_container$class_creation_21__bases;
tmp_assign_source_173 = SELECT_METACLASS(tstate, tmp_metaclass_value_41, tmp_bases_value_41);
CHECK_OBJECT(tmp_metaclass_value_41);
Py_DECREF(tmp_metaclass_value_41);
if (tmp_assign_source_173 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
assert(tmp_class_container$class_creation_21__metaclass == NULL);
tmp_class_container$class_creation_21__metaclass = tmp_assign_source_173;
}
{
bool tmp_condition_result_82;
PyObject *tmp_expression_value_122;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_122 = tmp_class_container$class_creation_21__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
tmp_condition_result_82 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_82 != false) {
    goto branch_yes_61;
} else {
    goto branch_no_61;
}
}
branch_yes_61:;
{
PyObject *tmp_assign_source_174;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_123;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_61;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_123 = tmp_class_container$class_creation_21__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
tmp_tuple_element_61 = mod_consts.const_str_plain_RetryError;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_tuple_element_61 = tmp_class_container$class_creation_21__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_61);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_21__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 142;
tmp_assign_source_174 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_174 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_174;
}
{
bool tmp_condition_result_83;
PyObject *tmp_operand_value_21;
PyObject *tmp_expression_value_124;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_expression_value_124 = tmp_class_container$class_creation_21__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
assert(!(tmp_res == -1));
tmp_condition_result_83 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_83 != false) {
    goto branch_yes_62;
} else {
    goto branch_no_62;
}
}
branch_yes_62:;
{
PyObject *tmp_raise_type_21;
PyObject *tmp_make_exception_arg_21;
PyObject *tmp_mod_expr_left_21;
PyObject *tmp_mod_expr_right_21;
PyObject *tmp_tuple_element_62;
PyObject *tmp_expression_value_125;
PyObject *tmp_name_value_43;
PyObject *tmp_default_value_21;
tmp_mod_expr_left_21 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_expression_value_125 = tmp_class_container$class_creation_21__metaclass;
tmp_name_value_43 = const_str_plain___name__;
tmp_default_value_21 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_43, tmp_default_value_21);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_126;
PyObject *tmp_type_arg_42;
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_type_arg_42 = tmp_class_container$class_creation_21__prepared;
tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_42);
assert(!(tmp_expression_value_126 == NULL));
tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_126);
Py_DECREF(tmp_expression_value_126);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto tuple_build_exception_24;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_62);
}
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_mod_expr_right_21);
goto try_except_handler_62;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_make_exception_arg_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
CHECK_OBJECT(tmp_mod_expr_right_21);
Py_DECREF(tmp_mod_expr_right_21);
if (tmp_make_exception_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_62;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 142;
tmp_raise_type_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_21);
CHECK_OBJECT(tmp_make_exception_arg_21);
Py_DECREF(tmp_make_exception_arg_21);
assert(!(tmp_raise_type_21 == NULL));
exception_state.exception_value = tmp_raise_type_21;
exception_lineno = 142;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_62;
}
branch_no_62:;
goto branch_end_61;
branch_no_61:;
{
PyObject *tmp_assign_source_175;
tmp_assign_source_175 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_21__prepared == NULL);
tmp_class_container$class_creation_21__prepared = tmp_assign_source_175;
}
branch_end_61:;
{
PyObject *tmp_assign_source_176;
{
PyObject *tmp_set_locals_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
tmp_set_locals_21 = tmp_class_container$class_creation_21__prepared;
locals_requests$exceptions$$$class__21_RetryError_142 = tmp_set_locals_21;
Py_INCREF(tmp_set_locals_21);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__21_RetryError_142, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
tmp_dictset_value = mod_consts.const_str_digest_b3f79f0ff88ef53ddf2012488144e436;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__21_RetryError_142, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
tmp_dictset_value = mod_consts.const_str_plain_RetryError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__21_RetryError_142, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
tmp_dictset_value = mod_consts.const_int_pos_142;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__21_RetryError_142, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__21_RetryError_142, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
{
nuitka_bool tmp_condition_result_84;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_cmp_expr_left_21 = tmp_class_container$class_creation_21__bases;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_cmp_expr_right_21 = tmp_class_container$class_creation_21__bases_orig;
tmp_condition_result_84 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
if (tmp_condition_result_84 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
if (tmp_condition_result_84 == NUITKA_BOOL_TRUE) {
    goto branch_yes_63;
} else {
    goto branch_no_63;
}
}
branch_yes_63:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_21__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__21_RetryError_142, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
branch_no_63:;
{
PyObject *tmp_assign_source_177;
PyObject *tmp_metaclass_value_42;
PyObject *tmp_name_value_44;
PyObject *tmp_bases_value_42;
PyObject *tmp_dict_arg_value_21;
PyObject *tmp_class_decl_dict_value_21;
PyObject *tmp_metaclass_args_21;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
tmp_metaclass_value_42 = tmp_class_container$class_creation_21__metaclass;
tmp_name_value_44 = mod_consts.const_str_plain_RetryError;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
tmp_bases_value_42 = tmp_class_container$class_creation_21__bases;
tmp_dict_arg_value_21 = locals_requests$exceptions$$$class__21_RetryError_142;
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_decl_dict_value_21 = tmp_class_container$class_creation_21__class_decl_dict;
tmp_metaclass_args_21 = MAKE_TUPLE3(tstate, tmp_name_value_44, tmp_bases_value_42, tmp_dict_arg_value_21);
tmp_assign_source_177 = CALL_FUNCTION(tstate, tmp_metaclass_value_42, tmp_metaclass_args_21, tmp_class_decl_dict_value_21);
CHECK_OBJECT(tmp_metaclass_args_21);
Py_DECREF(tmp_metaclass_args_21);
if (tmp_assign_source_177 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto try_except_handler_64;
}
{
    PyObject *old = outline_20_var___class__;
    outline_20_var___class__ = tmp_assign_source_177;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_20_var___class__);
tmp_assign_source_176 = outline_20_var___class__;
Py_INCREF(tmp_assign_source_176);
goto try_return_handler_64;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_64:;
Py_DECREF(locals_requests$exceptions$$$class__21_RetryError_142);
locals_requests$exceptions$$$class__21_RetryError_142 = NULL;
goto try_return_handler_63;
// Exception handler code:
try_except_handler_64:;
exception_keeper_lineno_62 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_62 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__21_RetryError_142);
locals_requests$exceptions$$$class__21_RetryError_142 = NULL;
// Re-raise.
exception_state = exception_keeper_name_62;
exception_lineno = exception_keeper_lineno_62;

goto try_except_handler_63;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_63:;
CHECK_OBJECT(outline_20_var___class__);
CHECK_OBJECT(outline_20_var___class__);
Py_DECREF(outline_20_var___class__);
outline_20_var___class__ = NULL;
goto outline_result_42;
// Exception handler code:
try_except_handler_63:;
exception_keeper_lineno_63 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_63 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_63;
exception_lineno = exception_keeper_lineno_63;

goto outline_exception_21;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_21:;
exception_lineno = 142;
goto try_except_handler_62;
outline_result_42:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RetryError, tmp_assign_source_176);
}
goto try_end_22;
// Exception handler code:
try_except_handler_62:;
exception_keeper_lineno_64 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_64 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_64;
exception_lineno = exception_keeper_lineno_64;

goto frame_exception_exit_1;
// End of try:
try_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases_orig);
Py_DECREF(tmp_class_container$class_creation_21__bases_orig);
tmp_class_container$class_creation_21__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
CHECK_OBJECT(tmp_class_container$class_creation_21__bases);
Py_DECREF(tmp_class_container$class_creation_21__bases);
tmp_class_container$class_creation_21__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_21__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_21__class_decl_dict);
tmp_class_container$class_creation_21__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_21__metaclass);
Py_DECREF(tmp_class_container$class_creation_21__metaclass);
tmp_class_container$class_creation_21__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_21__prepared);
Py_DECREF(tmp_class_container$class_creation_21__prepared);
tmp_class_container$class_creation_21__prepared = NULL;
tmp_outline_return_value_21 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_21);
goto outline_result_41;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_41:;
CHECK_OBJECT(tmp_outline_return_value_21);
Py_DECREF(tmp_outline_return_value_21);
}
{
PyObject *tmp_outline_return_value_22;
// Tried code:
{
PyObject *tmp_assign_source_178;
PyObject *tmp_tuple_element_63;
tmp_tuple_element_63 = module_var_accessor_requests$exceptions$RequestException(tstate);
if (unlikely(tmp_tuple_element_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestException);
}

if (tmp_tuple_element_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto try_except_handler_65;
}
tmp_assign_source_178 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_178, 0, tmp_tuple_element_63);
assert(tmp_class_container$class_creation_22__bases_orig == NULL);
tmp_class_container$class_creation_22__bases_orig = tmp_assign_source_178;
}
{
PyObject *tmp_assign_source_179;
PyObject *tmp_direct_call_arg1_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_direct_call_arg1_22 = tmp_class_container$class_creation_22__bases_orig;
Py_INCREF(tmp_direct_call_arg1_22);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_22};
    tmp_assign_source_179 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_179 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
assert(tmp_class_container$class_creation_22__bases == NULL);
tmp_class_container$class_creation_22__bases = tmp_assign_source_179;
}
{
PyObject *tmp_assign_source_180;
tmp_assign_source_180 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__class_decl_dict == NULL);
tmp_class_container$class_creation_22__class_decl_dict = tmp_assign_source_180;
}
{
PyObject *tmp_assign_source_181;
PyObject *tmp_metaclass_value_43;
nuitka_bool tmp_condition_result_85;
int tmp_truth_name_22;
PyObject *tmp_type_arg_43;
PyObject *tmp_expression_value_127;
PyObject *tmp_subscript_value_22;
PyObject *tmp_bases_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_container$class_creation_22__bases);
if (tmp_truth_name_22 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
tmp_condition_result_85 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_22;
} else {
    goto condexpr_false_22;
}
condexpr_true_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_expression_value_127 = tmp_class_container$class_creation_22__bases;
tmp_subscript_value_22 = const_int_0;
tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_22, 0);
if (tmp_type_arg_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
tmp_metaclass_value_43 = BUILTIN_TYPE1(tmp_type_arg_43);
CHECK_OBJECT(tmp_type_arg_43);
Py_DECREF(tmp_type_arg_43);
if (tmp_metaclass_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
goto condexpr_end_22;
condexpr_false_22:;
tmp_metaclass_value_43 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_43);
condexpr_end_22:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_bases_value_43 = tmp_class_container$class_creation_22__bases;
tmp_assign_source_181 = SELECT_METACLASS(tstate, tmp_metaclass_value_43, tmp_bases_value_43);
CHECK_OBJECT(tmp_metaclass_value_43);
Py_DECREF(tmp_metaclass_value_43);
if (tmp_assign_source_181 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
assert(tmp_class_container$class_creation_22__metaclass == NULL);
tmp_class_container$class_creation_22__metaclass = tmp_assign_source_181;
}
{
bool tmp_condition_result_86;
PyObject *tmp_expression_value_128;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_128 = tmp_class_container$class_creation_22__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
tmp_condition_result_86 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_86 != false) {
    goto branch_yes_64;
} else {
    goto branch_no_64;
}
}
branch_yes_64:;
{
PyObject *tmp_assign_source_182;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_129;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_64;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_129 = tmp_class_container$class_creation_22__metaclass;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
tmp_tuple_element_64 = mod_consts.const_str_plain_UnrewindableBodyError;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_tuple_element_64 = tmp_class_container$class_creation_22__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_22__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 146;
tmp_assign_source_182 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_182 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_182;
}
{
bool tmp_condition_result_87;
PyObject *tmp_operand_value_22;
PyObject *tmp_expression_value_130;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_expression_value_130 = tmp_class_container$class_creation_22__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
assert(!(tmp_res == -1));
tmp_condition_result_87 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_87 != false) {
    goto branch_yes_65;
} else {
    goto branch_no_65;
}
}
branch_yes_65:;
{
PyObject *tmp_raise_type_22;
PyObject *tmp_make_exception_arg_22;
PyObject *tmp_mod_expr_left_22;
PyObject *tmp_mod_expr_right_22;
PyObject *tmp_tuple_element_65;
PyObject *tmp_expression_value_131;
PyObject *tmp_name_value_45;
PyObject *tmp_default_value_22;
tmp_mod_expr_left_22 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_expression_value_131 = tmp_class_container$class_creation_22__metaclass;
tmp_name_value_45 = const_str_plain___name__;
tmp_default_value_22 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_65 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_45, tmp_default_value_22);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_132;
PyObject *tmp_type_arg_44;
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_65);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_type_arg_44 = tmp_class_container$class_creation_22__prepared;
tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
assert(!(tmp_expression_value_132 == NULL));
tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_132);
Py_DECREF(tmp_expression_value_132);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_65);
}
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_mod_expr_right_22);
goto try_except_handler_65;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_make_exception_arg_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
CHECK_OBJECT(tmp_mod_expr_right_22);
Py_DECREF(tmp_mod_expr_right_22);
if (tmp_make_exception_arg_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_65;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 146;
tmp_raise_type_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_22);
CHECK_OBJECT(tmp_make_exception_arg_22);
Py_DECREF(tmp_make_exception_arg_22);
assert(!(tmp_raise_type_22 == NULL));
exception_state.exception_value = tmp_raise_type_22;
exception_lineno = 146;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_65;
}
branch_no_65:;
goto branch_end_64;
branch_no_64:;
{
PyObject *tmp_assign_source_183;
tmp_assign_source_183 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_22__prepared == NULL);
tmp_class_container$class_creation_22__prepared = tmp_assign_source_183;
}
branch_end_64:;
{
PyObject *tmp_assign_source_184;
{
PyObject *tmp_set_locals_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
tmp_set_locals_22 = tmp_class_container$class_creation_22__prepared;
locals_requests$exceptions$$$class__22_UnrewindableBodyError_146 = tmp_set_locals_22;
Py_INCREF(tmp_set_locals_22);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
tmp_dictset_value = mod_consts.const_str_digest_2ad499ae41fa3b0d80a6c53a6b0dd390;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
tmp_dictset_value = mod_consts.const_str_plain_UnrewindableBodyError;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
tmp_dictset_value = mod_consts.const_int_pos_146;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
{
nuitka_bool tmp_condition_result_88;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_cmp_expr_left_22 = tmp_class_container$class_creation_22__bases;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_cmp_expr_right_22 = tmp_class_container$class_creation_22__bases_orig;
tmp_condition_result_88 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
if (tmp_condition_result_88 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
if (tmp_condition_result_88 == NUITKA_BOOL_TRUE) {
    goto branch_yes_66;
} else {
    goto branch_no_66;
}
}
branch_yes_66:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_22__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
branch_no_66:;
{
PyObject *tmp_assign_source_185;
PyObject *tmp_metaclass_value_44;
PyObject *tmp_name_value_46;
PyObject *tmp_bases_value_44;
PyObject *tmp_dict_arg_value_22;
PyObject *tmp_class_decl_dict_value_22;
PyObject *tmp_metaclass_args_22;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
tmp_metaclass_value_44 = tmp_class_container$class_creation_22__metaclass;
tmp_name_value_46 = mod_consts.const_str_plain_UnrewindableBodyError;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
tmp_bases_value_44 = tmp_class_container$class_creation_22__bases;
tmp_dict_arg_value_22 = locals_requests$exceptions$$$class__22_UnrewindableBodyError_146;
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_decl_dict_value_22 = tmp_class_container$class_creation_22__class_decl_dict;
tmp_metaclass_args_22 = MAKE_TUPLE3(tstate, tmp_name_value_46, tmp_bases_value_44, tmp_dict_arg_value_22);
tmp_assign_source_185 = CALL_FUNCTION(tstate, tmp_metaclass_value_44, tmp_metaclass_args_22, tmp_class_decl_dict_value_22);
CHECK_OBJECT(tmp_metaclass_args_22);
Py_DECREF(tmp_metaclass_args_22);
if (tmp_assign_source_185 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto try_except_handler_67;
}
{
    PyObject *old = outline_21_var___class__;
    outline_21_var___class__ = tmp_assign_source_185;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_21_var___class__);
tmp_assign_source_184 = outline_21_var___class__;
Py_INCREF(tmp_assign_source_184);
goto try_return_handler_67;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_67:;
Py_DECREF(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146);
locals_requests$exceptions$$$class__22_UnrewindableBodyError_146 = NULL;
goto try_return_handler_66;
// Exception handler code:
try_except_handler_67:;
exception_keeper_lineno_65 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_65 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__22_UnrewindableBodyError_146);
locals_requests$exceptions$$$class__22_UnrewindableBodyError_146 = NULL;
// Re-raise.
exception_state = exception_keeper_name_65;
exception_lineno = exception_keeper_lineno_65;

goto try_except_handler_66;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_66:;
CHECK_OBJECT(outline_21_var___class__);
CHECK_OBJECT(outline_21_var___class__);
Py_DECREF(outline_21_var___class__);
outline_21_var___class__ = NULL;
goto outline_result_44;
// Exception handler code:
try_except_handler_66:;
exception_keeper_lineno_66 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_66 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_66;
exception_lineno = exception_keeper_lineno_66;

goto outline_exception_22;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_22:;
exception_lineno = 146;
goto try_except_handler_65;
outline_result_44:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_UnrewindableBodyError, tmp_assign_source_184);
}
goto try_end_23;
// Exception handler code:
try_except_handler_65:;
exception_keeper_lineno_67 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_67 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_67;
exception_lineno = exception_keeper_lineno_67;

goto frame_exception_exit_1;
// End of try:
try_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases_orig);
Py_DECREF(tmp_class_container$class_creation_22__bases_orig);
tmp_class_container$class_creation_22__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
CHECK_OBJECT(tmp_class_container$class_creation_22__bases);
Py_DECREF(tmp_class_container$class_creation_22__bases);
tmp_class_container$class_creation_22__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_22__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_22__class_decl_dict);
tmp_class_container$class_creation_22__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_22__metaclass);
Py_DECREF(tmp_class_container$class_creation_22__metaclass);
tmp_class_container$class_creation_22__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_22__prepared);
Py_DECREF(tmp_class_container$class_creation_22__prepared);
tmp_class_container$class_creation_22__prepared = NULL;
tmp_outline_return_value_22 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_22);
goto outline_result_43;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_43:;
CHECK_OBJECT(tmp_outline_return_value_22);
Py_DECREF(tmp_outline_return_value_22);
}
{
PyObject *tmp_outline_return_value_23;
// Tried code:
{
PyObject *tmp_assign_source_186;
PyObject *tmp_tuple_element_66;
tmp_tuple_element_66 = module_var_accessor_requests$exceptions$Warning(tstate);
if (unlikely(tmp_tuple_element_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Warning);
}

if (tmp_tuple_element_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;

    goto try_except_handler_68;
}
tmp_assign_source_186 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_186, 0, tmp_tuple_element_66);
assert(tmp_class_container$class_creation_23__bases_orig == NULL);
tmp_class_container$class_creation_23__bases_orig = tmp_assign_source_186;
}
{
PyObject *tmp_assign_source_187;
PyObject *tmp_direct_call_arg1_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_direct_call_arg1_23 = tmp_class_container$class_creation_23__bases_orig;
Py_INCREF(tmp_direct_call_arg1_23);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_23};
    tmp_assign_source_187 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_187 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
assert(tmp_class_container$class_creation_23__bases == NULL);
tmp_class_container$class_creation_23__bases = tmp_assign_source_187;
}
{
PyObject *tmp_assign_source_188;
tmp_assign_source_188 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__class_decl_dict == NULL);
tmp_class_container$class_creation_23__class_decl_dict = tmp_assign_source_188;
}
{
PyObject *tmp_assign_source_189;
PyObject *tmp_metaclass_value_45;
nuitka_bool tmp_condition_result_89;
int tmp_truth_name_23;
PyObject *tmp_type_arg_45;
PyObject *tmp_expression_value_133;
PyObject *tmp_subscript_value_23;
PyObject *tmp_bases_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_container$class_creation_23__bases);
if (tmp_truth_name_23 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
tmp_condition_result_89 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_23;
} else {
    goto condexpr_false_23;
}
condexpr_true_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_expression_value_133 = tmp_class_container$class_creation_23__bases;
tmp_subscript_value_23 = const_int_0;
tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_133, tmp_subscript_value_23, 0);
if (tmp_type_arg_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
tmp_metaclass_value_45 = BUILTIN_TYPE1(tmp_type_arg_45);
CHECK_OBJECT(tmp_type_arg_45);
Py_DECREF(tmp_type_arg_45);
if (tmp_metaclass_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
goto condexpr_end_23;
condexpr_false_23:;
tmp_metaclass_value_45 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_45);
condexpr_end_23:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_bases_value_45 = tmp_class_container$class_creation_23__bases;
tmp_assign_source_189 = SELECT_METACLASS(tstate, tmp_metaclass_value_45, tmp_bases_value_45);
CHECK_OBJECT(tmp_metaclass_value_45);
Py_DECREF(tmp_metaclass_value_45);
if (tmp_assign_source_189 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
assert(tmp_class_container$class_creation_23__metaclass == NULL);
tmp_class_container$class_creation_23__metaclass = tmp_assign_source_189;
}
{
bool tmp_condition_result_90;
PyObject *tmp_expression_value_134;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_134 = tmp_class_container$class_creation_23__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_134, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
tmp_condition_result_90 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_90 != false) {
    goto branch_yes_67;
} else {
    goto branch_no_67;
}
}
branch_yes_67:;
{
PyObject *tmp_assign_source_190;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_135;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_67;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_135 = tmp_class_container$class_creation_23__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
tmp_tuple_element_67 = mod_consts.const_str_plain_RequestsWarning;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_tuple_element_67 = tmp_class_container$class_creation_23__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_67);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_23__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 153;
tmp_assign_source_190 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_190 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_190;
}
{
bool tmp_condition_result_91;
PyObject *tmp_operand_value_23;
PyObject *tmp_expression_value_136;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_expression_value_136 = tmp_class_container$class_creation_23__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
assert(!(tmp_res == -1));
tmp_condition_result_91 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_91 != false) {
    goto branch_yes_68;
} else {
    goto branch_no_68;
}
}
branch_yes_68:;
{
PyObject *tmp_raise_type_23;
PyObject *tmp_make_exception_arg_23;
PyObject *tmp_mod_expr_left_23;
PyObject *tmp_mod_expr_right_23;
PyObject *tmp_tuple_element_68;
PyObject *tmp_expression_value_137;
PyObject *tmp_name_value_47;
PyObject *tmp_default_value_23;
tmp_mod_expr_left_23 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_expression_value_137 = tmp_class_container$class_creation_23__metaclass;
tmp_name_value_47 = const_str_plain___name__;
tmp_default_value_23 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_68 = BUILTIN_GETATTR(tstate, tmp_expression_value_137, tmp_name_value_47, tmp_default_value_23);
if (tmp_tuple_element_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_138;
PyObject *tmp_type_arg_46;
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_68);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_type_arg_46 = tmp_class_container$class_creation_23__prepared;
tmp_expression_value_138 = BUILTIN_TYPE1(tmp_type_arg_46);
assert(!(tmp_expression_value_138 == NULL));
tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_138);
Py_DECREF(tmp_expression_value_138);
if (tmp_tuple_element_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_68);
}
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_mod_expr_right_23);
goto try_except_handler_68;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_make_exception_arg_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
CHECK_OBJECT(tmp_mod_expr_right_23);
Py_DECREF(tmp_mod_expr_right_23);
if (tmp_make_exception_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_68;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 153;
tmp_raise_type_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_23);
CHECK_OBJECT(tmp_make_exception_arg_23);
Py_DECREF(tmp_make_exception_arg_23);
assert(!(tmp_raise_type_23 == NULL));
exception_state.exception_value = tmp_raise_type_23;
exception_lineno = 153;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_68;
}
branch_no_68:;
goto branch_end_67;
branch_no_67:;
{
PyObject *tmp_assign_source_191;
tmp_assign_source_191 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_23__prepared == NULL);
tmp_class_container$class_creation_23__prepared = tmp_assign_source_191;
}
branch_end_67:;
{
PyObject *tmp_assign_source_192;
{
PyObject *tmp_set_locals_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
tmp_set_locals_23 = tmp_class_container$class_creation_23__prepared;
locals_requests$exceptions$$$class__23_RequestsWarning_153 = tmp_set_locals_23;
Py_INCREF(tmp_set_locals_23);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__23_RequestsWarning_153, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
tmp_dictset_value = mod_consts.const_str_digest_231982acca444de8f23c0288db53eaef;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__23_RequestsWarning_153, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestsWarning;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__23_RequestsWarning_153, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
tmp_dictset_value = mod_consts.const_int_pos_153;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__23_RequestsWarning_153, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__23_RequestsWarning_153, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
{
nuitka_bool tmp_condition_result_92;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_cmp_expr_left_23 = tmp_class_container$class_creation_23__bases;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_cmp_expr_right_23 = tmp_class_container$class_creation_23__bases_orig;
tmp_condition_result_92 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
if (tmp_condition_result_92 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
    goto branch_yes_69;
} else {
    goto branch_no_69;
}
}
branch_yes_69:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_23__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__23_RequestsWarning_153, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
branch_no_69:;
{
PyObject *tmp_assign_source_193;
PyObject *tmp_metaclass_value_46;
PyObject *tmp_name_value_48;
PyObject *tmp_bases_value_46;
PyObject *tmp_dict_arg_value_23;
PyObject *tmp_class_decl_dict_value_23;
PyObject *tmp_metaclass_args_23;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
tmp_metaclass_value_46 = tmp_class_container$class_creation_23__metaclass;
tmp_name_value_48 = mod_consts.const_str_plain_RequestsWarning;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
tmp_bases_value_46 = tmp_class_container$class_creation_23__bases;
tmp_dict_arg_value_23 = locals_requests$exceptions$$$class__23_RequestsWarning_153;
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_decl_dict_value_23 = tmp_class_container$class_creation_23__class_decl_dict;
tmp_metaclass_args_23 = MAKE_TUPLE3(tstate, tmp_name_value_48, tmp_bases_value_46, tmp_dict_arg_value_23);
tmp_assign_source_193 = CALL_FUNCTION(tstate, tmp_metaclass_value_46, tmp_metaclass_args_23, tmp_class_decl_dict_value_23);
CHECK_OBJECT(tmp_metaclass_args_23);
Py_DECREF(tmp_metaclass_args_23);
if (tmp_assign_source_193 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_70;
}
{
    PyObject *old = outline_22_var___class__;
    outline_22_var___class__ = tmp_assign_source_193;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_22_var___class__);
tmp_assign_source_192 = outline_22_var___class__;
Py_INCREF(tmp_assign_source_192);
goto try_return_handler_70;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_70:;
Py_DECREF(locals_requests$exceptions$$$class__23_RequestsWarning_153);
locals_requests$exceptions$$$class__23_RequestsWarning_153 = NULL;
goto try_return_handler_69;
// Exception handler code:
try_except_handler_70:;
exception_keeper_lineno_68 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_68 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__23_RequestsWarning_153);
locals_requests$exceptions$$$class__23_RequestsWarning_153 = NULL;
// Re-raise.
exception_state = exception_keeper_name_68;
exception_lineno = exception_keeper_lineno_68;

goto try_except_handler_69;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_69:;
CHECK_OBJECT(outline_22_var___class__);
CHECK_OBJECT(outline_22_var___class__);
Py_DECREF(outline_22_var___class__);
outline_22_var___class__ = NULL;
goto outline_result_46;
// Exception handler code:
try_except_handler_69:;
exception_keeper_lineno_69 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_69 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_69;
exception_lineno = exception_keeper_lineno_69;

goto outline_exception_23;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_23:;
exception_lineno = 153;
goto try_except_handler_68;
outline_result_46:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsWarning, tmp_assign_source_192);
}
goto try_end_24;
// Exception handler code:
try_except_handler_68:;
exception_keeper_lineno_70 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_70 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_70;
exception_lineno = exception_keeper_lineno_70;

goto frame_exception_exit_1;
// End of try:
try_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases_orig);
Py_DECREF(tmp_class_container$class_creation_23__bases_orig);
tmp_class_container$class_creation_23__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
CHECK_OBJECT(tmp_class_container$class_creation_23__bases);
Py_DECREF(tmp_class_container$class_creation_23__bases);
tmp_class_container$class_creation_23__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_23__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_23__class_decl_dict);
tmp_class_container$class_creation_23__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_23__metaclass);
Py_DECREF(tmp_class_container$class_creation_23__metaclass);
tmp_class_container$class_creation_23__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_23__prepared);
Py_DECREF(tmp_class_container$class_creation_23__prepared);
tmp_class_container$class_creation_23__prepared = NULL;
tmp_outline_return_value_23 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_23);
goto outline_result_45;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_45:;
CHECK_OBJECT(tmp_outline_return_value_23);
Py_DECREF(tmp_outline_return_value_23);
}
{
PyObject *tmp_outline_return_value_24;
// Tried code:
{
PyObject *tmp_assign_source_194;
PyObject *tmp_tuple_element_69;
tmp_tuple_element_69 = module_var_accessor_requests$exceptions$RequestsWarning(tstate);
if (unlikely(tmp_tuple_element_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsWarning);
}

if (tmp_tuple_element_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto try_except_handler_71;
}
tmp_assign_source_194 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_194, 0, tmp_tuple_element_69);
tmp_tuple_element_69 = module_var_accessor_requests$exceptions$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto tuple_build_exception_27;
}
PyTuple_SET_ITEM0(tmp_assign_source_194, 1, tmp_tuple_element_69);
goto tuple_build_no_exception_27;
// Exception handling pass through code for tuple_build:
tuple_build_exception_27:;
Py_DECREF(tmp_assign_source_194);
goto try_except_handler_71;
// Finished with no exception for tuple_build:
tuple_build_no_exception_27:;
assert(tmp_class_container$class_creation_24__bases_orig == NULL);
tmp_class_container$class_creation_24__bases_orig = tmp_assign_source_194;
}
{
PyObject *tmp_assign_source_195;
PyObject *tmp_direct_call_arg1_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_direct_call_arg1_24 = tmp_class_container$class_creation_24__bases_orig;
Py_INCREF(tmp_direct_call_arg1_24);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_24};
    tmp_assign_source_195 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_195 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
assert(tmp_class_container$class_creation_24__bases == NULL);
tmp_class_container$class_creation_24__bases = tmp_assign_source_195;
}
{
PyObject *tmp_assign_source_196;
tmp_assign_source_196 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__class_decl_dict == NULL);
tmp_class_container$class_creation_24__class_decl_dict = tmp_assign_source_196;
}
{
PyObject *tmp_assign_source_197;
PyObject *tmp_metaclass_value_47;
nuitka_bool tmp_condition_result_93;
int tmp_truth_name_24;
PyObject *tmp_type_arg_47;
PyObject *tmp_expression_value_139;
PyObject *tmp_subscript_value_24;
PyObject *tmp_bases_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_container$class_creation_24__bases);
if (tmp_truth_name_24 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
tmp_condition_result_93 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_24;
} else {
    goto condexpr_false_24;
}
condexpr_true_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_expression_value_139 = tmp_class_container$class_creation_24__bases;
tmp_subscript_value_24 = const_int_0;
tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_139, tmp_subscript_value_24, 0);
if (tmp_type_arg_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
tmp_metaclass_value_47 = BUILTIN_TYPE1(tmp_type_arg_47);
CHECK_OBJECT(tmp_type_arg_47);
Py_DECREF(tmp_type_arg_47);
if (tmp_metaclass_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
goto condexpr_end_24;
condexpr_false_24:;
tmp_metaclass_value_47 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_47);
condexpr_end_24:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_bases_value_47 = tmp_class_container$class_creation_24__bases;
tmp_assign_source_197 = SELECT_METACLASS(tstate, tmp_metaclass_value_47, tmp_bases_value_47);
CHECK_OBJECT(tmp_metaclass_value_47);
Py_DECREF(tmp_metaclass_value_47);
if (tmp_assign_source_197 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
assert(tmp_class_container$class_creation_24__metaclass == NULL);
tmp_class_container$class_creation_24__metaclass = tmp_assign_source_197;
}
{
bool tmp_condition_result_94;
PyObject *tmp_expression_value_140;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_140 = tmp_class_container$class_creation_24__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_140, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
tmp_condition_result_94 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_94 != false) {
    goto branch_yes_70;
} else {
    goto branch_no_70;
}
}
branch_yes_70:;
{
PyObject *tmp_assign_source_198;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_141;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_70;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_141 = tmp_class_container$class_creation_24__metaclass;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
tmp_tuple_element_70 = mod_consts.const_str_plain_FileModeWarning;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_tuple_element_70 = tmp_class_container$class_creation_24__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_70);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_24__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 157;
tmp_assign_source_198 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_198 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_198;
}
{
bool tmp_condition_result_95;
PyObject *tmp_operand_value_24;
PyObject *tmp_expression_value_142;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_expression_value_142 = tmp_class_container$class_creation_24__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_142, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
assert(!(tmp_res == -1));
tmp_condition_result_95 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_95 != false) {
    goto branch_yes_71;
} else {
    goto branch_no_71;
}
}
branch_yes_71:;
{
PyObject *tmp_raise_type_24;
PyObject *tmp_make_exception_arg_24;
PyObject *tmp_mod_expr_left_24;
PyObject *tmp_mod_expr_right_24;
PyObject *tmp_tuple_element_71;
PyObject *tmp_expression_value_143;
PyObject *tmp_name_value_49;
PyObject *tmp_default_value_24;
tmp_mod_expr_left_24 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_expression_value_143 = tmp_class_container$class_creation_24__metaclass;
tmp_name_value_49 = const_str_plain___name__;
tmp_default_value_24 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_71 = BUILTIN_GETATTR(tstate, tmp_expression_value_143, tmp_name_value_49, tmp_default_value_24);
if (tmp_tuple_element_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_144;
PyObject *tmp_type_arg_48;
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_71);
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_type_arg_48 = tmp_class_container$class_creation_24__prepared;
tmp_expression_value_144 = BUILTIN_TYPE1(tmp_type_arg_48);
assert(!(tmp_expression_value_144 == NULL));
tmp_tuple_element_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_144);
Py_DECREF(tmp_expression_value_144);
if (tmp_tuple_element_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_71);
}
goto tuple_build_no_exception_28;
// Exception handling pass through code for tuple_build:
tuple_build_exception_28:;
Py_DECREF(tmp_mod_expr_right_24);
goto try_except_handler_71;
// Finished with no exception for tuple_build:
tuple_build_no_exception_28:;
tmp_make_exception_arg_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
CHECK_OBJECT(tmp_mod_expr_right_24);
Py_DECREF(tmp_mod_expr_right_24);
if (tmp_make_exception_arg_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_71;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 157;
tmp_raise_type_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_24);
CHECK_OBJECT(tmp_make_exception_arg_24);
Py_DECREF(tmp_make_exception_arg_24);
assert(!(tmp_raise_type_24 == NULL));
exception_state.exception_value = tmp_raise_type_24;
exception_lineno = 157;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_71;
}
branch_no_71:;
goto branch_end_70;
branch_no_70:;
{
PyObject *tmp_assign_source_199;
tmp_assign_source_199 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_24__prepared == NULL);
tmp_class_container$class_creation_24__prepared = tmp_assign_source_199;
}
branch_end_70:;
{
PyObject *tmp_assign_source_200;
{
PyObject *tmp_set_locals_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
tmp_set_locals_24 = tmp_class_container$class_creation_24__prepared;
locals_requests$exceptions$$$class__24_FileModeWarning_157 = tmp_set_locals_24;
Py_INCREF(tmp_set_locals_24);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__24_FileModeWarning_157, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
tmp_dictset_value = mod_consts.const_str_digest_c5ea8ff3c07b97205cc4ec7f24ad27a2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__24_FileModeWarning_157, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
tmp_dictset_value = mod_consts.const_str_plain_FileModeWarning;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__24_FileModeWarning_157, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
tmp_dictset_value = mod_consts.const_int_pos_157;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__24_FileModeWarning_157, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__24_FileModeWarning_157, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
{
nuitka_bool tmp_condition_result_96;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_cmp_expr_left_24 = tmp_class_container$class_creation_24__bases;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_cmp_expr_right_24 = tmp_class_container$class_creation_24__bases_orig;
tmp_condition_result_96 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
if (tmp_condition_result_96 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
if (tmp_condition_result_96 == NUITKA_BOOL_TRUE) {
    goto branch_yes_72;
} else {
    goto branch_no_72;
}
}
branch_yes_72:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_24__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__24_FileModeWarning_157, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
branch_no_72:;
{
PyObject *tmp_assign_source_201;
PyObject *tmp_metaclass_value_48;
PyObject *tmp_name_value_50;
PyObject *tmp_bases_value_48;
PyObject *tmp_dict_arg_value_24;
PyObject *tmp_class_decl_dict_value_24;
PyObject *tmp_metaclass_args_24;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
tmp_metaclass_value_48 = tmp_class_container$class_creation_24__metaclass;
tmp_name_value_50 = mod_consts.const_str_plain_FileModeWarning;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
tmp_bases_value_48 = tmp_class_container$class_creation_24__bases;
tmp_dict_arg_value_24 = locals_requests$exceptions$$$class__24_FileModeWarning_157;
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
tmp_class_decl_dict_value_24 = tmp_class_container$class_creation_24__class_decl_dict;
tmp_metaclass_args_24 = MAKE_TUPLE3(tstate, tmp_name_value_50, tmp_bases_value_48, tmp_dict_arg_value_24);
tmp_assign_source_201 = CALL_FUNCTION(tstate, tmp_metaclass_value_48, tmp_metaclass_args_24, tmp_class_decl_dict_value_24);
CHECK_OBJECT(tmp_metaclass_args_24);
Py_DECREF(tmp_metaclass_args_24);
if (tmp_assign_source_201 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto try_except_handler_73;
}
{
    PyObject *old = outline_23_var___class__;
    outline_23_var___class__ = tmp_assign_source_201;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_23_var___class__);
tmp_assign_source_200 = outline_23_var___class__;
Py_INCREF(tmp_assign_source_200);
goto try_return_handler_73;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_73:;
Py_DECREF(locals_requests$exceptions$$$class__24_FileModeWarning_157);
locals_requests$exceptions$$$class__24_FileModeWarning_157 = NULL;
goto try_return_handler_72;
// Exception handler code:
try_except_handler_73:;
exception_keeper_lineno_71 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_71 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__24_FileModeWarning_157);
locals_requests$exceptions$$$class__24_FileModeWarning_157 = NULL;
// Re-raise.
exception_state = exception_keeper_name_71;
exception_lineno = exception_keeper_lineno_71;

goto try_except_handler_72;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_72:;
CHECK_OBJECT(outline_23_var___class__);
CHECK_OBJECT(outline_23_var___class__);
Py_DECREF(outline_23_var___class__);
outline_23_var___class__ = NULL;
goto outline_result_48;
// Exception handler code:
try_except_handler_72:;
exception_keeper_lineno_72 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_72 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_72;
exception_lineno = exception_keeper_lineno_72;

goto outline_exception_24;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_24:;
exception_lineno = 157;
goto try_except_handler_71;
outline_result_48:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_FileModeWarning, tmp_assign_source_200);
}
goto try_end_25;
// Exception handler code:
try_except_handler_71:;
exception_keeper_lineno_73 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_73 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_24__bases_orig);
tmp_class_container$class_creation_24__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__bases);
tmp_class_container$class_creation_24__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__class_decl_dict);
tmp_class_container$class_creation_24__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__metaclass);
tmp_class_container$class_creation_24__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_24__prepared);
tmp_class_container$class_creation_24__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_73;
exception_lineno = exception_keeper_lineno_73;

goto frame_exception_exit_1;
// End of try:
try_end_25:;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases_orig);
Py_DECREF(tmp_class_container$class_creation_24__bases_orig);
tmp_class_container$class_creation_24__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
CHECK_OBJECT(tmp_class_container$class_creation_24__bases);
Py_DECREF(tmp_class_container$class_creation_24__bases);
tmp_class_container$class_creation_24__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_24__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_24__class_decl_dict);
tmp_class_container$class_creation_24__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_24__metaclass);
Py_DECREF(tmp_class_container$class_creation_24__metaclass);
tmp_class_container$class_creation_24__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_24__prepared);
Py_DECREF(tmp_class_container$class_creation_24__prepared);
tmp_class_container$class_creation_24__prepared = NULL;
tmp_outline_return_value_24 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_24);
goto outline_result_47;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_47:;
CHECK_OBJECT(tmp_outline_return_value_24);
Py_DECREF(tmp_outline_return_value_24);
}
{
PyObject *tmp_outline_return_value_25;
// Tried code:
{
PyObject *tmp_assign_source_202;
PyObject *tmp_tuple_element_72;
tmp_tuple_element_72 = module_var_accessor_requests$exceptions$RequestsWarning(tstate);
if (unlikely(tmp_tuple_element_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_RequestsWarning);
}

if (tmp_tuple_element_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;

    goto try_except_handler_74;
}
tmp_assign_source_202 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_202, 0, tmp_tuple_element_72);
assert(tmp_class_container$class_creation_25__bases_orig == NULL);
tmp_class_container$class_creation_25__bases_orig = tmp_assign_source_202;
}
{
PyObject *tmp_assign_source_203;
PyObject *tmp_direct_call_arg1_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
tmp_direct_call_arg1_25 = tmp_class_container$class_creation_25__bases_orig;
Py_INCREF(tmp_direct_call_arg1_25);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_25};
    tmp_assign_source_203 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_203 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
assert(tmp_class_container$class_creation_25__bases == NULL);
tmp_class_container$class_creation_25__bases = tmp_assign_source_203;
}
{
PyObject *tmp_assign_source_204;
tmp_assign_source_204 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_25__class_decl_dict == NULL);
tmp_class_container$class_creation_25__class_decl_dict = tmp_assign_source_204;
}
{
PyObject *tmp_assign_source_205;
PyObject *tmp_metaclass_value_49;
nuitka_bool tmp_condition_result_97;
int tmp_truth_name_25;
PyObject *tmp_type_arg_49;
PyObject *tmp_expression_value_145;
PyObject *tmp_subscript_value_25;
PyObject *tmp_bases_value_49;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_truth_name_25 = CHECK_IF_TRUE(tmp_class_container$class_creation_25__bases);
if (tmp_truth_name_25 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
tmp_condition_result_97 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_97 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_25;
} else {
    goto condexpr_false_25;
}
condexpr_true_25:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_expression_value_145 = tmp_class_container$class_creation_25__bases;
tmp_subscript_value_25 = const_int_0;
tmp_type_arg_49 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_145, tmp_subscript_value_25, 0);
if (tmp_type_arg_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
tmp_metaclass_value_49 = BUILTIN_TYPE1(tmp_type_arg_49);
CHECK_OBJECT(tmp_type_arg_49);
Py_DECREF(tmp_type_arg_49);
if (tmp_metaclass_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
goto condexpr_end_25;
condexpr_false_25:;
tmp_metaclass_value_49 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_49);
condexpr_end_25:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_bases_value_49 = tmp_class_container$class_creation_25__bases;
tmp_assign_source_205 = SELECT_METACLASS(tstate, tmp_metaclass_value_49, tmp_bases_value_49);
CHECK_OBJECT(tmp_metaclass_value_49);
Py_DECREF(tmp_metaclass_value_49);
if (tmp_assign_source_205 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
assert(tmp_class_container$class_creation_25__metaclass == NULL);
tmp_class_container$class_creation_25__metaclass = tmp_assign_source_205;
}
{
bool tmp_condition_result_98;
PyObject *tmp_expression_value_146;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_146 = tmp_class_container$class_creation_25__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_146, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
tmp_condition_result_98 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_98 != false) {
    goto branch_yes_73;
} else {
    goto branch_no_73;
}
}
branch_yes_73:;
{
PyObject *tmp_assign_source_206;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_147;
PyObject *tmp_args_value_25;
PyObject *tmp_tuple_element_73;
PyObject *tmp_kwargs_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_147 = tmp_class_container$class_creation_25__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
tmp_tuple_element_73 = mod_consts.const_str_plain_RequestsDependencyWarning;
tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_tuple_element_73 = tmp_class_container$class_creation_25__bases;
PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_73);
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
tmp_kwargs_value_25 = tmp_class_container$class_creation_25__class_decl_dict;
frame_frame_requests$exceptions->m_frame.f_lineno = 161;
tmp_assign_source_206 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_25, tmp_kwargs_value_25);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_25);
Py_DECREF(tmp_args_value_25);
if (tmp_assign_source_206 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
assert(tmp_class_container$class_creation_25__prepared == NULL);
tmp_class_container$class_creation_25__prepared = tmp_assign_source_206;
}
{
bool tmp_condition_result_99;
PyObject *tmp_operand_value_25;
PyObject *tmp_expression_value_148;
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_expression_value_148 = tmp_class_container$class_creation_25__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_148, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
tmp_operand_value_25 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_25);
assert(!(tmp_res == -1));
tmp_condition_result_99 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_99 != false) {
    goto branch_yes_74;
} else {
    goto branch_no_74;
}
}
branch_yes_74:;
{
PyObject *tmp_raise_type_25;
PyObject *tmp_make_exception_arg_25;
PyObject *tmp_mod_expr_left_25;
PyObject *tmp_mod_expr_right_25;
PyObject *tmp_tuple_element_74;
PyObject *tmp_expression_value_149;
PyObject *tmp_name_value_51;
PyObject *tmp_default_value_25;
tmp_mod_expr_left_25 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_expression_value_149 = tmp_class_container$class_creation_25__metaclass;
tmp_name_value_51 = const_str_plain___name__;
tmp_default_value_25 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_149, tmp_name_value_51, tmp_default_value_25);
if (tmp_tuple_element_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
tmp_mod_expr_right_25 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_150;
PyObject *tmp_type_arg_50;
PyTuple_SET_ITEM(tmp_mod_expr_right_25, 0, tmp_tuple_element_74);
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_type_arg_50 = tmp_class_container$class_creation_25__prepared;
tmp_expression_value_150 = BUILTIN_TYPE1(tmp_type_arg_50);
assert(!(tmp_expression_value_150 == NULL));
tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_150);
Py_DECREF(tmp_expression_value_150);
if (tmp_tuple_element_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_25, 1, tmp_tuple_element_74);
}
goto tuple_build_no_exception_29;
// Exception handling pass through code for tuple_build:
tuple_build_exception_29:;
Py_DECREF(tmp_mod_expr_right_25);
goto try_except_handler_74;
// Finished with no exception for tuple_build:
tuple_build_no_exception_29:;
tmp_make_exception_arg_25 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
CHECK_OBJECT(tmp_mod_expr_right_25);
Py_DECREF(tmp_mod_expr_right_25);
if (tmp_make_exception_arg_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_74;
}
frame_frame_requests$exceptions->m_frame.f_lineno = 161;
tmp_raise_type_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_25);
CHECK_OBJECT(tmp_make_exception_arg_25);
Py_DECREF(tmp_make_exception_arg_25);
assert(!(tmp_raise_type_25 == NULL));
exception_state.exception_value = tmp_raise_type_25;
exception_lineno = 161;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_74;
}
branch_no_74:;
goto branch_end_73;
branch_no_73:;
{
PyObject *tmp_assign_source_207;
tmp_assign_source_207 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_25__prepared == NULL);
tmp_class_container$class_creation_25__prepared = tmp_assign_source_207;
}
branch_end_73:;
{
PyObject *tmp_assign_source_208;
{
PyObject *tmp_set_locals_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
tmp_set_locals_25 = tmp_class_container$class_creation_25__prepared;
locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161 = tmp_set_locals_25;
Py_INCREF(tmp_set_locals_25);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f66506e79a3ab24d4cfd8802415c4d2;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
tmp_dictset_value = mod_consts.const_str_digest_3a035decbb1d48c6b204b28e42512076;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
tmp_dictset_value = mod_consts.const_str_plain_RequestsDependencyWarning;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
tmp_dictset_value = mod_consts.const_int_pos_161;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
{
nuitka_bool tmp_condition_result_100;
PyObject *tmp_cmp_expr_left_25;
PyObject *tmp_cmp_expr_right_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_cmp_expr_left_25 = tmp_class_container$class_creation_25__bases;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
tmp_cmp_expr_right_25 = tmp_class_container$class_creation_25__bases_orig;
tmp_condition_result_100 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
if (tmp_condition_result_100 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
if (tmp_condition_result_100 == NUITKA_BOOL_TRUE) {
    goto branch_yes_75;
} else {
    goto branch_no_75;
}
}
branch_yes_75:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_25__bases_orig;
tmp_res = PyObject_SetItem(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
branch_no_75:;
{
PyObject *tmp_assign_source_209;
PyObject *tmp_metaclass_value_50;
PyObject *tmp_name_value_52;
PyObject *tmp_bases_value_50;
PyObject *tmp_dict_arg_value_25;
PyObject *tmp_class_decl_dict_value_25;
PyObject *tmp_metaclass_args_25;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
tmp_metaclass_value_50 = tmp_class_container$class_creation_25__metaclass;
tmp_name_value_52 = mod_consts.const_str_plain_RequestsDependencyWarning;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
tmp_bases_value_50 = tmp_class_container$class_creation_25__bases;
tmp_dict_arg_value_25 = locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161;
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
tmp_class_decl_dict_value_25 = tmp_class_container$class_creation_25__class_decl_dict;
tmp_metaclass_args_25 = MAKE_TUPLE3(tstate, tmp_name_value_52, tmp_bases_value_50, tmp_dict_arg_value_25);
tmp_assign_source_209 = CALL_FUNCTION(tstate, tmp_metaclass_value_50, tmp_metaclass_args_25, tmp_class_decl_dict_value_25);
CHECK_OBJECT(tmp_metaclass_args_25);
Py_DECREF(tmp_metaclass_args_25);
if (tmp_assign_source_209 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto try_except_handler_76;
}
{
    PyObject *old = outline_24_var___class__;
    outline_24_var___class__ = tmp_assign_source_209;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_24_var___class__);
tmp_assign_source_208 = outline_24_var___class__;
Py_INCREF(tmp_assign_source_208);
goto try_return_handler_76;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_76:;
Py_DECREF(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161);
locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161 = NULL;
goto try_return_handler_75;
// Exception handler code:
try_except_handler_76:;
exception_keeper_lineno_74 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_74 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161);
locals_requests$exceptions$$$class__25_RequestsDependencyWarning_161 = NULL;
// Re-raise.
exception_state = exception_keeper_name_74;
exception_lineno = exception_keeper_lineno_74;

goto try_except_handler_75;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_75:;
CHECK_OBJECT(outline_24_var___class__);
CHECK_OBJECT(outline_24_var___class__);
Py_DECREF(outline_24_var___class__);
outline_24_var___class__ = NULL;
goto outline_result_50;
// Exception handler code:
try_except_handler_75:;
exception_keeper_lineno_75 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_75 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_75;
exception_lineno = exception_keeper_lineno_75;

goto outline_exception_25;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_25:;
exception_lineno = 161;
goto try_except_handler_74;
outline_result_50:;
UPDATE_STRING_DICT1(moduledict_requests$exceptions, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestsDependencyWarning, tmp_assign_source_208);
}
goto try_end_26;
// Exception handler code:
try_except_handler_74:;
exception_keeper_lineno_76 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_76 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_25__bases_orig);
tmp_class_container$class_creation_25__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__bases);
tmp_class_container$class_creation_25__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__class_decl_dict);
tmp_class_container$class_creation_25__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__metaclass);
tmp_class_container$class_creation_25__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_25__prepared);
tmp_class_container$class_creation_25__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_76;
exception_lineno = exception_keeper_lineno_76;

goto frame_exception_exit_1;
// End of try:
try_end_26:;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases_orig);
Py_DECREF(tmp_class_container$class_creation_25__bases_orig);
tmp_class_container$class_creation_25__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
CHECK_OBJECT(tmp_class_container$class_creation_25__bases);
Py_DECREF(tmp_class_container$class_creation_25__bases);
tmp_class_container$class_creation_25__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_25__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_25__class_decl_dict);
tmp_class_container$class_creation_25__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_25__metaclass);
Py_DECREF(tmp_class_container$class_creation_25__metaclass);
tmp_class_container$class_creation_25__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_25__prepared);
Py_DECREF(tmp_class_container$class_creation_25__prepared);
tmp_class_container$class_creation_25__prepared = NULL;
tmp_outline_return_value_25 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_25);
goto outline_result_49;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_49:;
CHECK_OBJECT(tmp_outline_return_value_25);
Py_DECREF(tmp_outline_return_value_25);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_requests$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_requests$exceptions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_requests$exceptions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_requests$exceptions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("requests$exceptions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "requests.exceptions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_requests$exceptions);
    return module_requests$exceptions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("requests$exceptions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
