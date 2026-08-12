/* Generated code for Python module 'urllib3$util$response'
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



/* The "module_urllib3$util$response" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$response;
PyDictObject *moduledict_urllib3$util$response;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_isclosed;
PyObject *const_str_plain_closed;
PyObject *const_str_plain_fp;
PyObject *const_str_digest_4a7b481487540504e51b1645e2267e09;
PyObject *const_str_digest_2dc9b354ab97d8af55c32332ec68fabb;
PyObject *const_str_plain_httplib;
PyObject *const_str_plain_HTTPMessage;
PyObject *const_str_digest_a6ee13c8eae039e175a5b0efb6194a11;
PyObject *const_str_plain_is_multipart;
PyObject *const_str_plain_get_payload;
PyObject *const_tuple_type_bytes_type_str_tuple;
PyObject *const_str_plain_defects;
PyObject *const_str_plain_StartBoundaryNotFoundDefect;
PyObject *const_str_plain_MultipartInvariantViolationDefect;
PyObject *const_str_plain_HeaderParsingError;
PyObject *const_tuple_str_plain_defects_str_plain_unparsed_data_tuple;
PyObject *const_str_digest_a62d70df777e96cdf62c41cd7486dc1b;
PyObject *const_str_plain__method;
PyObject *const_str_plain_upper;
PyObject *const_str_plain_HEAD;
PyObject *const_str_digest_09870367302d5835971334eab1fdeb62;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_096ca139beaf8ac5201071e235ad66b6;
PyObject *const_str_plain_client;
PyObject *const_str_digest_1d40ae8674b0be920a58b45b79c5e048;
PyObject *const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_HeaderParsingError_tuple;
PyObject *const_int_pos_2;
PyObject *const_dict_318a892946044a0ea290a325091c35cc;
PyObject *const_str_plain_is_fp_closed;
PyObject *const_dict_a7454e6a2d8888bf6a8254e812fb9368;
PyObject *const_str_plain_assert_header_parsing;
PyObject *const_dict_6bc0a2bc0d864ec91847b78bc700fd11;
PyObject *const_str_plain_is_response_to_head;
PyObject *const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b;
PyObject *const_str_digest_b7000635b6f011797c272ddd6445bae7;
PyObject *const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple;
PyObject *const_tuple_str_plain_obj_tuple;
PyObject *const_tuple_str_plain_response_str_plain_method_str_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[42];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.response"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 42) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 42 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.response"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isclosed", mod_consts.const_str_plain_isclosed);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_isclosed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_closed", mod_consts.const_str_plain_closed);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_closed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_fp);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09", mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb", mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_httplib", mod_consts.const_str_plain_httplib);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_httplib);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPMessage", mod_consts.const_str_plain_HTTPMessage);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPMessage);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11", mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multipart", mod_consts.const_str_plain_is_multipart);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_multipart);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_payload", mod_consts.const_str_plain_get_payload);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_payload);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytes_type_str_tuple", mod_consts.const_tuple_type_bytes_type_str_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_defects", mod_consts.const_str_plain_defects);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_defects);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StartBoundaryNotFoundDefect", mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MultipartInvariantViolationDefect", mod_consts.const_str_plain_MultipartInvariantViolationDefect);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_MultipartInvariantViolationDefect);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HeaderParsingError", mod_consts.const_str_plain_HeaderParsingError);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderParsingError);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple", mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b", mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__method", mod_consts.const_str_plain__method);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__method);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_upper);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HEAD", mod_consts.const_str_plain_HEAD);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_HEAD);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62", mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6", mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_client", mod_consts.const_str_plain_client);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_client);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048", mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple", mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HeaderParsingError_tuple", mod_consts.const_tuple_str_plain_HeaderParsingError_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HeaderParsingError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_318a892946044a0ea290a325091c35cc", mod_consts.const_dict_318a892946044a0ea290a325091c35cc);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_318a892946044a0ea290a325091c35cc);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_fp_closed", mod_consts.const_str_plain_is_fp_closed);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_fp_closed);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368", mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assert_header_parsing", mod_consts.const_str_plain_assert_header_parsing);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_header_parsing);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11", mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_response_to_head", mod_consts.const_str_plain_is_response_to_head);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_response_to_head);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b", mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7", mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple", mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_obj_tuple", mod_consts.const_tuple_str_plain_obj_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple", mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple);
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
void checkModuleConstants_urllib3$util$response(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_isclosed", mod_consts.const_str_plain_isclosed);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_isclosed) && "mod_consts.const_str_plain_isclosed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_closed", mod_consts.const_str_plain_closed);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_closed) && "mod_consts.const_str_plain_closed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_fp", mod_consts.const_str_plain_fp);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_fp) && "mod_consts.const_str_plain_fp");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09", mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09) && "mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb", mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb) && "mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_httplib", mod_consts.const_str_plain_httplib);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_httplib) && "mod_consts.const_str_plain_httplib");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HTTPMessage", mod_consts.const_str_plain_HTTPMessage);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPMessage) && "mod_consts.const_str_plain_HTTPMessage");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11", mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11) && "mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_multipart", mod_consts.const_str_plain_is_multipart);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_multipart) && "mod_consts.const_str_plain_is_multipart");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_get_payload", mod_consts.const_str_plain_get_payload);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_payload) && "mod_consts.const_str_plain_get_payload");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_bytes_type_str_tuple", mod_consts.const_tuple_type_bytes_type_str_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_str_tuple) && "mod_consts.const_tuple_type_bytes_type_str_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_defects", mod_consts.const_str_plain_defects);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_defects) && "mod_consts.const_str_plain_defects");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_StartBoundaryNotFoundDefect", mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_StartBoundaryNotFoundDefect) && "mod_consts.const_str_plain_StartBoundaryNotFoundDefect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_MultipartInvariantViolationDefect", mod_consts.const_str_plain_MultipartInvariantViolationDefect);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_MultipartInvariantViolationDefect) && "mod_consts.const_str_plain_MultipartInvariantViolationDefect");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HeaderParsingError", mod_consts.const_str_plain_HeaderParsingError);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_HeaderParsingError) && "mod_consts.const_str_plain_HeaderParsingError");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple", mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple) && "mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b", mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b) && "mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__method", mod_consts.const_str_plain__method);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__method) && "mod_consts.const_str_plain__method");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_upper", mod_consts.const_str_plain_upper);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_upper) && "mod_consts.const_str_plain_upper");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_HEAD", mod_consts.const_str_plain_HEAD);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_HEAD) && "mod_consts.const_str_plain_HEAD");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62", mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62) && "mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6", mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6) && "mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_client", mod_consts.const_str_plain_client);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_client) && "mod_consts.const_str_plain_client");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048", mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048) && "mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple", mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple) && "mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_exceptions", mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions) && "mod_consts.const_str_plain_exceptions");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_HeaderParsingError_tuple", mod_consts.const_tuple_str_plain_HeaderParsingError_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HeaderParsingError_tuple) && "mod_consts.const_tuple_str_plain_HeaderParsingError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_2", mod_consts.const_int_pos_2);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_int_pos_2) && "mod_consts.const_int_pos_2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_318a892946044a0ea290a325091c35cc", mod_consts.const_dict_318a892946044a0ea290a325091c35cc);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_318a892946044a0ea290a325091c35cc) && "mod_consts.const_dict_318a892946044a0ea290a325091c35cc");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_fp_closed", mod_consts.const_str_plain_is_fp_closed);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_fp_closed) && "mod_consts.const_str_plain_is_fp_closed");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368", mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368) && "mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_assert_header_parsing", mod_consts.const_str_plain_assert_header_parsing);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_header_parsing) && "mod_consts.const_str_plain_assert_header_parsing");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11", mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11) && "mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_is_response_to_head", mod_consts.const_str_plain_is_response_to_head);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_response_to_head) && "mod_consts.const_str_plain_is_response_to_head");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b", mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b) && "mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7", mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7) && "mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple", mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple) && "mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_obj_tuple", mod_consts.const_tuple_str_plain_obj_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_tuple) && "mod_consts.const_tuple_str_plain_obj_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple", mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple) && "mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple");
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
static PyObject *module_var_accessor_urllib3$util$response$HeaderParsingError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderParsingError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HeaderParsingError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HeaderParsingError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HeaderParsingError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HeaderParsingError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderParsingError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderParsingError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderParsingError);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$response$MultipartInvariantViolationDefect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartInvariantViolationDefect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MultipartInvariantViolationDefect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MultipartInvariantViolationDefect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MultipartInvariantViolationDefect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MultipartInvariantViolationDefect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartInvariantViolationDefect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartInvariantViolationDefect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartInvariantViolationDefect);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$response$StartBoundaryNotFoundDefect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StartBoundaryNotFoundDefect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_StartBoundaryNotFoundDefect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$response$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$response->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$response$httplib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$response->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$response->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_httplib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$response->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httplib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httplib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httplib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httplib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_httplib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_httplib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_httplib);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_519f40c329c0f16fbdba4d1e535a8855;
static PyCodeObject *code_objects_1b06f8c073b9484e832accb60c34896f;
static PyCodeObject *code_objects_889131d6c8f183f7df105c5d92165997;
static PyCodeObject *code_objects_a6a42ee8c7b35eb837749f9995896720;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b56bec0a3060ef5cdd1f331e34df0e9b); CHECK_OBJECT(module_filename_obj);
code_objects_519f40c329c0f16fbdba4d1e535a8855 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7, mod_consts.const_str_digest_b7000635b6f011797c272ddd6445bae7, NULL, NULL, 0, 0, 0);
code_objects_1b06f8c073b9484e832accb60c34896f = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_assert_header_parsing, mod_consts.const_str_plain_assert_header_parsing, mod_consts.const_tuple_2d761a373341d1c30f494c9c6ee5d91b_tuple, NULL, 1, 0, 0);
code_objects_889131d6c8f183f7df105c5d92165997 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_fp_closed, mod_consts.const_str_plain_is_fp_closed, mod_consts.const_tuple_str_plain_obj_tuple, NULL, 1, 0, 0);
code_objects_a6a42ee8c7b35eb837749f9995896720 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_response_to_head, mod_consts.const_str_plain_is_response_to_head, mod_consts.const_tuple_str_plain_response_str_plain_method_str_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function__1_is_fp_closed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function__2_assert_header_parsing(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function__3_is_response_to_head(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$response$$$function__1_is_fp_closed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$response$$$function__1_is_fp_closed;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed = MAKE_FUNCTION_FRAME(tstate, code_objects_889131d6c8f183f7df105c5d92165997, module_urllib3$util$response, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_type_description == NULL);
frame_frame_urllib3$util$response$$$function__1_is_fp_closed = cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$response$$$function__1_is_fp_closed);
assert(Py_REFCNT(frame_frame_urllib3$util$response$$$function__1_is_fp_closed) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_obj);
tmp_called_instance_1 = par_obj;
frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame.f_lineno = 20;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isclosed);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
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
    exception_lineno = 17;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame)) {
        frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_no_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
// Tried code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_closed);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "o";
    goto try_except_handler_3;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_keeper_lineno_3);
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
tmp_cmp_expr_right_2 = PyExc_AttributeError;
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
    exception_lineno = 24;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame)) {
        frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_4;
branch_no_2:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;
// Tried code:
{
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_obj);
tmp_expression_value_2 = par_obj;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_fp);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 30;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame)) {
        frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_6;
branch_no_3:;
goto try_end_5;
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
try_end_5:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4a7b481487540504e51b1645e2267e09;
frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame.f_lineno = 37;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 37;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$response$$$function__1_is_fp_closed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$response$$$function__1_is_fp_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$response$$$function__1_is_fp_closed,
    type_description_1,
    par_obj
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$response$$$function__1_is_fp_closed == cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed);
    cache_frame_frame_urllib3$util$response$$$function__1_is_fp_closed = NULL;
}

assertFrameObject(frame_frame_urllib3$util$response$$$function__1_is_fp_closed);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$response$$$function__2_assert_header_parsing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_headers = python_pars[0];
PyObject *var_unparsed_data = NULL;
PyObject *var_payload = NULL;
PyObject *var_defects = NULL;
PyObject *outline_0_var_defect = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$response$$$function__2_assert_header_parsing;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing = MAKE_FUNCTION_FRAME(tstate, code_objects_1b06f8c073b9484e832accb60c34896f, module_urllib3$util$response, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing->m_type_description == NULL);
frame_frame_urllib3$util$response$$$function__2_assert_header_parsing = cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$response$$$function__2_assert_header_parsing);
assert(Py_REFCNT(frame_frame_urllib3$util$response$$$function__2_assert_header_parsing) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_headers);
tmp_isinstance_inst_1 = par_headers;
tmp_expression_value_1 = module_var_accessor_urllib3$util$response$httplib(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httplib);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HTTPMessage);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a6ee13c8eae039e175a5b0efb6194a11;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_headers);
tmp_type_arg_1 = par_headers;
tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
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
frame_frame_urllib3$util$response$$$function__2_assert_header_parsing->m_frame.f_lineno = 56;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
{
    PyObject *old = var_unparsed_data;
    var_unparsed_data = tmp_assign_source_1;
    Py_INCREF(var_unparsed_data);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_headers);
tmp_called_instance_1 = par_headers;
frame_frame_urllib3$util$response$$$function__2_assert_header_parsing->m_frame.f_lineno = 62;
tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_multipart);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_headers);
tmp_called_instance_2 = par_headers;
frame_frame_urllib3$util$response$$$function__2_assert_header_parsing->m_frame.f_lineno = 63;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_payload);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_payload;
    var_payload = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(var_payload);
tmp_isinstance_inst_2 = var_payload;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_bytes_type_str_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_3;
CHECK_OBJECT(var_payload);
tmp_assign_source_3 = var_payload;
{
    PyObject *old = var_unparsed_data;
    assert(old != NULL);
    var_unparsed_data = tmp_assign_source_3;
    Py_INCREF(var_unparsed_data);
    Py_DECREF(old);
}

}
branch_no_3:;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_headers);
tmp_expression_value_2 = par_headers;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_defects);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_listcomp_1__$0;
    tmp_listcomp_1__$0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = tmp_listcomp_1__contraction;
    tmp_listcomp_1__contraction = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 79;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_defect;
    outline_0_var_defect = tmp_assign_source_8;
    Py_INCREF(outline_0_var_defect);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(outline_0_var_defect);
tmp_isinstance_inst_3 = outline_0_var_defect;
tmp_tuple_element_2 = module_var_accessor_urllib3$util$response$StartBoundaryNotFoundDefect(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_isinstance_cls_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_isinstance_cls_3, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_urllib3$util$response$MultipartInvariantViolationDefect(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MultipartInvariantViolationDefect);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "oooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_isinstance_cls_3, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_isinstance_cls_3);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooo";
    goto try_except_handler_3;
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
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_defect);
tmp_append_value_1 = outline_0_var_defect;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_assign_source_4 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_assign_source_4);
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
Py_XDECREF(outline_0_var_defect);
outline_0_var_defect = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_defect);
outline_0_var_defect = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 79;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = var_defects;
    var_defects = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_defects);
tmp_truth_name_1 = CHECK_IF_TRUE(var_defects);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_unparsed_data);
tmp_truth_name_2 = CHECK_IF_TRUE(var_unparsed_data);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$response$HeaderParsingError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HeaderParsingError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_defects);
tmp_kw_call_value_0_1 = var_defects;
CHECK_OBJECT(var_unparsed_data);
tmp_kw_call_value_1_1 = var_unparsed_data;
frame_frame_urllib3$util$response$$$function__2_assert_header_parsing->m_frame.f_lineno = 88;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_defects_str_plain_unparsed_data_tuple);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 88;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$response$$$function__2_assert_header_parsing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$response$$$function__2_assert_header_parsing->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$response$$$function__2_assert_header_parsing, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$response$$$function__2_assert_header_parsing,
    type_description_1,
    par_headers,
    var_unparsed_data,
    var_payload,
    var_defects
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$response$$$function__2_assert_header_parsing == cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing);
    cache_frame_frame_urllib3$util$response$$$function__2_assert_header_parsing = NULL;
}

assertFrameObject(frame_frame_urllib3$util$response$$$function__2_assert_header_parsing);

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
CHECK_OBJECT(var_unparsed_data);
CHECK_OBJECT(var_unparsed_data);
Py_DECREF(var_unparsed_data);
var_unparsed_data = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
CHECK_OBJECT(var_defects);
CHECK_OBJECT(var_defects);
Py_DECREF(var_defects);
var_defects = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_unparsed_data);
var_unparsed_data = NULL;
Py_XDECREF(var_payload);
var_payload = NULL;
Py_XDECREF(var_defects);
var_defects = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$response$$$function__3_is_response_to_head(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_response = python_pars[0];
PyObject *var_method_str = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$response$$$function__3_is_response_to_head;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head = MAKE_FUNCTION_FRAME(tstate, code_objects_a6a42ee8c7b35eb837749f9995896720, module_urllib3$util$response, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head->m_type_description == NULL);
frame_frame_urllib3$util$response$$$function__3_is_response_to_head = cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$response$$$function__3_is_response_to_head);
assert(Py_REFCNT(frame_frame_urllib3$util$response$$$function__3_is_response_to_head) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__method);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_method_str;
    var_method_str = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_method_str);
tmp_expression_value_2 = var_method_str;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_upper);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$response$$$function__3_is_response_to_head->m_frame.f_lineno = 101;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_HEAD;
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$response$$$function__3_is_response_to_head, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$response$$$function__3_is_response_to_head->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$response$$$function__3_is_response_to_head, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$response$$$function__3_is_response_to_head,
    type_description_1,
    par_response,
    var_method_str
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$response$$$function__3_is_response_to_head == cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head);
    cache_frame_frame_urllib3$util$response$$$function__3_is_response_to_head = NULL;
}

assertFrameObject(frame_frame_urllib3$util$response$$$function__3_is_response_to_head);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_method_str);
CHECK_OBJECT(var_method_str);
Py_DECREF(var_method_str);
var_method_str = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_method_str);
var_method_str = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function__1_is_fp_closed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$response$$$function__1_is_fp_closed,
        mod_consts.const_str_plain_is_fp_closed,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_889131d6c8f183f7df105c5d92165997,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$response,
        mod_consts.const_str_digest_2dc9b354ab97d8af55c32332ec68fabb,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function__2_assert_header_parsing(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$response$$$function__2_assert_header_parsing,
        mod_consts.const_str_plain_assert_header_parsing,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1b06f8c073b9484e832accb60c34896f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$response,
        mod_consts.const_str_digest_a62d70df777e96cdf62c41cd7486dc1b,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$response$$$function__3_is_response_to_head(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$response$$$function__3_is_response_to_head,
        mod_consts.const_str_plain_is_response_to_head,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a6a42ee8c7b35eb837749f9995896720,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$response,
        mod_consts.const_str_digest_09870367302d5835971334eab1fdeb62,
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

static function_impl_code const function_table_urllib3$util$response[] = {
impl_urllib3$util$response$$$function__1_is_fp_closed,
impl_urllib3$util$response$$$function__2_assert_header_parsing,
impl_urllib3$util$response$$$function__3_is_response_to_head,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$response);
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
        module_urllib3$util$response,
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
        function_table_urllib3$util$response,
        sizeof(function_table_urllib3$util$response) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.response";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$response(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$response");

    // Store the module for future use.
    module_urllib3$util$response = module;

    moduledict_urllib3$util$response = MODULE_DICT(module_urllib3$util$response);

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
        PRINT_STRING("urllib3$util$response: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$response: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$response: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.response" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$response\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$response,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$response,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$response,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$response,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$response);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$response);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$response = MAKE_MODULE_FRAME(code_objects_519f40c329c0f16fbdba4d1e535a8855, module_urllib3$util$response);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$response);
assert(Py_REFCNT(frame_frame_urllib3$util$response) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$response$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$response$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_096ca139beaf8ac5201071e235ad66b6;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$response;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$response->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_urllib3$util$response,
        mod_consts.const_str_plain_client,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_client);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_httplib, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_1d40ae8674b0be920a58b45b79c5e048;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$response;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_5acdabf31d9b5228642c8f9c05002e77_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$util$response->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_urllib3$util$response,
        mod_consts.const_str_plain_MultipartInvariantViolationDefect,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_MultipartInvariantViolationDefect);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_MultipartInvariantViolationDefect, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_urllib3$util$response,
        mod_consts.const_str_plain_StartBoundaryNotFoundDefect,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_StartBoundaryNotFoundDefect);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_StartBoundaryNotFoundDefect, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_urllib3$util$response;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_HeaderParsingError_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_urllib3$util$response->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_urllib3$util$response,
        mod_consts.const_str_plain_HeaderParsingError,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_HeaderParsingError);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_HeaderParsingError, tmp_assign_source_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$response);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_318a892946044a0ea290a325091c35cc);

tmp_assign_source_11 = MAKE_FUNCTION_urllib3$util$response$$$function__1_is_fp_closed(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_fp_closed, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a7454e6a2d8888bf6a8254e812fb9368);

tmp_assign_source_12 = MAKE_FUNCTION_urllib3$util$response$$$function__2_assert_header_parsing(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_header_parsing, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6bc0a2bc0d864ec91847b78bc700fd11);

tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$response$$$function__3_is_response_to_head(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_urllib3$util$response, (Nuitka_StringObject *)mod_consts.const_str_plain_is_response_to_head, tmp_assign_source_13);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$response", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.response" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$response);
    return module_urllib3$util$response;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$response, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$response", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
