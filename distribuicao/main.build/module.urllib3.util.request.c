/* Generated code for Python module 'urllib3$util$request'
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



/* The "module_urllib3$util$request" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$request;
PyDictObject *moduledict_urllib3$util$request;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_chr_44;
PyObject *const_str_plain_ACCEPT_ENCODING;
PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
PyObject *const_str_digest_726f4c9a876879b008c85b6851a1570f;
PyObject *const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
PyObject *const_str_plain_connection;
PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
PyObject *const_str_plain_b64encode;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple;
PyObject *const_str_plain_decode;
PyObject *const_str_plain_authorization;
PyObject *const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
PyObject *const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
PyObject *const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
PyObject *const_str_digest_616731625fe1000262d2a009f4d197d4;
PyObject *const_str_plain_rewind_body;
PyObject *const_str_plain_tell;
PyObject *const_str_plain__FAILEDTELL;
PyObject *const_str_plain_pos;
PyObject *const_str_digest_1ba972909c388f467bdb1737eff7bf8a;
PyObject *const_str_plain_seek;
PyObject *const_str_plain_UnrewindableBodyError;
PyObject *const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple;
PyObject *const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple;
PyObject *const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31;
PyObject *const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd;
PyObject *const_str_plain_upper;
PyObject *const_str_plain__METHODS_NOT_EXPECTING_BODY;
PyObject *const_tuple_type_str_type_bytes_tuple;
PyObject *const_str_plain_to_bytes;
PyObject *const_dict_cc7a7ac2ab875f15e1f45fa874c8b966;
PyObject *const_str_plain_chunk_readable;
PyObject *const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c;
PyObject *const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59;
PyObject *const_str_plain_mv;
PyObject *const_str_plain_nbytes;
PyObject *const_str_plain_ChunksAndContentLength;
PyObject *const_str_plain_chunks;
PyObject *const_str_plain_content_length;
PyObject *const_tuple_str_plain_chunks_str_plain_content_length_tuple;
PyObject *const_str_digest_1069c53476741eb25a3f2e6a82a7bd68;
PyObject *const_str_plain_body;
PyObject *const_str_plain_TextIOBase;
PyObject *const_str_plain_blocksize;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_io;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_base64;
PyObject *const_tuple_str_plain_b64encode_tuple;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_Enum_tuple;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_UnrewindableBodyError_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_util;
PyObject *const_tuple_str_plain_to_bytes_tuple;
PyObject *const_str_digest_6e0a1f5e895c96ed854521766adf079e;
PyObject *const_str_plain_SKIP_HEADER;
PyObject *const_frozenset_2f762af9a4d1c2985259def659555547;
PyObject *const_str_plain_SKIPPABLE_HEADERS;
PyObject *const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
PyObject *const_str_plain_brotlicffi;
PyObject *const_str_plain__unused_module_brotli;
PyObject *const_str_plain_brotli;
PyObject *const_str_digest_d2b904b25d381938ff5e527197f159f9;
PyObject *const_str_plain_compression;
PyObject *const_tuple_str_plain_zstd_tuple;
PyObject *const_str_plain_zstd;
PyObject *const_str_plain__unused_module_zstd;
PyObject *const_str_digest_0ddfa5c6f280b29305115c9efd97c916;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain__TYPE_FAILEDTELL;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45;
PyObject *const_int_pos_44;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_token;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_cd039ffa2e8775488182d10bdf28c8ca;
PyObject *const_str_plain_Union;
PyObject *const_str_plain__TYPE_BODY_POSITION;
PyObject *const_set_6e84ea2b51a066a323b1aa44deff13c7;
PyObject *const_tuple_none_none_none_none_none_none_tuple;
PyObject *const_dict_74bda88e3cf67fef532bd16a6c00a4b3;
PyObject *const_str_plain_make_headers;
PyObject *const_dict_aa3507485561122a053b5c78c37c67e5;
PyObject *const_str_plain_set_file_position;
PyObject *const_dict_eb93e25ee332631738b3a91784fbff1d;
PyObject *const_str_plain_NamedTuple;
PyObject *const_int_pos_192;
PyObject *const_str_digest_349022cf05233ef7696711d77759649d;
PyObject *const_str_digest_d07907e58b350811dd59b47ecbca299a;
PyObject *const_dict_ec24df182c0120deeb2af7d5716c20ae;
PyObject *const_str_plain_body_to_chunks;
PyObject *const_str_digest_6c6cf011b66fe0cd25c3666fb019702d;
PyObject *const_str_digest_62602cb6603929977f40e7e98d6957ef;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple;
PyObject *const_tuple_85830bc39627ae97403a2651499e6ee3_tuple;
PyObject *const_tuple_str_plain_blocksize_str_plain_body_tuple;
PyObject *const_tuple_bf13d4977692576812fdd050c4821ab2_tuple;
PyObject *const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple;
PyObject *const_tuple_str_plain_body_str_plain_pos_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[112];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.request"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 112) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 112 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.request"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_44", mod_consts.const_str_chr_44);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ACCEPT_ENCODING", mod_consts.const_str_plain_ACCEPT_ENCODING);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPT_ENCODING);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff", mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f", mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2", mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc", mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64encode", mod_consts.const_str_plain_b64encode);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple", mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_authorization", mod_consts.const_str_plain_authorization);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_authorization);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2", mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69", mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537", mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4", mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rewind_body", mod_consts.const_str_plain_rewind_body);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_rewind_body);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FAILEDTELL", mod_consts.const_str_plain__FAILEDTELL);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain__FAILEDTELL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pos", mod_consts.const_str_plain_pos);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a", mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnrewindableBodyError", mod_consts.const_str_plain_UnrewindableBodyError);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnrewindableBodyError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple", mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple", mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31", mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd", mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY", mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_type_bytes_tuple", mod_consts.const_tuple_type_str_type_bytes_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_bytes", mod_consts.const_str_plain_to_bytes);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966", mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk_readable", mod_consts.const_str_plain_chunk_readable);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_readable);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c", mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59", mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mv", mod_consts.const_str_plain_mv);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_mv);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_nbytes", mod_consts.const_str_plain_nbytes);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_nbytes);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ChunksAndContentLength", mod_consts.const_str_plain_ChunksAndContentLength);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChunksAndContentLength);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunks", mod_consts.const_str_plain_chunks);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_content_length", mod_consts.const_str_plain_content_length);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_content_length);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple", mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68", mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TextIOBase", mod_consts.const_str_plain_TextIOBase);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOBase);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blocksize", mod_consts.const_str_plain_blocksize);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_base64);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_b64encode_tuple", mod_consts.const_tuple_str_plain_b64encode_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_b64encode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Enum_tuple", mod_consts.const_tuple_str_plain_Enum_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple", mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_util);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_bytes_tuple", mod_consts.const_tuple_str_plain_to_bytes_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_bytes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e", mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SKIP_HEADER", mod_consts.const_str_plain_SKIP_HEADER);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_SKIP_HEADER);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547", mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SKIPPABLE_HEADERS", mod_consts.const_str_plain_SKIPPABLE_HEADERS);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_SKIPPABLE_HEADERS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b", mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brotlicffi", mod_consts.const_str_plain_brotlicffi);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_brotlicffi);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__unused_module_brotli", mod_consts.const_str_plain__unused_module_brotli);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__unused_module_brotli);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brotli", mod_consts.const_str_plain_brotli);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_brotli);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9", mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compression", mod_consts.const_str_plain_compression);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_compression);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_zstd_tuple", mod_consts.const_tuple_str_plain_zstd_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_zstd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_zstd", mod_consts.const_str_plain_zstd);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_zstd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__unused_module_zstd", mod_consts.const_str_plain__unused_module_zstd);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__unused_module_zstd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916", mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_FAILEDTELL", mod_consts.const_str_plain__TYPE_FAILEDTELL);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_FAILEDTELL);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45", mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_44", mod_consts.const_int_pos_44);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_44);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token", mod_consts.const_str_plain_token);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca", mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY_POSITION", mod_consts.const_str_plain__TYPE_BODY_POSITION);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY_POSITION);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7", mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3", mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_make_headers", mod_consts.const_str_plain_make_headers);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5", mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_file_position", mod_consts.const_str_plain_set_file_position);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_file_position);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d", mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_192", mod_consts.const_int_pos_192);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_192);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_349022cf05233ef7696711d77759649d", mod_consts.const_str_digest_349022cf05233ef7696711d77759649d);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_349022cf05233ef7696711d77759649d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae", mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body_to_chunks", mod_consts.const_str_plain_body_to_chunks);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_body_to_chunks);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d", mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef", mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple", mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple", mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple", mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple", mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple", mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple);
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
void checkModuleConstants_urllib3$util$request(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_44", mod_consts.const_str_chr_44);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_chr_44) && "mod_consts.const_str_chr_44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ACCEPT_ENCODING", mod_consts.const_str_plain_ACCEPT_ENCODING);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ACCEPT_ENCODING) && "mod_consts.const_str_plain_ACCEPT_ENCODING");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff", mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff) && "mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f", mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f) && "mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2", mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2) && "mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_connection", mod_consts.const_str_plain_connection);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_connection) && "mod_consts.const_str_plain_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc", mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc) && "mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_b64encode", mod_consts.const_str_plain_b64encode);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_b64encode) && "mod_consts.const_str_plain_b64encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple", mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple) && "mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_decode", mod_consts.const_str_plain_decode);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode) && "mod_consts.const_str_plain_decode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_authorization", mod_consts.const_str_plain_authorization);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_authorization) && "mod_consts.const_str_plain_authorization");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2", mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2) && "mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69", mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69) && "mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537", mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537) && "mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4", mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4) && "mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_rewind_body", mod_consts.const_str_plain_rewind_body);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_rewind_body) && "mod_consts.const_str_plain_rewind_body");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_tell", mod_consts.const_str_plain_tell);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell) && "mod_consts.const_str_plain_tell");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__FAILEDTELL", mod_consts.const_str_plain__FAILEDTELL);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain__FAILEDTELL) && "mod_consts.const_str_plain__FAILEDTELL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pos", mod_consts.const_str_plain_pos);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos) && "mod_consts.const_str_plain_pos");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a", mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a) && "mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_seek", mod_consts.const_str_plain_seek);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek) && "mod_consts.const_str_plain_seek");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_UnrewindableBodyError", mod_consts.const_str_plain_UnrewindableBodyError);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnrewindableBodyError) && "mod_consts.const_str_plain_UnrewindableBodyError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple", mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple) && "mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple", mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple) && "mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31", mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31) && "mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd", mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd) && "mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY", mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY) && "mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_type_bytes_tuple", mod_consts.const_tuple_type_str_type_bytes_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple) && "mod_consts.const_tuple_type_str_type_bytes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_to_bytes", mod_consts.const_str_plain_to_bytes);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_bytes) && "mod_consts.const_str_plain_to_bytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966", mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966) && "mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunk_readable", mod_consts.const_str_plain_chunk_readable);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_readable) && "mod_consts.const_str_plain_chunk_readable");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c", mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c) && "mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59", mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59) && "mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_mv", mod_consts.const_str_plain_mv);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_mv) && "mod_consts.const_str_plain_mv");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_nbytes", mod_consts.const_str_plain_nbytes);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_nbytes) && "mod_consts.const_str_plain_nbytes");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_ChunksAndContentLength", mod_consts.const_str_plain_ChunksAndContentLength);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChunksAndContentLength) && "mod_consts.const_str_plain_ChunksAndContentLength");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_chunks", mod_consts.const_str_plain_chunks);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunks) && "mod_consts.const_str_plain_chunks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_content_length", mod_consts.const_str_plain_content_length);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_content_length) && "mod_consts.const_str_plain_content_length");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple", mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple) && "mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68", mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68) && "mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_body) && "mod_consts.const_str_plain_body");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_TextIOBase", mod_consts.const_str_plain_TextIOBase);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOBase) && "mod_consts.const_str_plain_TextIOBase");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_blocksize", mod_consts.const_str_plain_blocksize);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_blocksize) && "mod_consts.const_str_plain_blocksize");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple) && "mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_io", mod_consts.const_str_plain_io);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_io) && "mod_consts.const_str_plain_io");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_sys", mod_consts.const_str_plain_sys);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys) && "mod_consts.const_str_plain_sys");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_base64", mod_consts.const_str_plain_base64);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_base64) && "mod_consts.const_str_plain_base64");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_b64encode_tuple", mod_consts.const_tuple_str_plain_b64encode_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_b64encode_tuple) && "mod_consts.const_tuple_str_plain_b64encode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_enum", mod_consts.const_str_plain_enum);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum) && "mod_consts.const_str_plain_enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_Enum_tuple", mod_consts.const_tuple_str_plain_Enum_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple) && "mod_consts.const_tuple_str_plain_Enum_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Enum", mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum) && "mod_consts.const_str_plain_Enum");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple", mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple) && "mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_util", mod_consts.const_str_plain_util);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_util) && "mod_consts.const_str_plain_util");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_to_bytes_tuple", mod_consts.const_tuple_str_plain_to_bytes_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_bytes_tuple) && "mod_consts.const_tuple_str_plain_to_bytes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e", mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e) && "mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SKIP_HEADER", mod_consts.const_str_plain_SKIP_HEADER);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_SKIP_HEADER) && "mod_consts.const_str_plain_SKIP_HEADER");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547", mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547) && "mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_SKIPPABLE_HEADERS", mod_consts.const_str_plain_SKIPPABLE_HEADERS);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_SKIPPABLE_HEADERS) && "mod_consts.const_str_plain_SKIPPABLE_HEADERS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b", mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b) && "mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brotlicffi", mod_consts.const_str_plain_brotlicffi);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_brotlicffi) && "mod_consts.const_str_plain_brotlicffi");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__unused_module_brotli", mod_consts.const_str_plain__unused_module_brotli);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__unused_module_brotli) && "mod_consts.const_str_plain__unused_module_brotli");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_brotli", mod_consts.const_str_plain_brotli);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_brotli) && "mod_consts.const_str_plain_brotli");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9", mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9) && "mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_compression", mod_consts.const_str_plain_compression);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_compression) && "mod_consts.const_str_plain_compression");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_zstd_tuple", mod_consts.const_tuple_str_plain_zstd_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_zstd_tuple) && "mod_consts.const_tuple_str_plain_zstd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_zstd", mod_consts.const_str_plain_zstd);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_zstd) && "mod_consts.const_str_plain_zstd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__unused_module_zstd", mod_consts.const_str_plain__unused_module_zstd);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__unused_module_zstd) && "mod_consts.const_str_plain__unused_module_zstd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916", mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916) && "mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___prepare__", mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__) && "mod_consts.const_str_plain___prepare__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_FAILEDTELL", mod_consts.const_str_plain__TYPE_FAILEDTELL);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_FAILEDTELL) && "mod_consts.const_str_plain__TYPE_FAILEDTELL");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___getitem__", mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__) && "mod_consts.const_str_plain___getitem__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295", mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295) && "mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_angle_metaclass", mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass) && "mod_consts.const_str_angle_metaclass");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45", mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45) && "mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_44", mod_consts.const_int_pos_44);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_44) && "mod_consts.const_int_pos_44");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_token", mod_consts.const_str_plain_token);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_token) && "mod_consts.const_str_plain_token");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___orig_bases__", mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__) && "mod_consts.const_str_plain___orig_bases__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca", mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca) && "mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY_POSITION", mod_consts.const_str_plain__TYPE_BODY_POSITION);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY_POSITION) && "mod_consts.const_str_plain__TYPE_BODY_POSITION");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7", mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7) && "mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_none_none_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3", mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3) && "mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_make_headers", mod_consts.const_str_plain_make_headers);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_headers) && "mod_consts.const_str_plain_make_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5", mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5) && "mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_set_file_position", mod_consts.const_str_plain_set_file_position);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_file_position) && "mod_consts.const_str_plain_set_file_position");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d", mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d) && "mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_NamedTuple", mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple) && "mod_consts.const_str_plain_NamedTuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_192", mod_consts.const_int_pos_192);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_192) && "mod_consts.const_int_pos_192");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_349022cf05233ef7696711d77759649d", mod_consts.const_str_digest_349022cf05233ef7696711d77759649d);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_349022cf05233ef7696711d77759649d) && "mod_consts.const_str_digest_349022cf05233ef7696711d77759649d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a", mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a) && "mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae", mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae) && "mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body_to_chunks", mod_consts.const_str_plain_body_to_chunks);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_body_to_chunks) && "mod_consts.const_str_plain_body_to_chunks");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d", mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d) && "mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef", mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef) && "mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain___class___tuple", mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple) && "mod_consts.const_tuple_str_plain___class___tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple", mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple) && "mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple", mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple) && "mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple", mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple) && "mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple", mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple) && "mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple", mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple) && "mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple", mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple) && "mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor_urllib3$util$request$ACCEPT_ENCODING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_ENCODING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ACCEPT_ENCODING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ACCEPT_ENCODING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ACCEPT_ENCODING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ACCEPT_ENCODING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_ENCODING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_ENCODING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_ENCODING);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$ChunksAndContentLength(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunksAndContentLength);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChunksAndContentLength);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChunksAndContentLength, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ChunksAndContentLength);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ChunksAndContentLength, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunksAndContentLength);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunksAndContentLength);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunksAndContentLength);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$Enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$UnrewindableBodyError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_UnrewindableBodyError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnrewindableBodyError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnrewindableBodyError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UnrewindableBodyError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UnrewindableBodyError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_UnrewindableBodyError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_UnrewindableBodyError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UnrewindableBodyError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$_FAILEDTELL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__FAILEDTELL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FAILEDTELL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FAILEDTELL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FAILEDTELL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FAILEDTELL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__FAILEDTELL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__FAILEDTELL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FAILEDTELL);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$_METHODS_NOT_EXPECTING_BODY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$_TYPE_FAILEDTELL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_FAILEDTELL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TYPE_FAILEDTELL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TYPE_FAILEDTELL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__TYPE_FAILEDTELL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__TYPE_FAILEDTELL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_FAILEDTELL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_FAILEDTELL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_FAILEDTELL);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$b64encode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$rewind_body(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_rewind_body);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rewind_body);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rewind_body, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rewind_body);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rewind_body, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_rewind_body);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_rewind_body);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rewind_body);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$request$to_bytes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$request->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$request->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_to_bytes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$request->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_bytes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_bytes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_bytes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_bytes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_to_bytes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_to_bytes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_bytes);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_eddc01b082794380212e0be845d0ce8b;
static PyCodeObject *code_objects_b97b66d6bae267fab626c65df9f8d19d;
static PyCodeObject *code_objects_f78fafeed571b26c1417a3bd342d6c24;
static PyCodeObject *code_objects_0e28f49826f7d69f18e8217421749017;
static PyCodeObject *code_objects_e98f8d2fd379096190bc9cc382c2760a;
static PyCodeObject *code_objects_39a6f86b32952119e34da8a86204b322;
static PyCodeObject *code_objects_b63415866487381708d0db7bc71ac495;
static PyCodeObject *code_objects_dc65e6206f6ec3b4e914604305fd9489;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6c6cf011b66fe0cd25c3666fb019702d); CHECK_OBJECT(module_filename_obj);
code_objects_eddc01b082794380212e0be845d0ce8b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef, mod_consts.const_str_digest_62602cb6603929977f40e7e98d6957ef, NULL, NULL, 0, 0, 0);
code_objects_b97b66d6bae267fab626c65df9f8d19d = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ChunksAndContentLength, mod_consts.const_str_plain_ChunksAndContentLength, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f78fafeed571b26c1417a3bd342d6c24 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__TYPE_FAILEDTELL, mod_consts.const_str_plain__TYPE_FAILEDTELL, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0e28f49826f7d69f18e8217421749017 = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_body_to_chunks, mod_consts.const_str_plain_body_to_chunks, mod_consts.const_tuple_49c6561ffaaf715e69a3cc3576fe321d_tuple, NULL, 3, 0, 0);
code_objects_e98f8d2fd379096190bc9cc382c2760a = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_chunk_readable, mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c, mod_consts.const_tuple_85830bc39627ae97403a2651499e6ee3_tuple, mod_consts.const_tuple_str_plain_blocksize_str_plain_body_tuple, 0, 0, 0);
code_objects_39a6f86b32952119e34da8a86204b322 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_make_headers, mod_consts.const_str_plain_make_headers, mod_consts.const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, NULL, 6, 0, 0);
code_objects_b63415866487381708d0db7bc71ac495 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rewind_body, mod_consts.const_str_plain_rewind_body, mod_consts.const_tuple_a90a7c50ebf87f632d26b562edbb3fa5_tuple, NULL, 2, 0, 0);
code_objects_dc65e6206f6ec3b4e914604305fd9489 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_file_position, mod_consts.const_str_plain_set_file_position, mod_consts.const_tuple_str_plain_body_str_plain_pos_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__1_make_headers(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__2_set_file_position(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__3_rewind_body(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__4_body_to_chunks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_urllib3$util$request$$$function__1_make_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_keep_alive = python_pars[0];
PyObject *par_accept_encoding = python_pars[1];
PyObject *par_user_agent = python_pars[2];
PyObject *par_basic_auth = python_pars[3];
PyObject *par_proxy_basic_auth = python_pars[4];
PyObject *par_disable_cache = python_pars[5];
PyObject *var_headers = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$request$$$function__1_make_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$request$$$function__1_make_headers = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = var_headers;
    var_headers = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$request$$$function__1_make_headers)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$request$$$function__1_make_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$request$$$function__1_make_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$request$$$function__1_make_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_39a6f86b32952119e34da8a86204b322, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$request$$$function__1_make_headers->m_type_description == NULL);
frame_frame_urllib3$util$request$$$function__1_make_headers = cache_frame_frame_urllib3$util$request$$$function__1_make_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$request$$$function__1_make_headers);
assert(Py_REFCNT(frame_frame_urllib3$util$request$$$function__1_make_headers) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_accept_encoding);
tmp_truth_name_1 = CHECK_IF_TRUE(par_accept_encoding);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
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
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_accept_encoding);
tmp_isinstance_inst_1 = par_accept_encoding;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_accept_encoding);
tmp_isinstance_inst_2 = par_accept_encoding;
tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
CHECK_OBJECT(par_accept_encoding);
tmp_iterable_value_1 = par_accept_encoding;
tmp_assign_source_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_accept_encoding;
    assert(old != NULL);
    par_accept_encoding = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_urllib3$util$request$ACCEPT_ENCODING(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ACCEPT_ENCODING);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_accept_encoding;
    assert(old != NULL);
    par_accept_encoding = tmp_assign_source_3;
    Py_INCREF(par_accept_encoding);
    Py_DECREF(old);
}

}
branch_end_3:;
branch_no_2:;
CHECK_OBJECT(par_accept_encoding);
tmp_dictset_value = par_accept_encoding;
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_user_agent);
tmp_truth_name_2 = CHECK_IF_TRUE(par_user_agent);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooo";
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
CHECK_OBJECT(par_user_agent);
tmp_dictset_value = par_user_agent;
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_digest_726f4c9a876879b008c85b6851a1570f;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(par_keep_alive);
tmp_truth_name_3 = CHECK_IF_TRUE(par_keep_alive);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_dictset_value = mod_consts.const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_plain_connection;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_4;
CHECK_OBJECT(par_basic_auth);
tmp_truth_name_4 = CHECK_IF_TRUE(par_basic_auth);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_called_value_2 = module_var_accessor_urllib3$util$request$b64encode(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_b64encode);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_basic_auth);
tmp_expression_value_2 = par_basic_auth;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
frame_frame_urllib3$util$request$$$function__1_make_headers->m_frame.f_lineno = 128;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
frame_frame_urllib3$util$request$$$function__1_make_headers->m_frame.f_lineno = 128;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
frame_frame_urllib3$util$request$$$function__1_make_headers->m_frame.f_lineno = 128;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooo";
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
tmp_dictset_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_dictset_value == NULL));
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_plain_authorization;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_5;
CHECK_OBJECT(par_proxy_basic_auth);
tmp_truth_name_5 = CHECK_IF_TRUE(par_proxy_basic_auth);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_called_value_5 = module_var_accessor_urllib3$util$request$b64encode(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_b64encode);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
CHECK_OBJECT(par_proxy_basic_auth);
tmp_expression_value_4 = par_proxy_basic_auth;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
frame_frame_urllib3$util$request$$$function__1_make_headers->m_frame.f_lineno = 133;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_62b7e67e29e99420603c12d205222fa5_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
frame_frame_urllib3$util$request$$$function__1_make_headers->m_frame.f_lineno = 133;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_decode);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
frame_frame_urllib3$util$request$$$function__1_make_headers->m_frame.f_lineno = 133;
tmp_format_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooo";
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
tmp_dictset_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_dictset_value == NULL));
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_6;
CHECK_OBJECT(par_disable_cache);
tmp_truth_name_6 = CHECK_IF_TRUE(par_disable_cache);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_dictset_value = mod_consts.const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
CHECK_OBJECT(var_headers);
tmp_dictset_dict = var_headers;
tmp_dictset_key = mod_consts.const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__1_make_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$request$$$function__1_make_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__1_make_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$request$$$function__1_make_headers,
    type_description_1,
    par_keep_alive,
    par_accept_encoding,
    par_user_agent,
    par_basic_auth,
    par_proxy_basic_auth,
    par_disable_cache,
    var_headers
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$request$$$function__1_make_headers == cache_frame_frame_urllib3$util$request$$$function__1_make_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$request$$$function__1_make_headers);
    cache_frame_frame_urllib3$util$request$$$function__1_make_headers = NULL;
}

assertFrameObject(frame_frame_urllib3$util$request$$$function__1_make_headers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_headers);
tmp_return_value = var_headers;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_accept_encoding);
CHECK_OBJECT(par_accept_encoding);
Py_DECREF(par_accept_encoding);
par_accept_encoding = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_accept_encoding);
CHECK_OBJECT(par_accept_encoding);
Py_DECREF(par_accept_encoding);
par_accept_encoding = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_keep_alive);
Py_DECREF(par_keep_alive);
CHECK_OBJECT(par_user_agent);
Py_DECREF(par_user_agent);
CHECK_OBJECT(par_basic_auth);
Py_DECREF(par_basic_auth);
CHECK_OBJECT(par_proxy_basic_auth);
Py_DECREF(par_proxy_basic_auth);
CHECK_OBJECT(par_disable_cache);
Py_DECREF(par_disable_cache);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_keep_alive);
Py_DECREF(par_keep_alive);
CHECK_OBJECT(par_user_agent);
Py_DECREF(par_user_agent);
CHECK_OBJECT(par_basic_auth);
Py_DECREF(par_basic_auth);
CHECK_OBJECT(par_proxy_basic_auth);
Py_DECREF(par_proxy_basic_auth);
CHECK_OBJECT(par_disable_cache);
Py_DECREF(par_disable_cache);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$request$$$function__2_set_file_position(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_body = python_pars[0];
PyObject *par_pos = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$request$$$function__2_set_file_position;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$request$$$function__2_set_file_position = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$request$$$function__2_set_file_position)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$request$$$function__2_set_file_position);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$request$$$function__2_set_file_position == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$request$$$function__2_set_file_position = MAKE_FUNCTION_FRAME(tstate, code_objects_dc65e6206f6ec3b4e914604305fd9489, module_urllib3$util$request, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$request$$$function__2_set_file_position->m_type_description == NULL);
frame_frame_urllib3$util$request$$$function__2_set_file_position = cache_frame_frame_urllib3$util$request$$$function__2_set_file_position;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$request$$$function__2_set_file_position);
assert(Py_REFCNT(frame_frame_urllib3$util$request$$$function__2_set_file_position) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_pos);
tmp_cmp_expr_left_1 = par_pos;
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
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_urllib3$util$request$rewind_body(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rewind_body);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_body);
tmp_args_element_value_1 = par_body;
CHECK_OBJECT(par_pos);
tmp_args_element_value_2 = par_pos;
frame_frame_urllib3$util$request$$$function__2_set_file_position->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_body);
tmp_expression_value_1 = par_body;
tmp_name_value_1 = mod_consts.const_str_plain_tell;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_left_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_body);
tmp_called_instance_1 = par_body;
frame_frame_urllib3$util$request$$$function__2_set_file_position->m_frame.f_lineno = 153;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tell);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oo";
    goto try_except_handler_2;
}
{
    PyObject *old = par_pos;
    assert(old != NULL);
    par_pos = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__2_set_file_position, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__2_set_file_position, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_urllib3$util$request$_FAILEDTELL(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FAILEDTELL);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "oo";
    goto try_except_handler_3;
}
{
    PyObject *old = par_pos;
    assert(old != NULL);
    par_pos = tmp_assign_source_2;
    Py_INCREF(par_pos);
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 152;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$request$$$function__2_set_file_position->m_frame)) {
        frame_frame_urllib3$util$request$$$function__2_set_file_position->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_end_3:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
branch_no_2:;
branch_end_1:;
if (par_pos == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pos);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_pos;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__2_set_file_position, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$request$$$function__2_set_file_position->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__2_set_file_position, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$request$$$function__2_set_file_position,
    type_description_1,
    par_body,
    par_pos
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$request$$$function__2_set_file_position == cache_frame_frame_urllib3$util$request$$$function__2_set_file_position) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$request$$$function__2_set_file_position);
    cache_frame_frame_urllib3$util$request$$$function__2_set_file_position = NULL;
}

assertFrameObject(frame_frame_urllib3$util$request$$$function__2_set_file_position);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_pos);
par_pos = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_pos);
par_pos = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_body);
Py_DECREF(par_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$request$$$function__3_rewind_body(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_body = python_pars[0];
PyObject *par_body_pos = python_pars[1];
PyObject *var_body_seek = NULL;
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$request$$$function__3_rewind_body;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$request$$$function__3_rewind_body = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$request$$$function__3_rewind_body)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$request$$$function__3_rewind_body);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$request$$$function__3_rewind_body == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$request$$$function__3_rewind_body = MAKE_FUNCTION_FRAME(tstate, code_objects_b63415866487381708d0db7bc71ac495, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$request$$$function__3_rewind_body->m_type_description == NULL);
frame_frame_urllib3$util$request$$$function__3_rewind_body = cache_frame_frame_urllib3$util$request$$$function__3_rewind_body;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$request$$$function__3_rewind_body);
assert(Py_REFCNT(frame_frame_urllib3$util$request$$$function__3_rewind_body) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_body);
tmp_expression_value_1 = par_body;
tmp_name_value_1 = mod_consts.const_str_plain_seek;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_body_seek;
    var_body_seek = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_body_seek);
tmp_cmp_expr_left_1 = var_body_seek;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_body_pos);
tmp_isinstance_inst_1 = par_body_pos;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooo";
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
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_body_seek);
tmp_called_value_1 = var_body_seek;
CHECK_OBJECT(par_body_pos);
tmp_args_element_value_1 = par_body_pos;
frame_frame_urllib3$util$request$$$function__3_rewind_body->m_frame.f_lineno = 176;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__3_rewind_body, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__3_rewind_body, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_2 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_2); 
{
    PyObject *old = var_e;
    var_e = tmp_assign_source_2;
    Py_INCREF(var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_urllib3$util$request$UnrewindableBodyError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnrewindableBodyError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_urllib3$util$request$$$function__3_rewind_body->m_frame.f_lineno = 178;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 180;
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

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 175;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$request$$$function__3_rewind_body->m_frame)) {
        frame_frame_urllib3$util$request$$$function__3_rewind_body->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_2:;
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
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_body_pos);
tmp_cmp_expr_left_3 = par_body_pos;
tmp_cmp_expr_right_3 = module_var_accessor_urllib3$util$request$_FAILEDTELL(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FAILEDTELL);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
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
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_urllib3$util$request$UnrewindableBodyError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UnrewindableBodyError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$request$$$function__3_rewind_body->m_frame.f_lineno = 182;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 182;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_99029b1aa48b0ecdc7a1a7724d57ae31;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_body_pos);
tmp_type_arg_1 = par_body_pos;
tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
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
frame_frame_urllib3$util$request$$$function__3_rewind_body->m_frame.f_lineno = 187;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 187;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__3_rewind_body, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$request$$$function__3_rewind_body->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__3_rewind_body, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$request$$$function__3_rewind_body,
    type_description_1,
    par_body,
    par_body_pos,
    var_body_seek,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$request$$$function__3_rewind_body == cache_frame_frame_urllib3$util$request$$$function__3_rewind_body) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$request$$$function__3_rewind_body);
    cache_frame_frame_urllib3$util$request$$$function__3_rewind_body = NULL;
}

assertFrameObject(frame_frame_urllib3$util$request$$$function__3_rewind_body);

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
CHECK_OBJECT(var_body_seek);
CHECK_OBJECT(var_body_seek);
Py_DECREF(var_body_seek);
var_body_seek = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_body_seek);
var_body_seek = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_body_pos);
Py_DECREF(par_body_pos);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_body_pos);
Py_DECREF(par_body_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$request$$$function__4_body_to_chunks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_body = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_method = python_pars[1];
struct Nuitka_CellObject *par_blocksize = Nuitka_Cell_New1(python_pars[2]);
PyObject *var_chunks = NULL;
PyObject *var_content_length = NULL;
PyObject *var_chunk_readable = NULL;
PyObject *var_mv = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_urllib3$util$request$$$function__4_body_to_chunks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks = MAKE_FUNCTION_FRAME(tstate, code_objects_0e28f49826f7d69f18e8217421749017, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_type_description == NULL);
frame_frame_urllib3$util$request$$$function__4_body_to_chunks = cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$request$$$function__4_body_to_chunks);
assert(Py_REFCNT(frame_frame_urllib3$util$request$$$function__4_body_to_chunks) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_body);
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
    PyObject *old = var_chunks;
    var_chunks = tmp_assign_source_1;
    Py_INCREF(var_chunks);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_method);
tmp_expression_value_1 = par_method;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_upper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = 217;
tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_urllib3$util$request$_METHODS_NOT_EXPECTING_BODY(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 217;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "cocoooo";
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
tmp_assign_source_2 = const_int_0;
{
    PyObject *old = var_content_length;
    var_content_length = tmp_assign_source_2;
    Py_INCREF(var_content_length);
    Py_XDECREF(old);
}

}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
{
    PyObject *old = var_content_length;
    var_content_length = tmp_assign_source_3;
    Py_INCREF(var_content_length);
    Py_XDECREF(old);
}

}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_body);
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "cocoooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_urllib3$util$request$to_bytes(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_bytes);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_body);
frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = 224;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_4, 0, tmp_tuple_element_1);
{
    PyObject *old = var_chunks;
    var_chunks = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_chunks);
tmp_expression_value_2 = var_chunks;
tmp_subscript_value_1 = const_int_0;
tmp_len_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_content_length;
    var_content_length = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_expression_value_3 = Nuitka_Cell_GET(par_body);
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, const_str_plain_read);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_cc7a7ac2ab875f15e1f45fa874c8b966);
tmp_closure_1[0] = par_blocksize;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_body;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_6 = MAKE_FUNCTION_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable(tstate, tmp_annotations_1, tmp_closure_1);

{
    PyObject *old = var_chunk_readable;
    var_chunk_readable = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_chunk_readable);
tmp_called_value_3 = var_chunk_readable;
frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = 240;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_chunks;
    var_chunks = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_None;
{
    PyObject *old = var_content_length;
    var_content_length = tmp_assign_source_8;
    Py_INCREF(var_content_length);
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = (PyObject *)&PyMemoryView_Type;
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_args_element_value_2 = Nuitka_Cell_GET(par_body);
frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = 247;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "cocoooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_mv;
    var_mv = tmp_assign_source_10;
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

{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_11;
}
// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__4_body_to_chunks, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__4_body_to_chunks, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_iter_arg_1 = Nuitka_Cell_GET(par_body);
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "cocoooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_chunks;
    var_chunks = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__4_body_to_chunks, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__4_body_to_chunks, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_2 = mod_consts.const_str_digest_3a3d1e16cfa4ff5942ebbabd0008bb59;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_operand_value_1 = Nuitka_Cell_GET(par_body);
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "cocoooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "cocoooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = 254;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 257;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "cocoooo";
goto try_except_handler_5;
}
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 249;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame)) {
        frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "cocoooo";
goto try_except_handler_5;
branch_end_6:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_None;
{
    PyObject *old = var_content_length;
    var_content_length = tmp_assign_source_13;
    Py_INCREF(var_content_length);
    Py_XDECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 245;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame)) {
        frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "cocoooo";
goto try_except_handler_3;
branch_end_5:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
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
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_body));
tmp_tuple_element_3 = Nuitka_Cell_GET(par_body);
tmp_assign_source_14 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_3);
{
    PyObject *old = var_chunks;
    var_chunks = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_4;
if (var_mv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_mv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 261;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = var_mv;
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_nbytes);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_content_length;
    var_content_length = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
branch_no_7:;
branch_end_4:;
branch_end_3:;
branch_end_1:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_5 = module_var_accessor_urllib3$util$request$ChunksAndContentLength(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ChunksAndContentLength);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}
if (var_chunks == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunks);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_0_1 = var_chunks;
if (var_content_length == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_content_length);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 263;
type_description_1 = "cocoooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_value_1_1 = var_content_length;
frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame.f_lineno = 263;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_chunks_str_plain_content_length_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "cocoooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$function__4_body_to_chunks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$request$$$function__4_body_to_chunks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$function__4_body_to_chunks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$request$$$function__4_body_to_chunks,
    type_description_1,
    par_body,
    par_method,
    par_blocksize,
    var_chunks,
    var_content_length,
    var_chunk_readable,
    var_mv
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$request$$$function__4_body_to_chunks == cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks);
    cache_frame_frame_urllib3$util$request$$$function__4_body_to_chunks = NULL;
}

assertFrameObject(frame_frame_urllib3$util$request$$$function__4_body_to_chunks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_body);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
par_body = NULL;
CHECK_OBJECT(par_blocksize);
CHECK_OBJECT(par_blocksize);
Py_DECREF(par_blocksize);
par_blocksize = NULL;
Py_XDECREF(var_chunks);
var_chunks = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
Py_XDECREF(var_chunk_readable);
var_chunk_readable = NULL;
Py_XDECREF(var_mv);
var_mv = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_body);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
par_body = NULL;
CHECK_OBJECT(par_blocksize);
CHECK_OBJECT(par_blocksize);
Py_DECREF(par_blocksize);
par_blocksize = NULL;
Py_XDECREF(var_chunks);
var_chunks = NULL;
Py_XDECREF(var_content_length);
var_content_length = NULL;
Py_XDECREF(var_chunk_readable);
var_chunk_readable = NULL;
Py_XDECREF(var_mv);
var_mv = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_method);
Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable(tstate, tmp_closure_1);

goto function_return_exit;
}

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
struct urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable_locals {
PyObject *var_encode;
PyObject *var_datablock;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable_locals *generator_heap = (struct urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_encode = NULL;
generator_heap->var_datablock = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e98f8d2fd379096190bc9cc382c2760a, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_body);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 231;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_isinstance_inst_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_expression_value_1 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_1 == NULL));
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TextIOBase);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 231;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 231;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
{
    PyObject *old = generator_heap->var_encode;
    generator_heap->var_encode = tmp_assign_source_1;
    Py_INCREF(generator_heap->var_encode);
    Py_XDECREF(old);
}

}
loop_start_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_body);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 233;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_read);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 233;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_blocksize);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 233;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 233;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 233;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_datablock;
    generator_heap->var_datablock = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(generator_heap->var_datablock);
tmp_operand_value_1 = generator_heap->var_datablock;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 234;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_encode);
tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_encode);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 236;
generator_heap->type_description_1 = "oocc";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(generator_heap->var_datablock);
tmp_expression_value_3 = generator_heap->var_datablock;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_encode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 237;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 237;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 237;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_datablock;
    assert(old != NULL);
    generator_heap->var_datablock = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_datablock);
tmp_expression_value_4 = generator_heap->var_datablock;
Py_INCREF(tmp_expression_value_4);
generator->m_yield_return_index = 1;
return tmp_expression_value_4;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 238;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 232;
generator_heap->type_description_1 = "oocc";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

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
    generator_heap->var_encode,
    generator_heap->var_datablock,
    generator->m_closure[1],
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
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_encode);
generator_heap->var_encode = NULL;
Py_XDECREF(generator_heap->var_datablock);
generator_heap->var_datablock = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:
try_end_1:;
CHECK_OBJECT(generator_heap->var_encode);
CHECK_OBJECT(generator_heap->var_encode);
Py_DECREF(generator_heap->var_encode);
generator_heap->var_encode = NULL;
CHECK_OBJECT(generator_heap->var_datablock);
CHECK_OBJECT(generator_heap->var_datablock);
Py_DECREF(generator_heap->var_datablock);
generator_heap->var_datablock = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable_context,
        module_urllib3$util$request,
        mod_consts.const_str_plain_chunk_readable,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c,
#endif
        code_objects_e98f8d2fd379096190bc9cc382c2760a,
        closure,
        2,
#if 1
        sizeof(struct urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable$$$genobj__1_chunk_readable_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__1_make_headers(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function__1_make_headers,
        mod_consts.const_str_plain_make_headers,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_39a6f86b32952119e34da8a86204b322,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$request,
        mod_consts.const_str_digest_616731625fe1000262d2a009f4d197d4,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__2_set_file_position(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function__2_set_file_position,
        mod_consts.const_str_plain_set_file_position,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dc65e6206f6ec3b4e914604305fd9489,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$request,
        mod_consts.const_str_digest_1ba972909c388f467bdb1737eff7bf8a,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__3_rewind_body(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function__3_rewind_body,
        mod_consts.const_str_plain_rewind_body,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b63415866487381708d0db7bc71ac495,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$request,
        mod_consts.const_str_digest_6e3d9c0f28c6b1d3a34d0fa8115c7afd,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__4_body_to_chunks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function__4_body_to_chunks,
        mod_consts.const_str_plain_body_to_chunks,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0e28f49826f7d69f18e8217421749017,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$request,
        mod_consts.const_str_digest_1069c53476741eb25a3f2e6a82a7bd68,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable,
        mod_consts.const_str_plain_chunk_readable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ec0ba8bd146c88b0a2256bfb6559858c,
#endif
        code_objects_e98f8d2fd379096190bc9cc382c2760a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$request,
        NULL,
        closure,
        2
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

static function_impl_code const function_table_urllib3$util$request[] = {
impl_urllib3$util$request$$$function__4_body_to_chunks$$$function__1_chunk_readable,
impl_urllib3$util$request$$$function__1_make_headers,
impl_urllib3$util$request$$$function__2_set_file_position,
impl_urllib3$util$request$$$function__3_rewind_body,
impl_urllib3$util$request$$$function__4_body_to_chunks,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$request);
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
        module_urllib3$util$request,
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
        function_table_urllib3$util$request,
        sizeof(function_table_urllib3$util$request) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.request";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$request(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$request");

    // Store the module for future use.
    module_urllib3$util$request = module;

    moduledict_urllib3$util$request = MODULE_DICT(module_urllib3$util$request);

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
        PRINT_STRING("urllib3$util$request: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$request: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$request: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.request" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$request\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$request,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$request,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$request,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$request);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$request);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
nuitka_bool tmp_try_except_2__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_urllib3$util$request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_inplace_orig;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$request = MAKE_MODULE_FRAME(code_objects_eddc01b082794380212e0be845d0ce8b, module_urllib3$util$request);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$request);
assert(Py_REFCNT(frame_frame_urllib3$util$request) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$request$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$request$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_base64;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$request;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_b64encode_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$request->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
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
        (PyObject *)moduledict_urllib3$util$request,
        mod_consts.const_str_plain_b64encode,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_b64encode);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_b64encode, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$request;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Enum_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$util$request->m_frame.f_lineno = 7;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
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
        (PyObject *)moduledict_urllib3$util$request,
        mod_consts.const_str_plain_Enum,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Enum);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$request;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_UnrewindableBodyError_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$request->m_frame.f_lineno = 9;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$util$request,
        mod_consts.const_str_plain_UnrewindableBodyError,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_UnrewindableBodyError);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_UnrewindableBodyError, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_util;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$util$request;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_to_bytes_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_urllib3$util$request->m_frame.f_lineno = 10;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$util$request,
        mod_consts.const_str_plain_to_bytes,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_to_bytes);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_to_bytes, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = mod_consts.const_str_digest_6e0a1f5e895c96ed854521766adf079e;
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_SKIP_HEADER, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_frozenset_2f762af9a4d1c2985259def659555547;
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_SKIPPABLE_HEADERS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = mod_consts.const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_ENCODING, tmp_assign_source_16);
}
{
nuitka_bool tmp_assign_source_17;
tmp_assign_source_17 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_17;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_brotlicffi;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3$util$request;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_urllib3$util$request->m_frame.f_lineno = 25;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__unused_module_brotli, tmp_assign_source_18);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request, exception_keeper_lineno_1);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_brotli;
tmp_globals_arg_value_6 = (PyObject *)moduledict_urllib3$util$request;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = Py_None;
tmp_level_value_6 = const_int_0;
frame_frame_urllib3$util$request->m_frame.f_lineno = 27;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__unused_module_brotli, tmp_assign_source_19);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 24;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$request->m_frame)) {
        frame_frame_urllib3$util$request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_3;
branch_end_1:;
goto try_end_2;
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

goto try_except_handler_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_20;
}
// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request, exception_keeper_lineno_3);
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
tmp_cmp_expr_right_2 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
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
    exception_lineno = 23;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$request->m_frame)) {
        frame_frame_urllib3$util$request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_4;
branch_no_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
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
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_try_except_1__unhandled_indicator;
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
PyObject *tmp_assign_source_21;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
tmp_iadd_expr_left_1 = module_var_accessor_urllib3$util$request$ACCEPT_ENCODING(tstate);
assert(!(tmp_iadd_expr_left_1 == NULL));
tmp_iadd_expr_right_1 = mod_consts.const_str_digest_d2b904b25d381938ff5e527197f159f9;
tmp_inplace_orig = tmp_iadd_expr_left_1;
tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_21 = tmp_iadd_expr_left_1;
if (tmp_inplace_orig != tmp_assign_source_21) {
    UPDATE_STRING_DICT_INPLACE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_ENCODING, tmp_assign_source_21);
}
}
branch_no_3:;
{
nuitka_bool tmp_assign_source_22;
tmp_assign_source_22 = NUITKA_BOOL_TRUE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_compression;
tmp_globals_arg_value_7 = (PyObject *)moduledict_urllib3$util$request;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_zstd_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_urllib3$util$request->m_frame.f_lineno = 35;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_urllib3$util$request,
        mod_consts.const_str_plain_zstd,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_zstd);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__unused_module_zstd, tmp_assign_source_23);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_24;
tmp_assign_source_24 = NUITKA_BOOL_FALSE;
tmp_try_except_2__unhandled_indicator = tmp_assign_source_24;
}
// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_ImportError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
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
    exception_lineno = 33;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$request->m_frame)) {
        frame_frame_urllib3$util$request->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_6;
branch_no_4:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(tmp_try_except_2__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = tmp_try_except_2__unhandled_indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
tmp_iadd_expr_left_2 = module_var_accessor_urllib3$util$request$ACCEPT_ENCODING(tstate);
if (unlikely(tmp_iadd_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ACCEPT_ENCODING);
}

if (tmp_iadd_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_2 = mod_consts.const_str_digest_0ddfa5c6f280b29305115c9efd97c916;
tmp_inplace_orig = tmp_iadd_expr_left_2;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_assign_source_25 = tmp_iadd_expr_left_2;
if (tmp_inplace_orig != tmp_assign_source_25) {
    UPDATE_STRING_DICT_INPLACE(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ACCEPT_ENCODING, tmp_assign_source_25);
}
}
branch_no_5:;
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_urllib3$util$request$Enum(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Enum);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_assign_source_26 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_27 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_6;
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


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
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


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_29;
}
{
bool tmp_condition_result_7;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_condition_result_7 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__TYPE_FAILEDTELL;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_urllib3$util$request->m_frame.f_lineno = 44;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_30;
}
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_7;
}
frame_frame_urllib3$util$request->m_frame.f_lineno = 44;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_31;
}
branch_end_6:;
{
PyObject *tmp_assign_source_32;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain__TYPE_FAILEDTELL;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_44;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_9;
}
frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2 = MAKE_CLASS_FRAME(tstate, code_objects_f78fafeed571b26c1417a3bd342d6c24, module_urllib3$util$request, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2, locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2);
assert(Py_REFCNT(frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2) == 2);

// Framed code:
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44, mod_consts.const_str_plain_token, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2);


goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_2);


// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_9;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_9;
}
branch_no_8:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_2;
PyObject *tmp_name_value_9;
PyObject *tmp_bases_value_2;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_metaclass_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = mod_consts.const_str_plain__TYPE_FAILEDTELL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_1__bases;
tmp_dict_arg_value_1 = locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_9, tmp_bases_value_2, tmp_dict_arg_value_1);
tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_metaclass_value_2, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_9;
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
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44);
locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44);
locals_urllib3$util$request$$$class__1__TYPE_FAILEDTELL_44 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 44;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_FAILEDTELL, tmp_assign_source_32);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_urllib3$util$request$_TYPE_FAILEDTELL(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TYPE_FAILEDTELL);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_token);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__FAILEDTELL, tmp_assign_source_34);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_cd039ffa2e8775488182d10bdf28c8ca;
tmp_ass_subscribed_1 = module_var_accessor_urllib3$util$request$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__FAILEDTELL;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_4;
tmp_expression_value_9 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Union);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_urllib3$util$request$_TYPE_FAILEDTELL(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__TYPE_FAILEDTELL);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_8);
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_BODY_POSITION, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = PySet_New(mod_consts.const_set_6e84ea2b51a066a323b1aa44deff13c7);
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain__METHODS_NOT_EXPECTING_BODY, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_none_none_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_74bda88e3cf67fef532bd16a6c00a4b3);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_37 = MAKE_FUNCTION_urllib3$util$request$$$function__1_make_headers(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_make_headers, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_aa3507485561122a053b5c78c37c67e5);

tmp_assign_source_38 = MAKE_FUNCTION_urllib3$util$request$$$function__2_set_file_position(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_set_file_position, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_eb93e25ee332631738b3a91784fbff1d);

tmp_assign_source_39 = MAKE_FUNCTION_urllib3$util$request$$$function__3_rewind_body(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_rewind_body, tmp_assign_source_39);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_40;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_NamedTuple);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
tmp_assign_source_40 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_41 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_11 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_43 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_43;
}
{
bool tmp_condition_result_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_ChunksAndContentLength;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_urllib3$util$request->m_frame.f_lineno = 192;
tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_44;
}
{
bool tmp_condition_result_12;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_14 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_12 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_10;
}
frame_frame_urllib3$util$request->m_frame.f_lineno = 192;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 192;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_45;
}
branch_end_9:;
{
PyObject *tmp_assign_source_46;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a11559a1f0b9dc4b626402a68b9ebc45;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_ChunksAndContentLength;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_192;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3 = MAKE_CLASS_FRAME(tstate, code_objects_b97b66d6bae267fab626c65df9f8d19d, module_urllib3$util$request, NULL, sizeof(void *));
Nuitka_Frame_AssignLocals(frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3, locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192);


// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3);
assert(Py_REFCNT(frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_349022cf05233ef7696711d77759649d;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_chunks;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_d07907e58b350811dd59b47ecbca299a;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_content_length;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3);


goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3);

// Put the previous frame back on top.
popFrameStack(tstate);
Nuitka_Frame_ClearLocals(frame_frame_urllib3$util$request$$$class__2_ChunksAndContentLength_3);


// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
branch_no_11:;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_4;
PyObject *tmp_name_value_11;
PyObject *tmp_bases_value_4;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_class_decl_dict_value_2;
PyObject *tmp_metaclass_args_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_metaclass_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = mod_consts.const_str_plain_ChunksAndContentLength;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_2__bases;
tmp_dict_arg_value_2 = locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_decl_dict_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
tmp_metaclass_args_2 = MAKE_TUPLE3(tstate, tmp_name_value_11, tmp_bases_value_4, tmp_dict_arg_value_2);
tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_metaclass_value_4, tmp_metaclass_args_2, tmp_class_decl_dict_value_2);
CHECK_OBJECT(tmp_metaclass_args_2);
Py_DECREF(tmp_metaclass_args_2);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto try_except_handler_12;
}
{
    PyObject *old = outline_1_var___class__;
    outline_1_var___class__ = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_46 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_46);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192);
locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192);
locals_urllib3$util$request$$$class__2_ChunksAndContentLength_192 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 192;
goto try_except_handler_10;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_ChunksAndContentLength, tmp_assign_source_46);
}
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_ec24df182c0120deeb2af7d5716c20ae);

tmp_assign_source_48 = MAKE_FUNCTION_urllib3$util$request$$$function__4_body_to_chunks(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)mod_consts.const_str_plain_body_to_chunks, tmp_assign_source_48);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$request", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.request" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$request);
    return module_urllib3$util$request;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$request", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
