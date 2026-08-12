/* Generated code for Python module 'urllib3$_request_methods'
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



/* The "module_urllib3$_request_methods" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$_request_methods;
PyDictObject *moduledict_urllib3$_request_methods;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_headers;
PyObject *const_str_digest_222b7096876e0f27e78980578536ebfb;
PyObject *const_str_plain_upper;
PyObject *const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c;
PyObject *const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8;
PyObject *const_str_plain_HTTPHeaderDict;
PyObject *const_str_digest_1781891970018ef9597f363946d7327b;
PyObject *const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
PyObject *const_str_plain__json;
PyObject *const_str_plain_dumps;
PyObject *const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple;
PyObject *const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_body;
PyObject *const_str_plain__encode_url_methods;
PyObject *const_str_plain_request_encode_url;
PyObject *const_str_plain_fields;
PyObject *const_str_plain_request_encode_body;
PyObject *const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c;
PyObject *const_str_chr_63;
PyObject *const_str_plain_urlencode;
PyObject *const_str_plain_urlopen;
PyObject *const_str_digest_a3d787e47b70b887b7abc9ec9b82af62;
PyObject *const_str_digest_0597c9bfd7bacd5702e520c55a306385;
PyObject *const_str_plain_encode_multipart_formdata;
PyObject *const_tuple_str_plain_boundary_tuple;
PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
PyObject *const_str_plain_setdefault;
PyObject *const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_json;
PyObject *const_str_plain_typing;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_urlencode_tuple;
PyObject *const_str_plain__base_connection;
PyObject *const_tuple_str_plain__TYPE_BODY_tuple;
PyObject *const_str_plain__TYPE_BODY;
PyObject *const_str_plain__collections;
PyObject *const_tuple_str_plain_HTTPHeaderDict_tuple;
PyObject *const_str_plain_filepost;
PyObject *const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple;
PyObject *const_str_plain__TYPE_FIELDS;
PyObject *const_str_plain_response;
PyObject *const_tuple_str_plain_BaseHTTPResponse_tuple;
PyObject *const_str_plain_BaseHTTPResponse;
PyObject *const_str_plain_RequestMethods;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Sequence;
PyObject *const_tuple_type_str_type_bytes_tuple;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain__TYPE_ENCODE_URL_FIELDS;
PyObject *const_str_digest_4905c72db7f39559c5e8037032e9f314;
PyObject *const_str_digest_c4db8f6929f2d816c3271bac693011c5;
PyObject *const_int_pos_20;
PyObject *const_str_plain___firstlineno__;
PyObject *const_set_a4cc1767adfad18a9f0ec83b36e82de0;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_30ee49aca76b25f47ba04345cca1ade3;
PyObject *const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18;
PyObject *const_tuple_none_none_true_none_tuple;
PyObject *const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd;
PyObject *const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c;
PyObject *const_tuple_none_none_none_none_tuple;
PyObject *const_dict_abd34222a651140617252cd07a120475;
PyObject *const_str_plain_request;
PyObject *const_str_digest_7d13004a6b21c498177feb48163642d9;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2;
PyObject *const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d;
PyObject *const_dict_951990ceff20e8dd54681c2c391eee07;
PyObject *const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9;
PyObject *const_tuple_str_plain_headers_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_20cb938d3ed200cbf835b38163315979;
PyObject *const_str_digest_0700087fb24945707c3db81869ebb62f;
PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
PyObject *const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple;
PyObject *const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple;
PyObject *const_tuple_75b174c31704c607c9d508ab21bcd950_tuple;
PyObject *const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[83];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3._request_methods"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 83) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 83 values, got %d\n",
                    UN_TRANSLATE("urllib3._request_methods"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb", mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c", mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8", mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1781891970018ef9597f363946d7327b", mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3", mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__json", mod_consts.const_str_plain__json);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__json);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dumps", mod_consts.const_str_plain_dumps);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple", mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple", mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_body);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encode_url_methods", mod_consts.const_str_plain__encode_url_methods);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__encode_url_methods);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_encode_url", mod_consts.const_str_plain_request_encode_url);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_encode_url);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fields", mod_consts.const_str_plain_fields);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_fields);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_encode_body", mod_consts.const_str_plain_request_encode_body);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_encode_body);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c", mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_63", mod_consts.const_str_chr_63);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_chr_63);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlencode", mod_consts.const_str_plain_urlencode);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlopen", mod_consts.const_str_plain_urlopen);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62", mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385", mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode_multipart_formdata", mod_consts.const_str_plain_encode_multipart_formdata);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode_multipart_formdata);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_boundary_tuple", mod_consts.const_tuple_str_plain_boundary_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_boundary_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394", mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setdefault", mod_consts.const_str_plain_setdefault);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe", mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f", mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_urlencode_tuple", mod_consts.const_tuple_str_plain_urlencode_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlencode_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base_connection", mod_consts.const_str_plain__base_connection);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_connection);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_BODY_tuple", mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY", mod_consts.const_str_plain__TYPE_BODY);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__collections);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filepost", mod_consts.const_str_plain_filepost);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_filepost);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple", mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_FIELDS", mod_consts.const_str_plain__TYPE_FIELDS);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_FIELDS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_response);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestMethods", mod_consts.const_str_plain_RequestMethods);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestMethods);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Sequence", mod_consts.const_str_plain_Sequence);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_type_bytes_tuple", mod_consts.const_tuple_type_str_type_bytes_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Mapping", mod_consts.const_str_plain_Mapping);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS", mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314", mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5", mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_20);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0", mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3", mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18", mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_true_none_tuple", mod_consts.const_tuple_none_none_true_none_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd", mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c", mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_abd34222a651140617252cd07a120475", mod_consts.const_dict_abd34222a651140617252cd07a120475);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_abd34222a651140617252cd07a120475);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_request);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9", mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2", mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d", mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07", mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9", mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_headers_tuple", mod_consts.const_tuple_str_plain_headers_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979", mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f", mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple", mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple", mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple", mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple", mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple", mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple);
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
void checkModuleConstants_urllib3$_request_methods(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_headers", mod_consts.const_str_plain_headers);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers) && "mod_consts.const_str_plain_headers");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb", mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb) && "mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c", mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c) && "mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8", mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8) && "mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPHeaderDict", mod_consts.const_str_plain_HTTPHeaderDict);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPHeaderDict) && "mod_consts.const_str_plain_HTTPHeaderDict");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1781891970018ef9597f363946d7327b", mod_consts.const_str_digest_1781891970018ef9597f363946d7327b);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_1781891970018ef9597f363946d7327b) && "mod_consts.const_str_digest_1781891970018ef9597f363946d7327b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3", mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3) && "mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__json", mod_consts.const_str_plain__json);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__json) && "mod_consts.const_str_plain__json");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_dumps", mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps) && "mod_consts.const_str_plain_dumps");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple", mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple) && "mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple", mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple) && "mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode", mod_consts.const_str_plain_encode);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode) && "mod_consts.const_str_plain_encode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple", mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple) && "mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_body", mod_consts.const_str_plain_body);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_body) && "mod_consts.const_str_plain_body");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__encode_url_methods", mod_consts.const_str_plain__encode_url_methods);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__encode_url_methods) && "mod_consts.const_str_plain__encode_url_methods");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_encode_url", mod_consts.const_str_plain_request_encode_url);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_encode_url) && "mod_consts.const_str_plain_request_encode_url");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fields", mod_consts.const_str_plain_fields);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_fields) && "mod_consts.const_str_plain_fields");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request_encode_body", mod_consts.const_str_plain_request_encode_body);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_encode_body) && "mod_consts.const_str_plain_request_encode_body");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c", mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c) && "mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_chr_63", mod_consts.const_str_chr_63);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_chr_63) && "mod_consts.const_str_chr_63");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlencode", mod_consts.const_str_plain_urlencode);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlencode) && "mod_consts.const_str_plain_urlencode");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_urlopen", mod_consts.const_str_plain_urlopen);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlopen) && "mod_consts.const_str_plain_urlopen");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62", mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62) && "mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385", mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385) && "mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_encode_multipart_formdata", mod_consts.const_str_plain_encode_multipart_formdata);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode_multipart_formdata) && "mod_consts.const_str_plain_encode_multipart_formdata");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_boundary_tuple", mod_consts.const_tuple_str_plain_boundary_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_boundary_tuple) && "mod_consts.const_tuple_str_plain_boundary_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394", mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394) && "mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_setdefault", mod_consts.const_str_plain_setdefault);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault) && "mod_consts.const_str_plain_setdefault");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe", mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe) && "mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_json", mod_consts.const_str_plain_json);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_json) && "mod_consts.const_str_plain_json");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_typing", mod_consts.const_str_plain_typing);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing) && "mod_consts.const_str_plain_typing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f", mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f) && "mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_urlencode_tuple", mod_consts.const_tuple_str_plain_urlencode_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_urlencode_tuple) && "mod_consts.const_tuple_str_plain_urlencode_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__base_connection", mod_consts.const_str_plain__base_connection);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_connection) && "mod_consts.const_str_plain__base_connection");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_BODY_tuple", mod_consts.const_tuple_str_plain__TYPE_BODY_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_BODY_tuple) && "mod_consts.const_tuple_str_plain__TYPE_BODY_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_BODY", mod_consts.const_str_plain__TYPE_BODY);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_BODY) && "mod_consts.const_str_plain__TYPE_BODY");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__collections", mod_consts.const_str_plain__collections);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__collections) && "mod_consts.const_str_plain__collections");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple", mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple) && "mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_filepost", mod_consts.const_str_plain_filepost);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_filepost) && "mod_consts.const_str_plain_filepost");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple", mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple) && "mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_FIELDS", mod_consts.const_str_plain__TYPE_FIELDS);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_FIELDS) && "mod_consts.const_str_plain__TYPE_FIELDS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_response", mod_consts.const_str_plain_response);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_response) && "mod_consts.const_str_plain_response");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple", mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple) && "mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_BaseHTTPResponse", mod_consts.const_str_plain_BaseHTTPResponse);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseHTTPResponse) && "mod_consts.const_str_plain_BaseHTTPResponse");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_RequestMethods", mod_consts.const_str_plain_RequestMethods);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestMethods) && "mod_consts.const_str_plain_RequestMethods");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Union", mod_consts.const_str_plain_Union);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union) && "mod_consts.const_str_plain_Union");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Sequence", mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence) && "mod_consts.const_str_plain_Sequence");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_str_type_bytes_tuple", mod_consts.const_tuple_type_str_type_bytes_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple) && "mod_consts.const_tuple_type_str_type_bytes_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_Mapping", mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping) && "mod_consts.const_str_plain_Mapping");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS", mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS) && "mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314", mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314) && "mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5", mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5) && "mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_20", mod_consts.const_int_pos_20);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_20) && "mod_consts.const_int_pos_20");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___firstlineno__", mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__) && "mod_consts.const_str_plain___firstlineno__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0", mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0) && "mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3", mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3) && "mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18", mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18) && "mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_true_none_tuple", mod_consts.const_tuple_none_none_true_none_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_none_tuple) && "mod_consts.const_tuple_none_none_true_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd", mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd) && "mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c", mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c) && "mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_none_none_tuple", mod_consts.const_tuple_none_none_none_none_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_tuple) && "mod_consts.const_tuple_none_none_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_abd34222a651140617252cd07a120475", mod_consts.const_dict_abd34222a651140617252cd07a120475);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_abd34222a651140617252cd07a120475) && "mod_consts.const_dict_abd34222a651140617252cd07a120475");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_request", mod_consts.const_str_plain_request);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_request) && "mod_consts.const_str_plain_request");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9", mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9) && "mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_none_tuple", mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple) && "mod_consts.const_tuple_none_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2", mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2) && "mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d", mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d) && "mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07", mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07) && "mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9", mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9) && "mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_headers_tuple", mod_consts.const_tuple_str_plain_headers_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_headers_tuple) && "mod_consts.const_tuple_str_plain_headers_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain___static_attributes__", mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__) && "mod_consts.const_str_plain___static_attributes__");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979", mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979) && "mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f", mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f) && "mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple", mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple) && "mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple", mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple) && "mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple", mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple) && "mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple", mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple) && "mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple", mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple) && "mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_urllib3$_request_methods$HTTPHeaderDict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$_request_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$_request_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$_request_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPHeaderDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPHeaderDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HTTPHeaderDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HTTPHeaderDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$_request_methods$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$_request_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$_request_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$_request_methods->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$_request_methods$_json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$_request_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$_request_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$_request_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__json);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$_request_methods$encode_multipart_formdata(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$_request_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$_request_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_formdata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$_request_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_multipart_formdata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_multipart_formdata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_encode_multipart_formdata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_encode_multipart_formdata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_formdata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_formdata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_formdata);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$_request_methods$urlencode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$_request_methods->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$_request_methods->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$_request_methods->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlencode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlencode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_urlencode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_urlencode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dd96de41e35bce9fee3f78e71a68395d;
static PyCodeObject *code_objects_66b4c425eadc105b9d1ce3d5230d003d;
static PyCodeObject *code_objects_f6e8fa5ed138b50ed40cf4b91d63f0a8;
static PyCodeObject *code_objects_a9be0be1ce5fd8c75bca40a6c16d0d9e;
static PyCodeObject *code_objects_e187f06273aaae5bb69af1ea3046ba1e;
static PyCodeObject *code_objects_c6596fac6d132be8d8c237e752c6b16f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_20cb938d3ed200cbf835b38163315979); CHECK_OBJECT(module_filename_obj);
code_objects_dd96de41e35bce9fee3f78e71a68395d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f, mod_consts.const_str_digest_0700087fb24945707c3db81869ebb62f, NULL, NULL, 0, 0, 0);
code_objects_66b4c425eadc105b9d1ce3d5230d003d = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18, mod_consts.const_tuple_str_plain_self_str_plain_headers_tuple, NULL, 2, 0, 0);
code_objects_f6e8fa5ed138b50ed40cf4b91d63f0a8 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request, mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9, mod_consts.const_tuple_2e8f116bebac1f454a6027597ce217dd_tuple, NULL, 7, 0, 0);
code_objects_a9be0be1ce5fd8c75bca40a6c16d0d9e = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request_encode_body, mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9, mod_consts.const_tuple_5ed19864050f8ad121bb9c822bc99078_tuple, NULL, 7, 0, 0);
code_objects_e187f06273aaae5bb69af1ea3046ba1e = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_request_encode_url, mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d, mod_consts.const_tuple_75b174c31704c607c9d508ab21bcd950_tuple, NULL, 5, 0, 0);
code_objects_c6596fac6d132be8d8c237e752c6b16f = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_urlopen, mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c, mod_consts.const_tuple_1f290b877739a4d1ff5aa3964983cc88_tuple, NULL, 7, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__2_urlopen(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__3_request(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__4_request_encode_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__5_request_encode_body(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$_request_methods$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$_request_methods$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$_request_methods$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$_request_methods$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_urllib3$_request_methods$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$_request_methods$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$_request_methods$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_66b4c425eadc105b9d1ce3d5230d003d, module_urllib3$_request_methods, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$_request_methods$$$function__1___init__->m_type_description == NULL);
frame_frame_urllib3$_request_methods$$$function__1___init__ = cache_frame_frame_urllib3$_request_methods$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$_request_methods$$$function__1___init__);
assert(Py_REFCNT(frame_frame_urllib3$_request_methods$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_ass_attr_target_1;
CHECK_OBJECT(par_headers);
tmp_or_left_value_1 = par_headers;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_ass_attr_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_ass_attr_value_1 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_ass_attr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_ass_attr_target_1, mod_consts.const_str_plain_headers, tmp_ass_attr_value_1);
CHECK_OBJECT(tmp_ass_attr_value_1);
Py_DECREF(tmp_ass_attr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$_request_methods$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$_request_methods$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$_request_methods$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$_request_methods$$$function__1___init__,
    type_description_1,
    par_self,
    par_headers
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$_request_methods$$$function__1___init__ == cache_frame_frame_urllib3$_request_methods$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$_request_methods$$$function__1___init__);
    cache_frame_frame_urllib3$_request_methods$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_urllib3$_request_methods$$$function__1___init__);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$_request_methods$$$function__2_urlopen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_body = python_pars[3];
PyObject *par_headers = python_pars[4];
PyObject *par_encode_multipart = python_pars[5];
PyObject *par_multipart_boundary = python_pars[6];
PyObject *par_kw = python_pars[7];
struct Nuitka_FrameObject *frame_frame_urllib3$_request_methods$$$function__2_urlopen;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen)) {
    Py_XDECREF(cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen = MAKE_FUNCTION_FRAME(tstate, code_objects_c6596fac6d132be8d8c237e752c6b16f, module_urllib3$_request_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen->m_type_description == NULL);
frame_frame_urllib3$_request_methods$$$function__2_urlopen = cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$_request_methods$$$function__2_urlopen);
assert(Py_REFCNT(frame_frame_urllib3$_request_methods$$$function__2_urlopen) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_222b7096876e0f27e78980578536ebfb;
frame_frame_urllib3$_request_methods$$$function__2_urlopen->m_frame.f_lineno = 64;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$_request_methods$$$function__2_urlopen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$_request_methods$$$function__2_urlopen->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$_request_methods$$$function__2_urlopen, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$_request_methods$$$function__2_urlopen,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_body,
    par_headers,
    par_encode_multipart,
    par_multipart_boundary,
    par_kw
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$_request_methods$$$function__2_urlopen == cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen);
    cache_frame_frame_urllib3$_request_methods$$$function__2_urlopen = NULL;
}

assertFrameObject(frame_frame_urllib3$_request_methods$$$function__2_urlopen);

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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_encode_multipart);
Py_DECREF(par_encode_multipart);
CHECK_OBJECT(par_multipart_boundary);
Py_DECREF(par_multipart_boundary);
CHECK_OBJECT(par_kw);
Py_DECREF(par_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_urllib3$_request_methods$$$function__3_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_body = python_pars[3];
PyObject *par_fields = python_pars[4];
PyObject *par_headers = python_pars[5];
PyObject *par_json = python_pars[6];
PyObject *par_urlopen_kw = python_pars[7];
struct Nuitka_FrameObject *frame_frame_urllib3$_request_methods$$$function__3_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$_request_methods$$$function__3_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$_request_methods$$$function__3_request)) {
    Py_XDECREF(cache_frame_frame_urllib3$_request_methods$$$function__3_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$_request_methods$$$function__3_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$_request_methods$$$function__3_request = MAKE_FUNCTION_FRAME(tstate, code_objects_f6e8fa5ed138b50ed40cf4b91d63f0a8, module_urllib3$_request_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$_request_methods$$$function__3_request->m_type_description == NULL);
frame_frame_urllib3$_request_methods$$$function__3_request = cache_frame_frame_urllib3$_request_methods$$$function__3_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$_request_methods$$$function__3_request);
assert(Py_REFCNT(frame_frame_urllib3$_request_methods$$$function__3_request) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_method);
tmp_expression_value_1 = par_method;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_upper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$_request_methods$$$function__3_request->m_frame.f_lineno = 112;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_method;
    assert(old != NULL);
    par_method = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_json);
tmp_cmp_expr_left_1 = par_json;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_body);
tmp_cmp_expr_left_2 = par_body;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6ac8d9be0fa7f8b2aa20b86f9a2d907c;
frame_frame_urllib3$_request_methods$$$function__3_request->m_frame.f_lineno = 115;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 115;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_json);
tmp_cmp_expr_left_3 = par_json;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_headers);
tmp_cmp_expr_left_4 = par_headers;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_5 = mod_consts.const_str_digest_d1c9bee04bd0a9c88e6c11d7c3b4ffd8;
tmp_called_value_2 = (PyObject *)&PyMap_Type;
tmp_expression_value_3 = (PyObject *)&PyUnicode_Type;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_lower);
assert(!(tmp_args_element_value_1 == NULL));
CHECK_OBJECT(par_headers);
tmp_expression_value_4 = par_headers;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_keys);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$_request_methods$$$function__3_request->m_frame.f_lineno = 123;
tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$_request_methods$$$function__3_request->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_right_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_urllib3$_request_methods$HTTPHeaderDict(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPHeaderDict);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_args_element_value_3 = par_headers;
frame_frame_urllib3$_request_methods$$$function__3_request->m_frame.f_lineno = 124;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_1781891970018ef9597f363946d7327b;
CHECK_OBJECT(par_headers);
tmp_ass_subscribed_1 = par_headers;
tmp_ass_subscript_1 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
tmp_expression_value_6 = module_var_accessor_urllib3$_request_methods$_json(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__json);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_dumps);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_json);
tmp_kw_call_arg_value_0_1 = par_json;
frame_frame_urllib3$_request_methods$$$function__3_request->m_frame.f_lineno = 127;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(
        tstate,
        tmp_called_value_6,
        args,
        &PyTuple_GET_ITEM(mod_consts.const_tuple_tuple_str_chr_44_str_chr_58_tuple_false_tuple, 0),
        mod_consts.const_tuple_str_plain_separators_str_plain_ensure_ascii_tuple
    );
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$_request_methods$$$function__3_request->m_frame.f_lineno = 127;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_body;
    assert(old != NULL);
    par_body = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_body);
tmp_cmp_expr_left_6 = par_body;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(par_body);
tmp_dictset_value = par_body;
CHECK_OBJECT(par_urlopen_kw);
tmp_dictset_dict = par_urlopen_kw;
tmp_dictset_key = mod_consts.const_str_plain_body;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_method);
tmp_cmp_expr_left_7 = par_method;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__encode_url_methods);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooooooo";
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
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_direct_call_arg4_1;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_request_encode_url);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_1 = par_method;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_plain_fields;
CHECK_OBJECT(par_fields);
tmp_dict_value_1 = par_fields;
tmp_direct_call_arg3_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
if (par_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 139;
type_description_1 = "oooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = par_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
Py_DECREF(tmp_direct_call_arg2_1);
Py_DECREF(tmp_direct_call_arg3_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par_urlopen_kw);
tmp_direct_call_arg4_1 = par_urlopen_kw;
Py_INCREF(tmp_direct_call_arg4_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_direct_call_arg4_2;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_request_encode_body);
if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_2 = par_method;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_url);
tmp_tuple_element_2 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 1, tmp_tuple_element_2);
tmp_dict_key_2 = mod_consts.const_str_plain_fields;
CHECK_OBJECT(par_fields);
tmp_dict_value_2 = par_fields;
tmp_direct_call_arg3_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_headers;
if (par_headers == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headers);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "oooooooo";
    goto dict_build_exception_2;
}

tmp_dict_value_2 = par_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg3_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_direct_call_arg1_2);
Py_DECREF(tmp_direct_call_arg2_2);
Py_DECREF(tmp_direct_call_arg3_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
CHECK_OBJECT(par_urlopen_kw);
tmp_direct_call_arg4_2 = par_urlopen_kw;
Py_INCREF(tmp_direct_call_arg4_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2, tmp_direct_call_arg4_2};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_6:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$_request_methods$$$function__3_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$_request_methods$$$function__3_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$_request_methods$$$function__3_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$_request_methods$$$function__3_request,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_body,
    par_fields,
    par_headers,
    par_json,
    par_urlopen_kw
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$_request_methods$$$function__3_request == cache_frame_frame_urllib3$_request_methods$$$function__3_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$_request_methods$$$function__3_request);
    cache_frame_frame_urllib3$_request_methods$$$function__3_request = NULL;
}

assertFrameObject(frame_frame_urllib3$_request_methods$$$function__3_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_method);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
par_method = NULL;
CHECK_OBJECT(par_body);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
par_body = NULL;
Py_XDECREF(par_headers);
par_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_method);
par_method = NULL;
CHECK_OBJECT(par_body);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
par_body = NULL;
Py_XDECREF(par_headers);
par_headers = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_urlopen_kw);
Py_DECREF(par_urlopen_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_json);
Py_DECREF(par_json);
CHECK_OBJECT(par_urlopen_kw);
Py_DECREF(par_urlopen_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$_request_methods$$$function__4_request_encode_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_fields = python_pars[3];
PyObject *par_headers = python_pars[4];
PyObject *par_urlopen_kw = python_pars[5];
PyObject *var_extra_kw = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$_request_methods$$$function__4_request_encode_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url)) {
    Py_XDECREF(cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url = MAKE_FUNCTION_FRAME(tstate, code_objects_e187f06273aaae5bb69af1ea3046ba1e, module_urllib3$_request_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url->m_type_description == NULL);
frame_frame_urllib3$_request_methods$$$function__4_request_encode_url = cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$_request_methods$$$function__4_request_encode_url);
assert(Py_REFCNT(frame_frame_urllib3$_request_methods$$$function__4_request_encode_url) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_headers);
tmp_cmp_expr_left_1 = par_headers;
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
CHECK_OBJECT(par_headers);
tmp_dict_value_1 = par_headers;
tmp_assign_source_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = var_extra_kw;
    var_extra_kw = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_extra_kw);
tmp_dict_arg_value_1 = var_extra_kw;
CHECK_OBJECT(par_urlopen_kw);
tmp_iterable_value_1 = par_urlopen_kw;
assert(PyDict_Check(tmp_dict_arg_value_1));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_fields);
tmp_truth_name_1 = CHECK_IF_TRUE(par_fields);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooo";
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
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_url);
tmp_iadd_expr_left_1 = par_url;
tmp_add_expr_left_1 = mod_consts.const_str_chr_63;
tmp_called_value_1 = module_var_accessor_urllib3$_request_methods$urlencode(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlencode);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_fields);
tmp_args_element_value_1 = par_fields;
frame_frame_urllib3$_request_methods$$$function__4_request_encode_url->m_frame.f_lineno = 180;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_iadd_expr_left_1;
par_url = tmp_assign_source_3;

}
branch_no_2:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_urlopen);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_1 = par_method;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_tuple_element_1 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_extra_kw);
tmp_direct_call_arg3_1 = var_extra_kw;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$_request_methods$$$function__4_request_encode_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$_request_methods$$$function__4_request_encode_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$_request_methods$$$function__4_request_encode_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$_request_methods$$$function__4_request_encode_url,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_fields,
    par_headers,
    par_urlopen_kw,
    var_extra_kw
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$_request_methods$$$function__4_request_encode_url == cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url);
    cache_frame_frame_urllib3$_request_methods$$$function__4_request_encode_url = NULL;
}

assertFrameObject(frame_frame_urllib3$_request_methods$$$function__4_request_encode_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_url);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(var_extra_kw);
CHECK_OBJECT(var_extra_kw);
Py_DECREF(var_extra_kw);
var_extra_kw = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_url);
par_url = NULL;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
Py_XDECREF(var_extra_kw);
var_extra_kw = NULL;
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
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_urlopen_kw);
Py_DECREF(par_urlopen_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_urlopen_kw);
Py_DECREF(par_urlopen_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$_request_methods$$$function__5_request_encode_body(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_method = python_pars[1];
PyObject *par_url = python_pars[2];
PyObject *par_fields = python_pars[3];
PyObject *par_headers = python_pars[4];
PyObject *par_encode_multipart = python_pars[5];
PyObject *par_multipart_boundary = python_pars[6];
PyObject *par_urlopen_kw = python_pars[7];
PyObject *var_extra_kw = NULL;
PyObject *var_body = NULL;
PyObject *var_content_type = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$_request_methods$$$function__5_request_encode_body;
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
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body)) {
    Py_XDECREF(cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body = MAKE_FUNCTION_FRAME(tstate, code_objects_a9be0be1ce5fd8c75bca40a6c16d0d9e, module_urllib3$_request_methods, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body->m_type_description == NULL);
frame_frame_urllib3$_request_methods$$$function__5_request_encode_body = cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$_request_methods$$$function__5_request_encode_body);
assert(Py_REFCNT(frame_frame_urllib3$_request_methods$$$function__5_request_encode_body) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_headers);
tmp_cmp_expr_left_1 = par_headers;
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_headers;
    assert(old != NULL);
    par_headers = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_headers;
tmp_called_value_1 = module_var_accessor_urllib3$_request_methods$HTTPHeaderDict(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HTTPHeaderDict);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_headers);
tmp_args_element_value_1 = par_headers;
frame_frame_urllib3$_request_methods$$$function__5_request_encode_body->m_frame.f_lineno = 254;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = var_extra_kw;
    var_extra_kw = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_fields);
tmp_truth_name_1 = CHECK_IF_TRUE(par_fields);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooooo";
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
bool tmp_condition_result_3;
PyObject *tmp_key_value_1;
PyObject *tmp_dict_arg_value_1;
tmp_key_value_1 = mod_consts.const_str_plain_body;
CHECK_OBJECT(par_urlopen_kw);
tmp_dict_arg_value_1 = par_urlopen_kw;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_0597c9bfd7bacd5702e520c55a306385;
frame_frame_urllib3$_request_methods$$$function__5_request_encode_body->m_frame.f_lineno = 259;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 259;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_encode_multipart);
tmp_truth_name_2 = CHECK_IF_TRUE(par_encode_multipart);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_urllib3$_request_methods$encode_multipart_formdata(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_encode_multipart_formdata);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 264;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_fields);
tmp_kw_call_arg_value_0_1 = par_fields;
CHECK_OBJECT(par_multipart_boundary);
tmp_kw_call_dict_value_0_1 = par_multipart_boundary;
frame_frame_urllib3$_request_methods$$$function__5_request_encode_body->m_frame.f_lineno = 264;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_boundary_tuple);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooo";
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



exception_lineno = 264;
type_description_1 = "ooooooooooo";
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



exception_lineno = 264;
type_description_1 = "ooooooooooo";
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



exception_lineno = 264;
type_description_1 = "ooooooooooo";
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
    PyObject *old = var_body;
    var_body = tmp_assign_source_6;
    Py_INCREF(var_body);
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
    PyObject *old = var_content_type;
    var_content_type = tmp_assign_source_7;
    Py_INCREF(var_content_type);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto branch_end_4;
branch_no_4:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_urllib3$_request_methods$urlencode(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_urlencode);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_fields);
tmp_args_element_value_2 = par_fields;
frame_frame_urllib3$_request_methods$$$function__5_request_encode_body->m_frame.f_lineno = 269;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
PyTuple_SET_ITEM0(tmp_iter_arg_2, 1, tmp_tuple_element_1);
tmp_assign_source_8 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
assert(!(tmp_assign_source_8 == NULL));
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
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



exception_lineno = 268;
type_description_1 = "ooooooooooo";
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
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_body;
    var_body = tmp_assign_source_11;
    Py_INCREF(var_body);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_content_type;
    var_content_type = tmp_assign_source_12;
    Py_INCREF(var_content_type);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

branch_end_4:;
CHECK_OBJECT(var_body);
tmp_dictset_value = var_body;
CHECK_OBJECT(var_extra_kw);
tmp_dictset_dict = var_extra_kw;
tmp_dictset_key = mod_consts.const_str_plain_body;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_dict_arg_value_2;
PyObject *tmp_key_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_extra_kw);
tmp_dict_arg_value_2 = var_extra_kw;
tmp_key_value_2 = mod_consts.const_str_plain_headers;
tmp_expression_value_2 = DICT_GET_ITEM_WITH_ERROR(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_setdefault);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_6d6a615162e89eb148ba9bf8dbfc06d3;
CHECK_OBJECT(var_content_type);
tmp_args_element_value_4 = var_content_type;
frame_frame_urllib3$_request_methods$$$function__5_request_encode_body->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
PyObject *tmp_dict_arg_value_3;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_extra_kw);
tmp_dict_arg_value_3 = var_extra_kw;
CHECK_OBJECT(par_urlopen_kw);
tmp_iterable_value_1 = par_urlopen_kw;
assert(PyDict_Check(tmp_dict_arg_value_3));
    tmp_res = PyDict_Merge(tmp_dict_arg_value_3, tmp_iterable_value_1, 1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_urlopen);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_method);
tmp_tuple_element_2 = par_method;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_url);
tmp_tuple_element_2 = par_url;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_extra_kw);
tmp_direct_call_arg3_1 = var_extra_kw;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$_request_methods$$$function__5_request_encode_body, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$_request_methods$$$function__5_request_encode_body->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$_request_methods$$$function__5_request_encode_body, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$_request_methods$$$function__5_request_encode_body,
    type_description_1,
    par_self,
    par_method,
    par_url,
    par_fields,
    par_headers,
    par_encode_multipart,
    par_multipart_boundary,
    par_urlopen_kw,
    var_extra_kw,
    var_body,
    var_content_type
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$_request_methods$$$function__5_request_encode_body == cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body);
    cache_frame_frame_urllib3$_request_methods$$$function__5_request_encode_body = NULL;
}

assertFrameObject(frame_frame_urllib3$_request_methods$$$function__5_request_encode_body);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_headers);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
par_headers = NULL;
CHECK_OBJECT(var_extra_kw);
CHECK_OBJECT(var_extra_kw);
Py_DECREF(var_extra_kw);
var_extra_kw = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_type);
var_content_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_headers);
par_headers = NULL;
Py_XDECREF(var_extra_kw);
var_extra_kw = NULL;
Py_XDECREF(var_body);
var_body = NULL;
Py_XDECREF(var_content_type);
var_content_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_encode_multipart);
Py_DECREF(par_encode_multipart);
CHECK_OBJECT(par_multipart_boundary);
Py_DECREF(par_multipart_boundary);
CHECK_OBJECT(par_urlopen_kw);
Py_DECREF(par_urlopen_kw);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_method);
Py_DECREF(par_method);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_fields);
Py_DECREF(par_fields);
CHECK_OBJECT(par_encode_multipart);
Py_DECREF(par_encode_multipart);
CHECK_OBJECT(par_multipart_boundary);
Py_DECREF(par_multipart_boundary);
CHECK_OBJECT(par_urlopen_kw);
Py_DECREF(par_urlopen_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$_request_methods$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_379ca12f1eee989ea84bc1ab9cd91a18,
#endif
        code_objects_66b4c425eadc105b9d1ce3d5230d003d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$_request_methods,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__2_urlopen(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$_request_methods$$$function__2_urlopen,
        mod_consts.const_str_plain_urlopen,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eee31fb271ba7fb4a9fbbcd5960b909c,
#endif
        code_objects_c6596fac6d132be8d8c237e752c6b16f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$_request_methods,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__3_request(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$_request_methods$$$function__3_request,
        mod_consts.const_str_plain_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7d13004a6b21c498177feb48163642d9,
#endif
        code_objects_f6e8fa5ed138b50ed40cf4b91d63f0a8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$_request_methods,
        mod_consts.const_str_digest_96d2f6142432f850dcfbd78cc0b39c0c,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__4_request_encode_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$_request_methods$$$function__4_request_encode_url,
        mod_consts.const_str_plain_request_encode_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a45dd2782f1551e10c2f8619dc8fd57d,
#endif
        code_objects_e187f06273aaae5bb69af1ea3046ba1e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$_request_methods,
        mod_consts.const_str_digest_a3d787e47b70b887b7abc9ec9b82af62,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$_request_methods$$$function__5_request_encode_body(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$_request_methods$$$function__5_request_encode_body,
        mod_consts.const_str_plain_request_encode_body,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_75a9f89496cd2e16af3a6d71c51c71a9,
#endif
        code_objects_a9be0be1ce5fd8c75bca40a6c16d0d9e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$_request_methods,
        mod_consts.const_str_digest_4dd60a0e87076432271e7a3b90dc0dbe,
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

static function_impl_code const function_table_urllib3$_request_methods[] = {
impl_urllib3$_request_methods$$$function__1___init__,
impl_urllib3$_request_methods$$$function__2_urlopen,
impl_urllib3$_request_methods$$$function__3_request,
impl_urllib3$_request_methods$$$function__4_request_encode_url,
impl_urllib3$_request_methods$$$function__5_request_encode_body,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$_request_methods);
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
        module_urllib3$_request_methods,
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
        function_table_urllib3$_request_methods,
        sizeof(function_table_urllib3$_request_methods) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3._request_methods";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$_request_methods(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$_request_methods");

    // Store the module for future use.
    module_urllib3$_request_methods = module;

    moduledict_urllib3$_request_methods = MODULE_DICT(module_urllib3$_request_methods);

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
        PRINT_STRING("urllib3$_request_methods: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$_request_methods: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$_request_methods: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3._request_methods" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$_request_methods\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$_request_methods,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$_request_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$_request_methods,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$_request_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$_request_methods,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$_request_methods);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$_request_methods);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$_request_methods;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_urllib3$_request_methods$$$class__1_RequestMethods_20 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$_request_methods = MAKE_MODULE_FRAME(code_objects_dd96de41e35bce9fee3f78e71a68395d, module_urllib3$_request_methods);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$_request_methods);
assert(Py_REFCNT(frame_frame_urllib3$_request_methods) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$_request_methods$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$_request_methods$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$_request_methods;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$_request_methods->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__json, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$_request_methods;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_urlencode_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$_request_methods->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$_request_methods,
        mod_consts.const_str_plain_urlencode,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_urlencode);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_urlencode, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__base_connection;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$_request_methods;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__TYPE_BODY_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_urllib3$_request_methods->m_frame.f_lineno = 7;
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
        (PyObject *)moduledict_urllib3$_request_methods,
        mod_consts.const_str_plain__TYPE_BODY,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__TYPE_BODY);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_BODY, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__collections;
tmp_globals_arg_value_4 = (PyObject *)moduledict_urllib3$_request_methods;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_HTTPHeaderDict_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_urllib3$_request_methods->m_frame.f_lineno = 8;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$_request_methods,
        mod_consts.const_str_plain_HTTPHeaderDict,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HTTPHeaderDict);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_HTTPHeaderDict, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_filepost;
tmp_globals_arg_value_5 = (PyObject *)moduledict_urllib3$_request_methods;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__TYPE_FIELDS_str_plain_encode_multipart_formdata_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_urllib3$_request_methods->m_frame.f_lineno = 9;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

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
        (PyObject *)moduledict_urllib3$_request_methods,
        mod_consts.const_str_plain__TYPE_FIELDS,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__TYPE_FIELDS);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_FIELDS, tmp_assign_source_12);
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
        (PyObject *)moduledict_urllib3$_request_methods,
        mod_consts.const_str_plain_encode_multipart_formdata,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_encode_multipart_formdata);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_encode_multipart_formdata, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_response;
tmp_globals_arg_value_6 = (PyObject *)moduledict_urllib3$_request_methods;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BaseHTTPResponse_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_urllib3$_request_methods->m_frame.f_lineno = 10;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_urllib3$_request_methods,
        mod_consts.const_str_plain_BaseHTTPResponse,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BaseHTTPResponse);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseHTTPResponse, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_LIST1(tstate, mod_consts.const_str_plain_RequestMethods);
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_2;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Union);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Sequence);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 15;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = (PyObject *)&PyTuple_Type;
tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
tmp_expression_value_7 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_7 == NULL));
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Union);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto tuple_build_exception_1;
}
tmp_subscript_value_4 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_3);
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_subscript_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_3);

exception_lineno = 15;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_1);

exception_lineno = 15;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_3;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_9 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Mapping);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_6;
PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_3);
tmp_expression_value_11 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Union);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto tuple_build_exception_3;
}
tmp_subscript_value_6 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_6);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_8);
Py_DECREF(tmp_subscript_value_5);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_1);
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain__TYPE_ENCODE_URL_FIELDS, tmp_assign_source_16);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_urllib3$_request_methods$$$class__1_RequestMethods_20 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_4905c72db7f39559c5e8037032e9f314;
tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_c4db8f6929f2d816c3271bac693011c5;
tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_RequestMethods;
tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_20;
tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = PySet_New(mod_consts.const_set_a4cc1767adfad18a9f0ec83b36e82de0);
tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, mod_consts.const_str_plain__encode_url_methods, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_30ee49aca76b25f47ba04345cca1ade3);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_urllib3$_request_methods$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_none_none_true_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c1e2e73f84a6aecc97af4c04e5aa90bd);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_urllib3$_request_methods$$$function__2_urlopen(tstate, tmp_defaults_2, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, mod_consts.const_str_plain_urlopen, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_3;
tmp_defaults_3 = mod_consts.const_tuple_none_none_none_none_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_abd34222a651140617252cd07a120475);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_urllib3$_request_methods$$$function__3_request(tstate, tmp_defaults_3, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, mod_consts.const_str_plain_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_4;
tmp_defaults_4 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_f20cff3ad22c7d93e674cfe3fda8a0f2);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_urllib3$_request_methods$$$function__4_request_encode_url(tstate, tmp_defaults_4, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, mod_consts.const_str_plain_request_encode_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_5;
tmp_defaults_5 = mod_consts.const_tuple_none_none_true_none_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_951990ceff20e8dd54681c2c391eee07);
Py_INCREF(tmp_defaults_5);

tmp_dictset_value = MAKE_FUNCTION_urllib3$_request_methods$$$function__5_request_encode_body(tstate, tmp_defaults_5, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, mod_consts.const_str_plain_request_encode_body, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_headers_tuple;
tmp_result = DICT_SET_ITEM(locals_urllib3$_request_methods$$$class__1_RequestMethods_20, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_metaclass_value_1;
PyObject *tmp_name_value_7;
PyObject *tmp_bases_value_1;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_class_decl_dict_value_1;
PyObject *tmp_metaclass_args_1;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
tmp_name_value_7 = mod_consts.const_str_plain_RequestMethods;
tmp_bases_value_1 = const_tuple_empty;
tmp_dict_arg_value_1 = locals_urllib3$_request_methods$$$class__1_RequestMethods_20;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_decl_dict_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
tmp_metaclass_args_1 = MAKE_TUPLE3(tstate, tmp_name_value_7, tmp_bases_value_1, tmp_dict_arg_value_1);
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_metaclass_value_1, tmp_metaclass_args_1, tmp_class_decl_dict_value_1);
CHECK_OBJECT(tmp_metaclass_args_1);
Py_DECREF(tmp_metaclass_args_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
{
    PyObject *old = outline_0_var___class__;
    outline_0_var___class__ = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_19 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_urllib3$_request_methods$$$class__1_RequestMethods_20);
locals_urllib3$_request_methods$$$class__1_RequestMethods_20 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_urllib3$_request_methods$$$class__1_RequestMethods_20);
locals_urllib3$_request_methods$$$class__1_RequestMethods_20 = NULL;
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
UPDATE_STRING_DICT1(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestMethods, tmp_assign_source_19);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$_request_methods, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$_request_methods->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$_request_methods, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$_request_methods);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$_request_methods", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3._request_methods" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$_request_methods);
    return module_urllib3$_request_methods;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$_request_methods, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$_request_methods", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
