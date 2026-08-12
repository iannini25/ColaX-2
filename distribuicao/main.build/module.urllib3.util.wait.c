/* Generated code for Python module 'urllib3$util$wait'
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



/* The "module_urllib3$util$wait" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$wait;
PyDictObject *moduledict_urllib3$util$wait;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_select;
PyObject *const_str_plain_POLLIN;
PyObject *const_str_plain_POLLOUT;
PyObject *const_str_plain_poll;
PyObject *const_dict_a5163cc7534489db21dded1078e6aa1b;
PyObject *const_str_plain_do_poll;
PyObject *const_str_digest_d4b4230713465b3db317e462a98dc2e6;
PyObject *const_int_pos_1000;
PyObject *const_str_plain_poll_obj;
PyObject *const_tuple_int_0_tuple;
PyObject *const_tuple_type_AttributeError_type_OSError_tuple;
PyObject *const_str_plain__have_working_poll;
PyObject *const_str_plain_poll_wait_for_socket;
PyObject *const_str_plain_wait_for_socket;
PyObject *const_str_plain_select_wait_for_socket;
PyObject *const_tuple_str_plain_read_str_plain_timeout_tuple;
PyObject *const_str_digest_1dcb6343172673d8611eeb5f6284e6ec;
PyObject *const_tuple_str_plain_write_str_plain_timeout_tuple;
PyObject *const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_wait_for_read;
PyObject *const_str_plain_wait_for_write;
PyObject *const_tuple_false_false_none_tuple;
PyObject *const_dict_555b8a9c12d8c080aaf2552f9014dadd;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d;
PyObject *const_str_digest_ba4902da016df054e34a5eb31317683f;
PyObject *const_str_digest_2793acd2a9eb309196b14c7196b7f975;
PyObject *const_tuple_str_plain_poll_obj_tuple;
PyObject *const_tuple_str_plain_t_str_plain_poll_obj_tuple;
PyObject *const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple;
PyObject *const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple;
PyObject *const_tuple_str_plain_sock_str_plain_timeout_tuple;
PyObject *const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[40];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("urllib3.util.wait"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 40) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 40 values, got %d\n",
                    UN_TRANSLATE("urllib3.util.wait"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266", mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_partial", mod_consts.const_str_plain_partial);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_select", mod_consts.const_str_plain_select);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_select);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLLIN", mod_consts.const_str_plain_POLLIN);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_POLLIN);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLLOUT", mod_consts.const_str_plain_POLLOUT);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_POLLOUT);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poll", mod_consts.const_str_plain_poll);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_poll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b", mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_do_poll", mod_consts.const_str_plain_do_poll);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_do_poll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6", mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1000", mod_consts.const_int_pos_1000);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_1000);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poll_obj", mod_consts.const_str_plain_poll_obj);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_poll_obj);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_AttributeError_type_OSError_tuple", mod_consts.const_tuple_type_AttributeError_type_OSError_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_OSError_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__have_working_poll", mod_consts.const_str_plain__have_working_poll);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__have_working_poll);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poll_wait_for_socket", mod_consts.const_str_plain_poll_wait_for_socket);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_poll_wait_for_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait_for_socket", mod_consts.const_str_plain_wait_for_socket);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_select_wait_for_socket", mod_consts.const_str_plain_select_wait_for_socket);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_select_wait_for_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec", mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81", mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait_for_read", mod_consts.const_str_plain_wait_for_read);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_read);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait_for_write", mod_consts.const_str_plain_wait_for_write);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_write);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_false_none_tuple", mod_consts.const_tuple_false_false_none_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd", mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d", mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f", mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975", mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_poll_obj_tuple", mod_consts.const_tuple_str_plain_poll_obj_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_poll_obj_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple", mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple", mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple", mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple", mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple);
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
void checkModuleConstants_urllib3$util$wait(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266", mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266) && "mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_partial", mod_consts.const_str_plain_partial);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial) && "mod_consts.const_str_plain_partial");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_select", mod_consts.const_str_plain_select);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_select) && "mod_consts.const_str_plain_select");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLLIN", mod_consts.const_str_plain_POLLIN);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_POLLIN) && "mod_consts.const_str_plain_POLLIN");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_POLLOUT", mod_consts.const_str_plain_POLLOUT);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_POLLOUT) && "mod_consts.const_str_plain_POLLOUT");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poll", mod_consts.const_str_plain_poll);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_poll) && "mod_consts.const_str_plain_poll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b", mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b) && "mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_do_poll", mod_consts.const_str_plain_do_poll);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_do_poll) && "mod_consts.const_str_plain_do_poll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6", mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6) && "mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_1000", mod_consts.const_int_pos_1000);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_1000) && "mod_consts.const_int_pos_1000");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poll_obj", mod_consts.const_str_plain_poll_obj);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_poll_obj) && "mod_consts.const_str_plain_poll_obj");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_type_AttributeError_type_OSError_tuple", mod_consts.const_tuple_type_AttributeError_type_OSError_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_OSError_tuple) && "mod_consts.const_tuple_type_AttributeError_type_OSError_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain__have_working_poll", mod_consts.const_str_plain__have_working_poll);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__have_working_poll) && "mod_consts.const_str_plain__have_working_poll");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_poll_wait_for_socket", mod_consts.const_str_plain_poll_wait_for_socket);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_poll_wait_for_socket) && "mod_consts.const_str_plain_poll_wait_for_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait_for_socket", mod_consts.const_str_plain_wait_for_socket);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_socket) && "mod_consts.const_str_plain_wait_for_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_select_wait_for_socket", mod_consts.const_str_plain_select_wait_for_socket);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_select_wait_for_socket) && "mod_consts.const_str_plain_select_wait_for_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple) && "mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec", mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec) && "mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple) && "mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81", mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81) && "mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_socket", mod_consts.const_str_plain_socket);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket) && "mod_consts.const_str_plain_socket");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait_for_read", mod_consts.const_str_plain_wait_for_read);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_read) && "mod_consts.const_str_plain_wait_for_read");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_wait_for_write", mod_consts.const_str_plain_wait_for_write);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_write) && "mod_consts.const_str_plain_wait_for_write");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_false_false_none_tuple", mod_consts.const_tuple_false_false_none_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_tuple) && "mod_consts.const_tuple_false_false_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd", mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd) && "mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6", mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6) && "mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_none_tuple", mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple) && "mod_consts.const_tuple_none_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d", mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d) && "mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f", mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f) && "mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975", mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975) && "mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_poll_obj_tuple", mod_consts.const_tuple_str_plain_poll_obj_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_poll_obj_tuple) && "mod_consts.const_tuple_str_plain_poll_obj_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple", mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple) && "mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple", mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple) && "mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple", mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple) && "mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple", mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple) && "mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple", mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple) && "mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_urllib3$util$wait$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$wait->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$wait$_have_working_poll(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__have_working_poll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__have_working_poll);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__have_working_poll, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__have_working_poll);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__have_working_poll, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__have_working_poll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__have_working_poll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__have_working_poll);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$wait$poll_wait_for_socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_poll_wait_for_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_poll_wait_for_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_poll_wait_for_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_poll_wait_for_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_poll_wait_for_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_poll_wait_for_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_poll_wait_for_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_poll_wait_for_socket);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$wait$select(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_select);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_select, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_select);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_select, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_select);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$wait$select_wait_for_socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select_wait_for_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_select_wait_for_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_select_wait_for_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_select_wait_for_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_select_wait_for_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select_wait_for_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select_wait_for_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_select_wait_for_socket);
    }

    return result;
}

static PyObject *module_var_accessor_urllib3$util$wait$wait_for_socket(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_urllib3$util$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_urllib3$util$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_urllib3$util$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_for_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_for_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_for_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_for_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_socket);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f418116c49a36e131e5284b2a5338694;
static PyCodeObject *code_objects_4a45f2df54bfa6482704556e39a8ca5a;
static PyCodeObject *code_objects_6b61b150511047c302abb66421e55f2e;
static PyCodeObject *code_objects_9672e6cdb76cb6fda6d382dbaf0ec301;
static PyCodeObject *code_objects_0f6db5c6528e8abedf2e39dc223868aa;
static PyCodeObject *code_objects_9577b6e0c8e9f06c3cc3f676b841b739;
static PyCodeObject *code_objects_363f9c1a19633a888f7f5f03d7de9a2b;
static PyCodeObject *code_objects_b2207dbf5ec31cfe1aa2d3d095976993;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ba4902da016df054e34a5eb31317683f); CHECK_OBJECT(module_filename_obj);
code_objects_f418116c49a36e131e5284b2a5338694 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975, mod_consts.const_str_digest_2793acd2a9eb309196b14c7196b7f975, NULL, NULL, 0, 0, 0);
code_objects_4a45f2df54bfa6482704556e39a8ca5a = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__have_working_poll, mod_consts.const_str_plain__have_working_poll, mod_consts.const_tuple_str_plain_poll_obj_tuple, NULL, 0, 0, 0);
code_objects_6b61b150511047c302abb66421e55f2e = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_do_poll, mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6, mod_consts.const_tuple_str_plain_t_str_plain_poll_obj_tuple, mod_consts.const_tuple_str_plain_poll_obj_tuple, 1, 0, 0);
code_objects_9672e6cdb76cb6fda6d382dbaf0ec301 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_poll_wait_for_socket, mod_consts.const_str_plain_poll_wait_for_socket, mod_consts.const_tuple_d72f9bbdc4d933204f83f3253234107f_tuple, NULL, 4, 0, 0);
code_objects_0f6db5c6528e8abedf2e39dc223868aa = MAKE_CODE_OBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_select_wait_for_socket, mod_consts.const_str_plain_select_wait_for_socket, mod_consts.const_tuple_9f64bbb63fef08e9a4e8e990363fe01c_tuple, NULL, 4, 0, 0);
code_objects_9577b6e0c8e9f06c3cc3f676b841b739 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_for_read, mod_consts.const_str_plain_wait_for_read, mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple, NULL, 2, 0, 0);
code_objects_363f9c1a19633a888f7f5f03d7de9a2b = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_for_socket, mod_consts.const_str_plain_wait_for_socket, mod_consts.const_tuple_7db28342f71aeff3654aac9759b7c4f6_tuple, NULL, 4, 0, 0);
code_objects_b2207dbf5ec31cfe1aa2d3d095976993 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_for_write, mod_consts.const_str_plain_wait_for_write, mod_consts.const_tuple_str_plain_sock_str_plain_timeout_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__1_select_wait_for_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__2_poll_wait_for_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__3__have_working_poll(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__4_wait_for_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__5_wait_for_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__6_wait_for_write(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_urllib3$util$wait$$$function__1_select_wait_for_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_read = python_pars[1];
PyObject *par_write = python_pars[2];
PyObject *par_timeout = python_pars[3];
PyObject *var_rcheck = NULL;
PyObject *var_wcheck = NULL;
PyObject *var_fn = NULL;
PyObject *var_rready = NULL;
PyObject *var_wready = NULL;
PyObject *var_xready = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket = MAKE_FUNCTION_FRAME(tstate, code_objects_0f6db5c6528e8abedf2e39dc223868aa, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket->m_type_description == NULL);
frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket = cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket);
assert(Py_REFCNT(frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_read);
tmp_operand_value_1 = par_read;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_write);
tmp_operand_value_2 = par_write;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket->m_frame.f_lineno = 40;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 40;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_rcheck;
    var_rcheck = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
{
    PyObject *old = var_wcheck;
    var_wcheck = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_read);
tmp_truth_name_1 = CHECK_IF_TRUE(par_read);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "oooooooooo";
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
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_rcheck);
tmp_list_arg_value_1 = var_rcheck;
CHECK_OBJECT(par_sock);
tmp_item_value_1 = par_sock;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(par_write);
tmp_truth_name_2 = CHECK_IF_TRUE(par_write);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
CHECK_OBJECT(var_wcheck);
tmp_list_arg_value_2 = var_wcheck;
CHECK_OBJECT(par_sock);
tmp_item_value_2 = par_sock;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_1 == NULL));
tmp_expression_value_1 = module_var_accessor_urllib3$util$wait$select(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 52;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_select);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 52;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rcheck);
tmp_args_element_value_2 = var_rcheck;
CHECK_OBJECT(var_wcheck);
tmp_args_element_value_3 = var_wcheck;
CHECK_OBJECT(var_wcheck);
tmp_args_element_value_4 = var_wcheck;
frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket->m_frame.f_lineno = 52;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_fn;
    var_fn = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_fn);
tmp_called_value_2 = var_fn;
CHECK_OBJECT(par_timeout);
tmp_args_element_value_5 = par_timeout;
frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket->m_frame.f_lineno = 53;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_5);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_rready;
    var_rready = tmp_assign_source_8;
    Py_INCREF(var_rready);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_wready;
    var_wready = tmp_assign_source_9;
    Py_INCREF(var_wready);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_xready;
    var_xready = tmp_assign_source_10;
    Py_INCREF(var_xready);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_value_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
CHECK_OBJECT(var_rready);
tmp_or_left_value_1 = var_rready;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_wready);
tmp_or_left_value_2 = var_wready;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_xready);
tmp_or_right_value_2 = var_xready;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_value_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_value_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "oooooooooo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket,
    type_description_1,
    par_sock,
    par_read,
    par_write,
    par_timeout,
    var_rcheck,
    var_wcheck,
    var_fn,
    var_rready,
    var_wready,
    var_xready
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket == cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket);
    cache_frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket = NULL;
}

assertFrameObject(frame_frame_urllib3$util$wait$$$function__1_select_wait_for_socket);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_rcheck);
CHECK_OBJECT(var_rcheck);
Py_DECREF(var_rcheck);
var_rcheck = NULL;
CHECK_OBJECT(var_wcheck);
CHECK_OBJECT(var_wcheck);
Py_DECREF(var_wcheck);
var_wcheck = NULL;
CHECK_OBJECT(var_fn);
CHECK_OBJECT(var_fn);
Py_DECREF(var_fn);
var_fn = NULL;
CHECK_OBJECT(var_rready);
CHECK_OBJECT(var_rready);
Py_DECREF(var_rready);
var_rready = NULL;
CHECK_OBJECT(var_wready);
CHECK_OBJECT(var_wready);
Py_DECREF(var_wready);
var_wready = NULL;
CHECK_OBJECT(var_xready);
CHECK_OBJECT(var_xready);
Py_DECREF(var_xready);
var_xready = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_rcheck);
var_rcheck = NULL;
Py_XDECREF(var_wcheck);
var_wcheck = NULL;
Py_XDECREF(var_fn);
var_fn = NULL;
Py_XDECREF(var_rready);
var_rready = NULL;
Py_XDECREF(var_wready);
var_wready = NULL;
Py_XDECREF(var_xready);
var_xready = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_write);
Py_DECREF(par_write);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_write);
Py_DECREF(par_write);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function__2_poll_wait_for_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_read = python_pars[1];
PyObject *par_write = python_pars[2];
PyObject *par_timeout = python_pars[3];
PyObject *var_mask = NULL;
struct Nuitka_CellObject *var_poll_obj = Nuitka_Cell_NewEmpty();
PyObject *var_do_poll = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket = MAKE_FUNCTION_FRAME(tstate, code_objects_9672e6cdb76cb6fda6d382dbaf0ec301, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket->m_type_description == NULL);
frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket = cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket);
assert(Py_REFCNT(frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(par_read);
tmp_operand_value_1 = par_read;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_write);
tmp_operand_value_2 = par_write;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_d47e372f7598b75180e9e0f6f1e0d266;
frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket->m_frame.f_lineno = 64;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooco";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
{
    PyObject *old = var_mask;
    var_mask = tmp_assign_source_1;
    Py_INCREF(var_mask);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_read);
tmp_truth_name_1 = CHECK_IF_TRUE(par_read);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooco";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_mask);
tmp_ibitor_expr_left_1 = var_mask;
tmp_expression_value_1 = module_var_accessor_urllib3$util$wait$select(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_ibitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_POLLIN);
if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_LONG_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
CHECK_OBJECT(tmp_ibitor_expr_right_1);
Py_DECREF(tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_ibitor_expr_left_1;
var_mask = tmp_assign_source_2;

}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(par_write);
tmp_truth_name_2 = CHECK_IF_TRUE(par_write);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_ibitor_expr_left_2;
PyObject *tmp_ibitor_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_mask);
tmp_ibitor_expr_left_2 = var_mask;
tmp_expression_value_2 = module_var_accessor_urllib3$util$wait$select(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_ibitor_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_POLLOUT);
if (tmp_ibitor_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_2, tmp_ibitor_expr_right_2);
CHECK_OBJECT(tmp_ibitor_expr_right_2);
Py_DECREF(tmp_ibitor_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_ibitor_expr_left_2;
var_mask = tmp_assign_source_3;

}
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$wait$select(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket->m_frame.f_lineno = 70;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_poll);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(var_poll_obj);
    Nuitka_Cell_SET(var_poll_obj, tmp_assign_source_4);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(Nuitka_Cell_GET(var_poll_obj));
tmp_called_instance_2 = Nuitka_Cell_GET(var_poll_obj);
CHECK_OBJECT(par_sock);
tmp_args_element_value_1 = par_sock;
CHECK_OBJECT(var_mask);
tmp_args_element_value_2 = var_mask;
frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket->m_frame.f_lineno = 71;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        const_str_plain_register,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a5163cc7534489db21dded1078e6aa1b);
tmp_closure_1[0] = var_poll_obj;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_5 = MAKE_FUNCTION_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll(tstate, tmp_annotations_1, tmp_closure_1);

{
    PyObject *old = var_do_poll;
    var_do_poll = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_do_poll);
tmp_called_value_1 = var_do_poll;
CHECK_OBJECT(par_timeout);
tmp_args_element_value_3 = par_timeout;
frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket->m_frame.f_lineno = 79;
tmp_value_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooco";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooooco";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket,
    type_description_1,
    par_sock,
    par_read,
    par_write,
    par_timeout,
    var_mask,
    var_poll_obj,
    var_do_poll
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket == cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket);
    cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket = NULL;
}

assertFrameObject(frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_mask);
CHECK_OBJECT(var_mask);
Py_DECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_poll_obj);
CHECK_OBJECT(var_poll_obj);
Py_DECREF(var_poll_obj);
var_poll_obj = NULL;
CHECK_OBJECT(var_do_poll);
CHECK_OBJECT(var_do_poll);
Py_DECREF(var_do_poll);
var_do_poll = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_mask);
var_mask = NULL;
CHECK_OBJECT(var_poll_obj);
CHECK_OBJECT(var_poll_obj);
Py_DECREF(var_poll_obj);
var_poll_obj = NULL;
Py_XDECREF(var_do_poll);
var_do_poll = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_write);
Py_DECREF(par_write);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_write);
Py_DECREF(par_write);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_t = python_pars[0];
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll = MAKE_FUNCTION_FRAME(tstate, code_objects_6b61b150511047c302abb66421e55f2e, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll->m_type_description == NULL);
frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll = cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll);
assert(Py_REFCNT(frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_t);
tmp_cmp_expr_left_1 = par_t;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_imult_expr_left_1;
PyObject *tmp_imult_expr_right_1;
CHECK_OBJECT(par_t);
tmp_imult_expr_left_1 = par_t;
tmp_imult_expr_right_1 = mod_consts.const_int_pos_1000;
tmp_result = INPLACE_OPERATION_MULT_OBJECT_LONG(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_imult_expr_left_1;
par_t = tmp_assign_source_1;

}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_poll_obj);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 77;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_t);
tmp_args_element_value_1 = par_t;
frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll->m_frame.f_lineno = 77;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_poll, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll,
    type_description_1,
    par_t,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll == cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll);
    cache_frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll = NULL;
}

assertFrameObject(frame_frame_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_t);
CHECK_OBJECT(par_t);
Py_DECREF(par_t);
par_t = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_t);
par_t = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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


static PyObject *impl_urllib3$util$wait$$$function__3__have_working_poll(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_poll_obj = NULL;
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait$$$function__3__have_working_poll;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll = MAKE_FUNCTION_FRAME(tstate, code_objects_4a45f2df54bfa6482704556e39a8ca5a, module_urllib3$util$wait, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll->m_type_description == NULL);
frame_frame_urllib3$util$wait$$$function__3__have_working_poll = cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait$$$function__3__have_working_poll);
assert(Py_REFCNT(frame_frame_urllib3$util$wait$$$function__3__have_working_poll) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_urllib3$util$wait$select(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "o";
    goto try_except_handler_2;
}
frame_frame_urllib3$util$wait$$$function__3__have_working_poll->m_frame.f_lineno = 87;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_poll);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "o";
    goto try_except_handler_2;
}
{
    PyObject *old = var_poll_obj;
    var_poll_obj = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_poll_obj);
tmp_called_instance_2 = var_poll_obj;
frame_frame_urllib3$util$wait$$$function__3__have_working_poll->m_frame.f_lineno = 88;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_poll,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__3__have_working_poll, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__3__have_working_poll, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_AttributeError_type_OSError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "o";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 86;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_urllib3$util$wait$$$function__3__have_working_poll->m_frame)) {
        frame_frame_urllib3$util$wait$$$function__3__have_working_poll->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__3__have_working_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait$$$function__3__have_working_poll->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__3__have_working_poll, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$wait$$$function__3__have_working_poll,
    type_description_1,
    var_poll_obj
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$wait$$$function__3__have_working_poll == cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll);
    cache_frame_frame_urllib3$util$wait$$$function__3__have_working_poll = NULL;
}

assertFrameObject(frame_frame_urllib3$util$wait$$$function__3__have_working_poll);

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
Py_XDECREF(var_poll_obj);
var_poll_obj = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_poll_obj);
var_poll_obj = NULL;
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


static PyObject *impl_urllib3$util$wait$$$function__4_wait_for_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_read = python_pars[1];
PyObject *par_write = python_pars[2];
PyObject *par_timeout = python_pars[3];
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait$$$function__4_wait_for_socket;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket = MAKE_FUNCTION_FRAME(tstate, code_objects_363f9c1a19633a888f7f5f03d7de9a2b, module_urllib3$util$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket->m_type_description == NULL);
frame_frame_urllib3$util$wait$$$function__4_wait_for_socket = cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait$$$function__4_wait_for_socket);
assert(Py_REFCNT(frame_frame_urllib3$util$wait$$$function__4_wait_for_socket) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$wait$_have_working_poll(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__have_working_poll);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_urllib3$util$wait$$$function__4_wait_for_socket->m_frame.f_lineno = 106;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 106;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_urllib3$util$wait$poll_wait_for_socket(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_poll_wait_for_socket);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_socket, tmp_assign_source_1);
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_urllib3$util$wait$select(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_select);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_urllib3$util$wait$select_wait_for_socket(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_select_wait_for_socket);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_socket, tmp_assign_source_2);
}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_urllib3$util$wait$wait_for_socket(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_for_socket);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sock);
tmp_args_element_value_1 = par_sock;
CHECK_OBJECT(par_read);
tmp_args_element_value_2 = par_read;
CHECK_OBJECT(par_write);
tmp_args_element_value_3 = par_write;
CHECK_OBJECT(par_timeout);
tmp_args_element_value_4 = par_timeout;
frame_frame_urllib3$util$wait$$$function__4_wait_for_socket->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__4_wait_for_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait$$$function__4_wait_for_socket->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__4_wait_for_socket, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$wait$$$function__4_wait_for_socket,
    type_description_1,
    par_sock,
    par_read,
    par_write,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$wait$$$function__4_wait_for_socket == cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket);
    cache_frame_frame_urllib3$util$wait$$$function__4_wait_for_socket = NULL;
}

assertFrameObject(frame_frame_urllib3$util$wait$$$function__4_wait_for_socket);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_write);
Py_DECREF(par_write);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_read);
Py_DECREF(par_read);
CHECK_OBJECT(par_write);
Py_DECREF(par_write);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function__5_wait_for_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_timeout = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait$$$function__5_wait_for_read;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read = MAKE_FUNCTION_FRAME(tstate, code_objects_9577b6e0c8e9f06c3cc3f676b841b739, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read->m_type_description == NULL);
frame_frame_urllib3$util$wait$$$function__5_wait_for_read = cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait$$$function__5_wait_for_read);
assert(Py_REFCNT(frame_frame_urllib3$util$wait$$$function__5_wait_for_read) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$wait$wait_for_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_for_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sock);
tmp_kw_call_arg_value_0_1 = par_sock;
tmp_kw_call_dict_value_0_1 = Py_True;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_1_1 = par_timeout;
frame_frame_urllib3$util$wait$$$function__5_wait_for_read->m_frame.f_lineno = 117;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_read_str_plain_timeout_tuple);
}

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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__5_wait_for_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait$$$function__5_wait_for_read->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__5_wait_for_read, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$wait$$$function__5_wait_for_read,
    type_description_1,
    par_sock,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$wait$$$function__5_wait_for_read == cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read);
    cache_frame_frame_urllib3$util$wait$$$function__5_wait_for_read = NULL;
}

assertFrameObject(frame_frame_urllib3$util$wait$$$function__5_wait_for_read);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$wait$$$function__6_wait_for_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_sock = python_pars[0];
PyObject *par_timeout = python_pars[1];
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait$$$function__6_wait_for_write;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write)) {
    Py_XDECREF(cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write = MAKE_FUNCTION_FRAME(tstate, code_objects_b2207dbf5ec31cfe1aa2d3d095976993, module_urllib3$util$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write->m_type_description == NULL);
frame_frame_urllib3$util$wait$$$function__6_wait_for_write = cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait$$$function__6_wait_for_write);
assert(Py_REFCNT(frame_frame_urllib3$util$wait$$$function__6_wait_for_write) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_urllib3$util$wait$wait_for_socket(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_for_socket);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_sock);
tmp_kw_call_arg_value_0_1 = par_sock;
tmp_kw_call_dict_value_0_1 = Py_True;
CHECK_OBJECT(par_timeout);
tmp_kw_call_dict_value_1_1 = par_timeout;
frame_frame_urllib3$util$wait$$$function__6_wait_for_write->m_frame.f_lineno = 124;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_write_str_plain_timeout_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait$$$function__6_wait_for_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait$$$function__6_wait_for_write->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait$$$function__6_wait_for_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_urllib3$util$wait$$$function__6_wait_for_write,
    type_description_1,
    par_sock,
    par_timeout
);


// Release cached frame if used for exception.
if (frame_frame_urllib3$util$wait$$$function__6_wait_for_write == cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write);
    cache_frame_frame_urllib3$util$wait$$$function__6_wait_for_write = NULL;
}

assertFrameObject(frame_frame_urllib3$util$wait$$$function__6_wait_for_write);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_sock);
Py_DECREF(par_sock);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__1_select_wait_for_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function__1_select_wait_for_socket,
        mod_consts.const_str_plain_select_wait_for_socket,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0f6db5c6528e8abedf2e39dc223868aa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$wait,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__2_poll_wait_for_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function__2_poll_wait_for_socket,
        mod_consts.const_str_plain_poll_wait_for_socket,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9672e6cdb76cb6fda6d382dbaf0ec301,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$wait,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll,
        mod_consts.const_str_plain_do_poll,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4b4230713465b3db317e462a98dc2e6,
#endif
        code_objects_6b61b150511047c302abb66421e55f2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$wait,
        NULL,
        closure,
        1
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__3__have_working_poll(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function__3__have_working_poll,
        mod_consts.const_str_plain__have_working_poll,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4a45f2df54bfa6482704556e39a8ca5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$wait,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__4_wait_for_socket(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function__4_wait_for_socket,
        mod_consts.const_str_plain_wait_for_socket,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_363f9c1a19633a888f7f5f03d7de9a2b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$wait,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__5_wait_for_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function__5_wait_for_read,
        mod_consts.const_str_plain_wait_for_read,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9577b6e0c8e9f06c3cc3f676b841b739,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$wait,
        mod_consts.const_str_digest_1dcb6343172673d8611eeb5f6284e6ec,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$wait$$$function__6_wait_for_write(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$wait$$$function__6_wait_for_write,
        mod_consts.const_str_plain_wait_for_write,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b2207dbf5ec31cfe1aa2d3d095976993,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_urllib3$util$wait,
        mod_consts.const_str_digest_66f9c8fba41fe2db2f8687b18b0dcc81,
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

static function_impl_code const function_table_urllib3$util$wait[] = {
impl_urllib3$util$wait$$$function__2_poll_wait_for_socket$$$function__1_do_poll,
impl_urllib3$util$wait$$$function__1_select_wait_for_socket,
impl_urllib3$util$wait$$$function__2_poll_wait_for_socket,
impl_urllib3$util$wait$$$function__3__have_working_poll,
impl_urllib3$util$wait$$$function__4_wait_for_socket,
impl_urllib3$util$wait$$$function__5_wait_for_read,
impl_urllib3$util$wait$$$function__6_wait_for_write,
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

    return Nuitka_Function_GetFunctionState(function, function_table_urllib3$util$wait);
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
        module_urllib3$util$wait,
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
        function_table_urllib3$util$wait,
        sizeof(function_table_urllib3$util$wait) / sizeof(function_impl_code)
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
static char const *module_full_name = "urllib3.util.wait";
#endif

// Internal entry point for module code.
PyObject *module_code_urllib3$util$wait(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("urllib3$util$wait");

    // Store the module for future use.
    module_urllib3$util$wait = module;

    moduledict_urllib3$util$wait = MODULE_DICT(module_urllib3$util$wait);

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
        PRINT_STRING("urllib3$util$wait: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("urllib3$util$wait: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("urllib3$util$wait: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.wait" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initurllib3$util$wait\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_urllib3$util$wait,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$wait);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_urllib3$util$wait);
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_urllib3$util$wait;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_urllib3$util$wait = MAKE_MODULE_FRAME(code_objects_f418116c49a36e131e5284b2a5338694, module_urllib3$util$wait);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_urllib3$util$wait);
assert(Py_REFCNT(frame_frame_urllib3$util$wait) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_urllib3$util$wait$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_urllib3$util$wait$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_select;
tmp_globals_arg_value_1 = (PyObject *)moduledict_urllib3$util$wait;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_urllib3$util$wait->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_socket;
tmp_globals_arg_value_2 = (PyObject *)moduledict_urllib3$util$wait;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_urllib3$util$wait->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_7);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_urllib3$util$wait, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_urllib3$util$wait->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_urllib3$util$wait, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_urllib3$util$wait);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_8;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_partial, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST2(tstate, mod_consts.const_str_plain_wait_for_read,mod_consts.const_str_plain_wait_for_write);
UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_false_false_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_10 = MAKE_FUNCTION_urllib3$util$wait$$$function__1_select_wait_for_socket(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_select_wait_for_socket, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_false_false_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_11 = MAKE_FUNCTION_urllib3$util$wait$$$function__2_poll_wait_for_socket(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_poll_wait_for_socket, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_12 = MAKE_FUNCTION_urllib3$util$wait$$$function__3__have_working_poll(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__have_working_poll, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_4;
tmp_defaults_3 = mod_consts.const_tuple_false_false_none_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_555b8a9c12d8c080aaf2552f9014dadd);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$wait$$$function__4_wait_for_socket(tstate, tmp_defaults_3, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_socket, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_5;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_14 = MAKE_FUNCTION_urllib3$util$wait$$$function__5_wait_for_read(tstate, tmp_defaults_4, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_read, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_6;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_ae1cc9d0f4d9353353216a0ba5d1af9d);
Py_INCREF(tmp_defaults_5);

tmp_assign_source_15 = MAKE_FUNCTION_urllib3$util$wait$$$function__6_wait_for_write(tstate, tmp_defaults_5, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_urllib3$util$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_write, tmp_assign_source_15);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("urllib3$util$wait", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "urllib3.util.wait" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_urllib3$util$wait);
    return module_urllib3$util$wait;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$wait, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("urllib3$util$wait", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
