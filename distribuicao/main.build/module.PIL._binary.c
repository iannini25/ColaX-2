/* Generated code for Python module 'PIL$_binary'
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



/* The "module_PIL$_binary" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_PIL$_binary;
PyDictObject *moduledict_PIL$_binary;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_int_pos_255;
PyObject *const_str_plain_unpack_from;
PyObject *const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
PyObject *const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d;
PyObject *const_str_digest_4c7efb018ed6263311cb5a77008a1217;
PyObject *const_str_digest_2a57870c4776e8ca8189ece077b52bb3;
PyObject *const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8;
PyObject *const_str_digest_1d4f63fe30261c9e210096c5538c61a0;
PyObject *const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
PyObject *const_str_digest_eefff47e82a97391ba089cd0d81d8cd5;
PyObject *const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
PyObject *const_str_digest_947aa4a812c9e6a5afd39446db46a3d5;
PyObject *const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4;
PyObject *const_str_digest_00298a51e01a0ca01b944fddf5260024;
PyObject *const_str_digest_8e5335fb02f73f9b285b14387631d654;
PyObject *const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
PyObject *const_str_plain_pack;
PyObject *const_str_digest_3125e7d24fa537df4087cc67c626b7e3;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_struct;
PyObject *const_tuple_str_plain_pack_str_plain_unpack_from_tuple;
PyObject *const_dict_c23756af1c1809e07afbaf8399d4bcc5;
PyObject *const_str_plain_i8;
PyObject *const_dict_264a69997b94f5114916b4a09dc2e0db;
PyObject *const_str_plain_o8;
PyObject *const_tuple_int_0_tuple;
PyObject *const_dict_321c50b4e3b8f8730eb11a86adce7847;
PyObject *const_str_plain_i16le;
PyObject *const_str_plain_si16le;
PyObject *const_str_plain_si16be;
PyObject *const_str_plain_i32le;
PyObject *const_str_plain_si32le;
PyObject *const_str_plain_si32be;
PyObject *const_str_plain_i16be;
PyObject *const_str_plain_i32be;
PyObject *const_str_plain_o16le;
PyObject *const_str_plain_o32le;
PyObject *const_str_plain_o16be;
PyObject *const_str_plain_o32be;
PyObject *const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2;
PyObject *const_str_digest_d7a767126ce8fdf55617407b24bcf832;
PyObject *const_tuple_str_plain_c_str_plain_o_tuple;
PyObject *const_tuple_str_plain_c_tuple;
PyObject *const_tuple_str_plain_i_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[46];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        NUITKA_MAY_BE_UNUSED int constants_loaded_count =
            loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("PIL._binary"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        if (constants_loaded_count != 46) {
            fprintf(stderr,
                    "Corrupt constants blob for %s: expected 46 values, got %d\n",
                    UN_TRANSLATE("PIL._binary"),
                    constants_loaded_count);
            fflush(stderr);
            abort();
        }

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpack_from", mod_consts.const_str_plain_unpack_from);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_unpack_from);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0", mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d", mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217", mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3", mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8", mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0", mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0", mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5", mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1", mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5", mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4", mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024", mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654", mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da", mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pack", mod_consts.const_str_plain_pack);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_pack);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3", mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_struct", mod_consts.const_str_plain_struct);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_struct);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple", mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5", mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i8", mod_consts.const_str_plain_i8);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_i8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db", mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_o8);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847", mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si16le", mod_consts.const_str_plain_si16le);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_si16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si16be", mod_consts.const_str_plain_si16be);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_si16be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32le", mod_consts.const_str_plain_i32le);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_i32le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si32le", mod_consts.const_str_plain_si32le);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_si32le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si32be", mod_consts.const_str_plain_si32be);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_si32be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16be", mod_consts.const_str_plain_i16be);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_i16be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32be", mod_consts.const_str_plain_i32be);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_i32be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16le", mod_consts.const_str_plain_o16le);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32le", mod_consts.const_str_plain_o32le);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_o32le);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16be", mod_consts.const_str_plain_o16be);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_o16be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32be", mod_consts.const_str_plain_o32be);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_o32be);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2", mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832", mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_c_str_plain_o_tuple", mod_consts.const_tuple_str_plain_c_str_plain_o_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_c_tuple", mod_consts.const_tuple_str_plain_c_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_tuple);
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i_tuple", mod_consts.const_tuple_str_plain_i_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_tuple);
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
void checkModuleConstants_PIL$_binary(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

CHECK_OBJECT_DEEP_NAMED("mod_consts.const_int_pos_255", mod_consts.const_int_pos_255);
assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_int_pos_255) && "mod_consts.const_int_pos_255");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_unpack_from", mod_consts.const_str_plain_unpack_from);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_unpack_from) && "mod_consts.const_str_plain_unpack_from");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0", mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0) && "mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d", mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d) && "mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217", mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217) && "mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3", mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3) && "mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8", mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8) && "mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0", mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0) && "mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0", mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0) && "mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5", mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5) && "mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1", mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1) && "mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5", mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5) && "mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4", mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4) && "mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024", mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024) && "mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654", mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654) && "mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da", mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da) && "mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_pack", mod_consts.const_str_plain_pack);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_pack) && "mod_consts.const_str_plain_pack");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3", mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3) && "mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_origin", mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin) && "mod_consts.const_str_plain_origin");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_has_location", mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location) && "mod_consts.const_str_plain_has_location");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_annotations", mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations) && "mod_consts.const_str_plain_annotations");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_struct", mod_consts.const_str_plain_struct);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_struct) && "mod_consts.const_str_plain_struct");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple", mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple) && "mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5", mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5) && "mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i8", mod_consts.const_str_plain_i8);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_i8) && "mod_consts.const_str_plain_i8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db", mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db) && "mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o8", mod_consts.const_str_plain_o8);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_o8) && "mod_consts.const_str_plain_o8");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_int_0_tuple", mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple) && "mod_consts.const_tuple_int_0_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847", mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847) && "mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16le", mod_consts.const_str_plain_i16le);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16le) && "mod_consts.const_str_plain_i16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si16le", mod_consts.const_str_plain_si16le);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_si16le) && "mod_consts.const_str_plain_si16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si16be", mod_consts.const_str_plain_si16be);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_si16be) && "mod_consts.const_str_plain_si16be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32le", mod_consts.const_str_plain_i32le);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_i32le) && "mod_consts.const_str_plain_i32le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si32le", mod_consts.const_str_plain_si32le);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_si32le) && "mod_consts.const_str_plain_si32le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_si32be", mod_consts.const_str_plain_si32be);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_si32be) && "mod_consts.const_str_plain_si32be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i16be", mod_consts.const_str_plain_i16be);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_i16be) && "mod_consts.const_str_plain_i16be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_i32be", mod_consts.const_str_plain_i32be);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_i32be) && "mod_consts.const_str_plain_i32be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16le", mod_consts.const_str_plain_o16le);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16le) && "mod_consts.const_str_plain_o16le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32le", mod_consts.const_str_plain_o32le);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_o32le) && "mod_consts.const_str_plain_o32le");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o16be", mod_consts.const_str_plain_o16be);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_o16be) && "mod_consts.const_str_plain_o16be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_plain_o32be", mod_consts.const_str_plain_o32be);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_o32be) && "mod_consts.const_str_plain_o32be");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2", mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2) && "mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832", mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832) && "mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_c_str_plain_o_tuple", mod_consts.const_tuple_str_plain_c_str_plain_o_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple) && "mod_consts.const_tuple_str_plain_c_str_plain_o_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_c_tuple", mod_consts.const_tuple_str_plain_c_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_c_tuple) && "mod_consts.const_tuple_str_plain_c_tuple");
CHECK_OBJECT_DEEP_NAMED("mod_consts.const_tuple_str_plain_i_tuple", mod_consts.const_tuple_str_plain_i_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_i_tuple) && "mod_consts.const_tuple_str_plain_i_tuple");
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_PIL$_binary$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$_binary->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$_binary->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$_binary->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$_binary$pack(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$_binary->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$_binary->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_pack);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$_binary->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pack);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pack, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pack);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pack, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_pack);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_pack);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pack);
    }

    return result;
}

static PyObject *module_var_accessor_PIL$_binary$unpack_from(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_PIL$_binary->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_PIL$_binary->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_unpack_from);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_PIL$_binary->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unpack_from);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unpack_from, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_unpack_from);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_unpack_from, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_unpack_from);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_unpack_from);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_unpack_from);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a71c8b500cc7578069f23e28e509883b;
static PyCodeObject *code_objects_bc6dfa1533fcdc4b660e90e74298ecb5;
static PyCodeObject *code_objects_0510290d6dfbf26fbee00d4d349c7bca;
static PyCodeObject *code_objects_cfb8f3910cf086f37e6f9dd194af5577;
static PyCodeObject *code_objects_add584bba379c2cb0247d5b37b54702b;
static PyCodeObject *code_objects_1ebd5b3938f8acd1dc1fb4b707115329;
static PyCodeObject *code_objects_07c320ef0d85d8bf218c4339bdc7deb7;
static PyCodeObject *code_objects_32bca1aa7e33aac884c82cb0e04baf03;
static PyCodeObject *code_objects_78daf437d752ee86570a84f5e42358d7;
static PyCodeObject *code_objects_69b4215d7b602c021fab4a5aeedecce1;
static PyCodeObject *code_objects_196fe529d8728e0a55f31d03eb81639e;
static PyCodeObject *code_objects_6738ef505545e9cc2f10faf4102cbc8c;
static PyCodeObject *code_objects_2171db6a1977648d48c44a1e24b9c8af;
static PyCodeObject *code_objects_6688ccf21dd06a8fbb8b4b41949e91c9;
static PyCodeObject *code_objects_95130457fe1cdf614117ccd0a6981727;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6cdaf21d36ed8b7a1038a242138d0df2); CHECK_OBJECT(module_filename_obj);
code_objects_a71c8b500cc7578069f23e28e509883b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832, mod_consts.const_str_digest_d7a767126ce8fdf55617407b24bcf832, NULL, NULL, 0, 0, 0);
code_objects_bc6dfa1533fcdc4b660e90e74298ecb5 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_i16be, mod_consts.const_str_plain_i16be, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
code_objects_0510290d6dfbf26fbee00d4d349c7bca = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_i16le, mod_consts.const_str_plain_i16le, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
code_objects_cfb8f3910cf086f37e6f9dd194af5577 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_i32be, mod_consts.const_str_plain_i32be, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
code_objects_add584bba379c2cb0247d5b37b54702b = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_i32le, mod_consts.const_str_plain_i32le, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
code_objects_1ebd5b3938f8acd1dc1fb4b707115329 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_i8, mod_consts.const_str_plain_i8, mod_consts.const_tuple_str_plain_c_tuple, NULL, 1, 0, 0);
code_objects_07c320ef0d85d8bf218c4339bdc7deb7 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_o16be, mod_consts.const_str_plain_o16be, mod_consts.const_tuple_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_32bca1aa7e33aac884c82cb0e04baf03 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_o16le, mod_consts.const_str_plain_o16le, mod_consts.const_tuple_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_78daf437d752ee86570a84f5e42358d7 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_o32be, mod_consts.const_str_plain_o32be, mod_consts.const_tuple_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_69b4215d7b602c021fab4a5aeedecce1 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_o32le, mod_consts.const_str_plain_o32le, mod_consts.const_tuple_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_196fe529d8728e0a55f31d03eb81639e = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_o8, mod_consts.const_str_plain_o8, mod_consts.const_tuple_str_plain_i_tuple, NULL, 1, 0, 0);
code_objects_6738ef505545e9cc2f10faf4102cbc8c = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_si16be, mod_consts.const_str_plain_si16be, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
code_objects_2171db6a1977648d48c44a1e24b9c8af = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_si16le, mod_consts.const_str_plain_si16le, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
code_objects_6688ccf21dd06a8fbb8b4b41949e91c9 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_si32be, mod_consts.const_str_plain_si32be, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
code_objects_95130457fe1cdf614117ccd0a6981727 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_si32le, mod_consts.const_str_plain_si32le, mod_consts.const_tuple_str_plain_c_str_plain_o_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__10_i32be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__11_o16le(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__12_o32le(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__13_o16be(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__14_o32be(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__1_i8(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__2_o8(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__3_i16le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__4_si16le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__5_si16be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__6_i32le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__7_si32le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__8_si32be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__9_i16be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_PIL$_binary$$$function__1_i8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__1_i8;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__1_i8 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__1_i8)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__1_i8);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__1_i8 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__1_i8 = MAKE_FUNCTION_FRAME(tstate, code_objects_1ebd5b3938f8acd1dc1fb4b707115329, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__1_i8->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__1_i8 = cache_frame_frame_PIL$_binary$$$function__1_i8;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__1_i8);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__1_i8) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_c);
tmp_expression_value_1 = par_c;
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__1_i8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__1_i8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__1_i8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__1_i8,
    type_description_1,
    par_c
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__1_i8 == cache_frame_frame_PIL$_binary$$$function__1_i8) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__1_i8);
    cache_frame_frame_PIL$_binary$$$function__1_i8 = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__1_i8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__2_o8(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_i = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__2_o8;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__2_o8 = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__2_o8)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__2_o8);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__2_o8 == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__2_o8 = MAKE_FUNCTION_FRAME(tstate, code_objects_196fe529d8728e0a55f31d03eb81639e, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__2_o8->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__2_o8 = cache_frame_frame_PIL$_binary$$$function__2_o8;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__2_o8);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__2_o8) == 2);

// Framed code:
{
PyObject *tmp_bytes_arg_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(par_i);
tmp_bitand_expr_left_1 = par_i;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_255;
tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_bytes_arg_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_bytes_arg_1, 0, tmp_tuple_element_1);
tmp_return_value = BUILTIN_BYTES1(tstate, tmp_bytes_arg_1);
CHECK_OBJECT(tmp_bytes_arg_1);
Py_DECREF(tmp_bytes_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__2_o8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__2_o8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__2_o8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__2_o8,
    type_description_1,
    par_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__2_o8 == cache_frame_frame_PIL$_binary$$$function__2_o8) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__2_o8);
    cache_frame_frame_PIL$_binary$$$function__2_o8 = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__2_o8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_i);
Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__3_i16le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__3_i16le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__3_i16le = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__3_i16le)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__3_i16le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__3_i16le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__3_i16le = MAKE_FUNCTION_FRAME(tstate, code_objects_0510290d6dfbf26fbee00d4d349c7bca, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__3_i16le->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__3_i16le = cache_frame_frame_PIL$_binary$$$function__3_i16le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__3_i16le);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__3_i16le) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__3_i16le->m_frame.f_lineno = 38;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__3_i16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__3_i16le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__3_i16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__3_i16le,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__3_i16le == cache_frame_frame_PIL$_binary$$$function__3_i16le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__3_i16le);
    cache_frame_frame_PIL$_binary$$$function__3_i16le = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__3_i16le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__4_si16le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__4_si16le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__4_si16le = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__4_si16le)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__4_si16le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__4_si16le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__4_si16le = MAKE_FUNCTION_FRAME(tstate, code_objects_2171db6a1977648d48c44a1e24b9c8af, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__4_si16le->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__4_si16le = cache_frame_frame_PIL$_binary$$$function__4_si16le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__4_si16le);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__4_si16le) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_4c7efb018ed6263311cb5a77008a1217;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__4_si16le->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__4_si16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__4_si16le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__4_si16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__4_si16le,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__4_si16le == cache_frame_frame_PIL$_binary$$$function__4_si16le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__4_si16le);
    cache_frame_frame_PIL$_binary$$$function__4_si16le = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__4_si16le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__5_si16be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__5_si16be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__5_si16be = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__5_si16be)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__5_si16be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__5_si16be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__5_si16be = MAKE_FUNCTION_FRAME(tstate, code_objects_6738ef505545e9cc2f10faf4102cbc8c, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__5_si16be->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__5_si16be = cache_frame_frame_PIL$_binary$$$function__5_si16be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__5_si16be);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__5_si16be) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_5e9ecf38a93f0bb11f154c7bb82e64a8;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__5_si16be->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__5_si16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__5_si16be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__5_si16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__5_si16be,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__5_si16be == cache_frame_frame_PIL$_binary$$$function__5_si16be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__5_si16be);
    cache_frame_frame_PIL$_binary$$$function__5_si16be = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__5_si16be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__6_i32le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__6_i32le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__6_i32le = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__6_i32le)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__6_i32le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__6_i32le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__6_i32le = MAKE_FUNCTION_FRAME(tstate, code_objects_add584bba379c2cb0247d5b37b54702b, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__6_i32le->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__6_i32le = cache_frame_frame_PIL$_binary$$$function__6_i32le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__6_i32le);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__6_i32le) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__6_i32le->m_frame.f_lineno = 68;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__6_i32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__6_i32le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__6_i32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__6_i32le,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__6_i32le == cache_frame_frame_PIL$_binary$$$function__6_i32le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__6_i32le);
    cache_frame_frame_PIL$_binary$$$function__6_i32le = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__6_i32le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__7_si32le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__7_si32le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__7_si32le = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__7_si32le)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__7_si32le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__7_si32le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__7_si32le = MAKE_FUNCTION_FRAME(tstate, code_objects_95130457fe1cdf614117ccd0a6981727, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__7_si32le->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__7_si32le = cache_frame_frame_PIL$_binary$$$function__7_si32le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__7_si32le);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__7_si32le) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_c6ccceacb61480b9230ce3733fbc80d1;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__7_si32le->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__7_si32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__7_si32le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__7_si32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__7_si32le,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__7_si32le == cache_frame_frame_PIL$_binary$$$function__7_si32le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__7_si32le);
    cache_frame_frame_PIL$_binary$$$function__7_si32le = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__7_si32le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__8_si32be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__8_si32be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__8_si32be = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__8_si32be)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__8_si32be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__8_si32be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__8_si32be = MAKE_FUNCTION_FRAME(tstate, code_objects_6688ccf21dd06a8fbb8b4b41949e91c9, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__8_si32be->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__8_si32be = cache_frame_frame_PIL$_binary$$$function__8_si32be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__8_si32be);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__8_si32be) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_b7eb2f47cfc71bc8efa8c02598ce0bc4;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__8_si32be->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__8_si32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__8_si32be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__8_si32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__8_si32be,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__8_si32be == cache_frame_frame_PIL$_binary$$$function__8_si32be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__8_si32be);
    cache_frame_frame_PIL$_binary$$$function__8_si32be = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__8_si32be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__9_i16be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__9_i16be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__9_i16be = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__9_i16be)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__9_i16be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__9_i16be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__9_i16be = MAKE_FUNCTION_FRAME(tstate, code_objects_bc6dfa1533fcdc4b660e90e74298ecb5, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__9_i16be->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__9_i16be = cache_frame_frame_PIL$_binary$$$function__9_i16be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__9_i16be);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__9_i16be) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__9_i16be->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__9_i16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__9_i16be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__9_i16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__9_i16be,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__9_i16be == cache_frame_frame_PIL$_binary$$$function__9_i16be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__9_i16be);
    cache_frame_frame_PIL$_binary$$$function__9_i16be = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__9_i16be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__10_i32be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_c = python_pars[0];
PyObject *par_o = python_pars[1];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__10_i32be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__10_i32be = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__10_i32be)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__10_i32be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__10_i32be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__10_i32be = MAKE_FUNCTION_FRAME(tstate, code_objects_cfb8f3910cf086f37e6f9dd194af5577, module_PIL$_binary, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__10_i32be->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__10_i32be = cache_frame_frame_PIL$_binary$$$function__10_i32be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__10_i32be);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__10_i32be) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_subscript_value_1;
tmp_called_value_1 = module_var_accessor_PIL$_binary$unpack_from(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unpack_from);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
CHECK_OBJECT(par_c);
tmp_args_element_value_2 = par_c;
CHECK_OBJECT(par_o);
tmp_args_element_value_3 = par_o;
frame_frame_PIL$_binary$$$function__10_i32be->m_frame.f_lineno = 96;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__10_i32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__10_i32be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__10_i32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__10_i32be,
    type_description_1,
    par_c,
    par_o
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__10_i32be == cache_frame_frame_PIL$_binary$$$function__10_i32be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__10_i32be);
    cache_frame_frame_PIL$_binary$$$function__10_i32be = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__10_i32be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_c);
Py_DECREF(par_c);
CHECK_OBJECT(par_o);
Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__11_o16le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_i = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__11_o16le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__11_o16le = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__11_o16le)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__11_o16le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__11_o16le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__11_o16le = MAKE_FUNCTION_FRAME(tstate, code_objects_32bca1aa7e33aac884c82cb0e04baf03, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__11_o16le->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__11_o16le = cache_frame_frame_PIL$_binary$$$function__11_o16le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__11_o16le);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__11_o16le) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$_binary$pack(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pack);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_969c69e9fbc42cc6a8915b0b5d93fbb0;
CHECK_OBJECT(par_i);
tmp_args_element_value_2 = par_i;
frame_frame_PIL$_binary$$$function__11_o16le->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__11_o16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__11_o16le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__11_o16le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__11_o16le,
    type_description_1,
    par_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__11_o16le == cache_frame_frame_PIL$_binary$$$function__11_o16le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__11_o16le);
    cache_frame_frame_PIL$_binary$$$function__11_o16le = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__11_o16le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_i);
Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__12_o32le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_i = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__12_o32le;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__12_o32le = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__12_o32le)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__12_o32le);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__12_o32le == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__12_o32le = MAKE_FUNCTION_FRAME(tstate, code_objects_69b4215d7b602c021fab4a5aeedecce1, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__12_o32le->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__12_o32le = cache_frame_frame_PIL$_binary$$$function__12_o32le;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__12_o32le);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__12_o32le) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$_binary$pack(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pack);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_54608bc3db8b8899ddc5dce8e06f85a0;
CHECK_OBJECT(par_i);
tmp_args_element_value_2 = par_i;
frame_frame_PIL$_binary$$$function__12_o32le->m_frame.f_lineno = 105;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__12_o32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__12_o32le->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__12_o32le, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__12_o32le,
    type_description_1,
    par_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__12_o32le == cache_frame_frame_PIL$_binary$$$function__12_o32le) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__12_o32le);
    cache_frame_frame_PIL$_binary$$$function__12_o32le = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__12_o32le);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_i);
Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__13_o16be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_i = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__13_o16be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__13_o16be = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__13_o16be)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__13_o16be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__13_o16be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__13_o16be = MAKE_FUNCTION_FRAME(tstate, code_objects_07c320ef0d85d8bf218c4339bdc7deb7, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__13_o16be->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__13_o16be = cache_frame_frame_PIL$_binary$$$function__13_o16be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__13_o16be);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__13_o16be) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$_binary$pack(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pack);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_8e5335fb02f73f9b285b14387631d654;
CHECK_OBJECT(par_i);
tmp_args_element_value_2 = par_i;
frame_frame_PIL$_binary$$$function__13_o16be->m_frame.f_lineno = 109;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__13_o16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__13_o16be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__13_o16be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__13_o16be,
    type_description_1,
    par_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__13_o16be == cache_frame_frame_PIL$_binary$$$function__13_o16be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__13_o16be);
    cache_frame_frame_PIL$_binary$$$function__13_o16be = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__13_o16be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_i);
Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_PIL$_binary$$$function__14_o32be(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_i = python_pars[0];
struct Nuitka_FrameObject *frame_frame_PIL$_binary$$$function__14_o32be;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_PIL$_binary$$$function__14_o32be = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_PIL$_binary$$$function__14_o32be)) {
    Py_XDECREF(cache_frame_frame_PIL$_binary$$$function__14_o32be);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_PIL$_binary$$$function__14_o32be == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_PIL$_binary$$$function__14_o32be = MAKE_FUNCTION_FRAME(tstate, code_objects_78daf437d752ee86570a84f5e42358d7, module_PIL$_binary, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_PIL$_binary$$$function__14_o32be->m_type_description == NULL);
frame_frame_PIL$_binary$$$function__14_o32be = cache_frame_frame_PIL$_binary$$$function__14_o32be;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary$$$function__14_o32be);
assert(Py_REFCNT(frame_frame_PIL$_binary$$$function__14_o32be) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_PIL$_binary$pack(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pack);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
CHECK_OBJECT(par_i);
tmp_args_element_value_2 = par_i;
frame_frame_PIL$_binary$$$function__14_o32be->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary$$$function__14_o32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary$$$function__14_o32be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary$$$function__14_o32be, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_PIL$_binary$$$function__14_o32be,
    type_description_1,
    par_i
);


// Release cached frame if used for exception.
if (frame_frame_PIL$_binary$$$function__14_o32be == cache_frame_frame_PIL$_binary$$$function__14_o32be) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_PIL$_binary$$$function__14_o32be);
    cache_frame_frame_PIL$_binary$$$function__14_o32be = NULL;
}

assertFrameObject(frame_frame_PIL$_binary$$$function__14_o32be);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_i);
Py_DECREF(par_i);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_i);
Py_DECREF(par_i);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__10_i32be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__10_i32be,
        mod_consts.const_str_plain_i32be,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cfb8f3910cf086f37e6f9dd194af5577,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__11_o16le(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__11_o16le,
        mod_consts.const_str_plain_o16le,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_32bca1aa7e33aac884c82cb0e04baf03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__12_o32le(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__12_o32le,
        mod_consts.const_str_plain_o32le,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_69b4215d7b602c021fab4a5aeedecce1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__13_o16be(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__13_o16be,
        mod_consts.const_str_plain_o16be,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_07c320ef0d85d8bf218c4339bdc7deb7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__14_o32be(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__14_o32be,
        mod_consts.const_str_plain_o32be,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_78daf437d752ee86570a84f5e42358d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__1_i8(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__1_i8,
        mod_consts.const_str_plain_i8,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1ebd5b3938f8acd1dc1fb4b707115329,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__2_o8(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__2_o8,
        mod_consts.const_str_plain_o8,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_196fe529d8728e0a55f31d03eb81639e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        NULL,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__3_i16le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__3_i16le,
        mod_consts.const_str_plain_i16le,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0510290d6dfbf26fbee00d4d349c7bca,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        mod_consts.const_str_digest_2a2cc80ede8b5faf163f5eb863a1126d,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__4_si16le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__4_si16le,
        mod_consts.const_str_plain_si16le,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2171db6a1977648d48c44a1e24b9c8af,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        mod_consts.const_str_digest_2a57870c4776e8ca8189ece077b52bb3,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__5_si16be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__5_si16be,
        mod_consts.const_str_plain_si16be,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6738ef505545e9cc2f10faf4102cbc8c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        mod_consts.const_str_digest_1d4f63fe30261c9e210096c5538c61a0,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__6_i32le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__6_i32le,
        mod_consts.const_str_plain_i32le,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_add584bba379c2cb0247d5b37b54702b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        mod_consts.const_str_digest_eefff47e82a97391ba089cd0d81d8cd5,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__7_si32le(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__7_si32le,
        mod_consts.const_str_plain_si32le,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_95130457fe1cdf614117ccd0a6981727,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        mod_consts.const_str_digest_947aa4a812c9e6a5afd39446db46a3d5,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__8_si32be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__8_si32be,
        mod_consts.const_str_plain_si32be,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6688ccf21dd06a8fbb8b4b41949e91c9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
        mod_consts.const_str_digest_00298a51e01a0ca01b944fddf5260024,
        NULL,
        0
#if PYTHON_VERSION >= 0x300
        , NULL
#endif
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_PIL$_binary$$$function__9_i16be(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_PIL$_binary$$$function__9_i16be,
        mod_consts.const_str_plain_i16be,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_bc6dfa1533fcdc4b660e90e74298ecb5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_PIL$_binary,
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

static function_impl_code const function_table_PIL$_binary[] = {
impl_PIL$_binary$$$function__1_i8,
impl_PIL$_binary$$$function__2_o8,
impl_PIL$_binary$$$function__3_i16le,
impl_PIL$_binary$$$function__4_si16le,
impl_PIL$_binary$$$function__5_si16be,
impl_PIL$_binary$$$function__6_i32le,
impl_PIL$_binary$$$function__7_si32le,
impl_PIL$_binary$$$function__8_si32be,
impl_PIL$_binary$$$function__9_i16be,
impl_PIL$_binary$$$function__10_i32be,
impl_PIL$_binary$$$function__11_o16le,
impl_PIL$_binary$$$function__12_o32le,
impl_PIL$_binary$$$function__13_o16be,
impl_PIL$_binary$$$function__14_o32be,
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

    return Nuitka_Function_GetFunctionState(function, function_table_PIL$_binary);
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
        module_PIL$_binary,
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
        function_table_PIL$_binary,
        sizeof(function_table_PIL$_binary) / sizeof(function_impl_code)
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
static char const *module_full_name = "PIL._binary";
#endif

// Internal entry point for module code.
PyObject *module_code_PIL$_binary(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("PIL$_binary");

    // Store the module for future use.
    module_PIL$_binary = module;

    moduledict_PIL$_binary = MODULE_DICT(module_PIL$_binary);

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
        PRINT_STRING("PIL$_binary: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("PIL$_binary: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("PIL$_binary: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL._binary" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initPIL$_binary\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);
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
        moduledict_PIL$_binary,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );
#endif

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_PIL$_binary,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_PIL$_binary,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_PIL$_binary);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_PIL$_binary);
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

        UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_PIL$_binary;
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
tmp_assign_source_1 = mod_consts.const_str_digest_3125e7d24fa537df4087cc67c626b7e3;
UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_PIL$_binary = MAKE_MODULE_FRAME(code_objects_a71c8b500cc7578069f23e28e509883b, module_PIL$_binary);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_PIL$_binary);
assert(Py_REFCNT(frame_frame_PIL$_binary) == 2);

// Framed code:
{
PyObject *tmp_ass_attr_value_1;
PyObject *tmp_ass_attr_target_1;
tmp_ass_attr_value_1 = module_filename_obj;
tmp_ass_attr_target_1 = module_var_accessor_PIL$_binary$__spec__(tstate);
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
tmp_ass_attr_target_2 = module_var_accessor_PIL$_binary$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Nuitka_dunder_compiled_value;
UPDATE_STRING_DICT0(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___compiled__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_struct;
tmp_globals_arg_value_1 = (PyObject *)moduledict_PIL$_binary;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_pack_str_plain_unpack_from_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_PIL$_binary->m_frame.f_lineno = 19;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_PIL$_binary,
        mod_consts.const_str_plain_pack,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_pack);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_pack, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_PIL$_binary,
        mod_consts.const_str_plain_unpack_from,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_unpack_from);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_unpack_from, tmp_assign_source_8);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_PIL$_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_PIL$_binary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_PIL$_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_PIL$_binary);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c23756af1c1809e07afbaf8399d4bcc5);

tmp_assign_source_9 = MAKE_FUNCTION_PIL$_binary$$$function__1_i8(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_i8, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);

tmp_assign_source_10 = MAKE_FUNCTION_PIL$_binary$$$function__2_o8(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_o8, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
tmp_defaults_1 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_11 = MAKE_FUNCTION_PIL$_binary$$$function__3_i16le(tstate, tmp_defaults_1, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_i16le, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_4;
tmp_defaults_2 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_12 = MAKE_FUNCTION_PIL$_binary$$$function__4_si16le(tstate, tmp_defaults_2, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_si16le, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_5;
tmp_defaults_3 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_13 = MAKE_FUNCTION_PIL$_binary$$$function__5_si16be(tstate, tmp_defaults_3, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_si16be, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_6;
tmp_defaults_4 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_14 = MAKE_FUNCTION_PIL$_binary$$$function__6_i32le(tstate, tmp_defaults_4, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_i32le, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_7;
tmp_defaults_5 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_5);

tmp_assign_source_15 = MAKE_FUNCTION_PIL$_binary$$$function__7_si32le(tstate, tmp_defaults_5, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_si32le, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_8;
tmp_defaults_6 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_6);

tmp_assign_source_16 = MAKE_FUNCTION_PIL$_binary$$$function__8_si32be(tstate, tmp_defaults_6, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_si32be, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_7;
PyObject *tmp_annotations_9;
tmp_defaults_7 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_7);

tmp_assign_source_17 = MAKE_FUNCTION_PIL$_binary$$$function__9_i16be(tstate, tmp_defaults_7, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_i16be, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_10;
tmp_defaults_8 = mod_consts.const_tuple_int_0_tuple;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_321c50b4e3b8f8730eb11a86adce7847);
Py_INCREF(tmp_defaults_8);

tmp_assign_source_18 = MAKE_FUNCTION_PIL$_binary$$$function__10_i32be(tstate, tmp_defaults_8, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_i32be, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);

tmp_assign_source_19 = MAKE_FUNCTION_PIL$_binary$$$function__11_o16le(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_o16le, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);

tmp_assign_source_20 = MAKE_FUNCTION_PIL$_binary$$$function__12_o32le(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_o32le, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);

tmp_assign_source_21 = MAKE_FUNCTION_PIL$_binary$$$function__13_o16be(tstate, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_o16be, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_264a69997b94f5114916b4a09dc2e0db);

tmp_assign_source_22 = MAKE_FUNCTION_PIL$_binary$$$function__14_o32be(tstate, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_PIL$_binary, (Nuitka_StringObject *)mod_consts.const_str_plain_o32be, tmp_assign_source_22);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("PIL$_binary", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "PIL._binary" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_PIL$_binary);
    return module_PIL$_binary;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_PIL$_binary, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("PIL$_binary", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
